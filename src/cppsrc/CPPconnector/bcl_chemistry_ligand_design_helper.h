// (c) Copyright BCL @ Vanderbilt University 2014
// (c) BCL Homepage: http://www.meilerlab.org/bclcommons
// (c) The BCL software is developed by the contributing members of the BCL @ Vanderbilt University
// (c) This file is part of the BCL software suite and is made available under license.
// (c) To view or modify this file, you must enter into one of the following agreements if you have not done so already:
// (c) For academic and non-profit users:
// (c)   the BCL Academic Single-User License, available at http://www.meilerlab.org/bclcommons/license
// (c) For commercial users:
// (c)   The BCL Commercial Site License, available upon request from bcl-support-commercial@meilerlab.org
// (c) For BCL developers at Vanderbilt University:
// (c)   The BCL Developer Agreement, available at http://www.meilerlab.org/bclcommons/developer_agreement
// (c)
// (c)   As part of all such agreements, this copyright notice must appear, verbatim and without addition, at the
// (c) top of all source files of the BCL project and may not be modified by any party except the BCL developers at
// (c) Vanderbilt University.
// (c)   The BCL copyright and license yields to non-BCL copyrights and licenses where indicated by code comments.
// (c)   Questions about this copyright notice or license agreement may be emailed to bcl-support-academic@meilerlab.org
// (c) (for academic users) or bcl-support-commercial@meilerlab.org (for commercial users)

#ifndef BCL_CHEMISTRY_LIGAND_DESIGN_HELPER_H_
#define BCL_CHEMISTRY_LIGAND_DESIGN_HELPER_H_

// include the namespace header
#include "bcl_defines.h"

// include other forward headers - sorted alphabetically

// includes from bcl - sorted alphabetically
#include <string>

namespace bcl
{
  namespace chemistry
  {
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //!
    //! @class LigandDesignHelper
    //! @brief Functionality needed by the (java-based) BCL::LigandDesign tool
    //!
    //! @see @link example_chemistry_ligand_design_helper.cpp @endlink
    //! @author mendenjl
    //! @date Mar 02, 2015
    //!
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class BCL_API LigandDesignHelper
    {
    public:

      //! @brief get the comma separated conformation-independent properties
      //! @return the comma-seperated conformation-independent properties
      static const std::string &GetAvailableProperties();

      //! @brief get the comma separated predictions list
      //! @note prediction is defined here as anything that requires a conformation
      //! @return the comma-seperated predictions list
      static const std::string &GetAvailablePredictions();

      //! @brief set the directory of the jar file. This is used to locate the bcl-related files
      //! @param JAR_FILE_DIRECTORY the directory containing the jar file; should also contain a bcl folder
      static void SetJarDirectory( const std::string &JAR_FILE_DIR);

      //! @brief calculate conformation-independent properties.
      //! @param MOLECULE molecule of interest, encoded as a string in SDF format
      //! @param DESCRIPTORS descriptors (comma seperated) to calculate for the molecule
      //! @return DESCRIPTORS given as values in a comma separated list.
      //!         Elements in vector-valued descriptors separated by spaces
      //!         Note that if the atom types are undefined, returns empty string
      static std::string CalculateProperties
      (
        const std::string &MOLECULE,
        const std::string &PROPERTIES
      );

      //! @brief processes the molecule; producing a 3d-conformation,
      //! @param MOLECULE molecule of interest, encoded as a string in SDF format
      //! @param DESCRIPTORS descriptors (comma seperated) to calculate for the molecule
      //! @return molecule in sdf formation with 3D conformation and DESCRIPTORS as misc properties
      //!         Note that if the atom types are undefined, an empty string is returned
      static std::string ProcessMolecule
      (
        const std::string &MOLECULE,
        const std::string &DESCRIPTORS
      );
    };
  } // namespace chemistry
} // namespace bcl

#endif // BCL_CHEMISTRY_LIGAND_DESIGN_HELPER_H_

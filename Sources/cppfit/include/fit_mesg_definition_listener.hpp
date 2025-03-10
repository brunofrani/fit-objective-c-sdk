/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2023 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.115Release
// Tag = production/release/21.115.00-0-gfe0a7f8
/////////////////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_MESG_DEFINITION_LISTENER_HPP)
#define FIT_MESG_DEFINITION_LISTENER_HPP

#include "fit_mesg_definition.hpp"

namespace fit
{

class MesgDefinitionListener
{
public:
    virtual ~MesgDefinitionListener() {}
    virtual void OnMesgDefinition(MesgDefinition& mesgDef) = 0;
};

} // namespace fit

#endif // !defined(FIT_MESG_DEFINITION_LISTENER_HPP)

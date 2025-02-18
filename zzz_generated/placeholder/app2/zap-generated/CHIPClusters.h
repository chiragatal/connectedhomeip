/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

// Prevent multiple inclusion
#pragma once

#include <app-common/zap-generated/ids/Clusters.h>
#include <app-common/zap-generated/ids/Commands.h>

#include <controller/CHIPCluster.h>
#include <lib/core/CHIPCallback.h>
#include <lib/support/Span.h>

namespace chip {
namespace Controller {

class DLL_EXPORT OperationalCredentialsCluster : public ClusterBase
{
public:
    OperationalCredentialsCluster() : ClusterBase(app::Clusters::OperationalCredentials::Id) {}
    ~OperationalCredentialsCluster() {}

    // Cluster Commands
    CHIP_ERROR AddNOC(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, chip::ByteSpan NOCValue,
                      chip::ByteSpan ICACValue, chip::ByteSpan IPKValue, chip::NodeId caseAdminNode, uint16_t adminVendorId);
    CHIP_ERROR AddTrustedRootCertificate(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                         chip::ByteSpan rootCertificate);
    CHIP_ERROR AttestationRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                  chip::ByteSpan attestationNonce);
    CHIP_ERROR CertificateChainRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                       uint8_t certificateType);
    CHIP_ERROR OpCSRRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                            chip::ByteSpan CSRNonce);
    CHIP_ERROR RemoveFabric(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                            uint8_t fabricIndex);
    CHIP_ERROR RemoveTrustedRootCertificate(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                            chip::ByteSpan trustedRootIdentifier);
    CHIP_ERROR UpdateFabricLabel(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                 chip::CharSpan label);
    CHIP_ERROR UpdateNOC(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                         chip::ByteSpan NOCValue, chip::ByteSpan ICACValue);
};

class DLL_EXPORT TemperatureMeasurementCluster : public ClusterBase
{
public:
    TemperatureMeasurementCluster() : ClusterBase(app::Clusters::TemperatureMeasurement::Id) {}
    ~TemperatureMeasurementCluster() {}
};

} // namespace Controller
} // namespace chip

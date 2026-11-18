// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommonEngineUtils
// Functions: 5

// DereferenceIfNecessary<UE::Online::FSessionsLAN,UE::Online::FSessionsLAN_*_&> @ 14f003e00

FSessionsLAN * __cdecl
UE::Core::Private::DereferenceIfNecessary<UE::Online::FSessionsLAN,UE::Online::FSessionsLAN_*_&>
          (FSessionsLAN **param_1)

{
  return *param_1;
}

// GetPortFromNetDriver @ 14f007d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl UE::Online::GetPortFromNetDriver(FName param_1)

{
  int iVar1;
  longlong lVar2;
  FName FVar3;
  UEngine *this;
  FNameEntryId FVar4;
  ENetMode EVar5;
  int iVar6;
  int iVar7;
  UClass *pUVar8;
  UWorld *pUVar9;
  undefined4 extraout_var;
  UNetDriver *this_00;
  ForAnyElementType FVar10;
  int iVar11;
  uint local_res10 [2];
  FString local_28;
  FString local_18;
  
  this = GEngine;
  iVar11 = 0;
  iVar6 = 0;
  iVar7 = iVar11;
  if (GEngine != (UEngine *)0x0) {
    pUVar8 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar2 = this->_padding_;
    iVar1 = (int)pUVar8->_padding_;
    iVar7 = iVar6;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      pUVar9 = UGameEngine::GetGameWorld((UGameEngine *)this);
      if (pUVar9 != (UWorld *)0x0) {
        FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
        local_res10[0] = *(uint *)CONCAT44(extraout_var,FVar4.Value);
        local_res10[1] = 0;
        FVar3.Number = 0;
        FVar3.ComparisonIndex.Value = local_res10[0];
        this_00 = UEngine::FindNamedNetDriver(GEngine,pUVar9,FVar3);
        if (this_00 != (UNetDriver *)0x0) {
          EVar5 = UNetDriver::GetNetMode(this_00);
          if ((int)EVar5 < 3) {
            (**(code **)(this_00->_padding_ + 0x330))(this_00,&local_18);
            ::FString::FString(&local_28,":");
            iVar7 = local_28.Data.ArrayNum + -1;
            if (local_28.Data.ArrayNum == 0) {
              iVar7 = 0;
            }
            FVar10.Data = (FScriptContainerElement *)L"";
            if (local_28.Data.ArrayNum != 0) {
              FVar10.Data = local_28.Data.AllocatorInstance.Data;
            }
            iVar6 = ::FString::Find(&local_18,(wchar_t *)FVar10.Data,iVar7,IgnoreCase,FromEnd,-1);
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
            iVar7 = iVar11;
            if (iVar6 != -1) {
              ::FString::RightChop(&local_18,&local_28,iVar6 + 1);
              if (1 < local_28.Data.ArrayNum) {
                FVar10.Data = (FScriptContainerElement *)L"";
                if (local_28.Data.ArrayNum != 0) {
                  FVar10.Data = local_28.Data.AllocatorInstance.Data;
                }
                iVar7 = _wtoi((wchar_t *)FVar10.Data);
              }
              if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_28.Data.AllocatorInstance.Data);
              }
            }
            if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
  }
  return iVar7;
}

// GetWorldForOnline @ 14f007f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __cdecl UE::Online::GetWorldForOnline(FName param_1)

{
  int iVar1;
  longlong lVar2;
  UEngine *this;
  UClass *pUVar3;
  UWorld *pUVar4;
  
  this = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar3 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar2 = this->_padding_;
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pUVar4 = UGameEngine::GetGameWorld((UGameEngine *)this);
      return pUVar4;
    }
  }
  return (UWorld *)0x0;
}

// SerializeFromBuffer @ 14f009fe0

void __cdecl
UE::Online::NboSerializerLANSvc::SerializeFromBuffer
          (FNboSerializeFromBuffer *param_1,FSessionLAN *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  NboSerializerCommonSvc::SerializeFromBuffer(param_1,(FSessionCommon *)param_2);
  if ((param_2->OwnerInternetAddr).Object == (FInternetAddr *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::operator>>(param_1,(param_2->OwnerInternetAddr).Object);
  return;
}

// SerializeToBuffer @ 14f00a050

void __cdecl
UE::Online::NboSerializerLANSvc::SerializeToBuffer
          (FNboSerializeToBuffer *param_1,FSessionLAN *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  NboSerializerCommonSvc::SerializeToBuffer(param_1,(FSessionCommon *)param_2);
  if ((param_2->OwnerInternetAddr).Object == (FInternetAddr *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::operator<<(param_1,(param_2->OwnerInternetAddr).Object);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// FOptimusSceneDataProviderProxy @ 14e1566c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FOptimusSceneDataProviderProxy * __thiscall
FOptimusSceneDataProviderProxy::FOptimusSceneDataProviderProxy
          (FOptimusSceneDataProviderProxy *this,USceneComponent *param_1)

{
  uint uVar1;
  UWorld *pUVar2;
  FSceneInterface *pFVar3;
  
  this->_padding_ = (longlong)&___7FOptimusSceneDataProviderProxy__6B_;
  this->bIsValid = param_1 != (USceneComponent *)0x0;
  if (param_1 != (USceneComponent *)0x0) {
    pUVar2 = (UWorld *)param_1->_padding_;
    if (pUVar2 == (UWorld *)0x0) {
      pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    }
    this->GameTime = (float)pUVar2->TimeSeconds;
    pUVar2 = (UWorld *)param_1->_padding_;
    if (pUVar2 == (UWorld *)0x0) {
      pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    }
    this->GameTimeDelta = pUVar2->DeltaTimeSeconds;
    pFVar3 = UActorComponent::GetScene((UActorComponent *)param_1);
    uVar1 = (**(code **)(pFVar3->_padding_ + 0x4e8))(pFVar3);
    this->FrameNumber = uVar1;
    return this;
  }
  this->GameTime = 0.0;
  this->GameTimeDelta = 0.0;
  this->FrameNumber = 0;
  return this;
}

// GatherDispatchData @ 14e1b48c0

void __thiscall
FOptimusSceneDataProviderProxy::GatherDispatchData
          (FOptimusSceneDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  
  iVar1 = param_1->ParameterBufferOffset;
  puVar4 = param_1->ParameterBuffer;
  iVar2 = param_1->NumInvocations;
  iVar3 = param_1->ParameterBufferStride;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((iVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((longlong)iVar3 & 0xfU) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = 0;
  if (0 < iVar2) {
    puVar8 = (uint *)(puVar4 + (longlong)iVar1 + 8);
    do {
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = iVar7 + 1;
      puVar8[-2] = (uint)this->GameTime;
      puVar8[-1] = (uint)this->GameTimeDelta;
      *puVar8 = this->FrameNumber;
      puVar8 = (uint *)((longlong)puVar8 + (longlong)iVar3);
    } while (iVar7 < iVar2);
  }
  return;
}

// IsValid @ 14e1f0920

bool __thiscall
FOptimusSceneDataProviderProxy::IsValid
          (FOptimusSceneDataProviderProxy *this,FValidationData *param_1)

{
  if (param_1->ParameterStructSize != 0x10) {
    return false;
  }
  return this->bIsValid;
}


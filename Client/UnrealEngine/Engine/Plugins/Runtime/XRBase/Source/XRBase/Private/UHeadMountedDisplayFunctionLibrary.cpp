// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 97

// StaticClass @ 14cf77090

UClass * __cdecl UHeadMountedDisplayFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHeadMountedDisplayFunctionLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"HeadMountedDisplayFunctionLibrary",
               &Z_Registration_Info_UClass_UHeadMountedDisplayFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUHeadMountedDisplayFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UHeadMountedDisplayFunctionLibrary>,
               InternalVTableHelperCtorCaller<UHeadMountedDisplayFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHeadMountedDisplayFunctionLibrary.InnerSingleton;
}

// UHeadMountedDisplayFunctionLibrary @ 14cf7e330

UHeadMountedDisplayFunctionLibrary * __thiscall
UHeadMountedDisplayFunctionLibrary::UHeadMountedDisplayFunctionLibrary
          (UHeadMountedDisplayFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UHeadMountedDisplayFunctionLibrary__6B_;
  return this;
}

// UHeadMountedDisplayFunctionLibrary @ 14cf7e360

UHeadMountedDisplayFunctionLibrary * __thiscall
UHeadMountedDisplayFunctionLibrary::UHeadMountedDisplayFunctionLibrary
          (UHeadMountedDisplayFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UHeadMountedDisplayFunctionLibrary__6B_;
  return this;
}

// ~UHeadMountedDisplayFunctionLibrary @ 14cf7f090

void __thiscall
UHeadMountedDisplayFunctionLibrary::~UHeadMountedDisplayFunctionLibrary
          (UHeadMountedDisplayFunctionLibrary *this)

{
  *(undefined ***)this = &___7UHeadMountedDisplayFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// BreakKey @ 14cf837e0

void __cdecl
UHeadMountedDisplayFunctionLibrary::BreakKey
          (FKey *param_1,FString *param_2,EControllerHand *param_3,FName *param_4,FString *param_5,
          FString *param_6)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *this;
  FName *pFVar4;
  wchar_t *pwVar5;
  int iVar6;
  FName local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_40;
  FString local_30;
  
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  this = FKey::ToString(param_1,&local_30);
  iVar3 = ::FString::ParseIntoArray(this,&local_40,L"_",true);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (iVar3 == 4) {
    if (local_40.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar3 = *(int *)(local_40.AllocatorInstance.Data + 8) + -1;
    if (*(int *)(local_40.AllocatorInstance.Data + 8) == 0) {
      iVar3 = 0;
    }
    ::FString::AssignRange(param_2,*(wchar_t **)local_40.AllocatorInstance.Data,iVar3);
    if (local_40.ArrayNum < 2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(int *)(local_40.AllocatorInstance.Data + 0x18) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)(local_40.AllocatorInstance.Data + 0x10);
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,L"Right");
    *param_3 = iVar3 == 0;
    if (local_40.ArrayNum < 2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar6 = 0;
    iVar3 = *(int *)(local_40.AllocatorInstance.Data + 0x18) + -1;
    if (*(int *)(local_40.AllocatorInstance.Data + 0x18) == 0) {
      iVar3 = iVar6;
    }
    pFVar4 = ::FName::FName(&local_48,iVar3,*(wchar_t **)(local_40.AllocatorInstance.Data + 0x10),
                            FNAME_Add);
    *param_4 = *pFVar4;
    if (local_40.ArrayNum < 3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar3 = *(int *)(local_40.AllocatorInstance.Data + 0x28) + -1;
    if (*(int *)(local_40.AllocatorInstance.Data + 0x28) == 0) {
      iVar3 = iVar6;
    }
    ::FString::AssignRange(param_5,*(wchar_t **)(local_40.AllocatorInstance.Data + 0x20),iVar3);
    if (local_40.ArrayNum < 4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar3 = *(int *)(local_40.AllocatorInstance.Data + 0x38) + -1;
    if (*(int *)(local_40.AllocatorInstance.Data + 0x38) == 0) {
      iVar3 = iVar6;
    }
    ::FString::AssignRange(param_6,*(wchar_t **)(local_40.AllocatorInstance.Data + 0x30),iVar3);
  }
  else {
    ::FString::Reset(param_2,0);
    *param_3 = AnyHand;
    param_4->ComparisonIndex = 0;
    param_4->Number = 0;
    ::FString::Reset(param_5,0);
    ::FString::Reset(param_6,0);
  }
  DestructItems<FString,int>((FString *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// CalibrateExternalTrackingToHMD @ 14cf843b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::CalibrateExternalTrackingToHMD(TTransform<double> *param_1)

{
  IXRTrackingSystem *pIVar1;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf843c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x100))(pIVar1,param_1);
    return;
  }
  return;
}

// ClearXRTimedInputActionDelegate @ 14cf846a0

void __cdecl UHeadMountedDisplayFunctionLibrary::ClearXRTimedInputActionDelegate(FName *param_1)

{
  FName FVar1;
  uint uVar2;
  FName local_res8 [4];
  
  FVar1 = *param_1;
  if (OnXRTimedInputActionDelegateMap._8_4_ != OnXRTimedInputActionDelegateMap._52_4_) {
    local_res8[0] = FVar1;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,FXRTimedInputActionDelegate>,TDefaultMapHashableKeyFuncs<FName,FXRTimedInputActionDelegate,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FXRTimedInputActionDelegate>,TDefaultMapHashableKeyFuncs<FName,FXRTimedInputActionDelegate,0>,FDefaultSetAllocator>
                         *)&OnXRTimedInputActionDelegateMap,FVar1.Number + uVar2,local_res8);
  }
  return;
}

// ConnectRemoteXRDevice @ 14cf85250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

Type __cdecl UHeadMountedDisplayFunctionLibrary::ConnectRemoteXRDevice(FString *param_1,int param_2)

{
  IXRTrackingSystem *pIVar1;
  Type TVar2;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf8526f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TVar2 = (**(code **)((longlong)*pIVar1 + 0x1d8))(pIVar1,param_1,param_2);
    return TVar2;
  }
  return NoTrackingSystem;
}

// DisconnectRemoteXRDevice @ 14cf87a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UHeadMountedDisplayFunctionLibrary::DisconnectRemoteXRDevice(void)

{
  IXRTrackingSystem *pIVar1;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf87a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x1e0))();
    return;
  }
  return;
}

// EnableHMD @ 14cf892a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UHeadMountedDisplayFunctionLibrary::EnableHMD(bool param_1)

{
  IXRTrackingSystem *pIVar1;
  IStereoRendering *pIVar2;
  code *pcVar3;
  UEngine *pUVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if ((pIVar1 == (IXRTrackingSystem *)0x0) ||
     (lVar8 = (**(code **)((longlong)*pIVar1 + 0x118))(), pUVar4 = GEngine, lVar8 == 0)) {
    return false;
  }
  if (((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  plVar9 = (longlong *)(**(code **)((longlong)*(pUVar4->XRSystem).Object + 0x118))();
  (**(code **)(*plVar9 + 0x58))(plVar9,param_1);
  pIVar2 = (GEngine->StereoRenderingDevice).Object;
  if (((pIVar2 != (IStereoRendering *)0x0) &&
      (cVar7 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,param_1), cVar7 == '\0')) && (param_1)
     ) {
    return false;
  }
  return true;
}

// EnumerateTrackedDevices @ 14cf89a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FXRDeviceId,TSizedDefaultAllocator<32>_> * __cdecl
UHeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices
          (TArray<FXRDeviceId,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName param_1,
          EXRTrackedDeviceType param_2)

{
  int *piVar1;
  uint uVar2;
  IXRSystemIdentifier *pIVar3;
  FXRDeviceId *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FXRDeviceId *pFVar10;
  TArray<FXRDeviceId,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  undefined7 in_register_00000081;
  int *piVar15;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  FXRDeviceId local_58;
  int *local_48;
  undefined8 local_40;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  pIVar3 = (IXRSystemIdentifier *)(GEngine->XRSystem).Object;
  if ((pIVar3 != (IXRSystemIdentifier *)0x0) &&
     ((param_1 == (FName)0x0 ||
      (pFVar9 = (FName *)(**(code **)*pIVar3)
                                   (pIVar3,local_res20,CONCAT71(in_register_00000081,param_2)),
      *pFVar9 == param_1)))) {
    piVar14 = &__return_storage_ptr__->ArrayNum;
    piVar13 = &__return_storage_ptr__->ArrayMax;
    local_48 = (int *)0x0;
    local_40 = 0;
    (**(code **)((longlong)*pIVar3 + 0x38))(pIVar3,&local_48,param_2);
    uVar2 = __return_storage_ptr__->ArrayNum + (int)local_40;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    iVar12 = (int)local_40;
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar2,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
      iVar12 = (int)local_40;
    }
    piVar1 = local_48 + iVar12;
    piVar15 = local_48;
    iVar8 = iVar12;
    while( true ) {
      if (iVar8 != iVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (piVar15 == piVar1) break;
      pFVar10 = FXRDeviceId::FXRDeviceId(&local_58,pIVar3,*piVar15);
      pFVar4 = (FXRDeviceId *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar10) && (pFVar10 < pFVar4 + *piVar13)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TArray<FXRDeviceId,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar11;
      }
      iVar8 = *piVar14;
      if (iVar8 == *piVar13) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&__return_storage_ptr__->AllocatorInstance,piVar13);
        *piVar14 = iVar8;
      }
      piVar15 = piVar15 + 1;
      *piVar14 = iVar8 + 1;
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(FName *)(pFVar5 + (longlong)iVar8 * 0xc) = pFVar10->SystemName;
      *(int *)(pFVar5 + (longlong)iVar8 * 0xc + 8) = pFVar10->DeviceId;
      iVar8 = (int)local_40;
    }
    if (local_48 != (int *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return __return_storage_ptr__;
}

// GetControllerTransformForTime2 @ 14cf8e140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UHeadMountedDisplayFunctionLibrary::GetControllerTransformForTime2
          (UObject *param_1,int param_2,FName param_3,FTimespan param_4,bool *param_5,
          TRotator<double> *param_6,TVector<double> *param_7,bool *param_8,TVector<double> *param_9,
          bool *param_10,TRotator<double> *param_11,bool *param_12,TVector<double> *param_13)

{
  longlong *plVar1;
  IXRTrackingSystem *pIVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined8 uVar13;
  float fVar14;
  FScriptContainerElement *pFVar15;
  char cVar16;
  IModularFeatures *this;
  UWorld *this_00;
  AWorldSettings *pAVar17;
  TRotator<double> *pTVar18;
  TQuat<double> *pTVar19;
  TRotator<double> *pTVar20;
  ulonglong uVar21;
  bool bVar22;
  ForAnyElementType FVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined8 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double in_XMM4_Qb;
  undefined1 auVar57 [16];
  double dVar61;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 uVar62;
  double dVar63;
  double dVar73;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  double dVar80;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined1 auStack_278 [32];
  bool *local_258;
  TRotator<double> *local_250;
  TVector<double> *local_248;
  bool *local_240;
  TVector<double> *local_238;
  bool *local_230;
  double *local_228;
  bool *local_220;
  TVector<double> *local_218;
  float local_210;
  undefined1 local_208 [4];
  int local_204;
  uint local_200;
  TVector<double> *local_1f8;
  TRotator<double> *local_1f0;
  bool *local_1e8;
  bool *local_1e0;
  bool *local_1d8;
  TVector<double> *local_1d0;
  TArray<IMotionController_*,TSizedDefaultAllocator<32>_> local_1c8;
  TQuat<double> local_1b8;
  bool *local_198;
  FScriptContainerElement *local_190;
  double local_188;
  double dStack_180;
  double local_178;
  TVector<double>_u_0 local_168;
  TQuat<double> local_148;
  undefined1 local_128 [8];
  undefined8 uStack_120;
  undefined1 local_118 [8];
  undefined8 uStack_110;
  undefined1 local_108 [8];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [8];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_278;
  local_198 = param_5;
  local_1f0 = param_6;
  local_1f8 = param_7;
  local_1e8 = param_8;
  local_1e0 = param_10;
  local_1d8 = param_12;
  local_1d0 = param_13;
  local_204 = param_2;
  this = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<IMotionController>
            (this,&local_1c8,IMotionController::FeatureName);
  dVar63 = __real_3fec1528065b7d50;
  dVar9 = __real_3fdeaee8744b05f0;
  fVar14 = __real_42c80000;
  dVar7 = __real_3e45798ee0000000;
  dVar10 = __real_3ff0000000000000;
  uVar21 = (ulonglong)local_1c8.ArrayNum;
  local_190 = local_1c8.AllocatorInstance.Data + uVar21 * 8;
  local_200 = local_1c8.ArrayNum;
  FVar23.Data = local_1c8.AllocatorInstance.Data;
  do {
    pFVar15 = local_190;
    if (local_1c8.ArrayNum != (uint)uVar21) {
      `TCheckedPointerIterator<IMotionController_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_208);
    }
    if (FVar23.Data == pFVar15) {
      bVar22 = false;
LAB_14cf8e9c7:
      if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.AllocatorInstance.Data);
      }
      return bVar22;
    }
    plVar1 = *(longlong **)FVar23.Data;
    if (plVar1 != (longlong *)0x0) {
      fVar24 = fVar14;
      if (param_1 != (UObject *)0x0) {
        this_00 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
        pAVar17 = UWorld::GetWorldSettings(this_00,false,true);
        fVar24 = pAVar17->WorldToMeters;
      }
      local_218 = local_1d0;
      local_220 = local_1d8;
      local_228 = &local_188;
      local_230 = local_1e0;
      local_238 = param_9;
      local_240 = local_1e8;
      local_248 = local_1f8;
      local_250 = local_1f0;
      local_258 = local_198;
      local_210 = fVar24;
      cVar16 = (**(code **)(*plVar1 + 0x20))(plVar1,local_204,param_3,param_4.Ticks);
      if (cVar16 != '\0') {
        pIVar2 = (GEngine->XRSystem).Object;
        if (pIVar2 == (IXRTrackingSystem *)0x0) {
          uVar62 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar85 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar86 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar87 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          uVar81 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar82 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar83 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar84 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar90 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar91 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar92 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar93 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar88 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          uVar89 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          uVar25 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar26 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar27 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar28 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          local_128 = (undefined1  [8])
                      UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          uStack_120 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          local_118 = (undefined1  [8])
                      UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          uStack_110 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          local_108 = (undefined1  [8])
                      UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          _uStack_100 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          local_f8._0_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_f8._8_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          local_e8 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]
          ;
          _uStack_e0 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          local_d8 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]
          ;
          _uStack_d0 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
        }
        else {
          (**(code **)((longlong)*pIVar2 + 0x90))(pIVar2,local_128);
          uVar25 = local_e8._0_4_;
          uVar26 = local_e8._4_4_;
          uVar27 = uStack_e0;
          uVar28 = uStack_dc;
          uVar81 = local_118._0_4_;
          uVar82 = local_118._4_4_;
          uVar83 = (undefined4)uStack_110;
          uVar84 = uStack_110._4_4_;
          uVar62 = local_128._0_4_;
          uVar85 = local_128._4_4_;
          uVar86 = (undefined4)uStack_120;
          uVar87 = uStack_120._4_4_;
          uVar88 = local_f8._0_4_;
          uVar89 = local_f8._4_4_;
          uVar90 = local_108._0_4_;
          uVar91 = local_108._4_4_;
          uVar92 = uStack_100;
          uVar93 = uStack_fc;
        }
        pTVar18 = local_1f0;
        auVar58._4_4_ = uVar85;
        auVar58._0_4_ = uVar62;
        auVar58._8_4_ = uVar86;
        auVar58._12_4_ = uVar87;
        auVar59._4_4_ = uVar82;
        auVar59._0_4_ = uVar81;
        auVar59._8_4_ = uVar83;
        auVar59._12_4_ = uVar84;
        auVar59 = blendpd(auVar58,auVar59,2);
        dVar63 = (local_1f8->field0_0x0)._s_0.X * (double)CONCAT44(uVar26,uVar25);
        dVar73 = (local_1f8->field0_0x0)._s_0.Y * (double)CONCAT44(uVar28,uVar27);
        dVar9 = *(double *)((longlong)&local_1f8->field0_0x0 + 0x10) * local_d8;
        dVar10 = local_d8._8_8_ * 0.0;
        auVar75._8_4_ = SUB84(dVar73,0);
        auVar75._0_8_ = dVar63;
        uVar25 = (undefined4)((ulonglong)dVar73 >> 0x20);
        auVar75._12_4_ = uVar25;
        auVar30._8_4_ = SUB84(dVar73,0);
        auVar30._0_8_ = dVar63;
        auVar30._12_4_ = uVar25;
        auVar76._0_8_ =
             auVar75._8_8_ * (double)CONCAT44(uVar85,uVar62) -
             (double)CONCAT44(uVar87,uVar86) * dVar63;
        auVar76._8_8_ =
             dVar9 * (double)CONCAT44(uVar87,uVar86) - (double)CONCAT44(uVar82,uVar81) * dVar73;
        auVar50._8_4_ = SUB84(dVar10,0);
        auVar50._0_8_ = dVar9;
        auVar50._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar31 = blendpd(auVar30,auVar50,2);
        auVar32._0_8_ = auVar31._0_8_ * (double)CONCAT44(uVar82,uVar81) - auVar59._0_8_ * dVar9;
        auVar32._8_8_ = auVar31._8_8_ * (double)CONCAT44(uVar84,uVar83) - auVar59._8_8_ * dVar10;
        auVar31 = blendpd(auVar76,auVar32,2);
        dVar10 = auVar76._8_8_ + auVar76._8_8_;
        dVar7 = auVar32._0_8_ + auVar32._0_8_;
        uVar25 = (undefined4)((ulonglong)dVar7 >> 0x20);
        auVar77._0_8_ = auVar31._0_8_ + auVar31._0_8_;
        auVar77._8_8_ = auVar31._8_8_ + auVar31._8_8_;
        auVar48._8_4_ = SUB84(dVar7,0);
        auVar48._0_8_ = dVar10;
        auVar48._12_4_ = uVar25;
        auVar33._8_4_ = SUB84(dVar7,0);
        auVar33._0_8_ = dVar10;
        auVar33._12_4_ = uVar25;
        auVar31 = blendpd(auVar33,auVar77,2);
        auVar49._0_8_ =
             auVar48._8_8_ * (double)CONCAT44(uVar85,uVar62) -
             dVar10 * (double)CONCAT44(uVar87,uVar86);
        auVar49._8_8_ =
             auVar77._0_8_ * (double)CONCAT44(uVar87,uVar86) -
             dVar7 * (double)CONCAT44(uVar82,uVar81);
        auVar34._0_8_ =
             auVar31._0_8_ * (double)CONCAT44(uVar82,uVar81) - auVar77._0_8_ * auVar59._0_8_;
        auVar34._8_8_ =
             auVar31._8_8_ * (double)CONCAT44(uVar84,uVar83) - auVar77._8_8_ * auVar59._8_8_;
        auVar50 = blendpd(auVar49,auVar34,2);
        dVar7 = dVar7 * (double)CONCAT44(uVar84,uVar83) + dVar73 + auVar34._0_8_ +
                (double)CONCAT44(uVar93,uVar92);
        auVar31._8_4_ = SUB84(dVar7,0);
        auVar31._0_8_ =
             dVar10 * (double)CONCAT44(uVar84,uVar83) + dVar63 + auVar49._8_8_ +
             (double)CONCAT44(uVar91,uVar90);
        auVar31._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        *(undefined1 (*) [16])&local_1f8->field0_0x0 = auVar31;
        *(double *)((longlong)&local_1f8->field0_0x0 + 0x10) =
             auVar77._0_8_ * (double)CONCAT44(uVar84,uVar83) + dVar9 + auVar50._0_8_ +
             (double)CONCAT44(uVar89,uVar88);
        pTVar19 = UE::Math::TRotator<double>::Quaternion(local_1f0,&local_148);
        dVar7 = pTVar19->Z;
        dVar9 = pTVar19->W;
        dVar63 = pTVar19->X;
        dVar73 = pTVar19->Y;
        dVar10 = (double)local_128 * dVar7 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar73 * uStack_110 +
                 dVar9 * uStack_120 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 (double)local_118 * dVar63 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        local_1b8.Z = (double)local_128 * dVar73 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                      dVar7 * uStack_110 +
                      dVar63 * uStack_120 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                      (double)local_118 * dVar9 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_1b8.W = (double)local_128 * dVar63 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                      dVar9 * uStack_110 +
                      dVar73 * uStack_120 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                      (double)local_118 * dVar7 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_1b8.Y._0_4_ = SUB84(dVar10,0);
        local_1b8.X = (double)local_128 * dVar9 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                      dVar63 * uStack_110 +
                      dVar7 * uStack_120 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                      (double)local_118 * dVar73 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_1b8.Y._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
        pTVar20 = UE::Math::TQuat<double>::Rotator(&local_1b8,(TRotator<double> *)&local_168._s_0);
        dVar10 = pTVar20->Yaw;
        pTVar18->Pitch = pTVar20->Pitch;
        pTVar18->Yaw = dVar10;
        pTVar18->Roll = pTVar20->Roll;
        dVar10 = local_118;
        dVar7 = local_118._8_8_;
        dVar63 = local_128._8_8_;
        dVar9 = local_128;
        if (*local_1e8 != false) {
          dVar74 = local_e8 * (param_9->field0_0x0)._s_0.X;
          dVar80 = local_e8._8_8_ * (param_9->field0_0x0)._s_0.Y;
          dVar4 = (param_9->field0_0x0)._s_0.Z * local_d8;
          dVar73 = local_d8._8_8_ * 0.0;
          auVar64._8_4_ = SUB84(dVar80,0);
          auVar64._0_8_ = dVar74;
          uVar62 = (undefined4)((ulonglong)dVar80 >> 0x20);
          auVar64._12_4_ = uVar62;
          auVar50 = blendpd((undefined1  [16])_local_128,(undefined1  [16])_local_118,2);
          auVar65._0_8_ = auVar64._8_8_ * dVar9 - dVar74 * dVar63;
          auVar65._8_8_ = dVar4 * dVar63 - dVar80 * dVar10;
          auVar35._8_4_ = SUB84(dVar80,0);
          auVar35._0_8_ = dVar74;
          auVar35._12_4_ = uVar62;
          auVar8._8_4_ = SUB84(dVar73,0);
          auVar8._0_8_ = dVar4;
          auVar8._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
          auVar31 = blendpd(auVar35,auVar8,2);
          auVar36._0_8_ = auVar31._0_8_ * dVar10 - dVar4 * auVar50._0_8_;
          auVar36._8_8_ = auVar31._8_8_ * dVar7 - dVar73 * auVar50._8_8_;
          auVar31 = blendpd(auVar65,auVar36,2);
          dVar73 = auVar65._8_8_ + auVar65._8_8_;
          dVar61 = auVar36._0_8_ + auVar36._0_8_;
          uVar62 = (undefined4)((ulonglong)dVar61 >> 0x20);
          auVar66._0_8_ = auVar31._0_8_ + auVar31._0_8_;
          auVar66._8_8_ = auVar31._8_8_ + auVar31._8_8_;
          auVar51._8_4_ = SUB84(dVar61,0);
          auVar51._0_8_ = dVar73;
          auVar51._12_4_ = uVar62;
          auVar37._8_4_ = SUB84(dVar61,0);
          auVar37._0_8_ = dVar73;
          auVar37._12_4_ = uVar62;
          auVar31 = blendpd(auVar37,auVar66,2);
          auVar52._0_8_ = auVar51._8_8_ * dVar9 - dVar73 * dVar63;
          auVar52._8_8_ = auVar66._0_8_ * dVar63 - dVar61 * dVar10;
          auVar38._0_8_ = auVar31._0_8_ * dVar10 - auVar66._0_8_ * auVar50._0_8_;
          auVar38._8_8_ = auVar31._8_8_ * dVar7 - auVar66._8_8_ * auVar50._8_8_;
          auVar31 = blendpd(auVar52,auVar38,2);
          dVar61 = dVar61 * dVar7 + dVar80 + auVar38._0_8_;
          auVar5._8_4_ = SUB84(dVar61,0);
          auVar5._0_8_ = dVar73 * dVar7 + dVar74 + auVar52._8_8_;
          auVar5._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
          *(undefined1 (*) [16])&param_9->field0_0x0 = auVar5;
          (param_9->field0_0x0)._s_0.Z = auVar66._0_8_ * dVar7 + dVar4 + auVar31._0_8_;
        }
        if (*local_1e0 != false) {
          local_188 = local_e8 * local_188;
          dStack_180 = local_e8._8_8_ * dStack_180;
          uVar62 = (undefined4)((ulonglong)dStack_180 >> 0x20);
          auVar78._0_8_ = local_178 * local_d8;
          auVar78._8_8_ = local_d8._8_8_ * 0.0;
          auVar67._8_4_ = SUB84(dStack_180,0);
          auVar67._0_8_ = local_188;
          auVar67._12_4_ = uVar62;
          auVar50 = blendpd((undefined1  [16])_local_128,(undefined1  [16])_local_118,2);
          auVar68._0_8_ = auVar67._8_8_ * dVar9 - local_188 * dVar63;
          auVar68._8_8_ = auVar78._0_8_ * dVar63 - dStack_180 * dVar10;
          auVar39._8_4_ = SUB84(dStack_180,0);
          auVar39._0_8_ = local_188;
          auVar39._12_4_ = uVar62;
          auVar31 = blendpd(auVar39,auVar78,2);
          auVar40._0_8_ = auVar31._0_8_ * dVar10 - auVar78._0_8_ * auVar50._0_8_;
          auVar40._8_8_ = auVar31._8_8_ * dVar7 - auVar78._8_8_ * auVar50._8_8_;
          auVar31 = blendpd(auVar68,auVar40,2);
          dVar73 = auVar68._8_8_ + auVar68._8_8_;
          dVar61 = auVar40._0_8_ + auVar40._0_8_;
          uVar62 = (undefined4)((ulonglong)dVar61 >> 0x20);
          auVar69._0_8_ = auVar31._0_8_ + auVar31._0_8_;
          auVar69._8_8_ = auVar31._8_8_ + auVar31._8_8_;
          auVar53._8_4_ = SUB84(dVar61,0);
          auVar53._0_8_ = dVar73;
          auVar53._12_4_ = uVar62;
          auVar41._8_4_ = SUB84(dVar61,0);
          auVar41._0_8_ = dVar73;
          auVar41._12_4_ = uVar62;
          auVar31 = blendpd(auVar41,auVar69,2);
          auVar54._0_8_ = auVar53._8_8_ * dVar9 - dVar73 * dVar63;
          auVar54._8_8_ = auVar69._0_8_ * dVar63 - dVar61 * dVar10;
          auVar42._0_8_ = auVar31._0_8_ * dVar10 - auVar69._0_8_ * auVar50._0_8_;
          auVar42._8_8_ = auVar31._8_8_ * dVar7 - auVar69._8_8_ * auVar50._8_8_;
          auVar31 = blendpd(auVar54,auVar42,2);
          dVar10 = dVar61 * dVar7 + dStack_180 + auVar42._0_8_;
          local_168._s_0.Z = auVar69._0_8_ * dVar7 + auVar78._0_8_ + auVar31._0_8_;
          local_168._8_4_ = SUB84(dVar10,0);
          local_168._0_8_ = dVar73 * dVar7 + local_188 + auVar54._8_8_;
          local_168._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          pTVar18 = IMotionController::AngularVelocityAsAxisAndLengthToRotator
                              ((TRotator<double> *)&local_1b8,(TVector<double> *)&local_168._s_0);
          dVar10 = pTVar18->Yaw;
          param_11->Pitch = pTVar18->Pitch;
          param_11->Yaw = dVar10;
          param_11->Roll = pTVar18->Roll;
        }
        if (*local_1d8 != false) {
          auVar60._4_4_ = local_128._4_4_;
          auVar60._0_4_ = local_128._0_4_;
          auVar60._8_4_ = (undefined4)uStack_120;
          auVar60._12_4_ = uStack_120._4_4_;
          auVar11._4_4_ = local_118._4_4_;
          auVar11._0_4_ = local_118._0_4_;
          auVar11._8_4_ = (undefined4)uStack_110;
          auVar11._12_4_ = uStack_110._4_4_;
          auVar50 = blendpd(auVar60,auVar11,2);
          dVar9 = (double)CONCAT44(local_e8._4_4_,local_e8._0_4_) * (local_1d0->field0_0x0)._s_0.X;
          dVar63 = (double)CONCAT44(uStack_dc,uStack_e0) * (local_1d0->field0_0x0)._s_0.Y;
          uVar62 = (undefined4)((ulonglong)dVar63 >> 0x20);
          auVar79._0_8_ =
               *(double *)((longlong)&local_1d0->field0_0x0 + 0x10) *
               (double)CONCAT44(local_d8._4_4_,local_d8._0_4_);
          auVar79._8_8_ = (double)CONCAT44(uStack_cc,uStack_d0) * 0.0;
          auVar70._8_4_ = SUB84(dVar63,0);
          auVar70._0_8_ = dVar9;
          auVar70._12_4_ = uVar62;
          auVar43._8_4_ = SUB84(dVar63,0);
          auVar43._0_8_ = dVar9;
          auVar43._12_4_ = uVar62;
          auVar71._0_8_ =
               auVar70._8_8_ * (double)CONCAT44(local_128._4_4_,local_128._0_4_) -
               dVar9 * (double)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
          auVar71._8_8_ =
               auVar79._0_8_ * (double)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120) -
               dVar63 * (double)CONCAT44(local_118._4_4_,local_118._0_4_);
          auVar31 = blendpd(auVar43,auVar79,2);
          auVar44._0_8_ =
               auVar31._0_8_ * (double)CONCAT44(local_118._4_4_,local_118._0_4_) -
               auVar79._0_8_ * auVar50._0_8_;
          auVar44._8_8_ =
               auVar31._8_8_ * (double)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110) -
               auVar79._8_8_ * auVar50._8_8_;
          auVar31 = blendpd(auVar71,auVar44,2);
          dVar10 = auVar71._8_8_ + auVar71._8_8_;
          dVar7 = auVar44._0_8_ + auVar44._0_8_;
          uVar62 = (undefined4)((ulonglong)dVar7 >> 0x20);
          auVar72._0_8_ = auVar31._0_8_ + auVar31._0_8_;
          auVar72._8_8_ = auVar31._8_8_ + auVar31._8_8_;
          auVar55._8_4_ = SUB84(dVar7,0);
          auVar55._0_8_ = dVar10;
          auVar55._12_4_ = uVar62;
          auVar45._8_4_ = SUB84(dVar7,0);
          auVar45._0_8_ = dVar10;
          auVar45._12_4_ = uVar62;
          auVar31 = blendpd(auVar45,auVar72,2);
          auVar56._0_8_ =
               auVar55._8_8_ * (double)CONCAT44(local_128._4_4_,local_128._0_4_) -
               dVar10 * (double)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
          auVar56._8_8_ =
               auVar72._0_8_ * (double)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120) -
               dVar7 * (double)CONCAT44(local_118._4_4_,local_118._0_4_);
          auVar46._0_8_ =
               auVar31._0_8_ * (double)CONCAT44(local_118._4_4_,local_118._0_4_) -
               auVar72._0_8_ * auVar50._0_8_;
          auVar46._8_8_ =
               auVar31._8_8_ * (double)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110) -
               auVar72._8_8_ * auVar50._8_8_;
          auVar31 = blendpd(auVar56,auVar46,2);
          dVar7 = dVar7 * (double)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110) + dVar63 +
                  auVar46._0_8_;
          auVar6._8_4_ = SUB84(dVar7,0);
          auVar6._0_8_ = dVar10 * (double)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110) + dVar9
                         + auVar56._8_8_;
          auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          *(undefined1 (*) [16])&local_1d0->field0_0x0 = auVar6;
          *(double *)((longlong)&local_1d0->field0_0x0 + 0x10) =
               auVar72._0_8_ * (double)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110) +
               auVar79._0_8_ + auVar31._0_8_;
        }
        bVar22 = true;
        goto LAB_14cf8e9c7;
      }
      auVar12._4_8_ = in_XMM4_Qb;
      auVar12._0_4_ = (int)((ulonglong)local_188 >> 0x20);
      auVar57._0_8_ = auVar12._0_8_ << 0x20;
      auVar57._8_4_ = SUB84(dStack_180,0);
      auVar57._12_4_ = (int)((ulonglong)dStack_180 >> 0x20);
      dVar61 = auVar57._8_8_;
      dVar73 = SQRT(local_188 * local_188 + dVar61 * dVar61 + local_178 * local_178);
      uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar47 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (dVar7 < dVar73) {
        dVar4 = dVar10 / dVar73;
        uVar29 = dVar4 * local_188;
        uVar47 = dVar4 * dVar61;
        uVar13 = dVar4 * local_178;
      }
      local_1b8.Z = (double)uVar13 * dVar9;
      local_1b8.Y = (double)uVar47 * dVar9;
      local_1b8.X = (double)uVar29 * dVar9;
      local_1b8.W = dVar63;
      in_XMM4_Qb = dStack_180;
      pTVar18 = UE::Math::TQuat<double>::Rotator(&local_1b8,(TRotator<double> *)&local_168._s_0);
      dVar61 = pTVar18->Yaw * dVar73;
      dVar4 = pTVar18->Roll * dVar73;
      param_11->Pitch = dVar73 * pTVar18->Pitch;
      auVar3._8_4_ = SUB84(dVar4,0);
      auVar3._0_8_ = dVar61;
      auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      param_11->Yaw = dVar61;
      param_11->Roll = (double)auVar3._8_8_;
    }
    uVar21 = (ulonglong)local_200;
    FVar23.Data = FVar23.Data + 8;
  } while( true );
}

// GetCurrentInteractionProfile @ 14cf8eab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UHeadMountedDisplayFunctionLibrary::GetCurrentInteractionProfile
          (EControllerHand param_1,FString *param_2)

{
  IXRTrackingSystem *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf8ead1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x1d0))(pIVar1,param_1,param_2);
    return (bool)uVar2;
  }
  return false;
}

// GetDevicePose @ 14cf8ee10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::GetDevicePose
          (FXRDeviceId *param_1,bool *param_2,TRotator<double> *param_3,bool *param_4,
          TVector<double> *param_5)

{
  IXRSystemIdentifier *pIVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  TRotator<double> *pTVar6;
  TRotator<double> local_58;
  TQuat<double> local_38;
  
  *param_2 = false;
  *param_4 = false;
  pIVar1 = (IXRSystemIdentifier *)(GEngine->XRSystem).Object;
  if ((pIVar1 != (IXRSystemIdentifier *)0x0) &&
     (bVar4 = FXRDeviceId::IsOwnedBy(param_1,pIVar1), bVar4)) {
    cVar5 = (**(code **)((longlong)*pIVar1 + 0x58))(pIVar1,param_1->DeviceId,&local_38,param_5);
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (cVar5 == '\0') {
      (param_5->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (param_5->field0_0x0)._s_0.Y = (double)uVar3;
      (param_5->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      param_3->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      param_3->Yaw = dVar2;
      param_3->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    }
    else {
      *param_2 = true;
      bVar4 = (bool)(**(code **)((longlong)*pIVar1 + 0x30))(pIVar1);
      *param_4 = bVar4;
      pTVar6 = UE::Math::TRotator<double>::TRotator<double>(&local_58,&local_38);
      dVar2 = pTVar6->Yaw;
      param_3->Pitch = pTVar6->Pitch;
      param_3->Yaw = dVar2;
      param_3->Roll = pTVar6->Roll;
    }
  }
  return;
}

// GetDeviceWorldPose @ 14cf8ef10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose
          (UObject *param_1,FXRDeviceId *param_2,bool *param_3,TRotator<double> *param_4,
          bool *param_5,TVector<double> *param_6)

{
  IXRTrackingSystem *pIVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  TQuat<double> *pTVar8;
  TRotator<double> *pTVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [32];
  TQuat<double> local_118;
  undefined1 local_f8 [8];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  undefined1 local_d8 [8];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [8];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8 [2];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_168;
  GetDevicePose(param_2,param_3,param_4,param_5,param_6);
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 == (IXRTrackingSystem *)0x0) {
    uVar34 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    uVar35 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    uVar36 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    uVar37 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    uVar30 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar31 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar32 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar33 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar40 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    uVar41 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    uVar10 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
    uVar11 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
    uVar12 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
    uVar13 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
    local_f8 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    _uStack_f0 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_e8 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    uStack_e0 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    local_d8 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    _uStack_d0 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    local_c8._0_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    local_c8._8_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    local_b8 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    _uStack_b0 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_a8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    local_a8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  }
  else {
    (**(code **)((longlong)*pIVar1 + 0x90))(pIVar1,local_f8);
    uVar10 = local_b8._0_4_;
    uVar11 = local_b8._4_4_;
    uVar12 = uStack_b0;
    uVar13 = uStack_ac;
    uVar30 = local_e8._0_4_;
    uVar31 = local_e8._4_4_;
    uVar32 = (undefined4)uStack_e0;
    uVar33 = uStack_e0._4_4_;
    uVar34 = local_f8._0_4_;
    uVar35 = local_f8._4_4_;
    uVar36 = uStack_f0;
    uVar37 = uStack_ec;
    uVar38 = local_c8._0_4_;
    uVar39 = local_c8._4_4_;
    uVar40 = local_d8._0_4_;
    uVar41 = local_d8._4_4_;
    uVar42 = uStack_d0;
    uVar43 = uStack_cc;
  }
  dVar3 = (param_6->field0_0x0)._s_0.X * (double)CONCAT44(uVar11,uVar10);
  dVar4 = (param_6->field0_0x0)._s_0.Y * (double)CONCAT44(uVar13,uVar12);
  uVar10 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar5 = (param_6->field0_0x0)._s_0.Z * local_a8[0];
  dVar6 = local_a8[1] * 0.0;
  auVar27._8_4_ = SUB84(dVar4,0);
  auVar27._0_8_ = dVar3;
  auVar27._12_4_ = uVar10;
  auVar24._4_4_ = uVar35;
  auVar24._0_4_ = uVar34;
  auVar24._8_4_ = uVar36;
  auVar24._12_4_ = uVar37;
  auVar14._8_4_ = SUB84(dVar4,0);
  auVar14._0_8_ = dVar3;
  auVar14._12_4_ = uVar10;
  auVar28._0_8_ =
       auVar27._8_8_ * (double)CONCAT44(uVar35,uVar34) - (double)CONCAT44(uVar37,uVar36) * dVar3;
  auVar28._8_8_ = dVar5 * (double)CONCAT44(uVar37,uVar36) - (double)CONCAT44(uVar31,uVar30) * dVar4;
  auVar25._8_4_ = SUB84(dVar6,0);
  auVar25._0_8_ = dVar5;
  auVar25._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar15 = blendpd(auVar14,auVar25,2);
  auVar7._4_4_ = uVar31;
  auVar7._0_4_ = uVar30;
  auVar7._8_4_ = uVar32;
  auVar7._12_4_ = uVar33;
  auVar25 = blendpd(auVar24,auVar7,2);
  auVar16._0_8_ = auVar15._0_8_ * (double)CONCAT44(uVar31,uVar30) - auVar25._0_8_ * dVar5;
  auVar16._8_8_ = auVar15._8_8_ * (double)CONCAT44(uVar33,uVar32) - auVar25._8_8_ * dVar6;
  auVar15 = blendpd(auVar28,auVar16,2);
  dVar6 = auVar28._8_8_ + auVar28._8_8_;
  dVar2 = auVar16._0_8_ + auVar16._0_8_;
  uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar29._0_8_ = auVar15._0_8_ + auVar15._0_8_;
  auVar29._8_8_ = auVar15._8_8_ + auVar15._8_8_;
  auVar20._8_4_ = SUB84(dVar2,0);
  auVar20._0_8_ = dVar6;
  auVar20._12_4_ = uVar10;
  auVar17._8_4_ = SUB84(dVar2,0);
  auVar17._0_8_ = dVar6;
  auVar17._12_4_ = uVar10;
  auVar15 = blendpd(auVar17,auVar29,2);
  auVar21._0_8_ =
       auVar20._8_8_ * (double)CONCAT44(uVar35,uVar34) - dVar6 * (double)CONCAT44(uVar37,uVar36);
  auVar21._8_8_ =
       auVar29._0_8_ * (double)CONCAT44(uVar37,uVar36) - dVar2 * (double)CONCAT44(uVar31,uVar30);
  auVar18._0_8_ = auVar15._0_8_ * (double)CONCAT44(uVar31,uVar30) - auVar29._0_8_ * auVar25._0_8_;
  auVar18._8_8_ = auVar15._8_8_ * (double)CONCAT44(uVar33,uVar32) - auVar29._8_8_ * auVar25._8_8_;
  auVar25 = blendpd(auVar21,auVar18,2);
  dVar2 = dVar2 * (double)CONCAT44(uVar33,uVar32) + dVar4 + auVar18._0_8_ +
          (double)CONCAT44(uVar43,uVar42);
  auVar15._8_4_ = SUB84(dVar2,0);
  auVar15._0_8_ =
       dVar6 * (double)CONCAT44(uVar33,uVar32) + dVar3 + auVar21._8_8_ +
       (double)CONCAT44(uVar41,uVar40);
  auVar15._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&param_6->field0_0x0 = auVar15;
  (param_6->field0_0x0)._s_0.Z =
       auVar29._0_8_ * (double)CONCAT44(uVar33,uVar32) + dVar5 + auVar25._0_8_ +
       (double)CONCAT44(uVar39,uVar38);
  pTVar8 = UE::Math::TRotator<double>::Quaternion(param_4,&local_118);
  dVar22 = local_f8;
  dVar23 = local_f8._8_8_;
  dVar2 = pTVar8->Z;
  dVar3 = pTVar8->W;
  auVar26._8_4_ = local_f8._0_4_;
  auVar26._0_8_ = dVar22;
  auVar26._12_4_ = local_f8._4_4_;
  dVar4 = pTVar8->X;
  dVar5 = pTVar8->Y;
  auVar19._8_4_ = local_f8._8_4_;
  auVar19._0_8_ = dVar23;
  auVar19._12_4_ = local_f8._12_4_;
  local_138._0_8_ =
       dVar22 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       uStack_e0 * dVar4 +
       dVar23 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       (double)local_e8 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_138._8_8_ =
       auVar26._8_8_ * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
       uStack_e0 * dVar5 +
       auVar19._8_8_ * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
       (double)local_e8 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar6 = dVar22 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          uStack_e0 * dVar3 +
          dVar23 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          (double)local_e8 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
  ;
  local_138._24_4_ = SUB84(dVar6,0);
  local_138._16_8_ =
       dVar22 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       uStack_e0 * dVar2 +
       dVar23 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       (double)local_e8 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_138._28_4_ = (int)((ulonglong)dVar6 >> 0x20);
  pTVar9 = UE::Math::TQuat<double>::Rotator
                     ((TQuat<double> *)local_138,(TRotator<double> *)&local_118);
  dVar6 = pTVar9->Yaw;
  param_4->Pitch = pTVar9->Pitch;
  param_4->Yaw = dVar6;
  param_4->Roll = pTVar9->Roll;
  return;
}

// GetHMDData @ 14cf8f7a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UHeadMountedDisplayFunctionLibrary::GetHMDData(UObject *param_1,FXRHMDData *param_2)

{
  IXRTrackingSystem *pIVar1;
  
  param_2->bValid = false;
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf8f7c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x1b8))(pIVar1,param_1,param_2);
    return;
  }
  return;
}

// GetHMDDeviceName @ 14cf8f7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __cdecl UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName(void)

{
  IXRTrackingSystem *pIVar1;
  code *pcVar2;
  UEngine *pUVar3;
  bool bVar4;
  longlong lVar5;
  FName FVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  FName in_RCX;
  undefined1 local_res8 [8];
  
  *(undefined8 *)in_RCX = 0;
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    lVar5 = (**(code **)((longlong)*pIVar1 + 0x118))();
    pUVar3 = GEngine;
    if (lVar5 != 0) {
      if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          FVar6 = (FName)(*pcVar2)();
          return FVar6;
        }
      }
      plVar7 = (longlong *)(**(code **)((longlong)*(pUVar3->XRSystem).Object + 0x118))();
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x60))(plVar7,local_res8);
      *(undefined8 *)in_RCX = *puVar8;
    }
  }
  return in_RCX;
}

// GetHMDWornState @ 14cf8f8d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

Type __cdecl UHeadMountedDisplayFunctionLibrary::GetHMDWornState(void)

{
  IXRTrackingSystem *pIVar1;
  code *pcVar2;
  UEngine *pUVar3;
  bool bVar4;
  Type TVar5;
  longlong lVar6;
  longlong *plVar7;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    lVar6 = (**(code **)((longlong)*pIVar1 + 0x118))();
    pUVar3 = GEngine;
    if (lVar6 != 0) {
      if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          TVar5 = (*pcVar2)();
          return TVar5;
        }
      }
      plVar7 = (longlong *)(**(code **)((longlong)*(pUVar3->XRSystem).Object + 0x118))();
                    /* WARNING: Could not recover jumptable at 0x00014cf8f954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      TVar5 = (**(code **)(*plVar7 + 0x50))(plVar7,*(code **)(*plVar7 + 0x50));
      return TVar5;
    }
  }
  return Unknown;
}

// GetHandTrackingState @ 14cf8f990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::GetHandTrackingState
          (UObject *param_1,EXRSpaceType param_2,EControllerHand param_3,
          FXRHandTrackingState *param_4)

{
  IXRTrackingSystem *pIVar1;
  
  param_4->bValid = false;
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x1c8))(pIVar1,param_1,param_2,param_3,param_4);
  }
  return;
}

// GetMotionControllerState @ 14cf90010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::GetMotionControllerState
          (UObject *param_1,EXRSpaceType param_2,EControllerHand param_3,
          EXRControllerPoseType param_4,FXRMotionControllerState *param_5)

{
  IXRTrackingSystem *pIVar1;
  
  param_5->bValid = false;
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x1c0))(pIVar1,param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

// GetNumOfTrackingSensors @ 14cf90180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors(void)

{
  IXRTrackingSystem *pIVar1;
  int iVar2;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf90198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,2);
    return iVar2;
  }
  return 0;
}

// GetOrientationAndPosition @ 14cf90230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition
          (TRotator<double> *param_1,TVector<double> *param_2)

{
  IXRTrackingSystem *pIVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  UEngine *pUVar5;
  char cVar6;
  bool bVar7;
  TRotator<double> *pTVar8;
  double local_58;
  double dStack_50;
  double local_48;
  TRotator<double> local_40;
  TQuat<double> local_28;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    cVar6 = (**(code **)((longlong)*pIVar1 + 0x148))();
    pUVar5 = GEngine;
    if (cVar6 != '\0') {
      local_48 = 0.0;
      local_58 = 0.0;
      dStack_50 = 0.0;
      if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pIVar1 = (pUVar5->XRSystem).Object;
      (**(code **)((longlong)*pIVar1 + 0x58))(pIVar1,0,&local_28,&local_58);
      pTVar8 = UE::Math::TQuat<double>::Rotator(&local_28,&local_40);
      dVar3 = pTVar8->Yaw;
      param_1->Pitch = pTVar8->Pitch;
      param_1->Yaw = dVar3;
      param_1->Roll = pTVar8->Roll;
      (param_2->field0_0x0)._s_0.X = local_58;
      (param_2->field0_0x0)._s_0.Y = dStack_50;
      (param_2->field0_0x0)._s_0.Z = local_48;
      return;
    }
  }
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  param_1->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  param_1->Yaw = dVar3;
  param_1->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)uVar4;
  (param_2->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// GetPlayAreaBounds @ 14cf904b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector2<double> * __cdecl
UHeadMountedDisplayFunctionLibrary::GetPlayAreaBounds
          (TVector2<double> *__return_storage_ptr__,TEnumAsByte<EHMDTrackingOrigin::Type> param_1)

{
  IXRTrackingSystem *pIVar1;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x1e8))(pIVar1,__return_storage_ptr__,param_1.Value);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetPlayAreaRect @ 14cf90510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UHeadMountedDisplayFunctionLibrary::GetPlayAreaRect
          (TTransform<double> *param_1,TVector2<double> *param_2)

{
  IXRTrackingSystem *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf9052f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x1f8))(pIVar1,param_1,param_2);
    return (bool)uVar2;
  }
  return false;
}

// GetPrivateStaticClass @ 14cf90600

UClass * __cdecl UHeadMountedDisplayFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHeadMountedDisplayFunctionLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"HeadMountedDisplayFunctionLibrary",
               &Z_Registration_Info_UClass_UHeadMountedDisplayFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUHeadMountedDisplayFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UHeadMountedDisplayFunctionLibrary>,
               InternalVTableHelperCtorCaller<UHeadMountedDisplayFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHeadMountedDisplayFunctionLibrary.InnerSingleton;
}

// GetTrackingOrigin @ 14cf91550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TEnumAsByte<EHMDTrackingOrigin::Type> __cdecl
UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin(void)

{
  IXRTrackingSystem *pIVar1;
  undefined1 uVar2;
  undefined1 *in_RCX;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x88))();
    *in_RCX = uVar2;
    return (TEnumAsByte<EHMDTrackingOrigin::Type>)(uchar)in_RCX;
  }
  *in_RCX = 2;
  return (TEnumAsByte<EHMDTrackingOrigin::Type>)(uchar)in_RCX;
}

// GetTrackingOriginTransform @ 14cf915b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UHeadMountedDisplayFunctionLibrary::GetTrackingOriginTransform
          (TEnumAsByte<EHMDTrackingOrigin::Type> param_1,TTransform<double> *param_2)

{
  IXRTrackingSystem *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf915cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x1f0))(pIVar1,param_1.Value,param_2);
    return (bool)uVar2;
  }
  return false;
}

// GetTrackingSensorParameters @ 14cf915e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters
          (TVector<double> *param_1,TRotator<double> *param_2,float *param_3,float *param_4,
          float *param_5,float *param_6,float *param_7,float *param_8,float *param_9,bool *param_10,
          int param_11)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  UEngine *pUVar4;
  char cVar5;
  bool bVar6;
  IXRTrackingSystem *pIVar7;
  TRotator<double> *pTVar8;
  uint uVar9;
  undefined1 auStack_118 [32];
  float *local_f8;
  longlong local_f0;
  void *local_e8;
  undefined8 local_e0;
  float *local_d8;
  float *local_d0;
  float *local_c8;
  code *local_c0;
  bool *local_b8;
  float *local_b0;
  TQuat<double> local_a8;
  TRotator<double> local_88;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_d0 = param_9;
  local_c8 = param_7;
  local_b0 = param_6;
  *param_10 = false;
  local_d8 = param_8;
  local_b8 = param_10;
  if (((-1 < param_11) && (pIVar7 = (GEngine->XRSystem).Object, pIVar7 != (IXRTrackingSystem *)0x0))
     && (cVar5 = (**(code **)((longlong)*pIVar7 + 0x148))(), pUVar4 = GEngine, cVar5 != '\0')) {
    if (((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar5 = (**(code **)((longlong)*(pUVar4->XRSystem).Object + 0x18))();
    if (cVar5 != '\0') {
      local_e8 = (void *)0x0;
      local_e0 = 0;
      pIVar7 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
      (**(code **)((longlong)*pIVar7 + 0x38))(pIVar7,&local_e8,2);
      if (0 < (int)local_e0) {
        pIVar7 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
        local_c0 = *(code **)((longlong)*pIVar7 + 0x68);
        uVar9 = 0;
        if (param_11 < (int)local_e0) {
          uVar9 = (uint)~param_11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (local_f8 = (float *)(longlong)param_11, local_f0 = (longlong)(int)local_e0,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_f8 = &local_70;
        bVar6 = (bool)(*local_c0)(pIVar7,*(undefined4 *)
                                          ((longlong)local_e8 + (longlong)param_11 * 4),&local_a8,
                                  param_1);
        *local_b8 = bVar6;
        pTVar8 = UE::Math::TQuat<double>::Rotator(&local_a8,&local_88);
        dVar2 = pTVar8->Yaw;
        param_2->Pitch = pTVar8->Pitch;
        param_2->Yaw = dVar2;
        param_2->Roll = pTVar8->Roll;
        *param_3 = local_70;
        *param_4 = local_6c;
        *param_5 = local_68;
        *local_b0 = local_64;
        *local_c8 = local_58;
        *local_d8 = local_60;
        *local_d0 = local_5c;
      }
      if (local_e8 == (void *)0x0) {
        return;
      }
      FMemory::Free(local_e8);
      return;
    }
  }
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_1->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_1->field0_0x0)._s_0.Y = (double)uVar3;
  (param_1->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  param_2->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  param_2->Yaw = dVar2;
  param_2->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *param_6 = 0.0;
  *param_5 = 0.0;
  *param_4 = 0.0;
  *param_3 = 0.0;
  *local_d8 = 0.0;
  *local_d0 = 0.0;
  *local_c8 = 0.0;
  return;
}

// GetTrackingToWorldTransform @ 14cf91930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTransform<double> * __cdecl
UHeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform
          (TTransform<double> *__return_storage_ptr__,UObject *param_1)

{
  IXRTrackingSystem *pIVar1;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x90))(pIVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return __return_storage_ptr__;
}

// GetVRFocusState @ 14cf91a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UHeadMountedDisplayFunctionLibrary::GetVRFocusState(bool *param_1,bool *param_2)

{
  IXRTrackingSystem *pIVar1;
  bool bVar2;
  longlong *plVar3;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x118))();
    if (plVar3 != (longlong *)0x0) {
      bVar2 = (bool)(**(code **)(*plVar3 + 0x1a0))(plVar3);
      *param_1 = bVar2;
      bVar2 = (bool)(**(code **)(*plVar3 + 0x1a8))(plVar3);
      *param_2 = bVar2;
      return;
    }
  }
  *param_2 = false;
  *param_1 = false;
  return;
}

// GetVersionString @ 14cf91b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
UHeadMountedDisplayFunctionLibrary::GetVersionString(FString *__return_storage_ptr__)

{
  IXRTrackingSystem *pIVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  void *local_18 [2];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    pFVar3 = (FString *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_18);
    if (__return_storage_ptr__ != pFVar3) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return __return_storage_ptr__;
}

// GetWorldToMetersScale @ 14cf91cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __cdecl UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(UObject *param_1)

{
  UWorld *this;
  AWorldSettings *pAVar1;
  
  if (param_1 != (UObject *)0x0) {
    this = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))();
    pAVar1 = UWorld::GetWorldSettings(this,false,true);
    return pAVar1->WorldToMeters;
  }
  return 0.0;
}

// GetXRSecondaryScreenPercentage @ 14cf91e00

float __cdecl UHeadMountedDisplayFunctionLibrary::GetXRSecondaryScreenPercentage(void)

{
  code *pcVar1;
  bool bVar2;
  IConsoleManager *pIVar3;
  longlong *plVar4;
  TConsoleVariableData<float> *pTVar5;
  float fVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar3 = IConsoleManager::Get();
      plVar4 = (longlong *)
               (**(code **)((longlong)*pIVar3 + 0xc0))
                         (pIVar3,L"xr.SecondaryScreenPercentage.HMDRenderTarget",1);
      pTVar5 = (TConsoleVariableData<float> *)0x0;
      if (plVar4 != (longlong *)0x0) {
        pTVar5 = (TConsoleVariableData<float> *)(**(code **)(*plVar4 + 0x70))(plVar4);
      }
      ::CVar = pTVar5;
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar5 = ::CVar;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar6 = (float)(*pcVar1)();
        return fVar6;
      }
    }
  }
  return pTVar5->ShadowedValue[0];
}

// GetXRSystemFlags @ 14cf91ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl UHeadMountedDisplayFunctionLibrary::GetXRSystemFlags(void)

{
  IXRTrackingSystem *pIVar1;
  code *pcVar2;
  UEngine *pUVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 == (IXRTrackingSystem *)0x0) {
    return 0;
  }
  iVar6 = (**(code **)((longlong)*pIVar1 + 0x10))();
  pUVar3 = GEngine;
  if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
  }
  plVar7 = (longlong *)(**(code **)((longlong)*(pUVar3->XRSystem).Object + 0x118))();
  if (plVar7 != (longlong *)0x0) {
    cVar5 = (**(code **)(*plVar7 + 0x40))(plVar7);
    if (cVar5 == '\0') {
      iVar6 = 0;
    }
  }
  return iVar6;
}

// HasValidTrackingPosition @ 14cf924d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition(void)

{
  IXRTrackingSystem *pIVar1;
  code *pcVar2;
  UEngine *pUVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    cVar4 = (**(code **)((longlong)*pIVar1 + 0x148))();
    pUVar3 = GEngine;
    if (cVar4 != '\0') {
      if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00014cf92543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)((longlong)*(pUVar3->XRSystem).Object + 0x30))();
      return (bool)uVar6;
    }
  }
  return false;
}

// IsDeviceTracking @ 14cf92b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(FXRDeviceId *param_1)

{
  IXRSystemIdentifier *pIVar1;
  bool bVar2;
  undefined1 uVar3;
  
  pIVar1 = (IXRSystemIdentifier *)(GEngine->XRSystem).Object;
  if (pIVar1 != (IXRSystemIdentifier *)0x0) {
    bVar2 = FXRDeviceId::IsOwnedBy(param_1,pIVar1);
    if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00014cf92b6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)((longlong)*pIVar1 + 0x48))(pIVar1,param_1->DeviceId);
      return (bool)uVar3;
    }
  }
  return false;
}

// IsHeadMountedDisplayConnected @ 14cf92b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected(void)

{
  IXRTrackingSystem *pIVar1;
  code *pcVar2;
  UEngine *pUVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    lVar7 = (**(code **)((longlong)*pIVar1 + 0x118))();
    pUVar3 = GEngine;
    if (lVar7 != 0) {
      if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      plVar8 = (longlong *)(**(code **)((longlong)*(pUVar3->XRSystem).Object + 0x118))();
      cVar6 = (**(code **)(*plVar8 + 0x40))(plVar8);
      if (cVar6 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// IsHeadMountedDisplayEnabled @ 14cf92c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled(void)

{
  IXRTrackingSystem *pIVar1;
  char cVar2;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    cVar2 = (**(code **)((longlong)*pIVar1 + 0x148))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// IsSpectatorScreenModeControllable @ 14cf93330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable(void)

{
  IXRTrackingSystem *pIVar1;
  longlong *plVar2;
  longlong lVar3;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x118))();
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0xb0))(plVar2);
      return lVar3 != 0;
    }
  }
  return false;
}

// ResetOrientationAndPosition @ 14cf9a2d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(float param_1,Type param_2)

{
  IXRTrackingSystem *pIVar1;
  code *pcVar2;
  UEngine *pUVar3;
  char cVar4;
  bool bVar5;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    cVar4 = (**(code **)((longlong)*pIVar1 + 0x148))();
    pUVar3 = GEngine;
    if (cVar4 != '\0') {
      if (param_2 != Orientation) {
        if (param_2 == Position) {
          if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar5) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
                    /* WARNING: Could not recover jumptable at 0x00014cf9a3ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((longlong)*(pUVar3->XRSystem).Object + 200))();
          return;
        }
        if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pIVar1 = (pUVar3->XRSystem).Object;
                    /* WARNING: Could not recover jumptable at 0x00014cf9a363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((longlong)*pIVar1 + 0xb8))(pIVar1,param_1);
        return;
      }
      if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pIVar1 = (pUVar3->XRSystem).Object;
      (**(code **)((longlong)*pIVar1 + 0xc0))(pIVar1,param_1);
    }
  }
  return;
}

// SetClippingPlanes @ 14cf9a450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UHeadMountedDisplayFunctionLibrary::SetClippingPlanes(float param_1,float param_2)

{
  IXRTrackingSystem *pIVar1;
  longlong *plVar2;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x118))();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x78))(plVar2,param_1,param_2);
    }
  }
  return;
}

// SetHMDColorScaleAndBias @ 14cf9a700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UHeadMountedDisplayFunctionLibrary::SetHMDColorScaleAndBias
          (FLinearColor *param_1,FLinearColor *param_2)

{
  IXRTrackingSystem *pIVar1;
  undefined1 uVar2;
  longlong *plVar3;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x118))();
    if (plVar3 != (longlong *)0x0) {
      local_28 = (param_2->field0_0x0)._s_0.R;
      fStack_24 = (param_2->field0_0x0)._s_0.G;
      fStack_20 = (param_2->field0_0x0)._s_0.B;
      fStack_1c = (param_2->field0_0x0)._s_0.A;
      local_18 = (param_1->field0_0x0)._s_0.R;
      fStack_14 = (param_1->field0_0x0)._s_0.G;
      fStack_10 = (param_1->field0_0x0)._s_0.B;
      fStack_c = (param_1->field0_0x0)._s_0.A;
      uVar2 = (**(code **)(*plVar3 + 0x1b8))(plVar3,&local_18,&local_28);
      return (bool)uVar2;
    }
  }
  return false;
}

// SetSpectatorScreenMode @ 14cf9b190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(ESpectatorScreenMode param_1)

{
  IXRTrackingSystem *pIVar1;
  longlong *plVar2;
  FName *pFVar3;
  undefined1 local_res10 [24];
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x118))();
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0xb0))(plVar2);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf9b1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))(plVar2,param_1,*(code **)(*plVar2 + 8));
        return;
      }
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&PSVRName,L"PSVR");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    pFVar3 = (FName *)(**(code **)*pIVar1)(pIVar1,local_res10);
    if ((*pFVar3 == PSVRName) && (2 < (byte)LogHMD._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
      return;
    }
  }
  return;
}

// SetSpectatorScreenModeTexturePlusEyeLayout @ 14cf9b620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout
          (TVector2<double> *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,bool param_5,bool param_6,bool param_7)

{
  IXRTrackingSystem *pIVar1;
  longlong *plVar2;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  bool local_18;
  bool local_17;
  bool local_16;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x118))();
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0xb0))(plVar2);
      if (plVar2 != (longlong *)0x0) {
        local_58 = (param_1->field0_0x0)._s_0.X;
        dStack_50 = (param_1->field0_0x0)._s_0.Y;
        local_18 = param_5;
        local_48 = (param_2->field0_0x0)._s_0.X;
        dStack_40 = (param_2->field0_0x0)._s_0.Y;
        local_17 = param_7;
        local_16 = param_6;
        local_38 = *(undefined4 *)&param_3->field0_0x0;
        uStack_34 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
        uStack_30 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
        uStack_2c = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
        local_28 = *(undefined4 *)&param_4->field0_0x0;
        uStack_24 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 4);
        uStack_20 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 8);
        uStack_1c = *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc);
        (**(code **)(*plVar2 + 0x28))(plVar2,&local_58);
      }
    }
  }
  return;
}

// SetSpectatorScreenTexture @ 14cf9b750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenTexture(UTexture *param_1)

{
  IXRTrackingSystem *pIVar1;
  longlong *plVar2;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (((pIVar1 != (IXRTrackingSystem *)0x0) &&
      (plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x118))(), plVar2 != (longlong *)0x0))
     && (plVar2 = (longlong *)(**(code **)(*plVar2 + 0xb0))(plVar2), plVar2 != (longlong *)0x0)) {
    if ((param_1 == (UTexture *)0x0) && (2 < (byte)LogHMD._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
  }
  return;
}

// SetTrackingOrigin @ 14cf9b810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin::Type> param_1)

{
  IXRTrackingSystem *pIVar1;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf9b82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,param_1.Value);
    return;
  }
  return;
}

// SetWorldToMetersScale @ 14cf9b840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(UObject *param_1,float param_2)

{
  UWorld *this;
  AWorldSettings *pAVar1;
  
  if (param_1 != (UObject *)0x0) {
    this = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))();
    pAVar1 = UWorld::GetWorldSettings(this,false,true);
    pAVar1->WorldToMeters = param_2;
  }
  return;
}

// SetXRDisconnectDelegate @ 14cf9b880

void __cdecl
UHeadMountedDisplayFunctionLibrary::SetXRDisconnectDelegate(FXRDeviceOnDisconnectDelegate *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FReadAccessScope *)&local_28);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)&param_1->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &OnXRDeviceOnDisconnectDelegate,(FWriteAccessScope *)&local_28);
  OnXRDeviceOnDisconnectDelegate._8_8_ = uVar1;
  OnXRDeviceOnDisconnectDelegate._16_8_ = uVar2;
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// SetXRTimedInputActionDelegate @ 14cf9b8f0

void __cdecl
UHeadMountedDisplayFunctionLibrary::SetXRTimedInputActionDelegate
          (FName *param_1,FXRTimedInputActionDelegate *param_2)

{
  TPairInitializer<FName_const_&,FXRTimedInputActionDelegate_const_&> local_res8 [2];
  FName *local_18;
  FXRTimedInputActionDelegate *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FName,FXRTimedInputActionDelegate>,TDefaultMapHashableKeyFuncs<FName,FXRTimedInputActionDelegate,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FXRTimedInputActionDelegate_const_&>_>
            ((TSet<TTuple<FName,FXRTimedInputActionDelegate>,TDefaultMapHashableKeyFuncs<FName,FXRTimedInputActionDelegate,0>,FDefaultSetAllocator>
              *)&OnXRTimedInputActionDelegateMap,local_res8,(bool *)&local_18);
  return;
}

// StaticRegisterNativesUHeadMountedDisplayFunctionLibrary @ 14cf9c970

void __cdecl
UHeadMountedDisplayFunctionLibrary::StaticRegisterNativesUHeadMountedDisplayFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x2e;
  local_18.DataPtr = Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateExternalTrackingHMDPosition @ 14cf9da60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::UpdateExternalTrackingHMDPosition(TTransform<double> *param_1)

{
  IXRTrackingSystem *pIVar1;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf9da79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x108))(pIVar1,param_1);
    return;
  }
  return;
}

// execBreakKey @ 14cfa1140

void __cdecl
UHeadMountedDisplayFunctionLibrary::execBreakKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  EControllerHand *pEVar1;
  FProperty *pFVar2;
  FString *pFVar3;
  FString *pFVar4;
  FString *pFVar5;
  FName *pFVar6;
  EControllerHand *pEVar7;
  EControllerHand local_res10 [8];
  FName local_res20;
  FString local_88;
  FString local_78;
  FString local_68;
  FName local_58;
  FKeyDetails *local_50;
  TReferenceControllerBase<1> *pTStack_48;
  FKey local_40;
  
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  local_50 = (FKeyDetails *)0x0;
  pTStack_48 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pFVar4 = (FString *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Left;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_68;
  if (pFVar4 != (FString *)0x0) {
    pFVar5 = pFVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar1 = param_2->MostRecentPropertyAddress;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pEVar7 = local_res10;
  if (pEVar1 != (EControllerHand *)0x0) {
    pEVar7 = pEVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  pFVar6 = &local_res20;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar6 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  pFVar4 = &local_78;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar4 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar3 = &local_88;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar3 = (FString *)param_2->MostRecentPropertyAddress;
  }
  local_40.KeyName = local_58;
  local_40.KeyDetails.Object = local_50;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40.KeyDetails.SharedReferenceCount.ReferenceController = pTStack_48;
  if (pTStack_48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_48->SharedReferenceCount = (atomic<int>)((int)pTStack_48->SharedReferenceCount + 1);
    UNLOCK();
  }
  BreakKey(&local_40,pFVar5,pEVar7,pFVar6,pFVar4,pFVar3);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  return;
}

// execCalibrateExternalTrackingToHMD @ 14cfa13e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execCalibrateExternalTrackingToHMD
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double *pdVar13;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  undefined1 local_38 [16];
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_78 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_70 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_68 = (double)fVar7;
  dStack_60 = (double)fVar10;
  local_48 = (double)fVar8;
  dStack_40 = (double)fVar11;
  local_58._8_4_ = SUB84((double)fVar5,0);
  local_58._0_8_ = (double)fVar3;
  local_58._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_28 = (double)fVar9;
  dStack_20 = (double)fVar12;
  local_38._8_4_ = SUB84((double)fVar6,0);
  local_38._0_8_ = (double)fVar4;
  local_38._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pdVar13 = &local_78;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar13 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (GEngine->XRSystem).Object;
  if (pIVar2 != (IXRTrackingSystem *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x100))(pIVar2,pdVar13);
  }
  return;
}

// execClearXRTimedInputActionDelegate @ 14cfa1560

void __cdecl
UHeadMountedDisplayFunctionLibrary::execClearXRTimedInputActionDelegate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  uint uVar3;
  FName *pFVar4;
  FName local_res10 [2];
  FName local_res20;
  
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pFVar4 = local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2 = *pFVar4;
  if (OnXRTimedInputActionDelegateMap._8_4_ != OnXRTimedInputActionDelegateMap._52_4_) {
    local_res20 = FVar2;
    uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    TSet<TTuple<FName,FXRTimedInputActionDelegate>,TDefaultMapHashableKeyFuncs<FName,FXRTimedInputActionDelegate,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FXRTimedInputActionDelegate>,TDefaultMapHashableKeyFuncs<FName,FXRTimedInputActionDelegate,0>,FDefaultSetAllocator>
                         *)&OnXRTimedInputActionDelegateMap,FVar2.Number + uVar3,&local_res20);
  }
  return;
}

// execConnectRemoteXRDevice @ 14cfa1620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execConnectRemoteXRDevice
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  undefined1 uVar3;
  undefined4 local_res10 [2];
  void *local_18;
  undefined8 local_10;
  
  uVar3 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (GEngine->XRSystem).Object;
  if (pIVar2 != (IXRTrackingSystem *)0x0) {
    uVar3 = (**(code **)((longlong)*pIVar2 + 0x1d8))(pIVar2,&local_18,local_res10[0]);
  }
  *(undefined1 *)param_3 = uVar3;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execDisconnectRemoteXRDevice @ 14cfa1cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execDisconnectRemoteXRDevice
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IXRTrackingSystem *pIVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cfa1d19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x1e0))();
    return;
  }
  return;
}

// execEnableHMD @ 14cfa1d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execEnableHMD(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  IStereoRendering *pIVar3;
  code *pcVar4;
  UEngine *pUVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar10 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (GEngine->XRSystem).Object;
  if ((pIVar2 != (IXRTrackingSystem *)0x0) &&
     (lVar8 = (**(code **)((longlong)*pIVar2 + 0x118))(), pUVar5 = GEngine, lVar8 != 0)) {
    if (((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar9 = (longlong *)(**(code **)((longlong)*(pUVar5->XRSystem).Object + 0x118))();
    (**(code **)(*plVar9 + 0x58))(plVar9,bVar10);
    pIVar3 = (GEngine->StereoRenderingDevice).Object;
    if (((pIVar3 == (IStereoRendering *)0x0) ||
        (cVar7 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,bVar10), cVar7 != '\0')) ||
       (!bVar10)) {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execEnumerateTrackedDevices @ 14cfa2370

void __cdecl
UHeadMountedDisplayFunctionLibrary::execEnumerateTrackedDevices
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FXRDeviceId,TSizedDefaultAllocator<32>_> *pTVar2;
  EXRTrackedDeviceType local_res10 [8];
  FName local_res18;
  TArray<FXRDeviceId,TSizedDefaultAllocator<32>_> local_18;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = HeadMountedDisplay;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = EnumerateTrackedDevices(&local_18,local_res18,local_res10[0]);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetControllerTransformForTime2 @ 14cfa2500

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetControllerTransformForTime2
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool *pbVar1;
  TRotator<double> *pTVar2;
  FProperty *pFVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  bool *pbVar6;
  TVector<double> *pTVar7;
  bool *pbVar8;
  TRotator<double> *pTVar9;
  bool *pbVar10;
  bool local_res10 [8];
  void *local_res18;
  bool local_res20 [8];
  bool local_e8;
  bool local_e7 [3];
  int local_e4;
  FName local_e0;
  FTimespan local_d8;
  UObject *local_d0;
  TVector<double> *local_c8;
  TRotator<double> *local_c0;
  bool *local_b8;
  TRotator<double> local_b0;
  TVector<double> local_98;
  TVector<double> local_80;
  TRotator<double> local_68;
  TVector<double> local_50;
  
  local_d0 = (UObject *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_e4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e4,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e4);
  }
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_d8.Ticks = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar1 = (bool *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_b8 = local_res10;
  if (pbVar1 != (bool *)0x0) {
    local_b8 = pbVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  pTVar2 = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_c0 = &local_b0;
  if (pTVar2 != (TRotator<double> *)0x0) {
    local_c0 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pTVar5 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  local_res20[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_c8 = &local_98;
  if (pTVar5 != (TVector<double> *)0x0) {
    local_c8 = pTVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pbVar1 = (bool *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pbVar8 = local_res20;
  if (pbVar1 != (bool *)0x0) {
    pbVar8 = pbVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  pTVar5 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  local_e8 = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar7 = &local_80;
  if (pTVar5 != (TVector<double> *)0x0) {
    pTVar7 = pTVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pbVar1 = (bool *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pbVar10 = &local_e8;
  if (pbVar1 != (bool *)0x0) {
    pbVar10 = pbVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pTVar2 = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  local_e7[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar9 = &local_68;
  if (pTVar2 != (TRotator<double> *)0x0) {
    pTVar9 = pTVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e7,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e7);
  }
  pbVar1 = (bool *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pbVar6 = local_e7;
  if (pbVar1 != (bool *)0x0) {
    pbVar6 = pbVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pTVar5 = &local_50;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar5 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar4 = GetControllerTransformForTime2
                    (local_d0,local_e4,local_e0,local_d8,local_b8,local_c0,local_c8,pbVar8,pTVar7,
                     pbVar10,pTVar9,pbVar6,pTVar5);
  *(bool *)local_res18 = bVar4;
  return;
}

// execGetCurrentInteractionProfile @ 14cfa2970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetCurrentInteractionProfile
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  undefined1 uVar3;
  void **ppvVar4;
  undefined1 local_res10 [8];
  void *local_18;
  undefined8 local_10;
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppvVar4 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (GEngine->XRSystem).Object;
  if (pIVar2 == (IXRTrackingSystem *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)((longlong)*pIVar2 + 0x1d0))(pIVar2,local_res10[0],ppvVar4);
  }
  *(undefined1 *)param_3 = uVar3;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetDevicePose @ 14cfa2a80

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetDevicePose
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FXRDeviceId *pFVar1;
  bool *pbVar2;
  TRotator<double> *pTVar3;
  FProperty *pFVar4;
  TRotator<double> *pTVar5;
  bool *pbVar6;
  TVector<double> *pTVar7;
  bool *pbVar8;
  FXRDeviceId *pFVar9;
  bool local_res10 [16];
  bool local_res20 [8];
  FXRDeviceId local_68;
  TRotator<double> local_58;
  TVector<double> local_40;
  
  FXRDeviceId::FXRDeviceId(&local_68);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pFVar1 = (FXRDeviceId *)param_2->MostRecentPropertyAddress;
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar9 = &local_68;
  if (pFVar1 != (FXRDeviceId *)0x0) {
    pFVar9 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar2 = (bool *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pbVar8 = local_res10;
  if (pbVar2 != (bool *)0x0) {
    pbVar8 = pbVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pTVar3 = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  local_res20[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar5 = &local_58;
  if (pTVar3 != (TRotator<double> *)0x0) {
    pTVar5 = pTVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pbVar2 = (bool *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pbVar6 = local_res20;
  if (pbVar2 != (bool *)0x0) {
    pbVar6 = pbVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  pTVar7 = &local_40;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar7 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetDevicePose(pFVar9,pbVar8,pTVar5,pbVar6,pTVar7);
  return;
}

// execGetDeviceWorldPose @ 14cfa2c90

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetDeviceWorldPose
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FXRDeviceId *pFVar1;
  bool *pbVar2;
  TRotator<double> *pTVar3;
  FProperty *pFVar4;
  TVector<double> *pTVar5;
  TRotator<double> *pTVar6;
  bool *pbVar7;
  bool *pbVar8;
  FXRDeviceId *pFVar9;
  bool local_res10 [16];
  bool local_res20 [8];
  UObject *local_78;
  FXRDeviceId local_70;
  TRotator<double> local_60;
  TVector<double> local_48;
  
  local_78 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  FXRDeviceId::FXRDeviceId(&local_70);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pFVar1 = (FXRDeviceId *)param_2->MostRecentPropertyAddress;
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar9 = &local_70;
  if (pFVar1 != (FXRDeviceId *)0x0) {
    pFVar9 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar2 = (bool *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pbVar8 = local_res10;
  if (pbVar2 != (bool *)0x0) {
    pbVar8 = pbVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  pTVar3 = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  local_res20[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar6 = &local_60;
  if (pTVar3 != (TRotator<double> *)0x0) {
    pTVar6 = pTVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pbVar2 = (bool *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pbVar7 = local_res20;
  if (pbVar2 != (bool *)0x0) {
    pbVar7 = pbVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pTVar5 = &local_48;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar5 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetDeviceWorldPose(local_78,pFVar9,pbVar8,pTVar6,pbVar7,pTVar5);
  return;
}

// execGetHMDData @ 14cfa2ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetHMDData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  uchar *puVar3;
  undefined8 local_res10 [3];
  uchar local_68 [4];
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined1 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_68[0] = '\0';
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  local_4c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  puVar3 = local_68;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar3 = '\0';
  pIVar2 = (GEngine->XRSystem).Object;
  if (pIVar2 != (IXRTrackingSystem *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x1b8))(pIVar2,local_res10[0]);
  }
  return;
}

// execGetHMDDeviceName @ 14cfa3010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetHMDDeviceName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IXRTrackingSystem *pIVar1;
  code *pcVar2;
  UEngine *pUVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 local_res18 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    lVar5 = (**(code **)((longlong)*pIVar1 + 0x118))();
    pUVar3 = GEngine;
    if (lVar5 != 0) {
      if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      plVar6 = (longlong *)(**(code **)((longlong)*(pUVar3->XRSystem).Object + 0x118))();
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x60))(plVar6,local_res18);
      *(undefined8 *)param_3 = *puVar7;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetHMDWornState @ 14cfa30e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetHMDWornState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IXRTrackingSystem *pIVar1;
  code *pcVar2;
  UEngine *pUVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    lVar6 = (**(code **)((longlong)*pIVar1 + 0x118))();
    pUVar3 = GEngine;
    if (lVar6 != 0) {
      if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      plVar7 = (longlong *)(**(code **)((longlong)*(pUVar3->XRSystem).Object + 0x118))();
      uVar5 = (**(code **)(*plVar7 + 0x50))(plVar7);
      *(undefined1 *)param_3 = uVar5;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetHandTrackingState @ 14cfa31a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetHandTrackingState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  uchar *puVar3;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined8 local_68 [2];
  uchar local_58 [4];
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined2 local_3c;
  undefined1 local_3a;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_68[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_res20[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_58[0] = '\0';
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  local_3c = 0;
  local_3a = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  puVar3 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar3 = '\0';
  pIVar2 = (GEngine->XRSystem).Object;
  if (pIVar2 != (IXRTrackingSystem *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x1c8))
              (pIVar2,local_68[0],local_res20[0],local_res10[0],puVar3);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execGetMotionControllerState @ 14cfa34c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetMotionControllerState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  uchar *puVar3;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  uchar local_a8 [4];
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_b0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_b8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  local_res20[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_78 = 0;
  local_38 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_a8[0] = '\0';
  local_a4 = 0;
  local_9c = 0;
  local_94 = 0;
  local_8c = 0x1000000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  puVar3 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar3 = '\0';
  pIVar2 = (GEngine->XRSystem).Object;
  if (pIVar2 != (IXRTrackingSystem *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x1c0))
              (pIVar2,local_b0,local_b8[0],local_res20[0],local_res10[0],puVar3);
  }
  return;
}

// execGetNumOfTrackingSensors @ 14cfa3810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetNumOfTrackingSensors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IXRTrackingSystem *pIVar1;
  undefined4 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,2);
    *(undefined4 *)param_3 = uVar2;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetOrientationAndPosition @ 14cfa3870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetOrientationAndPosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  code *pcVar3;
  double dVar4;
  UEngine *pUVar5;
  char cVar6;
  bool bVar7;
  TRotator<double> *pTVar8;
  double *pdVar9;
  double *pdVar10;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80 [3];
  double local_68 [4];
  TQuat<double> local_48;
  TRotator<double> local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_80);
  }
  pdVar10 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pdVar9 = local_80;
  if (pdVar10 != (double *)0x0) {
    pdVar9 = pdVar10;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  pdVar10 = local_68;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar10 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (GEngine->XRSystem).Object;
  if ((pIVar2 != (IXRTrackingSystem *)0x0) &&
     (cVar6 = (**(code **)((longlong)*pIVar2 + 0x148))(), pUVar5 = GEngine, cVar6 != '\0')) {
    local_88 = 0.0;
    local_98 = 0.0;
    dStack_90 = 0.0;
    if (((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = (pUVar5->XRSystem).Object;
    (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,0,&local_48,&local_98);
    pTVar8 = UE::Math::TQuat<double>::Rotator(&local_48,&local_28);
    dVar4 = pTVar8->Yaw;
    *pdVar9 = pTVar8->Pitch;
    pdVar9[1] = dVar4;
    pdVar9[2] = pTVar8->Roll;
    *pdVar10 = local_98;
    pdVar10[1] = dStack_90;
    pdVar10[2] = local_88;
    return;
  }
  *pdVar9 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  pdVar9[1] = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  pdVar9[2] = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *pdVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pdVar10[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pdVar10[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// execGetPixelDensity @ 14cfa3a50

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetPixelDensity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetXRSecondaryScreenPercentage();
  *(float *)param_3 = fVar1 * __real_3c23d70a;
  return;
}

// execGetPlayAreaBounds @ 14cfa3a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetPlayAreaBounds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  undefined1 local_res10 [24];
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (GEngine->XRSystem).Object;
  if (pIVar2 != (IXRTrackingSystem *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x1e8))(pIVar2,&local_18,local_res10[0]);
    *(undefined8 *)param_3 = local_18;
    *(undefined8 *)((longlong)param_3 + 8) = uStack_10;
    return;
  }
  *(TVector2<double>_u_0 *)param_3 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// execGetPlayAreaRect @ 14cfa3b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetPlayAreaRect
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double *pdVar1;
  FProperty *pFVar2;
  IXRTrackingSystem *pIVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 uVar16;
  double *pdVar17;
  uchar *puVar18;
  undefined1 auStack_b8 [32];
  uchar local_98 [16];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  undefined1 local_48 [16];
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar14 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar15 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_88 = (double)fVar4;
  dStack_80 = (double)fVar7;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78 = (double)fVar10;
  dStack_70 = (double)fVar13;
  local_58 = (double)fVar11;
  dStack_50 = (double)fVar14;
  local_68._8_4_ = SUB84((double)fVar8,0);
  local_68._0_8_ = (double)fVar5;
  local_68._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_38 = (double)fVar12;
  dStack_30 = (double)fVar15;
  local_48._8_4_ = SUB84((double)fVar9,0);
  local_48._0_8_ = (double)fVar6;
  local_48._12_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pdVar1 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pdVar17 = &local_88;
  if (pdVar1 != (double *)0x0) {
    pdVar17 = pdVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  puVar18 = local_98;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar18 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = (GEngine->XRSystem).Object;
  if (pIVar3 == (IXRTrackingSystem *)0x0) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    uVar16 = (**(code **)((longlong)*pIVar3 + 0x1f8))(pIVar3,pdVar17,puVar18);
    *(undefined1 *)param_3 = uVar16;
  }
  return;
}

// execGetTrackingOrigin @ 14cfa3cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetTrackingOrigin
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IXRTrackingSystem *pIVar1;
  undefined1 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x88))();
    *(undefined1 *)param_3 = uVar2;
    return;
  }
  *(undefined1 *)param_3 = 2;
  return;
}

// execGetTrackingOriginTransform @ 14cfa3d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetTrackingOriginTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 uVar13;
  double *pdVar14;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  undefined1 local_38 [16];
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_78 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_70 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_68 = (double)fVar7;
  dStack_60 = (double)fVar10;
  local_48 = (double)fVar8;
  dStack_40 = (double)fVar11;
  local_58._8_4_ = SUB84((double)fVar5,0);
  local_58._0_8_ = (double)fVar3;
  local_58._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_28 = (double)fVar9;
  dStack_20 = (double)fVar12;
  local_38._8_4_ = SUB84((double)fVar6,0);
  local_38._0_8_ = (double)fVar4;
  local_38._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pdVar14 = &local_78;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar14 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (GEngine->XRSystem).Object;
  if (pIVar2 == (IXRTrackingSystem *)0x0) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    uVar13 = (**(code **)((longlong)*pIVar2 + 0x1f0))(pIVar2,local_88[0],pdVar14);
    *(undefined1 *)param_3 = uVar13;
  }
  return;
}

// execGetTrackingSensorParameters @ 14cfa3e90

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetTrackingSensorParameters
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TVector<double> *pTVar1;
  TRotator<double> *pTVar2;
  float *pfVar3;
  FProperty *pFVar4;
  bool *pbVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  bool local_res10 [16];
  float local_res20 [2];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  int local_a0 [2];
  float *local_98;
  float *local_90;
  float *local_88;
  TRotator<double> *local_80;
  TVector<double> *local_78;
  TVector<double> local_70;
  TRotator<double> local_58;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pTVar1 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78 = &local_70;
  if (pTVar1 != (TVector<double> *)0x0) {
    local_78 = pTVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pTVar2 = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_80 = &local_58;
  if (pTVar2 != (TRotator<double> *)0x0) {
    local_80 = pTVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  local_b8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_88 = local_res20;
  if (pfVar3 != (float *)0x0) {
    local_88 = pfVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  local_b4 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_90 = &local_b8;
  if (pfVar3 != (float *)0x0) {
    local_90 = pfVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b4,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b4);
  }
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  local_b0 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_98 = &local_b4;
  if (pfVar3 != (float *)0x0) {
    local_98 = pfVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  local_ac = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar7 = &local_b0;
  if (pfVar3 != (float *)0x0) {
    pfVar7 = pfVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_ac,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_ac);
  }
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  local_a8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar6 = &local_ac;
  if (pfVar3 != (float *)0x0) {
    pfVar6 = pfVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  local_a4 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar9 = &local_a8;
  if (pfVar3 != (float *)0x0) {
    pfVar9 = pfVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar8 = &local_a4;
  if (pfVar3 != (float *)0x0) {
    pfVar8 = pfVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_a0[0] = 0;
  pbVar5 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetTrackingSensorParameters
            (local_78,local_80,local_88,local_90,local_98,pfVar7,pfVar6,pfVar9,pfVar8,pbVar5,
             local_a0[0]);
  return;
}

// execGetTrackingToWorldTransform @ 14cfa4270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetTrackingToWorldTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (GEngine->XRSystem).Object;
  if (pIVar2 == (IXRTrackingSystem *)0x0) {
    local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    uStack_74 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    uStack_70 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    uStack_6c = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
    uStack_64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
    uStack_60 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
    uStack_5c = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
    local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    uStack_54 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    uStack_50 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    uStack_4c = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    uStack_44 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    uStack_40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    uStack_3c = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
    uStack_34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
    uStack_30 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
    uStack_2c = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
    local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    uStack_24 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    uStack_20 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    uStack_1c = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  else {
    (**(code **)((longlong)*pIVar2 + 0x90))(pIVar2,&local_78);
  }
  *(undefined4 *)param_3 = local_78;
  *(undefined4 *)((longlong)param_3 + 4) = uStack_74;
  *(undefined4 *)((longlong)param_3 + 8) = uStack_70;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_6c;
  *(undefined4 *)((longlong)param_3 + 0x10) = local_68;
  *(undefined4 *)((longlong)param_3 + 0x14) = uStack_64;
  *(undefined4 *)((longlong)param_3 + 0x18) = uStack_60;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_5c;
  *(undefined4 *)((longlong)param_3 + 0x20) = local_58;
  *(undefined4 *)((longlong)param_3 + 0x24) = uStack_54;
  *(undefined4 *)((longlong)param_3 + 0x28) = uStack_50;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_4c;
  *(undefined4 *)((longlong)param_3 + 0x30) = local_48;
  *(undefined4 *)((longlong)param_3 + 0x34) = uStack_44;
  *(undefined4 *)((longlong)param_3 + 0x38) = uStack_40;
  *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_3c;
  *(undefined4 *)((longlong)param_3 + 0x40) = local_38;
  *(undefined4 *)((longlong)param_3 + 0x44) = uStack_34;
  *(undefined4 *)((longlong)param_3 + 0x48) = uStack_30;
  *(undefined4 *)((longlong)param_3 + 0x4c) = uStack_2c;
  *(undefined4 *)((longlong)param_3 + 0x50) = local_28;
  *(undefined4 *)((longlong)param_3 + 0x54) = uStack_24;
  *(undefined4 *)((longlong)param_3 + 0x58) = uStack_20;
  *(undefined4 *)((longlong)param_3 + 0x5c) = uStack_1c;
  return;
}

// execGetVRFocusState @ 14cfa43a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetVRFocusState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  uchar uVar3;
  longlong *plVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar local_res10 [8];
  uchar local_res20 [8];
  
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar5 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar6 = local_res10;
  if (puVar5 != (uchar *)0x0) {
    puVar6 = puVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar5 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (GEngine->XRSystem).Object;
  if ((pIVar2 != (IXRTrackingSystem *)0x0) &&
     (plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x118))(), plVar4 != (longlong *)0x0)) {
    uVar3 = (**(code **)(*plVar4 + 0x1a0))(plVar4);
    *puVar6 = uVar3;
    uVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4);
    *puVar5 = uVar3;
    return;
  }
  *puVar5 = '\0';
  *puVar6 = '\0';
  return;
}

// execGetVersionString @ 14cfa44e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetVersionString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IXRTrackingSystem *pIVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *local_28 [2];
  undefined8 local_18 [2];
  
  pvVar3 = (void *)0x0;
  uVar5 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar4 = 0;
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    puVar2 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_28);
    uVar5 = 0;
    if (local_18 != puVar2) {
      pvVar3 = (void *)*puVar2;
      *puVar2 = 0;
      uVar5 = *(undefined4 *)(puVar2 + 1);
      uVar4 = *(undefined4 *)((longlong)puVar2 + 0xc);
      puVar2[1] = 0;
    }
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  if (param_3 != local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(void **)param_3 = pvVar3;
    pvVar3 = (void *)0x0;
    *(undefined4 *)((longlong)param_3 + 8) = uVar5;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar4;
  }
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  return;
}

// execGetWorldToMetersScale @ 14cfa45b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetWorldToMetersScale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorld *this;
  AWorldSettings *pAVar2;
  float fVar3;
  longlong *local_res10;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    fVar3 = 0.0;
  }
  else {
    this = (UWorld *)(**(code **)(*local_res10 + 0x180))();
    pAVar2 = UWorld::GetWorldSettings(this,false,true);
    fVar3 = pAVar2->WorldToMeters;
  }
  *(float *)param_3 = fVar3;
  return;
}

// execGetXRSecondaryScreenPercentage @ 14cfa4660

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetXRSecondaryScreenPercentage
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetXRSecondaryScreenPercentage();
  *(float *)param_3 = fVar1;
  return;
}

// execGetXRSystemFlags @ 14cfa46a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execGetXRSystemFlags
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IXRTrackingSystem *pIVar1;
  code *pcVar2;
  UEngine *pUVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 == (IXRTrackingSystem *)0x0) {
    *(undefined4 *)param_3 = 0;
    return;
  }
  uVar6 = (**(code **)((longlong)*pIVar1 + 0x10))();
  pUVar3 = GEngine;
  if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar7 = (longlong *)(**(code **)((longlong)*(pUVar3->XRSystem).Object + 0x118))();
  if (plVar7 != (longlong *)0x0) {
    cVar5 = (**(code **)(*plVar7 + 0x40))(plVar7);
    if (cVar5 == '\0') {
      uVar6 = 0;
    }
  }
  *(undefined4 *)param_3 = uVar6;
  return;
}

// execHasValidTrackingPosition @ 14cfa4780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execHasValidTrackingPosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IXRTrackingSystem *pIVar1;
  code *pcVar2;
  UEngine *pUVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    cVar4 = (**(code **)((longlong)*pIVar1 + 0x148))();
    pUVar3 = GEngine;
    if (cVar4 != '\0') {
      if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar6 = (**(code **)((longlong)*(pUVar3->XRSystem).Object + 0x30))();
      *(undefined1 *)param_3 = uVar6;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsDeviceTracking @ 14cfa4890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execIsDeviceTracking
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRSystemIdentifier *pIVar2;
  bool bVar3;
  undefined1 uVar4;
  FXRDeviceId *this;
  FXRDeviceId local_18;
  
  FXRDeviceId::FXRDeviceId(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FXRDeviceId *)param_2->MostRecentPropertyAddress != (FXRDeviceId *)0x0) {
    this = (FXRDeviceId *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (IXRSystemIdentifier *)(GEngine->XRSystem).Object;
  if ((pIVar2 != (IXRSystemIdentifier *)0x0) && (bVar3 = FXRDeviceId::IsOwnedBy(this,pIVar2), bVar3)
     ) {
    uVar4 = (**(code **)((longlong)*pIVar2 + 0x48))(pIVar2,this->DeviceId);
    *(undefined1 *)param_3 = uVar4;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsHeadMountedDisplayConnected @ 14cfa4970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execIsHeadMountedDisplayConnected
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IXRTrackingSystem *pIVar1;
  code *pcVar2;
  UEngine *pUVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    lVar6 = (**(code **)((longlong)*pIVar1 + 0x118))();
    pUVar3 = GEngine;
    if (lVar6 != 0) {
      if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      plVar7 = (longlong *)(**(code **)((longlong)*(pUVar3->XRSystem).Object + 0x118))();
      cVar5 = (**(code **)(*plVar7 + 0x40))(plVar7);
      if (cVar5 != '\0') {
        *(undefined1 *)param_3 = 1;
        return;
      }
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsHeadMountedDisplayEnabled @ 14cfa4a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execIsHeadMountedDisplayEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IXRTrackingSystem *pIVar1;
  char cVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    cVar2 = (**(code **)((longlong)*pIVar1 + 0x148))();
    if (cVar2 != '\0') {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsSpectatorScreenModeControllable @ 14cfa5040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execIsSpectatorScreenModeControllable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IXRTrackingSystem *pIVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x118))();
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0xb0))(plVar2);
    }
  }
  *(bool *)param_3 = lVar3 != 0;
  return;
}

// execResetOrientationAndPosition @ 14cfa50b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execResetOrientationAndPosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  code *pcVar3;
  UEngine *pUVar4;
  char cVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  char local_res10 [16];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar6 = local_res20[0];
  cVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (GEngine->XRSystem).Object;
  if (pIVar2 != (IXRTrackingSystem *)0x0) {
    cVar7 = (**(code **)((longlong)*pIVar2 + 0x148))();
    pUVar4 = GEngine;
    if (cVar7 != '\0') {
      if (cVar5 != '\0') {
        if (cVar5 == '\x01') {
          if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar8) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          (**(code **)((longlong)*(pUVar4->XRSystem).Object + 200))();
          return;
        }
        if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pIVar2 = (pUVar4->XRSystem).Object;
        (**(code **)((longlong)*pIVar2 + 0xb8))(pIVar2,uVar6);
        return;
      }
      if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pIVar2 = (pUVar4->XRSystem).Object;
      (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,uVar6);
    }
  }
  return;
}

// execSetClippingPlanes @ 14cfa5290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execSetClippingPlanes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar4 = local_res20[0];
  uVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (GEngine->XRSystem).Object;
  if (pIVar2 != (IXRTrackingSystem *)0x0) {
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x118))();
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x78))(plVar5,uVar4,uVar3);
    }
  }
  return;
}

// execSetHMDColorScaleAndBias @ 14cfa5530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execSetHMDColorScaleAndBias
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (GEngine->XRSystem).Object;
  if ((pIVar2 != (IXRTrackingSystem *)0x0) &&
     (plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x118))(), plVar4 != (longlong *)0x0)) {
    local_48 = local_68;
    uStack_40 = uStack_60;
    local_38 = local_58;
    uStack_30 = uStack_50;
    uVar3 = (**(code **)(*plVar4 + 0x1b8))(plVar4,&local_38,&local_48);
    *(undefined1 *)param_3 = uVar3;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetSpectatorScreenMode @ 14cfa5c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  undefined1 uVar3;
  longlong *plVar4;
  FName *pFVar5;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (GEngine->XRSystem).Object;
  if (pIVar2 != (IXRTrackingSystem *)0x0) {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x118))();
    if (plVar4 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0xb0))(plVar4);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4,uVar3);
        return;
      }
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&PSVRName,L"PSVR");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pIVar2 = (GEngine->XRSystem).Object;
  if (pIVar2 != (IXRTrackingSystem *)0x0) {
    pFVar5 = (FName *)(**(code **)*pIVar2)(pIVar2,local_res20);
    if ((*pFVar5 == PSVRName) && (2 < (byte)LogHMD._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
    }
  }
  return;
}

// execSetSpectatorScreenModeTexturePlusEyeLayout @ 14cfa5d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenModeTexturePlusEyeLayout
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  IXRTrackingSystem *pIVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int local_res10 [2];
  int local_res20 [2];
  int local_108 [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar6 = local_res20[0] != 0;
  local_108[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  bVar7 = local_108[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = (GEngine->XRSystem).Object;
  if (pIVar3 != (IXRTrackingSystem *)0x0) {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x118))();
    if (plVar4 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0xb0))(plVar4);
      if (plVar4 != (longlong *)0x0) {
        local_b8 = local_c8;
        uStack_b0 = uStack_c0;
        local_a8 = local_d8;
        uStack_a0 = uStack_d0;
        local_98 = local_e8;
        uStack_90 = uStack_e0;
        local_88 = local_f8;
        uStack_80 = uStack_f0;
        local_78 = bVar5;
        local_77 = bVar7;
        local_76 = bVar6;
        (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
      }
    }
  }
  return;
}

// execSetSpectatorScreenTexture @ 14cfa6000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenTexture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (GEngine->XRSystem).Object;
  if (pIVar2 != (IXRTrackingSystem *)0x0) {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x118))();
    if (plVar4 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0xb0))(plVar4);
      if (plVar4 != (longlong *)0x0) {
        if ((lVar3 == 0) && (2 < (byte)LogHMD._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
        }
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar3);
      }
    }
  }
  return;
}

// execSetTrackingOrigin @ 14cfa60e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execSetTrackingOrigin
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (GEngine->XRSystem).Object;
  if (pIVar2 != (IXRTrackingSystem *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,local_res10[0]);
  }
  return;
}

// execSetWorldToMetersScale @ 14cfa6170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execSetWorldToMetersScale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  UWorld *this;
  AWorldSettings *pAVar3;
  float local_res10 [4];
  longlong *local_res20;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (longlong *)0x0) {
    this = (UWorld *)(**(code **)(*local_res20 + 0x180))();
    pAVar3 = UWorld::GetWorldSettings(this,false,true);
    pAVar3->WorldToMeters = fVar2;
  }
  return;
}

// execSetXRDisconnectDelegate @ 14cfa6260

void __cdecl
UHeadMountedDisplayFunctionLibrary::execSetXRDisconnectDelegate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  atomic<unsigned___int64> aVar2;
  atomic<unsigned___int64> aVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  undefined8 local_50;
  undefined8 local_48;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_40;
  atomic<unsigned___int64> local_38;
  atomic<unsigned___int64> local_30;
  FDestructionSentinel local_28;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50 = 0;
  local_48 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_40.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  this = &local_58;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (this,(FReadAccessScope *)&local_28);
  local_38 = this[1].AccessDetector.State;
  local_30 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_40,(FReadAccessScope *)&local_28);
  aVar3 = local_30;
  aVar2 = local_38;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &OnXRDeviceOnDisconnectDelegate,(FWriteAccessScope *)&local_28);
  OnXRDeviceOnDisconnectDelegate._8_8_ = aVar2;
  OnXRDeviceOnDisconnectDelegate._16_8_ = aVar3;
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_40.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

// execSetXRTimedInputActionDelegate @ 14cfa6390

void __cdecl
UHeadMountedDisplayFunctionLibrary::execSetXRTimedInputActionDelegate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  uchar *puVar2;
  uchar local_res20 [8];
  FReadAccessScope local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_50;
  undefined8 local_48;
  undefined8 local_40;
  FMRSWRecursiveAccessDetector local_38;
  atomic<unsigned___int64> local_30;
  atomic<unsigned___int64> local_28;
  
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_50.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_48 = 0;
  puVar2 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_38.State = (atomic<unsigned___int64>)0x0;
  this = &local_50;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_68);
  local_30 = this[1].AccessDetector.State;
  local_28 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  local_68.DestructionSentinel.Accessor = &local_38;
  local_68.DestructionSentinel._0_8_ = puVar2;
  TSet<TTuple<FName,FXRTimedInputActionDelegate>,TDefaultMapHashableKeyFuncs<FName,FXRTimedInputActionDelegate,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FXRTimedInputActionDelegate_const_&>_>
            ((TSet<TTuple<FName,FXRTimedInputActionDelegate>,TDefaultMapHashableKeyFuncs<FName,FXRTimedInputActionDelegate,0>,FDefaultSetAllocator>
              *)&OnXRTimedInputActionDelegateMap,
             (TPairInitializer<FName_const_&,FXRTimedInputActionDelegate_const_&> *)&stack0x00000010
             ,(bool *)&local_68);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_50.AccessDetector);
  return;
}

// execUpdateExternalTrackingHMDPosition @ 14cfa6540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UHeadMountedDisplayFunctionLibrary::execUpdateExternalTrackingHMDPosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IXRTrackingSystem *pIVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double *pdVar13;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  undefined1 local_38 [16];
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_78 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_70 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_68 = (double)fVar7;
  dStack_60 = (double)fVar10;
  local_48 = (double)fVar8;
  dStack_40 = (double)fVar11;
  local_58._8_4_ = SUB84((double)fVar5,0);
  local_58._0_8_ = (double)fVar3;
  local_58._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_28 = (double)fVar9;
  dStack_20 = (double)fVar12;
  local_38._8_4_ = SUB84((double)fVar6,0);
  local_38._0_8_ = (double)fVar4;
  local_38._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pdVar13 = &local_78;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar13 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (GEngine->XRSystem).Object;
  if (pIVar2 != (IXRTrackingSystem *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x108))(pIVar2,pdVar13);
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 16

// StaticClass @ 14e2d1130

UClass * __cdecl ASwitchActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASwitchActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"SwitchActor",
               &Z_Registration_Info_UClass_ASwitchActor.InnerSingleton,
               StaticRegisterNativesASwitchActor,0x2f0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<ASwitchActor>,
               InternalVTableHelperCtorCaller<ASwitchActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASwitchActor.InnerSingleton;
}

// ASwitchActor @ 14e2d4330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ASwitchActor * __thiscall ASwitchActor::ASwitchActor(ASwitchActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ASwitchActor__6B_;
  *(undefined8 *)&this->OnSwitchActorSwitch = 0;
  *(undefined8 *)&(this->OnSwitchActorSwitch).field_0x8 = 0;
  *(undefined8 *)&(this->OnSwitchActorSwitch).field_0x10 = 0;
  (this->SceneComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  *(undefined8 *)&(this->OnSwitchActorSwitch).field_0x18 = 2;
  return this;
}

// ASwitchActor @ 14e2d4380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ASwitchActor * __thiscall ASwitchActor::ASwitchActor(ASwitchActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  USceneComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ASwitchActor__6B_;
  *(undefined8 *)&(this->OnSwitchActorSwitch).field_0x18 = 2;
  *(undefined8 *)&this->OnSwitchActorSwitch = 0;
  *(undefined8 *)&(this->OnSwitchActorSwitch).field_0x8 = 0;
  *(undefined8 *)&(this->OnSwitchActorSwitch).field_0x10 = 0;
  (this->SceneComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"Root");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar4 = (USceneComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->SceneComponent).field0_0x0.DebugPtr = pUVar4;
  (**(code **)(pUVar4->_padding_ + 0x5f8))(pUVar4,0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (this->SceneComponent).field0_0x0.DebugPtr, pUVar4 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->SceneComponent).field0_0x0;
  return this;
}

// ~ASwitchActor @ 14e2d52a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASwitchActor::~ASwitchActor(ASwitchActor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ASwitchActor__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSwitchActorSwitch).field_0x8,*(int *)&(this->OnSwitchActorSwitch).field_0x10
            );
  pvVar1 = *(void **)&(this->OnSwitchActorSwitch).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSwitchActorSwitch);
  AActor::~AActor((AActor *)this);
  return;
}

// operator() @ 14e2d58e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
`ASwitchActor::GetOptions'::__l2::<lambda_1>::operator()(void *this,AActor *param_1,AActor *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  ForAnyElementType FVar3;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = (FName)param_2->_padding_;
  ::FName::ToString(local_res10,&local_18);
  local_res10[0] = (FName)param_1->_padding_;
  ::FName::ToString(local_res10,&local_28);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,(wchar_t *)FVar3.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// GetOnSwitchDelegate @ 14e2ddfa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> * __thiscall
ASwitchActor::GetOnSwitchDelegate(ASwitchActor *this)

{
  return &this->OnSwitchActorSwitch;
}

// GetOptions @ 14e2ddfb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<AActor_*,TSizedDefaultAllocator<32>_> * __thiscall
ASwitchActor::GetOptions
          (ASwitchActor *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FIdentityFunctor local_res10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  AActor::GetAttachedActors((AActor *)this,__return_storage_ptr__,false,false);
  AlgoImpl::
  IntroSortInternal<AActor_*,int,FIdentityFunctor,_ASwitchActor::GetOptions_::__l2::<lambda_1>_>
            ((AActor **)(__return_storage_ptr__->AllocatorInstance).Data,
             __return_storage_ptr__->ArrayNum,local_res10,(<lambda_1>)local_res10);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e2de200

UClass * __cdecl ASwitchActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASwitchActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"SwitchActor",
               &Z_Registration_Info_UClass_ASwitchActor.InnerSingleton,
               StaticRegisterNativesASwitchActor,0x2f0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<ASwitchActor>,
               InternalVTableHelperCtorCaller<ASwitchActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASwitchActor.InnerSingleton;
}

// GetSelectedOption @ 14e2df260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall ASwitchActor::GetSelectedOption(ASwitchActor *this)

{
  return this->LastSelectedOption;
}

// PostLoad @ 14e2e1380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASwitchActor::PostLoad(ASwitchActor *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FIdentityFunctor local_res8;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_18;
  
  AActor::PostLoad((AActor *)this);
  if (this->LastSelectedOption == -1) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    AActor::GetAttachedActors((AActor *)this,&local_18,false,false);
    AlgoImpl::
    IntroSortInternal<AActor_*,int,FIdentityFunctor,_ASwitchActor::GetOptions_::__l2::<lambda_1>_>
              ((AActor **)local_18.AllocatorInstance.Data,local_18.ArrayNum,local_res8,
               (<lambda_1>)local_res8);
    uVar5 = 0;
    uVar6 = 0xffffffff;
    if (0 < local_18.ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar5 < local_18.ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((*(longlong **)(*(longlong *)(local_18.AllocatorInstance.Data + lVar7) + 0x1b8) !=
              (longlong *)0x0) &&
            (cVar3 = (**(code **)(**(longlong **)
                                    (*(longlong *)(local_18.AllocatorInstance.Data + lVar7) + 0x1b8)
                                 + 0x560))(), cVar3 != '\0')) &&
           (bVar2 = uVar6 != 0xffffffff, uVar6 = uVar5, bVar2)) {
          uVar6 = 0xffffffff;
          break;
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar5 < local_18.ArrayNum);
    }
    this->LastSelectedOption = uVar6;
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// SelectOption @ 14e2e4910

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASwitchActor::SelectOption(ASwitchActor *this,int param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  ASwitchActor *this_00;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UClass *pUVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  FIdentityFunctor local_res10;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_48;
  FDestructionSentinel local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  AActor::GetAttachedActors((AActor *)this,&local_48,false,false);
  AlgoImpl::
  IntroSortInternal<AActor_*,int,FIdentityFunctor,_ASwitchActor::GetOptions_::__l2::<lambda_1>_>
            ((AActor **)local_48.AllocatorInstance.Data,local_48.ArrayNum,local_res10,
             (<lambda_1>)local_res10);
  if ((-1 < param_1) && (param_1 < local_48.ArrayNum)) {
    uVar11 = 0;
    bVar2 = *(byte *)(this->_padding_ + 0x1a8);
    if (0 < local_48.ArrayNum) {
      lVar13 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < local_48.ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        this_00 = *(ASwitchActor **)(local_48.AllocatorInstance.Data + lVar13);
        if (this_00 != (ASwitchActor *)0x0) {
          pUVar10 = StaticClass();
          iVar12 = (int)pUVar10->_padding_;
          if ((*(int *)(this_00->_padding_ + 0x38) < iVar12) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
              &pUVar10->_padding_)) {
            if ((USceneComponent *)this_00->_padding_ != (USceneComponent *)0x0) {
              if (((bVar2 & 0x20) == 0) || (uVar11 != param_1)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              USceneComponent::SetVisibility((USceneComponent *)this_00->_padding_,bVar6,Propagate);
            }
          }
          else {
            if (((bVar2 & 0x20) == 0) || (uVar11 != param_1)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            USceneComponent::SetVisibility((USceneComponent *)this_00->_padding_,bVar6,Propagate);
            SelectOption(this_00,this_00->LastSelectedOption);
          }
        }
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 8;
      } while ((int)uVar11 < local_48.ArrayNum);
    }
    this->LastSelectedOption = param_1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSwitchActorSwitch,
               (FWriteAccessScope *)&local_38);
    puVar1 = &(this->OnSwitchActorSwitch).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    iVar12 = *(int *)&(this->OnSwitchActorSwitch).field_0x10 + -1;
    if (-1 < iVar12) {
      lVar13 = (longlong)iVar12 << 4;
      bVar6 = false;
      do {
        if (*(int *)&(this->OnSwitchActorSwitch).field_0x10 <= iVar12) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        lVar3 = *(longlong *)&(this->OnSwitchActorSwitch).field_0x8;
        if ((*(int *)(lVar13 + 8 + lVar3) == 0) ||
           (plVar4 = *(longlong **)(lVar13 + lVar3), plVar4 == (longlong *)0x0)) {
LAB_14e2e4b2c:
          bVar6 = true;
        }
        else {
          cVar8 = (**(code **)(*plVar4 + 0x68))();
          if (cVar8 == '\0') goto LAB_14e2e4b2c;
        }
        lVar13 = lVar13 + -0x10;
        iVar12 = iVar12 + -1;
      } while (-1 < iVar12);
    }
    puVar1 = &(this->OnSwitchActorSwitch).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnSwitchActorSwitch,
                 false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// SetVisibility @ 14e2e6f20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASwitchActor::SetVisibility(ASwitchActor *this,bool param_1)

{
  USceneComponent::SetVisibility((USceneComponent *)this->_padding_,param_1,Propagate);
  SelectOption(this,this->LastSelectedOption);
  return;
}

// StaticRegisterNativesASwitchActor @ 14e2e6fb0

void __cdecl ASwitchActor::StaticRegisterNativesASwitchActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_ASwitchActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetOptions @ 14e2e87c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ASwitchActor::execGetOptions(UObject *param_1,FFrame *param_2,void *param_3)

{
  FIdentityFunctor local_res10;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AActor::GetAttachedActors((AActor *)param_1,&local_18,false,false);
  AlgoImpl::
  IntroSortInternal<AActor_*,int,FIdentityFunctor,_ASwitchActor::GetOptions_::__l2::<lambda_1>_>
            ((AActor **)local_18.AllocatorInstance.Data,local_18.ArrayNum,local_res10,
             (<lambda_1>)local_res10);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetSelectedOption @ 14e2e89d0

void __cdecl ASwitchActor::execGetSelectedOption(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x12].field_0x18;
  return;
}

// execSelectOption @ 14e2e9060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ASwitchActor::execSelectOption(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
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
  SelectOption((ASwitchActor *)param_1,local_res10[0]);
  return;
}


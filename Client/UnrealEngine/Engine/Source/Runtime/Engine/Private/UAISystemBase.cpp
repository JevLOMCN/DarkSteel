// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// UAISystemBase @ 14737c710

UAISystemBase * __thiscall UAISystemBase::UAISystemBase(UAISystemBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAISystemBase__6B_;
  *(undefined8 *)&this->AISystemClassName = 0;
  *(undefined8 *)&(this->AISystemClassName).field_0x8 = 0;
  *(undefined8 *)&(this->AISystemClassName).field_0x10 = 0;
  *(undefined8 *)&(this->AISystemClassName).field_0x18 = 0;
  (this->AISystemModuleName).ComparisonIndex = 0;
  (this->AISystemModuleName).Number = 0;
  (this->OnMatchStateSetHandle).ID = 0;
  return this;
}

// UAISystemBase @ 14737c760

UAISystemBase * __thiscall
UAISystemBase::UAISystemBase(UAISystemBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAISystemBase__6B_;
  *(undefined8 *)&this->AISystemClassName = 0;
  *(undefined8 *)&(this->AISystemClassName).field_0x8 = 0;
  *(undefined8 *)&(this->AISystemClassName).field_0x10 = 0;
  *(undefined8 *)&(this->AISystemClassName).field_0x18 = 0;
  (this->AISystemModuleName).ComparisonIndex = 0;
  (this->AISystemModuleName).Number = 0;
  (this->OnMatchStateSetHandle).ID = 0;
  return this;
}

// CleanupWorld @ 147386f80

void __thiscall UAISystemBase::CleanupWorld(UAISystemBase *this,bool param_1,bool param_2)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong64 *puVar5;
  uint uVar6;
  longlong lVar7;
  ForAnyElementType *this_00;
  FDestructionSentinel local_28;
  
  uVar1 = (this->OnMatchStateSetHandle).ID;
  if (uVar1 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FGameModeEvents::GameModeMatchStateSetEvent,(FWriteAccessScope *)&local_28);
    uVar6 = 0;
    if (0 < (int)FGameModeEvents::GameModeMatchStateSetEvent._16_4_) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (int)FGameModeEvents::GameModeMatchStateSetEvent._16_4_) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (ForAnyElementType *)(FGameModeEvents::GameModeMatchStateSetEvent._8_8_ + lVar7);
        if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
           && (puVar5 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
              *puVar5 == uVar1)) {
          if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_00->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
            *(undefined4 *)&this_00[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FGameModeEvents::GameModeMatchStateSetEvent,false);
          break;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar6 < (int)FGameModeEvents::GameModeMatchStateSetEvent._16_4_);
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
  }
  return;
}

// CleanupWorld @ 1473870d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UAISystemBase::CleanupWorld(UAISystemBase *this,bool param_1,bool param_2,UWorld *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001473870d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))();
  return;
}

// GetAISystemClassName @ 147397040

FSoftClassPath * __cdecl UAISystemBase::GetAISystemClassName(FSoftClassPath *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  UObject *pUVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  pUVar6 = StaticClass();
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pUVar8 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar8 != (UObject *)0x0) {
    pUVar6 = StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_1473970b0;
  }
  pUVar8 = (UObject *)0x0;
LAB_1473970b0:
  if (pUVar8 == (UObject *)0x0) {
    bVar5 = false;
    bVar4 = true;
    local_58 = 0;
    uStack_50 = 0;
    puVar7 = &local_58;
    local_48 = (void *)0x0;
    local_40 = 0;
  }
  else {
    bVar5 = true;
    bVar4 = false;
    iVar1 = *(int *)&pUVar8[1].field_0x18;
    _Src = *(void **)&pUVar8[1].field_0x10;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = iVar1;
    local_38 = *(undefined8 *)(pUVar8 + 1);
    uStack_30 = *(undefined8 *)&pUVar8[1].field_0x8;
    if (iVar1 == 0) {
      puVar7 = &local_38;
      local_1c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar1,0,&local_28,iVar1,&local_1c);
      memcpy(local_28.Data,_Src,(longlong)iVar1);
      puVar7 = &local_38;
    }
  }
  uVar2 = puVar7[2];
  uVar3 = puVar7[1];
  puVar7[2] = 0;
  *(undefined8 *)__return_storage_ptr__ = *puVar7;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar2;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = *(undefined4 *)(puVar7 + 3);
  puVar7[3] = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = *(undefined4 *)((longlong)puVar7 + 0x1c);
  if (bVar4) {
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
  }
  if ((bVar5) && (local_28.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data);
  }
  return __return_storage_ptr__;
}

// GetAISystemModuleName @ 1473971e0

FName __cdecl UAISystemBase::GetAISystemModuleName(void)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FName *pFVar4;
  FName in_RCX;
  FName local_res8;
  
  pUVar3 = StaticClass();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  pUVar2 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(undefined8 *)in_RCX = *(undefined8 *)&pUVar2[1].field_0x20;
      return in_RCX;
    }
  }
  pFVar4 = ::FName::FName(&local_res8,L"");
  *(FName *)in_RCX = *pFVar4;
  return in_RCX;
}

// GetPrivateStaticClass @ 1473a07c0

UClass * __cdecl UAISystemBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISystemBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AISystemBase",
               &Z_Registration_Info_UClass_UAISystemBase.InnerSingleton,
               StaticRegisterNativesUAISystemBase,0x60,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<UAISystemBase>,
               InternalVTableHelperCtorCaller<UAISystemBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISystemBase.InnerSingleton;
}

// OnMatchStateSet @ 1473aa5a0

void __thiscall UAISystemBase::OnMatchStateSet(UAISystemBase *this,FName param_1)

{
  return;
}

// ShouldInstantiateInNetMode @ 1473b8630

bool __cdecl UAISystemBase::ShouldInstantiateInNetMode(ENetMode param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar3 = StaticClass();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  pUVar2 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar3->_padding_)) && ((pUVar2[2].field_0x8 == '\x01' || (param_1 != NM_Client)))) {
      return true;
    }
  }
  return false;
}

// StartPlay @ 1473b8850

void __thiscall UAISystemBase::StartPlay(UAISystemBase *this)

{
  FDelegateHandle FVar1;
  
  FVar1 = TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::
          AddUObject<UAISystemBase>
                    ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>
                      *)&FGameModeEvents::GameModeMatchStateSetEvent,
                     (UAISystemBase *)&stack0x00000008,(pmf_c0736a55)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnMatchStateSetHandle).ID = *FVar1.ID;
  return;
}

// StaticRegisterNativesUAISystemBase @ 1473b88e0

void __cdecl UAISystemBase::StaticRegisterNativesUAISystemBase(void)

{
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 22

// StaticClass @ 146f83370

UClass * __cdecl UAISense_Blueprint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Blueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Blueprint",
               &Z_Registration_Info_UClass_UAISense_Blueprint.InnerSingleton,
               StaticRegisterNativesUAISense_Blueprint,0xb8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAISense_Blueprint>,
               InternalVTableHelperCtorCaller<UAISense_Blueprint>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Blueprint.InnerSingleton;
}

// UAISense_Blueprint @ 146f94370

UAISense_Blueprint * __thiscall
UAISense_Blueprint::UAISense_Blueprint(UAISense_Blueprint *this,FVTableHelper *param_1)

{
  UAISense::UAISense((UAISense *)this,param_1);
  this->_padding_ = (longlong)&___7UAISense_Blueprint__6B_;
  (this->ListenerDataType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ListenerContainer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ListenerContainer).ArrayNum = 0;
  (this->ListenerContainer).ArrayMax = 0;
  (this->UnprocessedEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnprocessedEvents).ArrayNum = 0;
  (this->UnprocessedEvents).ArrayMax = 0;
  return this;
}

// UAISense_Blueprint @ 146f943c0

UAISense_Blueprint * __thiscall
UAISense_Blueprint::UAISense_Blueprint(UAISense_Blueprint *this,FObjectInitializer *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FName *pFVar8;
  UFunction *pUVar9;
  UAISense_Blueprint *pUVar10;
  uchar *puVar11;
  longlong lVar12;
  uint local_res8 [2];
  TPairInitializer<FNameEntryId_const_&,FAINamedID<FAISenseCounter>_&&> local_res18;
  UAISense_Blueprint *local_c8;
  FAINamedID<FAISenseCounter> local_c0;
  FAINamedID<FAISenseCounter> local_b0;
  undefined1 local_a0 [4];
  longlong local_9c;
  uint *local_90;
  undefined1 *local_88;
  FDestructionSentinel local_80;
  longlong *local_68;
  FDestructionSentinel local_60;
  longlong *local_48;
  FName local_40;
  
  UAISense::UAISense((UAISense *)this,param_1);
  this->_padding_ = (longlong)&___7UAISense_Blueprint__6B_;
  (this->ListenerDataType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ListenerContainer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ListenerContainer).ArrayNum = 0;
  (this->ListenerContainer).ArrayMax = 0;
  (this->UnprocessedEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnprocessedEvents).ArrayNum = 0;
  (this->UnprocessedEvents).ArrayMax = 0;
  if ((this->_padding_ & 0x10) == 0) {
    if ((*(byte *)(this->_padding_ + 0xd4) & 1) == 0) {
      local_res8[0] = (uint)*(undefined8 *)(this->_padding_ + 0x18);
      uVar4 = ::GetTypeHash((FNameEntryId)local_res8[0]);
      if (BPSenseToSenseID._8_4_ != BPSenseToSenseID._52_4_) {
        lVar12 = 0x154c15918;
        if (BPSenseToSenseID._64_8_ != 0) {
          lVar12 = BPSenseToSenseID._64_8_;
        }
        iVar1 = *(int *)(lVar12 + (ulonglong)(BPSenseToSenseID._72_4_ - 1 & uVar4) * 4);
        while (iVar1 != -1) {
          lVar12 = BPSenseToSenseID._0_8_ + (longlong)iVar1 * 0x18;
          if (*(uint *)(BPSenseToSenseID._0_8_ + (longlong)iVar1 * 0x18) == local_res8[0]) {
            puVar11 = (uchar *)(lVar12 + 4);
            if (lVar12 == 0) {
              puVar11 = (uchar *)0x0;
            }
            if (puVar11 != (uchar *)0x0) {
              local_c0.Index = *puVar11;
              local_c0.Name = *(FName *)(puVar11 + 4);
              UAISense::ForceSenseID((UAISense *)this,&local_c0);
              goto LAB_146f9451a;
            }
            break;
          }
          iVar1 = *(int *)(lVar12 + 0x10);
        }
      }
      local_b0.Index = (uchar)FAINamedID<FAISenseCounter>::Counter;
      local_b0.Name = (FName)this->_padding_;
      FAINamedID<FAISenseCounter>::Counter =
           (FAISenseCounter)((char)FAINamedID<FAISenseCounter>::Counter + '\x01');
      UAISense::ForceSenseID((UAISense *)this,&local_b0);
      local_a0[0] = *(undefined1 *)((longlong)&this->_padding_ + 4);
      local_9c = this->_padding_;
      local_90 = local_res8;
      local_88 = local_a0;
      TSet<TTuple<FNameEntryId,FAINamedID<FAISenseCounter>_>,TDefaultMapHashableKeyFuncs<FNameEntryId,FAINamedID<FAISenseCounter>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FNameEntryId_const_&,FAINamedID<FAISenseCounter>_&&>_>
                ((TSet<TTuple<FNameEntryId,FAINamedID<FAISenseCounter>_>,TDefaultMapHashableKeyFuncs<FNameEntryId,FAINamedID<FAISenseCounter>,0>,FDefaultSetAllocator>
                  *)&BPSenseToSenseID,&local_res18,(bool *)&local_90);
    }
LAB_146f9451a:
    pUVar5 = GetPrivateStaticClass();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
               (FWriteAccessScope *)&local_80);
    local_68 = &this->_padding_;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_68);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Blueprint____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_res18.Value = (FAINamedID<FAISenseCounter> *)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res18.Value);
      puVar6[4] = OnNewListenerImpl;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
               (FWriteAccessScope *)&local_60);
    local_48 = &this->_padding_;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_48);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Blueprint____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_c8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_c8);
      puVar6[4] = OnListenerRemovedImpl;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    pFVar8 = ::FName::FName(&local_40,L"OnListenerUpdated");
    pUVar9 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar8,IncludeSuper);
    if (pUVar9 == (UFunction *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1455618344223768614>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Public\\BlueprintNodeHelpers.h"
                         ,0x26,"Function");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar10 = (UAISense_Blueprint *)(*pcVar2)();
        return pUVar10;
      }
    }
    else if ((UClass *)pUVar9->_padding_ != pUVar5) {
      TDelegateRegistration<void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>::
      BindUObject<UAISense_Blueprint>
                ((TDelegateRegistration<void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
                  *)&this->_padding_,this,(pmf_7a6ad8ca)0x146fbdf70);
    }
  }
  return this;
}

// ~UAISense_Blueprint @ 146f96b10

void __thiscall UAISense_Blueprint::~UAISense_Blueprint(UAISense_Blueprint *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAISense_Blueprint__6B_;
  pFVar1 = (this->UnprocessedEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ListenerContainer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UAISense__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetAllListenerActors @ 146fabc60

void __thiscall
UAISense_Blueprint::GetAllListenerActors
          (UAISense_Blueprint *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined8 local_38 [2];
  
  uVar10 = (this->ListenerContainer).ArrayNum + param_1->ArrayNum;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar10,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  pFVar9 = (this->ListenerContainer).AllocatorInstance.Data;
  iVar3 = (this->ListenerContainer).ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ListenerContainer).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UAIPerceptionComponent>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar2) break;
    pUVar4 = *(UObject **)pFVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    local_38[0] = *(undefined8 *)&pUVar4[4].field_0x8;
    pFVar5 = (param_1->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar5 + (longlong)*piVar1 * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,piVar1);
    }
    pFVar9 = pFVar9 + 8;
    param_1->ArrayNum = iVar8 + 1;
    *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_38[0];
  }
  return;
}

// GetAllListenerComponents @ 146fabe00

void __thiscall
UAISense_Blueprint::GetAllListenerComponents
          (UAISense_Blueprint *this,
          TArray<UAIPerceptionComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (param_1 !=
      (TArray<UAIPerceptionComponent_*,TSizedDefaultAllocator<32>_> *)&this->ListenerContainer) {
    _Src = (this->ListenerContainer).AllocatorInstance.Data;
    iVar1 = (this->ListenerContainer).ArrayNum;
    param_1->ArrayNum = iVar1;
    if ((iVar1 == 0) && (param_1->ArrayMax == 0)) {
      param_1->ArrayMax = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,param_1->ArrayMax,&param_1->AllocatorInstance,iVar1,&param_1->ArrayMax);
    if (iVar1 != 0) {
      memcpy((param_1->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return;
}

// GetPrivateStaticClass @ 146fb3b30

UClass * __cdecl UAISense_Blueprint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Blueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Blueprint",
               &Z_Registration_Info_UClass_UAISense_Blueprint.InnerSingleton,
               StaticRegisterNativesUAISense_Blueprint,0xb8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAISense_Blueprint>,
               InternalVTableHelperCtorCaller<UAISense_Blueprint>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Blueprint.InnerSingleton;
}

// K2_OnNewPawn @ 146fba3a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAISense_Blueprint::K2_OnNewPawn(UAISense_Blueprint *this,APawn *param_1)

{
  UFunction *pUVar1;
  APawn *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UAISense_Blueprint_K2_OnNewPawn);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// OnListenerRegistered @ 146fbda10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UAISense_Blueprint::OnListenerRegistered
          (UAISense_Blueprint *this,AActor *param_1,UAIPerceptionComponent *param_2)

{
  UFunction *pUVar1;
  AActor *local_18;
  UAIPerceptionComponent *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UAISense_Blueprint_OnListenerRegistered);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// OnListenerRemovedImpl @ 146fbdb20

void __thiscall
UAISense_Blueprint::OnListenerRemovedImpl(UAISense_Blueprint *this,FPerceptionListener *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UAIPerceptionComponent>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  UFunction *pUVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  undefined8 local_28;
  UObject *local_20;
  
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (pUVar8 != (UObject *)0x0) {
    pTVar2 = &this->ListenerContainer;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    iVar7 = (this->ListenerContainer).ArrayNum;
    for (pFVar12 = pFVar4; pFVar12 != pFVar4 + (longlong)iVar7 * 8; pFVar12 = pFVar12 + 8) {
      if (*(UObject **)pFVar12 == pUVar8) {
        uVar11 = (uint)((longlong)pFVar12 - (longlong)pFVar4 >> 3);
        if (uVar11 != 0xffffffff) {
          uVar10 = 0;
          if ((int)(uVar11 + 1) <= iVar7) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar3 = (this->ListenerContainer).ArrayNum;
          pFVar4 = (pTVar2->AllocatorInstance).Data;
          iVar7 = iVar3 + ~uVar11;
          if (1 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            memmove(pFVar4 + (longlong)(int)uVar11 * 8,pFVar4 + (longlong)(iVar3 - iVar7) * 8,
                    (longlong)iVar7 << 3);
          }
          piVar1 = &(this->ListenerContainer).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar2->AllocatorInstance,(this->ListenerContainer).ArrayNum,
                     &(this->ListenerContainer).ArrayMax);
        }
        break;
      }
    }
    local_28 = *(undefined8 *)&pUVar8[4].field_0x8;
    local_20 = pUVar8;
    pUVar9 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UAISense_Blueprint_OnListenerUnregistered);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar9,&local_28);
  }
  return;
}

// OnListenerUnregistered @ 146fbde70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UAISense_Blueprint::OnListenerUnregistered
          (UAISense_Blueprint *this,AActor *param_1,UAIPerceptionComponent *param_2)

{
  UFunction *pUVar1;
  AActor *local_18;
  UAIPerceptionComponent *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UAISense_Blueprint_OnListenerUnregistered);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// OnListenerUpdateImpl @ 146fbdf70

void __thiscall
UAISense_Blueprint::OnListenerUpdateImpl(UAISense_Blueprint *this,FPerceptionListener *param_1)

{
  UFunction *pUVar1;
  undefined8 local_18;
  UObject *local_10;
  
  local_10 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (local_10 != (UObject *)0x0) {
    local_18 = *(undefined8 *)&local_10[4].field_0x8;
    pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UAISense_Blueprint_OnListenerUpdated)
    ;
    (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  }
  return;
}

// OnListenerUpdated @ 146fbeb30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UAISense_Blueprint::OnListenerUpdated
          (UAISense_Blueprint *this,AActor *param_1,UAIPerceptionComponent *param_2)

{
  UFunction *pUVar1;
  AActor *local_18;
  UAIPerceptionComponent *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UAISense_Blueprint_OnListenerUpdated);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// OnNewListenerImpl @ 146fbf710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UAISense_Blueprint::OnNewListenerImpl(UAISense_Blueprint *this,FPerceptionListener *param_1)

{
  TObjectPtr<UAIPerceptionComponent>_u_0 TVar1;
  UFunction *pUVar2;
  TObjectPtr<UAIPerceptionComponent>_u_0 local_res10 [3];
  longlong local_18;
  TObjectPtr<UAIPerceptionComponent>_u_0 local_10;
  
  TVar1.DebugPtr = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (TVar1.DebugPtr != (UAIPerceptionComponent *)0x0) {
    local_res10[0].DebugPtr = TVar1.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    TArray<TObjectPtr<UAIPerceptionComponent>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<UAIPerceptionComponent>_>
              (&this->ListenerContainer,
               (TObjectPtr<UAIPerceptionComponent> *)&local_res10[0].ObjectPtr);
    local_18 = (TVar1.DebugPtr)->_padding_;
    local_10.DebugPtr = TVar1.DebugPtr;
    pUVar2 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UAISense_Blueprint_OnListenerRegistered);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_18);
    *(undefined4 *)&this->_padding_ = 0;
  }
  return;
}

// OnNewPawn @ 146fbfec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAISense_Blueprint::OnNewPawn(UAISense_Blueprint *this,APawn *param_1)

{
  UFunction *pUVar1;
  APawn *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UAISense_Blueprint_K2_OnNewPawn);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// OnUpdate @ 146fc1f30

float __thiscall
UAISense_Blueprint::OnUpdate
          (UAISense_Blueprint *this,TArray<UAISenseEvent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  float fVar2;
  UFunction *pUVar3;
  TArray<UAISenseEvent_*,TSizedDefaultAllocator<32>_> local_38;
  float local_28;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_28 = 0.0;
  if (&local_38 != param_1) {
    uVar1 = param_1->ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    local_38.ArrayMax = 0;
    local_38.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,0,&local_38.AllocatorInstance,uVar1,&local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 << 3);
    }
  }
  pUVar3 = UObject::FindFunctionChecked((UObject *)this,NAME_UAISense_Blueprint_OnUpdate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_38);
  fVar2 = local_28;
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return fVar2;
}

// RegisterWrappedEvent @ 146fc96a0

void __thiscall
UAISense_Blueprint::RegisterWrappedEvent(UAISense_Blueprint *this,UAISenseEvent *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UAISenseEvent>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UAISenseEvent *local_18 [2];
  
  pTVar2 = &this->UnprocessedEvents;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAISenseEvent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(this->UnprocessedEvents).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->UnprocessedEvents).ArrayNum;
  piVar1 = &(this->UnprocessedEvents).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->UnprocessedEvents).ArrayNum = iVar6 + 1;
  *(UAISenseEvent **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UAISenseEvent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  *(undefined4 *)&this->_padding_ = 0;
  return;
}

// StaticRegisterNativesUAISense_Blueprint @ 146fd3570

void __cdecl UAISense_Blueprint::StaticRegisterNativesUAISense_Blueprint(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAISense_Blueprint_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Update @ 146fdba60

float __thiscall UAISense_Blueprint::Update(UAISense_Blueprint *this)

{
  TArray<TObjectPtr<UAISenseEvent>,TSizedDefaultAllocator<32>_> *pTVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  float fVar3;
  UFunction *pUVar4;
  ForAnyElementType local_38;
  undefined8 local_30;
  float local_28;
  
  pTVar1 = &this->UnprocessedEvents;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  local_28 = 0.0;
  if ((TArray<TObjectPtr<UAISenseEvent>,TSizedDefaultAllocator<32>_> *)&local_38 != pTVar1) {
    _Src = (pTVar1->AllocatorInstance).Data;
    uVar2 = (this->UnprocessedEvents).ArrayNum;
    local_30 = (ulonglong)uVar2;
    if (uVar2 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,0,&local_38,uVar2,(int *)((longlong)&local_30 + 4));
      memcpy(local_38.Data,_Src,(longlong)(int)uVar2 << 3);
    }
  }
  pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_UAISense_Blueprint_OnUpdate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4);
  fVar3 = local_28;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  (this->UnprocessedEvents).ArrayNum = 0;
  if ((this->UnprocessedEvents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->UnprocessedEvents).ArrayMax);
  }
  return fVar3;
}

// UpdateSenseID @ 146fe2da0

FAINamedID<FAISenseCounter> * __thiscall
UAISense_Blueprint::UpdateSenseID
          (UAISense_Blueprint *this,FAINamedID<FAISenseCounter> *__return_storage_ptr__)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uchar *puVar4;
  longlong lVar5;
  uint local_res8 [4];
  FAINamedID<FAISenseCounter> local_28;
  uint *local_18;
  FAINamedID<FAISenseCounter> *local_10;
  
  if ((*(byte *)(this->_padding_ + 0xd4) & 1) == 0) {
    local_res8[0] = (uint)*(undefined8 *)(this->_padding_ + 0x18);
    uVar3 = ::GetTypeHash((FNameEntryId)local_res8[0]);
    if (BPSenseToSenseID._8_4_ != BPSenseToSenseID._52_4_) {
      lVar5 = 0x154c15918;
      if (BPSenseToSenseID._64_8_ != 0) {
        lVar5 = BPSenseToSenseID._64_8_;
      }
      iVar1 = *(int *)(lVar5 + (ulonglong)(BPSenseToSenseID._72_4_ - 1 & uVar3) * 4);
      while (iVar1 != -1) {
        lVar5 = BPSenseToSenseID._0_8_ + (longlong)iVar1 * 0x18;
        if (*(uint *)(BPSenseToSenseID._0_8_ + (longlong)iVar1 * 0x18) == local_res8[0]) {
          puVar4 = (uchar *)(lVar5 + 4);
          if (lVar5 == 0) {
            puVar4 = (uchar *)0x0;
          }
          if (puVar4 != (uchar *)0x0) {
            local_28.Index = *puVar4;
            local_28.Name = *(FName *)(puVar4 + 4);
            UAISense::ForceSenseID((UAISense *)this,&local_28);
            goto LAB_146fe2ea5;
          }
          break;
        }
        iVar1 = *(int *)(lVar5 + 0x10);
      }
    }
    local_28.Index = (uchar)FAINamedID<FAISenseCounter>::Counter;
    local_28.Name = (FName)this->_padding_;
    FAINamedID<FAISenseCounter>::Counter =
         (FAISenseCounter)((char)FAINamedID<FAISenseCounter>::Counter + '\x01');
    UAISense::ForceSenseID((UAISense *)this,&local_28);
    local_28.Index = *(uchar *)((longlong)&this->_padding_ + 4);
    local_28.Name = (FName)this->_padding_;
    local_18 = local_res8;
    local_10 = &local_28;
    TSet<TTuple<FNameEntryId,FAINamedID<FAISenseCounter>_>,TDefaultMapHashableKeyFuncs<FNameEntryId,FAINamedID<FAISenseCounter>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FNameEntryId_const_&,FAINamedID<FAISenseCounter>_&&>_>
              ((TSet<TTuple<FNameEntryId,FAINamedID<FAISenseCounter>_>,TDefaultMapHashableKeyFuncs<FNameEntryId,FAINamedID<FAISenseCounter>,0>,FDefaultSetAllocator>
                *)&BPSenseToSenseID,
               (TPairInitializer<FNameEntryId_const_&,FAINamedID<FAISenseCounter>_&&> *)
               (local_res8 + 2),(bool *)&local_18);
  }
LAB_146fe2ea5:
  __return_storage_ptr__->Index = *(uchar *)((longlong)&this->_padding_ + 4);
  uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (__return_storage_ptr__->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (__return_storage_ptr__->Name).Number = uVar2;
  return __return_storage_ptr__;
}

// execGetAllListenerActors @ 146fe5080

void __cdecl
UAISense_Blueprint::execGetAllListenerActors(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FProperty *pFVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  ForAnyElementType *pFVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined8 local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  pFVar10 = &local_40;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar10 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar11 = *(int *)(param_1 + 4) + *(int *)&pFVar10[1].Data;
  if (-1 < (int)uVar11) {
    piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
    if (*piVar1 < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,pFVar10,*(int *)&pFVar10[1].Data,piVar1);
    }
    puVar9 = *(undefined8 **)&param_1[3].field_0x20;
    iVar3 = *(int *)(param_1 + 4);
    puVar2 = puVar9 + iVar3;
    while( true ) {
      if (*(int *)(param_1 + 4) != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UAIPerceptionComponent>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (puVar9 == puVar2) break;
      pUVar5 = (UObject *)*puVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_48 = *(undefined8 *)&pUVar5[4].field_0x8;
      if ((pFVar10->Data <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 < pFVar10->Data + (longlong)*piVar1 * 8)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = *(int *)&pFVar10[1].Data;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar10,piVar1);
      }
      puVar9 = puVar9 + 1;
      *(int *)&pFVar10[1].Data = iVar8 + 1;
      *(undefined8 *)(pFVar10->Data + (longlong)iVar8 * 8) = local_48;
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
}

// execGetAllListenerComponents @ 146fe5290

void __cdecl
UAISense_Blueprint::execGetAllListenerComponents(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FProperty *pFVar4;
  void *_Src;
  ForAnyElementType *pFVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar5 = &local_18;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar5 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pFVar5 != (ForAnyElementType *)&param_1[3].field_0x20) {
    iVar2 = *(int *)(param_1 + 4);
    piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
    _Src = *(void **)&param_1[3].field_0x20;
    iVar3 = *piVar1;
    *(int *)&pFVar5[1].Data = iVar2;
    if ((iVar2 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,iVar3,pFVar5,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy(pFVar5->Data,_Src,(longlong)iVar2 << 3);
      }
    }
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}


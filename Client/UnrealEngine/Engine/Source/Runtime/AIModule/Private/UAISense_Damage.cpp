// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 11

// StaticClass @ 146f82ab0

UClass * __cdecl UAISense_Damage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Damage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Damage",
               &Z_Registration_Info_UClass_UAISense_Damage.InnerSingleton,
               StaticRegisterNativesUAISense_Damage,0xa0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAISense_Damage>,
               InternalVTableHelperCtorCaller<UAISense_Damage>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Damage.InnerSingleton;
}

// UAISense_Damage @ 146f94730

UAISense_Damage * __thiscall
UAISense_Damage::UAISense_Damage(UAISense_Damage *this,FVTableHelper *param_1)

{
  UAISense::UAISense((UAISense *)this,param_1);
  this->_padding_ = (longlong)&___7UAISense_Damage__6B_;
  (this->RegisteredEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredEvents).ArrayNum = 0;
  (this->RegisteredEvents).ArrayMax = 0;
  return this;
}

// UAISense_Damage @ 146f94770

UAISense_Damage * __thiscall
UAISense_Damage::UAISense_Damage(UAISense_Damage *this,FObjectInitializer *param_1)

{
  UAISense::UAISense((UAISense *)this,param_1);
  this->_padding_ = (longlong)&___7UAISense_Damage__6B_;
  (this->RegisteredEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredEvents).ArrayNum = 0;
  (this->RegisteredEvents).ArrayMax = 0;
  return this;
}

// ~UAISense_Damage @ 146f96b80

void __thiscall UAISense_Damage::~UAISense_Damage(UAISense_Damage *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAISense_Damage__6B_;
  pFVar1 = (this->RegisteredEvents).AllocatorInstance.Data;
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

// GetPrivateStaticClass @ 146fb3bf0

UClass * __cdecl UAISense_Damage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Damage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Damage",
               &Z_Registration_Info_UClass_UAISense_Damage.InnerSingleton,
               StaticRegisterNativesUAISense_Damage,0xa0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAISense_Damage>,
               InternalVTableHelperCtorCaller<UAISense_Damage>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Damage.InnerSingleton;
}

// RegisterEvent @ 146fc72a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAISense_Damage::RegisterEvent(UAISense_Damage *this,FAIDamageEvent *param_1)

{
  int *piVar1;
  TArray<FAIDamageEvent,TSizedDefaultAllocator<32>_> *pTVar2;
  FAIDamageEvent *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if ((param_1->DamagedActor).field0_0x0.DebugPtr != (AActor *)0x0) {
    pTVar2 = &this->RegisteredEvents;
    pFVar3 = (FAIDamageEvent *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->RegisteredEvents).ArrayMax)) {
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
    iVar6 = (this->RegisteredEvents).ArrayNum;
    piVar1 = &(this->RegisteredEvents).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->RegisteredEvents).ArrayNum = iVar6 + 1;
    FAIDamageEvent::FAIDamageEvent
              ((FAIDamageEvent *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x50),param_1
              );
    *(undefined4 *)&this->_padding_ = 0;
  }
  return;
}

// RegisterWrappedEvent @ 146fc97a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAISense_Damage::RegisterWrappedEvent(UAISense_Damage *this,UAISenseEvent *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FAIDamageEvent local_58;
  
  if (param_1 != (UAISenseEvent *)0x0) {
    pUVar4 = Z_Construct_UClass_UAISenseEvent_Damage_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      FAIDamageEvent::Compile((FAIDamageEvent *)(param_1 + 1));
      local_58.Location.field0_0x0._s_0.X = (double)*(undefined8 *)&param_1[1].field_0x8;
      local_58.Location.field0_0x0._s_0.Y = (double)*(undefined8 *)&param_1[1].field_0x10;
      local_58.Amount = *(float *)(param_1 + 1);
      local_58.DamagedActor.field0_0x0 =
           (TObjectPtr<AActor>_u_0)*(TObjectPtr<AActor>_u_0 *)&param_1[2].field_0x10;
      local_58.Location.field0_0x0._s_0.Z = (double)*(undefined8 *)&param_1[1].field_0x18;
      local_58.HitLocation.field0_0x0._s_0.Z = (double)*(undefined8 *)&param_1[2].field_0x8;
      local_58.HitLocation.field0_0x0._s_0.X = (double)*(undefined8 *)&param_1[1].field_0x20;
      local_58.HitLocation.field0_0x0._s_0.Y = (double)*(undefined8 *)(param_1 + 2);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_58.DamagedActor.field0_0x0.DebugPtr != (TObjectPtr<AActor>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_58.DamagedActor.field0_0x0);
      }
      local_58.Instigator.field0_0x0 =
           (TObjectPtr<AActor>_u_0)*(TObjectPtr<AActor>_u_0 *)&param_1[2].field_0x18;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_58.Instigator.field0_0x0.DebugPtr != (TObjectPtr<AActor>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_58.Instigator.field0_0x0);
      }
      local_58.Tag.ComparisonIndex.Value = *(uint *)&param_1[2].field_0x20;
      local_58.Tag.Number = *(uint *)&param_1[2].field_0x24;
      RegisterEvent(this,&local_58);
      return;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_217673134449360773>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Damage.cpp"
                     ,0x7b,"DamageEvent");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// ReportDamageEvent @ 146fcc290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UAISense_Damage::ReportDamageEvent
          (UObject *param_1,AActor *param_2,AActor *param_3,float param_4,TVector<double> *param_5,
          TVector<double> *param_6,FName param_7)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  UAIPerceptionSystem *pUVar4;
  UClass *this;
  FAIDamageEvent local_68;
  
  pUVar4 = UAIPerceptionSystem::GetCurrent(param_1);
  if (pUVar4 != (UAIPerceptionSystem *)0x0) {
    local_68.Location.field0_0x0._s_0.Z = (param_5->field0_0x0)._s_0.Z;
    local_68.Location.field0_0x0._s_0.X = (param_5->field0_0x0)._s_0.X;
    local_68.Location.field0_0x0._s_0.Y = (param_5->field0_0x0)._s_0.Y;
    local_68.HitLocation.field0_0x0._s_0.Z = (param_6->field0_0x0)._s_0.Z;
    local_68.HitLocation.field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
    local_68.HitLocation.field0_0x0._s_0.Y = (param_6->field0_0x0)._s_0.Y;
    local_68.Amount = param_4;
    local_68.DamagedActor.field0_0x0 = (TObjectPtr<AActor>_u_0)param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_68.Instigator.field0_0x0 = (TObjectPtr<AActor>_u_0)param_3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    local_68.Tag = param_7;
    FAIDamageEvent::Compile(&local_68);
    this = StaticClass();
    if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this);
    }
    bVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x14;
    if ((int)(uint)bVar1 < (pUVar4->Senses).ArrayNum) {
      if ((pUVar4->Senses).ArrayNum <= (int)(uint)bVar1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (*(longlong *)((pUVar4->Senses).AllocatorInstance.Data + (ulonglong)bVar1 * 8) != 0) {
        if ((pUVar4->Senses).ArrayNum <= (int)(uint)bVar1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        RegisterEvent(*(UAISense_Damage **)
                       ((pUVar4->Senses).AllocatorInstance.Data + (ulonglong)bVar1 * 8),&local_68);
      }
    }
  }
  return;
}

// StaticRegisterNativesUAISense_Damage @ 146fd35b0

void __cdecl UAISense_Damage::StaticRegisterNativesUAISense_Damage(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAISense_Damage_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Update @ 146fdbb90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall UAISense_Damage::Update(UAISense_Damage *this)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  UObjectBaseUtility *pUVar4;
  AActor *pAVar5;
  code *pcVar6;
  bool bVar7;
  UClass *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  UAIPerceptionComponent *this_00;
  uint uVar11;
  uint *puVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  undefined1 local_res8 [8];
  FAIStimulus local_98;
  
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PerceptionSystemInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense.cpp"
                         ,0x40,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    fVar16 = (float)(*pcVar6)();
    return fVar16;
  }
  fVar16 = __real_7f7fffff;
  iVar1 = (this->RegisteredEvents).ArrayNum;
  pFVar13 = (this->RegisteredEvents).AllocatorInstance.Data;
  lVar3 = this->_padding_;
  pFVar15 = pFVar13 + (longlong)iVar1 * 0x50;
  do {
    if ((this->RegisteredEvents).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FAIDamageEvent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar13 == pFVar15) {
      (this->RegisteredEvents).ArrayNum = 0;
      if ((this->RegisteredEvents).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,0,&(this->RegisteredEvents).AllocatorInstance,0,
                   &(this->RegisteredEvents).ArrayMax);
      }
      return fVar16;
    }
    pUVar4 = *(UObjectBaseUtility **)(pFVar13 + 0x38);
    if (pUVar4 != (UObjectBaseUtility *)0x0) {
      pUVar8 = UAIPerceptionListenerInterface::StaticClass();
      plVar9 = UObjectBaseUtility::GetInterfaceAddress(pUVar4,pUVar8);
      if (plVar9 == (longlong *)0x0) {
        if (*(longlong *)(pFVar13 + 0x38) != 0) {
          pUVar8 = Z_Construct_UClass_APawn_NoRegister();
          bVar7 = FObjectPtr::IsA((FObjectPtr *)(pFVar13 + 0x38),pUVar8);
          if ((bVar7) && (*(longlong *)(pFVar13 + 0x38) != 0)) {
            pUVar4 = *(UObjectBaseUtility **)(*(longlong *)(pFVar13 + 0x38) + 0x2f0);
            if (pUVar4 == (UObjectBaseUtility *)0x0) {
              plVar9 = (longlong *)0x0;
            }
            else {
              pUVar8 = UAIPerceptionListenerInterface::StaticClass();
              plVar9 = UObjectBaseUtility::GetInterfaceAddress(pUVar4,pUVar8);
            }
            if (plVar9 != (longlong *)0x0) goto LAB_146fdbcbb;
          }
        }
      }
      else {
LAB_146fdbcbb:
        lVar10 = (**(code **)(*plVar9 + 0x10))();
        if (lVar10 != 0) {
          iVar2 = *(int *)(lVar10 + 0xf4);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_static_struct_FAIGenericID<struct_FPerceptionListenerCounter>___cdecl_FAIGenericID<FPerceptionListenerCounter>::InvalidID(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_static_struct_FAIGenericID<struct_FPerceptionListenerCounter>___cdecl_FAIGenericID<FPerceptionListenerCounter>::InvalidID(void)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_static_struct_FAIGenericID<struct_FPerceptionListenerCounter>___cdecl_FAIGenericID<FPerceptionListenerCounter>::InvalidID(void)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            _InvalidIDInstance = -1;
            _Init_thread_footer(&`public:_static_struct_FAIGenericID<struct_FPerceptionListenerCounter>___cdecl_FAIGenericID<FPerceptionListenerCounter>::InvalidID(void)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          if (iVar2 != _InvalidIDInstance) {
            if (*(int *)(lVar3 + 0x40) != *(int *)(lVar3 + 0x6c)) {
              lVar14 = lVar3 + 0x70;
              if (*(longlong *)(lVar3 + 0x78) != 0) {
                lVar14 = *(longlong *)(lVar3 + 0x78);
              }
              uVar11 = *(uint *)(lVar14 + (ulonglong)
                                          (*(int *)(lVar3 + 0x80) - 1U & *(uint *)(lVar10 + 0xf4)) *
                                          4);
              if (uVar11 != 0xffffffff) {
                do {
                  puVar12 = (uint *)((longlong)(int)uVar11 * 0x60 + *(longlong *)(lVar3 + 0x38));
                  if (*puVar12 == *(uint *)(lVar10 + 0xf4)) {
                    if (puVar12 == (uint *)0x0) goto LAB_146fdbd60;
                    goto LAB_146fdbd86;
                  }
                  uVar11 = puVar12[0x16];
                } while (uVar11 != 0xffffffff);
              }
            }
            puVar12 = (uint *)0x0;
LAB_146fdbd60:
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L"");
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              fVar16 = (float)(*pcVar6)();
              return fVar16;
            }
LAB_146fdbd86:
            if ((puVar12[4] >> (*(byte *)((longlong)&this->_padding_ + 4) & 0x1f) & 1) != 0) {
              local_98.StimulusLocation.field0_0x0._s_0.X = (double)*(undefined8 *)(pFVar13 + 8);
              local_98.StimulusLocation.field0_0x0._s_0.Y = (double)*(undefined8 *)(pFVar13 + 0x10);
              local_98.Tag = *(FName *)(pFVar13 + 0x48);
              local_98.Strength = *(float *)pFVar13;
              local_98.StimulusLocation.field0_0x0._s_0.Z = (double)*(undefined8 *)(pFVar13 + 0x18);
              local_98.Age = 0.0;
              local_98.ReceiverLocation.field0_0x0._s_0.X = (double)*(undefined8 *)(pFVar13 + 0x20);
              local_98.ReceiverLocation.field0_0x0._s_0.Y = (double)*(undefined8 *)(pFVar13 + 0x28);
              local_98.ExpirationAge = 3.4028235e+38;
              local_98.ReceiverLocation.field0_0x0._s_0.Z = (double)*(undefined8 *)(pFVar13 + 0x30);
              local_98.Type.Index = 0xff;
              ::FName::FName(&local_98.Type.Name,L"Invalid");
              pAVar5 = *(AActor **)(pFVar13 + 0x40);
              local_98._84_4_ = ((char)this->_padding_ == '\x01') + 2 | local_98._84_4_ & 0xfffffffa
              ;
              local_98.Type.Index = *(uchar *)((longlong)&this->_padding_ + 4);
              local_98.Type.Name = (FName)this->_padding_;
              puVar12[0x13] = puVar12[0x13] | 1;
              this_00 = (UAIPerceptionComponent *)
                        FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar12 + 2));
              UAIPerceptionComponent::RegisterStimulus(this_00,pAVar5,&local_98);
            }
          }
        }
      }
    }
    pFVar13 = pFVar13 + 0x50;
  } while( true );
}

// execReportDamageEvent @ 146fe6a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UAISense_Damage::execReportDamageEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  ForAnyElementType *pFVar2;
  byte bVar3;
  FProperty *pFVar4;
  UAISystemBase *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  UClass *pUVar15;
  UWorld *pUVar16;
  longlong lVar17;
  FString *pFVar18;
  char cVar19;
  wchar_t *pwVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  UObject *local_158;
  UObject *local_150;
  UWorld *local_148 [2];
  undefined4 local_138 [2];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  double local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  UObject *local_100;
  UObject *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  double local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  FString local_a0;
  FString local_90 [6];
  
  lVar21 = 0;
  local_148[0] = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  local_150 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_158 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar16 = local_148[0];
  pUVar11 = local_150;
  pUVar10 = local_158;
  uVar9 = local_res20;
  uVar8 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_148[0] != (UWorld *)0x0) {
    pUVar15 = Z_Construct_UClass_UWorld_NoRegister();
    iVar14 = (int)pUVar15->_padding_;
    if ((((iVar14 <= *(int *)(pUVar16->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
          &pUVar15->_padding_)) ||
        (pUVar16 = UEngine::GetWorldFromContextObject(GEngine,(UObject *)pUVar16,LogAndReturnNull),
        pUVar16 != (UWorld *)0x0)) &&
       (pUVar5 = (pUVar16->AISystem).field0_0x0.DebugPtr, pUVar5 != (UAISystemBase *)0x0)) {
      pUVar15 = Z_Construct_UClass_UAISystem_NoRegister();
      iVar14 = (int)pUVar15->_padding_;
      if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar14) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
          &pUVar15->_padding_)) {
        pFVar18 = GetTypeName<UAISystem>(&local_a0);
        pwVar20 = L"";
        if ((pFVar18->Data).ArrayNum == 0) {
          pwVar22 = L"";
        }
        else {
          pwVar22 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
        }
        pFVar18 = GetFullNameForCastLogError<UAISystemBase>(local_90,pUVar5);
        if ((pFVar18->Data).ArrayNum != 0) {
          pwVar20 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar20,pwVar22);
      }
      lVar21 = *(longlong *)&pUVar5[2].bInstantiateAISystemOnClient;
    }
  }
  if (lVar21 != 0) {
    local_138[0] = uVar8;
    local_120 = local_c0;
    local_118 = local_e8;
    uStack_114 = uStack_e4;
    uStack_110 = uStack_e0;
    uStack_10c = uStack_dc;
    local_108 = local_d8;
    local_100 = pUVar11;
    local_130 = local_d0;
    uStack_12c = uStack_cc;
    uStack_128 = uStack_c8;
    uStack_124 = uStack_c4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    local_f8 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    local_f0 = uVar9;
    if (local_100 != (UObject *)0x0) {
      if (((((double)CONCAT44(uStack_114,local_118) < __real_c7efffffe0000000 ||
             (double)CONCAT44(uStack_114,local_118) == __real_c7efffffe0000000) ||
           (__real_47efffffe0000000 <= (double)CONCAT44(uStack_114,local_118))) ||
          ((double)CONCAT44(uStack_10c,uStack_110) <= __real_c7efffffe0000000)) ||
         (((__real_47efffffe0000000 <= (double)CONCAT44(uStack_10c,uStack_110) ||
           (local_108 <= __real_c7efffffe0000000)) || (__real_47efffffe0000000 <= local_108)))) {
        cVar12 = '\0';
      }
      else {
        cVar12 = '\x01';
      }
      if ((((double)CONCAT44(uStack_12c,local_130) < __real_c7efffffe0000000 ||
            (double)CONCAT44(uStack_12c,local_130) == __real_c7efffffe0000000) ||
          (__real_47efffffe0000000 <= (double)CONCAT44(uStack_12c,local_130))) ||
         (((double)CONCAT44(uStack_124,uStack_128) <= __real_c7efffffe0000000 ||
          (((__real_47efffffe0000000 <= (double)CONCAT44(uStack_124,uStack_128) ||
            (local_120 <= __real_c7efffffe0000000)) || (__real_47efffffe0000000 <= local_120)))))) {
        cVar19 = '\0';
      }
      else {
        cVar19 = '\x01';
      }
      if (cVar12 == cVar19) {
        if (((cVar12 == '\0') && (cVar19 == '\0')) &&
           (lVar17 = *(longlong *)(local_100 + 0xb),
           local_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_,
           uStack_12c = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
           uStack_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_,
           uStack_124 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
           local_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
           local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_,
           uStack_114 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
           uStack_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_,
           uStack_10c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
           local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, lVar17 != 0)) {
          local_120 = *(double *)(lVar17 + 0x220);
          local_130 = *(undefined4 *)(lVar17 + 0x210);
          uStack_12c = *(undefined4 *)(lVar17 + 0x214);
          uStack_128 = *(undefined4 *)(lVar17 + 0x218);
          uStack_124 = *(undefined4 *)(lVar17 + 0x21c);
          local_118 = local_130;
          uStack_114 = uStack_12c;
          uStack_110 = uStack_128;
          uStack_10c = uStack_124;
          local_108 = local_120;
          local_b8 = local_130;
          uStack_b4 = uStack_12c;
          uStack_b0 = uStack_128;
          uStack_ac = uStack_124;
          local_a8 = local_120;
        }
      }
      else if (cVar12 == '\0') {
        local_120 = local_108;
        local_130 = local_118;
        uStack_12c = uStack_114;
        uStack_128 = uStack_110;
        uStack_124 = uStack_10c;
      }
      else {
        local_108 = local_120;
        local_118 = local_130;
        uStack_114 = uStack_12c;
        uStack_110 = uStack_128;
        uStack_10c = uStack_124;
      }
    }
    pUVar15 = StaticClass();
    if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar15);
    }
    bVar3 = (pUVar15->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x14;
    if ((int)(uint)bVar3 < *(int *)(lVar21 + 0x90)) {
      if ((*(int *)(lVar21 + 0x90) <= (int)(uint)bVar3) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(longlong *)(*(longlong *)(lVar21 + 0x88) + (ulonglong)bVar3 * 8) != 0) {
        if ((*(int *)(lVar21 + 0x90) <= (int)(uint)bVar3) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar21 = *(longlong *)(*(longlong *)(lVar21 + 0x88) + (ulonglong)bVar3 * 8);
        if (local_100 != (UObject *)0x0) {
          pFVar2 = (ForAnyElementType *)(lVar21 + 0x90);
          if (((pFVar2->Data <= (FScriptContainerElement *)local_138) &&
              ((FScriptContainerElement *)local_138 <
               pFVar2->Data + (longlong)*(int *)(lVar21 + 0x9c) * 0x50)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar14 = *(int *)(lVar21 + 0x98);
          if (iVar14 == *(int *)(lVar21 + 0x9c)) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x850,pFVar2,(int *)(lVar21 + 0x9c));
          }
          lVar17 = (longlong)iVar14;
          *(int *)(lVar21 + 0x98) = iVar14 + 1;
          pFVar6 = pFVar2->Data;
          *(undefined4 *)(pFVar6 + lVar17 * 0x50) = local_138[0];
          *(ulonglong *)(pFVar6 + lVar17 * 0x50 + 8) = CONCAT44(uStack_12c,local_130);
          *(ulonglong *)(pFVar6 + lVar17 * 0x50 + 8 + 8) = CONCAT44(uStack_124,uStack_128);
          *(double *)(pFVar6 + lVar17 * 0x50 + 0x18) = local_120;
          *(ulonglong *)(pFVar6 + lVar17 * 0x50 + 0x20) = CONCAT44(uStack_114,local_118);
          *(ulonglong *)(pFVar6 + lVar17 * 0x50 + 0x20 + 8) = CONCAT44(uStack_10c,uStack_110);
          *(double *)(pFVar6 + lVar17 * 0x50 + 0x30) = local_108;
          *(UObject **)(pFVar6 + lVar17 * 0x50 + 0x38) = local_100;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_100 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_100);
          }
          *(UObject **)(pFVar6 + lVar17 * 0x50 + 0x40) = local_f8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_f8);
          }
          *(undefined8 *)(pFVar6 + lVar17 * 0x50 + 0x48) = local_f0;
          *(undefined4 *)(lVar21 + 0x38) = 0;
        }
      }
    }
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 148766c90

UClass * __cdecl AServerStreamingLevelsVisibility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AServerStreamingLevelsVisibility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ServerStreamingLevelsVisibility",
               &Z_Registration_Info_UClass_AServerStreamingLevelsVisibility.InnerSingleton,
               StaticRegisterNativesAServerStreamingLevelsVisibility,0x310,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AServerStreamingLevelsVisibility>,
               InternalVTableHelperCtorCaller<AServerStreamingLevelsVisibility>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AServerStreamingLevelsVisibility.InnerSingleton;
}

// AServerStreamingLevelsVisibility @ 148776730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AServerStreamingLevelsVisibility * __thiscall
AServerStreamingLevelsVisibility::AServerStreamingLevelsVisibility
          (AServerStreamingLevelsVisibility *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AServerStreamingLevelsVisibility__6B_;
  *(undefined8 *)&this->ServerVisibleStreamingLevels = 0;
  *(undefined8 *)&(this->ServerVisibleStreamingLevels).field_0x8 = 0;
  *(undefined8 *)&(this->ServerVisibleStreamingLevels).field_0x20 = 0;
  *(undefined4 *)&(this->ServerVisibleStreamingLevels).field_0x28 = 0;
  *(undefined4 *)&(this->ServerVisibleStreamingLevels).field_0x2c = 0x80;
  *(undefined4 *)&(this->ServerVisibleStreamingLevels).field_0x34 = 0;
  *(undefined4 *)&(this->ServerVisibleStreamingLevels).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ServerVisibleStreamingLevels).field_0x40 = 0;
  *(undefined4 *)&(this->ServerVisibleStreamingLevels).field_0x48 = 0;
  return this;
}

// AServerStreamingLevelsVisibility @ 1487767a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AServerStreamingLevelsVisibility * __thiscall
AServerStreamingLevelsVisibility::AServerStreamingLevelsVisibility
          (AServerStreamingLevelsVisibility *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AServerStreamingLevelsVisibility__6B_;
  *(undefined8 *)&this->ServerVisibleStreamingLevels = 0;
  *(undefined8 *)&(this->ServerVisibleStreamingLevels).field_0x8 = 0;
  *(undefined8 *)&(this->ServerVisibleStreamingLevels).field_0x20 = 0;
  *(undefined4 *)&(this->ServerVisibleStreamingLevels).field_0x28 = 0;
  *(undefined4 *)&(this->ServerVisibleStreamingLevels).field_0x2c = 0x80;
  *(undefined4 *)&(this->ServerVisibleStreamingLevels).field_0x34 = 0;
  *(undefined4 *)&(this->ServerVisibleStreamingLevels).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ServerVisibleStreamingLevels).field_0x40 = 0;
  *(undefined4 *)&(this->ServerVisibleStreamingLevels).field_0x48 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xf7;
  return this;
}

// ~AServerStreamingLevelsVisibility @ 14877e980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AServerStreamingLevelsVisibility::~AServerStreamingLevelsVisibility
          (AServerStreamingLevelsVisibility *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7AServerStreamingLevelsVisibility__6B_;
  *(undefined4 *)&(this->ServerVisibleStreamingLevels).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ServerVisibleStreamingLevels).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ServerVisibleStreamingLevels);
  AActor::~AActor((AActor *)this);
  return;
}

// Contains @ 14878e7a0

bool __thiscall
AServerStreamingLevelsVisibility::Contains(AServerStreamingLevelsVisibility *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->ServerVisibleStreamingLevels).field_0x8 !=
      *(int *)&(this->ServerVisibleStreamingLevels).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ServerVisibleStreamingLevels).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ServerVisibleStreamingLevels).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ServerVisibleStreamingLevels).field_0x48 - 1U &
                              FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->ServerVisibleStreamingLevels + (longlong)iVar3 * 0x18) ==
            FVar1) goto LAB_14878e81d;
        iVar3 = *(int *)(*(longlong *)&this->ServerVisibleStreamingLevels + 0x10 +
                        (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14878e81d:
  return iVar3 != -1;
}

// GetPrivateStaticClass @ 1487a28e0

UClass * __cdecl AServerStreamingLevelsVisibility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AServerStreamingLevelsVisibility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ServerStreamingLevelsVisibility",
               &Z_Registration_Info_UClass_AServerStreamingLevelsVisibility.InnerSingleton,
               StaticRegisterNativesAServerStreamingLevelsVisibility,0x310,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AServerStreamingLevelsVisibility>,
               InternalVTableHelperCtorCaller<AServerStreamingLevelsVisibility>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AServerStreamingLevelsVisibility.InnerSingleton;
}

// GetVisibleStreamingLevel @ 1487a6a90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelStreaming * __thiscall
AServerStreamingLevelsVisibility::GetVisibleStreamingLevel
          (AServerStreamingLevelsVisibility *this,FName *param_1)

{
  FWeakObjectPtr *this_00;
  ULevelStreaming *pUVar1;
  
  this_00 = &TMapBase<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,0>_>
             ::Find((TMapBase<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,0>_>
                     *)&this->ServerVisibleStreamingLevels,*param_1)->WeakPtr;
  if (this_00 != (FWeakObjectPtr *)0x0) {
    pUVar1 = (ULevelStreaming *)FWeakObjectPtr::Get(this_00);
    return pUVar1;
  }
  return (ULevelStreaming *)0x0;
}

// SetIsVisible @ 1487c2370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AServerStreamingLevelsVisibility::SetIsVisible
          (AServerStreamingLevelsVisibility *this,ULevelStreaming *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWeakObjectPtr local_res20;
  FName local_38;
  ULevelStreaming *local_30;
  FName local_28;
  FName *local_20;
  FWeakObjectPtr *local_18;
  
  if ((char)this->_padding_ == '\x03') {
    if (param_1 != (ULevelStreaming *)0x0) {
      (**(code **)(param_1->_padding_ + 0x2e0))(param_1,&local_38);
      if (param_2) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        local_30 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_30);
        local_20 = &local_38;
        local_18 = &local_res20;
        TSet<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FName_const_&,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_&&>_>
                  ((TSet<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)&this->ServerVisibleStreamingLevels,
                   (TPairInitializer<FName_const_&,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_&&>
                    *)&stack0x00000008,(bool *)&local_20);
        return;
      }
      local_28 = local_38;
      if (*(int *)&(this->ServerVisibleStreamingLevels).field_0x8 !=
          *(int *)&(this->ServerVisibleStreamingLevels).field_0x34) {
        uVar3 = ::GetTypeHash(local_38.ComparisonIndex.Value);
        TSet<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                             *)&this->ServerVisibleStreamingLevels,local_38.Number + uVar3,&local_28
                           );
      }
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_347019111110279112>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\ServerStreamingLevelsVisibility.cpp"
                       ,0x38,"GetLocalRole() == ROLE_Authority");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SpawnServerActor @ 1487c4000

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

AServerStreamingLevelsVisibility * __cdecl
AServerStreamingLevelsVisibility::SpawnServerActor(UWorld *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ULevelStreaming *this;
  code *pcVar3;
  bool bVar4;
  ENetMode EVar5;
  UClass *pUVar6;
  AServerStreamingLevelsVisibility *pAVar7;
  FString *pFVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [4];
  FWeakObjectPtr local_f4;
  TPairInitializer<FName_const_&,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_&&> local_ec;
  undefined1 *local_d8;
  FWeakObjectPtr *local_d0;
  FString local_c8;
  FString local_b8;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  EVar5 = UWorld::InternalGetNetMode(param_1);
  bVar4 = UWorld::IsGameWorld(param_1);
  if ((bVar4) && (EVar5 - NM_DedicatedServer < 2)) {
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_a8);
    pUVar6 = StaticClass();
    local_a8._0_8_ = pUVar6->_padding_;
    local_a8._32_8_ = (param_1->PersistentLevel).field0_0x0;
    pUVar6 = StaticClass();
    pAVar7 = (AServerStreamingLevelsVisibility *)
             UWorld::SpawnActor(param_1,pUVar6,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                                (FActorSpawnParameters *)local_a8);
    if (pAVar7 != (AServerStreamingLevelsVisibility *)0x0) {
      pUVar6 = StaticClass();
      iVar2 = (int)pUVar6->_padding_;
      if ((iVar2 <= *(int *)(pAVar7->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar6->_padding_)) {
        pFVar11 = (param_1->StreamingLevels).AllocatorInstance.Data;
        iVar2 = (param_1->StreamingLevels).ArrayNum;
        pFVar1 = pFVar11 + (longlong)iVar2 * 8;
        while( true ) {
          if ((param_1->StreamingLevels).ArrayNum != iVar2) {
            local_f8[0] = 0;
            `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_f8);
          }
          if (pFVar11 == pFVar1) break;
          this = *(ULevelStreaming **)pFVar11;
          if ((this != (ULevelStreaming *)0x0) &&
             (bVar4 = ULevelStreaming::IsLevelVisible(this), bVar4)) {
            if (((TEnumAsByte<ENetRole> *)&pAVar7->_padding_)->Value == '\x03') {
              (**(code **)(this->_padding_ + 0x2e0))
                        (this,(undefined1 *)((longlong)&local_ec.Value + 4));
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              local_f4.ObjectIndex = 0;
              local_f4.ObjectSerialNumber = 0;
              local_ec._4_8_ = this;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              FWeakObjectPtr::operator=(&local_f4,(FObjectPtr)((longlong)&local_ec.Key + 4));
              local_d8 = (undefined1 *)((longlong)&local_ec.Value + 4);
              local_d0 = &local_f4;
              TSet<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<FName_const_&,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_&&>_>
                        ((TSet<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                          *)&pAVar7->ServerVisibleStreamingLevels,&local_ec,(bool *)&local_d8);
            }
            else {
              bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_347019111110279112>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\ServerStreamingLevelsVisibility.cpp"
                                 ,0x38,"GetLocalRole() == ROLE_Authority");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                pAVar7 = (AServerStreamingLevelsVisibility *)(*pcVar3)();
                return pAVar7;
              }
            }
          }
          pFVar11 = pFVar11 + 8;
        }
        if (local_a8._64_8_ == 0) {
          return pAVar7;
        }
        plVar9 = (longlong *)(local_a8 + 0x50);
        if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_a8._104_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
        return pAVar7;
      }
      pFVar8 = GetTypeName<AServerStreamingLevelsVisibility>(&local_c8);
      pwVar10 = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<AActor>(&local_b8,(AActor *)pAVar7);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar10,pwVar12);
    }
    if (local_a8._64_8_ != 0) {
      plVar9 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  return (AServerStreamingLevelsVisibility *)0x0;
}

// StaticRegisterNativesAServerStreamingLevelsVisibility @ 1487c5780

void __cdecl
AServerStreamingLevelsVisibility::StaticRegisterNativesAServerStreamingLevelsVisibility(void)

{
  return;
}


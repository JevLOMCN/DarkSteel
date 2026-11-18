// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 147ba94e0

UClass * __cdecl UAutoDestroySubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoDestroySubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoDestroySubsystem",
               &Z_Registration_Info_UClass_UAutoDestroySubsystem.InnerSingleton,
               StaticRegisterNativesUAutoDestroySubsystem,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAutoDestroySubsystem>,
               InternalVTableHelperCtorCaller<UAutoDestroySubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoDestroySubsystem.InnerSingleton;
}

// UAutoDestroySubsystem @ 147bbac30

UAutoDestroySubsystem * __thiscall
UAutoDestroySubsystem::UAutoDestroySubsystem(UAutoDestroySubsystem *this,FVTableHelper *param_1)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->ActorsToPoll).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorsToPoll).ArrayNum = 0;
  (this->ActorsToPoll).ArrayMax = 0;
  return this;
}

// UAutoDestroySubsystem @ 147bbac70

UAutoDestroySubsystem * __thiscall
UAutoDestroySubsystem::UAutoDestroySubsystem(UAutoDestroySubsystem *this)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->ActorsToPoll).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorsToPoll).ArrayNum = 0;
  (this->ActorsToPoll).ArrayMax = 0;
  return this;
}

// ~UAutoDestroySubsystem @ 147bbf0d0

void __thiscall UAutoDestroySubsystem::~UAutoDestroySubsystem(UAutoDestroySubsystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1 = (this->ActorsToPoll).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  return;
}

// ActorComponentsAreReadyForDestroy @ 147bc81b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl UAutoDestroySubsystem::ActorComponentsAreReadyForDestroy(AActor *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  if (param_1 != (AActor *)0x0) {
    pTVar11 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                        (&param_1->OwnedComponents);
    iVar3 = *(int *)&(pTVar11->Elements).field_0x28;
    iVar15 = 0;
    uVar9 = 1;
    iVar17 = 0;
    puVar1 = &(pTVar11->Elements).field_0x10;
    iVar10 = 0;
    if (iVar3 != 0) {
      puVar18 = *(uint **)&(pTVar11->Elements).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)puVar1;
      }
      uVar14 = *puVar18;
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar15;
        iVar17 = iVar17 + 0x20;
        iVar15 = iVar15 + 1;
        iVar10 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_147bc826d;
        uVar14 = puVar18[lVar12 + 1];
      }
      uVar9 = -uVar14 & uVar14;
      uVar2 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res10 = (int)lVar12;
      iVar10 = local_res10 + -1 + iVar17;
      if (iVar3 < iVar10) {
        iVar10 = iVar3;
      }
    }
LAB_147bc826d:
    uVar14 = *(uint *)&(pTVar11->Elements).field_0x28;
    uVar13 = uVar14 & 0xffffffe0;
    TStack_50._padding_ = CONCAT44(uVar9,iVar15);
    TStack_50.CurrentBitIndex = iVar10;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar14 >> 5;
    TStack_50._28_4_ = iVar10;
    TStack_50.BaseBitIndex = iVar17;
    uStack_30 = CONCAT44(uStack_5c,
                         *(int *)&(pTVar11->Elements).field_0x8 -
                         *(int *)&(pTVar11->Elements).field_0x34);
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar9 = *(uint *)&(pTVar11->Elements).field_0x28;
    if (uVar14 != uVar9) {
      puVar16 = *(undefined1 **)&(pTVar11->Elements).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar15;
        uVar13 = uVar13 + 0x20;
        iVar15 = iVar15 + 1;
        uVar14 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_147bc8380;
        uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar14 = (int)lVar12 + -1 + uVar13;
      if ((int)uVar9 < (int)uVar14) {
        uVar14 = uVar9;
      }
    }
LAB_147bc8380:
    while( true ) {
      if (*(int *)&(pTVar11->Elements).field_0x8 - *(int *)&(pTVar11->Elements).field_0x34 !=
          (int)uStack_30) {
        `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_50.CurrentBitIndex == uVar14) &&
         (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      plVar4 = *(longlong **)
                (*(longlong *)&pTVar11->Elements + (longlong)TStack_50.CurrentBitIndex * 0x10);
      if ((plVar4 != (longlong *)0x0) && (cVar8 = (**(code **)(*plVar4 + 0x438))(), cVar8 == '\0'))
      {
        return false;
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    }
  }
  return true;
}

// CheckLatentActionsOnActor @ 147bcbe50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UAutoDestroySubsystem::CheckLatentActionsOnActor
          (FLatentActionManager *param_1,AActor *param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  FWeakObjectPtr local_res10 [2];
  AActor *local_res20;
  
  if (((param_2 != (AActor *)0x0) && (param_2->_padding_ != 0)) &&
     ((uVar1 = *(uint *)(param_2->_padding_ + 0xd4), (uVar1 >> 0x12 & 1) != 0 || (-1 < (char)uVar1))
     )) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res10[0].ObjectIndex = 0;
    local_res10[0].ObjectSerialNumber = 0;
    local_res20 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
    iVar2 = FLatentActionManager::GetNumActionsForObject
                      (param_1,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res10[0]);
    return iVar2 == 0;
  }
  return true;
}

// Deinitialize @ 147bd4a20

void __thiscall UAutoDestroySubsystem::Deinitialize(UAutoDestroySubsystem *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBase *this_00;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar3 = (this->ActorsToPoll).ArrayNum;
  pFVar7 = (this->ActorsToPoll).AllocatorInstance.Data;
  pFVar2 = pFVar7 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ActorsToPoll).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar2) break;
    this_00 = *(UObjectBase **)pFVar7;
    if ((this_00 != (UObjectBase *)0x0) &&
       (*(char *)((longlong)&this_00[0xd].InternalIndex + 3) != '\0')) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) <
          `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                          ::__l2::DelegateFName,"OnEndPlay");
          _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      FVar5 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
              ::__l2::DelegateFName;
      bVar6 = UObjectBase::IsValidLowLevelFast(this_00,false);
      if (!bVar6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      bVar6 = FSparseDelegateStorage::RemoveAll((UObject *)this_00,FVar5,(UObject *)this);
      *(bool *)((longlong)&this_00[0xd].InternalIndex + 3) = bVar6;
    }
    pFVar7 = pFVar7 + 8;
  }
  piVar1 = &(this->ActorsToPoll).ArrayMax;
  (this->ActorsToPoll).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ActorsToPoll).AllocatorInstance,0,piVar1);
  }
  UTickableWorldSubsystem::Deinitialize((UTickableWorldSubsystem *)this);
  return;
}

// GetPrivateStaticClass @ 147be4a20

UClass * __cdecl UAutoDestroySubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoDestroySubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoDestroySubsystem",
               &Z_Registration_Info_UClass_UAutoDestroySubsystem.InnerSingleton,
               StaticRegisterNativesUAutoDestroySubsystem,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAutoDestroySubsystem>,
               InternalVTableHelperCtorCaller<UAutoDestroySubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoDestroySubsystem.InnerSingleton;
}

// GetStatId @ 147be85a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UAutoDestroySubsystem::GetStatId(UAutoDestroySubsystem *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_virtual_struct_TStatId___cdecl_UAutoDestroySubsystem::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_virtual_struct_TStatId___cdecl_UAutoDestroySubsystem::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_virtual_struct_TStatId___cdecl_UAutoDestroySubsystem::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_UAutoDestroySubsystem = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"UAutoDestroySubsystem");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`protected:_virtual_struct_TStatId___cdecl_UAutoDestroySubsystem::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_UAutoDestroySubsystem,*pFVar1,L"UAutoDestroySubsystem",
               "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`protected:_virtual_struct_TStatId___cdecl_UAutoDestroySubsystem::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_UAutoDestroySubsystem;
  if (_StatPtr_UAutoDestroySubsystem == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UAutoDestroySubsystem");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`protected:_virtual_struct_TStatId___cdecl_UAutoDestroySubsystem::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_UAutoDestroySubsystem,*pFVar1,L"UAutoDestroySubsystem",
                       "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true
                       ,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// GetTickableTickType @ 147bebe30

ETickableTickType __thiscall UAutoDestroySubsystem::GetTickableTickType(UAutoDestroySubsystem *this)

{
  bool bVar1;
  
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)&this[-1]._padding_,
                     RF_ArchetypeObject|RF_ClassDefaultObject);
  return bVar1 + Always;
}

// OnActorEndPlay @ 147bf52b0

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
UAutoDestroySubsystem::OnActorEndPlay(UAutoDestroySubsystem *this,AActor *param_1,Type param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  AActor *pAVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  AActor *local_48 [2];
  
  if (param_1 != (AActor *)0x0) {
    local_48[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar2 = (this->ActorsToPoll).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)(this->ActorsToPoll).ArrayMax * 8)
        ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->ActorsToPoll).ArrayNum;
    if (iVar1 != 0) {
      pFVar2 = (this->ActorsToPoll).AllocatorInstance.Data;
      iVar9 = 0;
      bVar4 = *(AActor **)pFVar2 != local_48[0];
      lVar6 = 0;
      pAVar5 = local_48[0];
      iVar7 = 0;
      do {
        iVar8 = iVar7;
        do {
          lVar6 = lVar6 + 1;
          iVar8 = iVar8 + 1;
          if (iVar1 <= lVar6) break;
        } while (bVar4 == (*(AActor **)(pFVar2 + lVar6 * 8) != pAVar5));
        if (bVar4 != false) {
          if (iVar9 != iVar7) {
            memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                    (longlong)(iVar8 - iVar7) << 3);
            pAVar5 = local_48[0];
          }
          iVar9 = iVar9 + (iVar8 - iVar7);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar7 = iVar8;
      } while (lVar6 < iVar1);
      (this->ActorsToPoll).ArrayNum = iVar9;
      if (iVar1 != iVar9) {
        TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
        ::RemoveAll((TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
                     *)&param_1->OnEndPlay,(UObject *)this);
      }
    }
  }
  return;
}

// RegisterActor @ 147bfad90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UAutoDestroySubsystem::RegisterActor(UAutoDestroySubsystem *this,AActor *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char *pcVar4;
  char *pcVar5;
  TObjectPtr<AActor>_u_0 local_res10;
  FName local_res18;
  code *local_28;
  undefined8 uStack_20;
  
  if ((param_1 == (AActor *)0x0) || (param_1->bAutoDestroyWhenFinished == '\0')) {
    return false;
  }
  local_res10.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<AActor>_>
            (&this->ActorsToPoll,(TObjectPtr<AActor> *)&local_res10.ObjectPtr);
  pcVar4 = strstr("&UAutoDestroySubsystem::OnActorEndPlay","::");
  if (pcVar4 == (char *)0x0) {
LAB_147bfae3b:
    pcVar5 = &DAT_00000002;
  }
  else {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar5 == (char *)0x0) goto LAB_147bfae3b;
    pcVar5 = pcVar5 + 2;
    if (*pcVar5 != '0') goto LAB_147bfae6e;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_147bfae6e:
  ::FName::FName(&local_res18,pcVar5);
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  local_28 = OnActorEndPlay;
  TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
  ::__Internal_AddDynamic<UAutoDestroySubsystem>
            ((TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
              *)&param_1->OnEndPlay,this,(pmf_6d303435 *)&local_28,local_res18);
  return true;
}

// StaticRegisterNativesUAutoDestroySubsystem @ 147c034b0

void __cdecl UAutoDestroySubsystem::StaticRegisterNativesUAutoDestroySubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAutoDestroySubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 147c05320

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UAutoDestroySubsystem::Tick(UAutoDestroySubsystem *this,float param_1)

{
  ForElementType<AActor_*> FVar1;
  TObjectPtr<AActor>_u_0 TVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UWorld *this_00;
  FLatentActionManager *this_01;
  longlong lVar7;
  ForElementType<AActor_*> FVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  FWeakObjectPtr local_b0;
  TObjectPtr<AActor>_u_0 local_a8;
  TObjectPtr<AActor>_u_0 local_a0;
  ForElementType<AActor_*> local_98;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  UTickableWorldSubsystem::Tick((UTickableWorldSubsystem *)this,param_1);
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)&this[-1]._padding_);
  if ((this_00 != (UWorld *)0x0) && ((int)this->_padding_ != 0)) {
    local_98.SecondaryData = (ForElementType<AActor_*>)0x0;
    local_50 = 0;
    local_4c = 8;
    this_01 = UWorld::GetLatentActionManager(this_00);
    uVar10 = (int)this->_padding_ - 1;
    if (-1 < (int)uVar10) {
      lVar11 = (longlong)(int)uVar10;
      lVar9 = lVar11 * 8;
      do {
        iVar6 = (int)this->_padding_;
        uVar5 = 0;
        if ((int)uVar10 < iVar6) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (local_c8 = lVar11, local_c0 = (longlong)iVar6,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TVar2 = (TObjectPtr<AActor>_u_0)
                ((TObjectPtr<AActor>_u_0 *)(lVar9 + this->_padding_))->DebugPtr;
        if ((TVar2.DebugPtr != (AActor *)0x0) && (TVar2->bAutoDestroyWhenFinished != '\0')) {
          if (((TVar2.DebugPtr)->_padding_ != 0) &&
             ((uVar5 = *(uint *)((TVar2.DebugPtr)->_padding_ + 0xd4), (uVar5 >> 0x12 & 1) != 0 ||
              (-1 < (char)uVar5)))) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
            }
            local_b0.ObjectIndex = 0;
            local_b0.ObjectSerialNumber = 0;
            local_a8 = TVar2;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
            }
            FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_a8);
            iVar6 = FLatentActionManager::GetNumActionsForObject
                              (this_01,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_b0);
            if (iVar6 != 0) goto LAB_147c054fd;
          }
          bVar4 = ActorComponentsAreReadyForDestroy(TVar2.DebugPtr);
          if (bVar4) {
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                                   (0x808,&local_98,&local_4c);
            }
            lVar7 = (longlong)local_50;
            FVar8 = (ForElementType<AActor_*>)&local_98;
            if (local_98.SecondaryData != (ForElementType<AActor_*>)0x0) {
              FVar8 = local_98.SecondaryData;
            }
            local_50 = local_50 + 1;
            ((TObjectPtr<AActor>_u_0 *)((longlong)FVar8 + lVar7 * 8))->DebugPtr = (AActor *)TVar2;
            local_a0 = TVar2;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
            }
            TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::RemoveSwap
                      ((TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                       (TObjectPtr<AActor> *)&local_a0.ObjectPtr,Default);
          }
        }
LAB_147c054fd:
        lVar11 = lVar11 + -1;
        lVar9 = lVar9 + -8;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    iVar6 = local_50;
    FVar8 = (ForElementType<AActor_*>)&local_98;
    if (local_98.SecondaryData != (ForElementType<AActor_*>)0x0) {
      FVar8 = local_98.SecondaryData;
    }
    FVar1 = (ForElementType<AActor_*>)((longlong)FVar8 + (longlong)local_50 * 8);
    while( true ) {
      if (local_50 != iVar6) {
        `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_b8);
      }
      if (FVar8 == FVar1) break;
      if (*(AActor **)FVar8 != (AActor *)0x0) {
        AActor::Destroy(*(AActor **)FVar8,false,true);
      }
      FVar8 = (ForElementType<AActor_*>)((longlong)FVar8 + 8);
    }
    if (local_98.SecondaryData != (ForElementType<AActor_*>)0x0) {
      FMemory::Free((void *)local_98.SecondaryData);
    }
  }
  return;
}

// UnregisterActor @ 147c09520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UAutoDestroySubsystem::UnregisterActor(UAutoDestroySubsystem *this,AActor *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  AActor *pAVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  AActor *local_48 [2];
  
  if (param_1 != (AActor *)0x0) {
    local_48[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar2 = (this->ActorsToPoll).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)(this->ActorsToPoll).ArrayMax * 8)
        ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar1 = (this->ActorsToPoll).ArrayNum;
    if (iVar1 != 0) {
      pFVar2 = (this->ActorsToPoll).AllocatorInstance.Data;
      iVar10 = 0;
      bVar4 = *(AActor **)pFVar2 != local_48[0];
      lVar7 = 0;
      pAVar6 = local_48[0];
      iVar8 = 0;
      do {
        iVar9 = iVar8;
        do {
          lVar7 = lVar7 + 1;
          iVar9 = iVar9 + 1;
          if (iVar1 <= lVar7) break;
        } while (bVar4 == (*(AActor **)(pFVar2 + lVar7 * 8) != pAVar6));
        if (bVar4 != false) {
          if (iVar10 != iVar8) {
            memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar8 * 8,
                    (longlong)(iVar9 - iVar8) << 3);
            pAVar6 = local_48[0];
          }
          iVar10 = iVar10 + (iVar9 - iVar8);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar8 = iVar9;
      } while (lVar7 < iVar1);
      (this->ActorsToPoll).ArrayNum = iVar10;
      if (iVar1 != iVar10) {
        TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
        ::RemoveAll((TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
                     *)&param_1->OnEndPlay,(UObject *)this);
        return true;
      }
    }
  }
  return false;
}

// execOnActorEndPlay @ 147c14d00

void __cdecl
UAutoDestroySubsystem::execOnActorEndPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 local_res10 [16];
  int local_res20;
  UObject *local_58;
  UObject *local_50;
  UObject *local_48;
  
  local_50 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
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
  local_48 = local_50;
  if (local_50 != (UObject *)0x0) {
    local_58 = local_50;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_50);
    }
    if (((*(UObject ***)&param_1[1].field_0x20 <= &local_58) &&
        (&local_58 < *(UObject ***)&param_1[1].field_0x20 + *(int *)&param_1[2].field_0x4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_res20 = *(int *)(param_1 + 2);
    lVar6 = (longlong)local_res20;
    if (local_res20 != 0) {
      plVar2 = *(longlong **)&param_1[1].field_0x20;
      iVar10 = 0;
      bVar4 = (UObject *)*plVar2 != local_58;
      lVar7 = 0;
      pUVar5 = local_58;
      iVar8 = 0;
      do {
        iVar9 = iVar8;
        do {
          lVar7 = lVar7 + 1;
          iVar9 = iVar9 + 1;
          if (lVar6 <= lVar7) break;
        } while (bVar4 == ((UObject *)plVar2[lVar7] != pUVar5));
        if (bVar4 != false) {
          if (iVar10 != iVar8) {
            memmove(plVar2 + iVar10,plVar2 + iVar8,(longlong)(iVar9 - iVar8) << 3);
            pUVar5 = local_58;
          }
          iVar10 = iVar10 + (iVar9 - iVar8);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar8 = iVar9;
      } while (lVar7 < lVar6);
      *(int *)(param_1 + 2) = iVar10;
      if (local_res20 != iVar10) {
        TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
        ::RemoveAll((TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
                     *)&local_48[0xd].field_0xf,param_1);
      }
    }
  }
  return;
}


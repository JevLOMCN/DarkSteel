// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// StaticClass @ 149f1ceb0

UClass * __cdecl UPCGManagedActors::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedActors.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedActors",
               &Z_Registration_Info_UClass_UPCGManagedActors.InnerSingleton,
               StaticRegisterNativesUPCGManagedActors,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGManagedActors>,
               InternalVTableHelperCtorCaller<UPCGManagedActors>,local_res8,
               UPCGManagedResource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedActors.InnerSingleton;
}

// UPCGManagedActors @ 149f32490

UPCGManagedActors * __thiscall
UPCGManagedActors::UPCGManagedActors(UPCGManagedActors *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bSupportsReset = true;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPCGManagedActors__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)&(this->GeneratedActors).Elements = 0;
  *(undefined8 *)&(this->GeneratedActors).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GeneratedActors).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GeneratedActors).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GeneratedActors).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GeneratedActors).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GeneratedActors).Elements.field_0x34 = 0;
  (this->GeneratedActors).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GeneratedActors).HashSize = 0;
  (this->GeneratedActorsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedActorsArray).ArrayNum = 0;
  (this->GeneratedActorsArray).ArrayMax = 0;
  return this;
}

// UPCGManagedActors @ 149f32510

UPCGManagedActors * __thiscall
UPCGManagedActors::UPCGManagedActors(UPCGManagedActors *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bSupportsReset = true;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPCGManagedActors__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)&(this->GeneratedActors).Elements = 0;
  *(undefined8 *)&(this->GeneratedActors).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GeneratedActors).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GeneratedActors).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GeneratedActors).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GeneratedActors).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GeneratedActors).Elements.field_0x34 = 0;
  (this->GeneratedActors).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GeneratedActors).HashSize = 0;
  (this->GeneratedActorsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedActorsArray).ArrayNum = 0;
  (this->GeneratedActorsArray).ArrayMax = 0;
  return this;
}

// ~UPCGManagedActors @ 149f347e0

void __thiscall UPCGManagedActors::~UPCGManagedActors(UPCGManagedActors *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7UPCGManagedActors__6B_;
  DestructItems<TSoftObjectPtr<AActor>,int>
            ((TSoftObjectPtr<AActor> *)(this->GeneratedActorsArray).AllocatorInstance.Data,
             (this->GeneratedActorsArray).ArrayNum);
  pFVar1 = (this->GeneratedActorsArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->GeneratedActors).HashSize = 0;
  FVar2 = (this->GeneratedActors).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->GeneratedActors).Elements);
  this->_padding_ = (longlong)&___7UPCGManagedResource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149f4d380

UClass * __cdecl UPCGManagedActors::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedActors.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedActors",
               &Z_Registration_Info_UClass_UPCGManagedActors.InnerSingleton,
               StaticRegisterNativesUPCGManagedActors,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGManagedActors>,
               InternalVTableHelperCtorCaller<UPCGManagedActors>,local_res8,
               UPCGManagedResource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedActors.InnerSingleton;
}

// IsManaging @ 149f526d0

bool __thiscall UPCGManagedActors::IsManaging(UPCGManagedActors *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      bVar2 = Algo::
              NoneOf<TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>,_UPCGManagedActors::IsManaging_::__l2::<lambda_1>_>
                        (&this->GeneratedActorsArray,(<lambda_1>)param_1);
      return !bVar2;
    }
  }
  return false;
}

// MarkAsReused @ 149f541d0

void __thiscall UPCGManagedActors::MarkAsReused(UPCGManagedActors *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  FName FVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  FWeakObjectPtr *pFVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 local_res10 [8];
  uint local_res18;
  FWeakObjectPtr *local_res20;
  TPersistentObjectPtr<FSoftObjectPath> local_70;
  
  *(undefined1 *)&this->_padding_ = 0;
  local_res18 = (this->GeneratedActorsArray).ArrayNum;
  uVar13 = (ulonglong)(int)local_res18;
  pFVar12 = (FWeakObjectPtr *)(this->GeneratedActorsArray).AllocatorInstance.Data;
  pFVar1 = pFVar12 + uVar13 * 5;
  do {
    local_res20 = pFVar12;
    if ((this->GeneratedActorsArray).ArrayNum != (int)uVar13) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSoftObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar12 == pFVar1) {
      return;
    }
    local_70.WeakPtr = *pFVar12;
    FSoftObjectPath::FSoftObjectPath(&local_70.ObjectID,(FSoftObjectPath *)(pFVar12 + 1));
    pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_70);
    if (pUVar6 != (UObject *)0x0) {
      pUVar7 = Z_Construct_UClass_AActor_NoRegister();
      iVar2 = (int)pUVar7->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar7->_padding_)) {
        pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_70);
        if (pUVar6 == (UObject *)0x0) {
LAB_149f542d4:
          pUVar6 = (UObject *)0x0;
        }
        else {
          pUVar7 = Z_Construct_UClass_AActor_NoRegister();
          iVar2 = (int)pUVar7->_padding_;
          if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) goto LAB_149f542d4;
        }
        if (((*(ulonglong *)&pUVar6[0xc].field_0x18 < 0x1552922a1) &&
            (&PCGHelpers::MarkedForCleanupPCGTag <
             (FName *)(*(ulonglong *)&pUVar6[0xc].field_0x18 +
                      (longlong)*(int *)&pUVar6[0xc].field_0x24 * 8))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = *(int *)&pUVar6[0xc].field_0x20;
        if (iVar2 != 0) {
          pFVar3 = *(FName **)&pUVar6[0xc].field_0x18;
          iVar14 = 0;
          lVar9 = 0;
          bVar5 = *pFVar3 != PCGHelpers::MarkedForCleanupPCGTag;
          FVar8 = PCGHelpers::MarkedForCleanupPCGTag;
          iVar10 = 0;
          do {
            iVar11 = iVar10;
            do {
              lVar9 = lVar9 + 1;
              iVar11 = iVar11 + 1;
              if (iVar2 <= lVar9) break;
            } while (bVar5 == (pFVar3[lVar9] != FVar8));
            if (bVar5 != false) {
              if (iVar14 != iVar10) {
                memmove(pFVar3 + iVar14,pFVar3 + iVar10,(longlong)(iVar11 - iVar10) << 3);
                FVar8 = PCGHelpers::MarkedForCleanupPCGTag;
              }
              iVar14 = iVar14 + (iVar11 - iVar10);
            }
            bVar5 = (bool)(bVar5 ^ 1);
            iVar10 = iVar11;
          } while (lVar9 < iVar2);
          *(int *)&pUVar6[0xc].field_0x20 = iVar14;
          pFVar12 = local_res20;
        }
      }
    }
    if (local_70.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
    pFVar12 = pFVar12 + 5;
    uVar13 = (ulonglong)local_res18;
  } while( true );
}

// MarkAsUsed @ 149f54c00

void __thiscall UPCGManagedActors::MarkAsUsed(UPCGManagedActors *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0x2c8))();
  if (cVar2 == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<521289505089519665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGManagedResource.h"
                       ,0x31,"CanBeUsed()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined1 *)&this->_padding_ = 0;
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3819890165841657645>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGManagedResource.cpp"
                     ,0xd3,"0");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// MoveResourceToNewActor @ 149f56000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPCGManagedActors::MoveResourceToNewActor(UPCGManagedActors *this,AActor *param_1)

{
  int *piVar1;
  TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *pTVar2;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  AActor *pAVar11;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  AActor *pAVar12;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  if (param_1 == (AActor *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewActor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGManagedResource.cpp"
                       ,0xb7,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  pTVar2 = &this->GeneratedActorsArray;
  iVar4 = (this->GeneratedActorsArray).ArrayNum;
  pAVar12 = (AActor *)0x0;
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(pTVar2->AllocatorInstance).Data;
  pTVar3 = this_00 + iVar4;
  do {
    if ((this->GeneratedActorsArray).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TSoftObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pTVar3) {
      DestructItems<TSoftObjectPtr<AActor>,int>
                ((TSoftObjectPtr<AActor> *)(pTVar2->AllocatorInstance).Data,
                 (this->GeneratedActorsArray).ArrayNum);
      piVar1 = &(this->GeneratedActorsArray).ArrayMax;
      (this->GeneratedActorsArray).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
      return true;
    }
    pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (pUVar9 != (UObject *)0x0) {
      pUVar10 = Z_Construct_UClass_AActor_NoRegister();
      iVar5 = (int)pUVar10->_padding_;
      if ((iVar5 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar10->_padding_)) {
        pAVar11 = (AActor *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
        if (pAVar11 == (AActor *)0x0) {
LAB_149f560fb:
          pAVar11 = pAVar12;
        }
        else {
          pUVar10 = Z_Construct_UClass_AActor_NoRegister();
          iVar5 = (int)pUVar10->_padding_;
          if ((*(int *)(pAVar11->_padding_ + 0x38) < iVar5) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar11->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
              &pUVar10->_padding_)) goto LAB_149f560fb;
        }
        pAVar11 = AActor::GetAttachParentActor(pAVar11);
        if (pAVar11 != (AActor *)0x0) {
          pAVar11 = (AActor *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
          if (pAVar11 == (AActor *)0x0) {
LAB_149f56142:
            pAVar11 = pAVar12;
          }
          else {
            pUVar10 = Z_Construct_UClass_AActor_NoRegister();
            iVar5 = (int)pUVar10->_padding_;
            if ((*(int *)(pAVar11->_padding_ + 0x38) < iVar5) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pAVar11->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
                &pUVar10->_padding_)) goto LAB_149f56142;
          }
          AActor::DetachFromActor(pAVar11,&FDetachmentTransformRules::KeepWorldTransform);
          pAVar11 = (AActor *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
          if (pAVar11 == (AActor *)0x0) {
LAB_149f56187:
            pAVar11 = pAVar12;
          }
          else {
            pUVar10 = Z_Construct_UClass_AActor_NoRegister();
            iVar5 = (int)pUVar10->_padding_;
            if ((*(int *)(pAVar11->_padding_ + 0x38) < iVar5) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pAVar11->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
                &pUVar10->_padding_)) goto LAB_149f56187;
          }
          (**(code **)(pAVar11->_padding_ + 0x500))(pAVar11,0);
          pAVar11 = (AActor *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
          if (pAVar11 == (AActor *)0x0) {
LAB_149f561cb:
            pAVar11 = pAVar12;
          }
          else {
            pUVar10 = Z_Construct_UClass_AActor_NoRegister();
            iVar5 = (int)pUVar10->_padding_;
            if ((*(int *)(pAVar11->_padding_ + 0x38) < iVar5) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pAVar11->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
                &pUVar10->_padding_)) goto LAB_149f561cb;
          }
          local_res10 = 0;
          AActor::AttachToActor
                    (pAVar11,param_1,&FAttachmentTransformRules::KeepWorldTransform,(FName)0x0);
        }
      }
    }
    this_00 = this_00 + 1;
  } while( true );
}

// PostEditImport @ 149f577d0

void __thiscall UPCGManagedActors::PostEditImport(UPCGManagedActors *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(this->GeneratedActorsArray).ArrayMax;
  pFVar3 = (this->GeneratedActorsArray).AllocatorInstance.Data;
  iVar2 = (this->GeneratedActorsArray).ArrayNum;
  if (-1 < (this->GeneratedActorsArray).ArrayMax) {
    DestructItems<TSoftObjectPtr<AActor>,int>((TSoftObjectPtr<AActor> *)pFVar3,iVar2);
    (this->GeneratedActorsArray).ArrayNum = 0;
    return;
  }
  DestructItems<TSoftObjectPtr<AActor>,int>((TSoftObjectPtr<AActor> *)pFVar3,iVar2);
  (this->GeneratedActorsArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->GeneratedActorsArray).AllocatorInstance,0,piVar1);
  }
  return;
}

// PostLoad @ 149f57da0

void __thiscall UPCGManagedActors::PostLoad(UPCGManagedActors *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UPCGManagedActors **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// Release @ 149f5bbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UPCGManagedActors::Release
          (UPCGManagedActors *this,bool param_1,
          TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<UPCGComponent_*> FVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  AActor *this_00;
  AActor *pAVar16;
  AActor *pAVar17;
  ulonglong uVar18;
  FWeakObjectPtr *pFVar19;
  undefined1 *puVar20;
  FScriptContainerElement *pFVar21;
  ForElementType<UPCGComponent_*> FVar22;
  UPCGManagedActors *pUVar23;
  uint uVar24;
  AActor *pAVar25;
  bool bVar26;
  undefined1 auStackY_118 [32];
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_c4 [12];
  AActor *local_b8;
  AActor *local_b0;
  TPersistentObjectPtr<FSoftObjectPath> local_a8;
  TPersistentObjectPtr<FSoftObjectPath> local_80;
  ForElementType<UPCGComponent_*> local_58;
  uint local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_118;
  bVar26 = -1 < CpuChannel->Enabled;
  local_c4._4_8_ = this;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId102,"UPCGManagedActors::Release",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGManagedResource.cpp"
               ,0x66);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId102);
  }
  if ((param_1) || (this->bSupportsReset == false)) {
    *(undefined1 *)&this->_padding_ = 1;
    iVar5 = (this->GeneratedActorsArray).ArrayNum;
    pFVar21 = (this->GeneratedActorsArray).AllocatorInstance.Data;
    if ((iVar5 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    uVar13 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
    uVar24 = iVar5 + uVar13;
    if (uVar13 < uVar24) {
      if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar24);
      }
      TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_2,uVar24);
      if (uVar24 < 4) {
        iVar12 = 1;
      }
      else {
        uVar18 = (ulonglong)((uVar24 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar6 & 0x1f);
      }
      if ((param_2->HashSize == 0) || (param_2->HashSize < iVar12)) {
        param_2->HashSize = iVar12;
        TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
        ::Rehash(param_2);
      }
    }
    pFVar3 = pFVar21 + (longlong)iVar5 * 0x28;
    for (; pFVar21 != pFVar3; pFVar21 = pFVar21 + 0x28) {
      TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>::
      Emplace<TSoftObjectPtr<AActor>_const_&>
                (param_2,(TSoftObjectPtr<AActor> *)local_c4,(bool *)pFVar21);
    }
    PCGGeneratedResourcesLogging::LogManagedActorsRelease
              ((UPCGManagedResource *)this,&this->GeneratedActorsArray,param_1,false);
    uVar8 = local_c4._4_8_;
    pUVar23 = (UPCGManagedActors *)(this->GeneratedActorsArray).AllocatorInstance.Data;
    local_58.SecondaryData = (ForElementType<UPCGComponent_*>)0x0;
    local_48 = 0;
    local_c4._0_4_ =
         ((TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)(local_c4._4_8_ + 0x90))->
         ArrayNum;
    uVar18 = (ulonglong)(int)local_c4._0_4_;
    local_44 = 1;
    local_c4._4_8_ = (longlong)&(pUVar23->GeneratedActors).Hash + uVar18 * 0x28 + -0x78;
    while( true ) {
      uVar9 = local_c4._4_8_;
      if (((TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)(uVar8 + 0x90))->ArrayNum
          != (int)uVar18) {
        `TCheckedPointerIterator<TSoftObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_c6);
      }
      if (pUVar23 == (UPCGManagedActors *)uVar9) break;
      local_80.WeakPtr = (FWeakObjectPtr)pUVar23->_padding_;
      FSoftObjectPath::FSoftObjectPath(&local_80.ObjectID,(FSoftObjectPath *)&pUVar23->_padding_);
      pUVar14 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_80);
      if (pUVar14 != (UObject *)0x0) {
        pUVar15 = Z_Construct_UClass_AActor_NoRegister();
        iVar5 = (int)pUVar15->_padding_;
        if ((iVar5 <= *(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
            &pUVar15->_padding_)) {
          this_00 = (AActor *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_80);
          if (this_00 == (AActor *)0x0) {
LAB_149f5bfda:
            this_00 = (AActor *)0x0;
          }
          else {
            pUVar15 = Z_Construct_UClass_AActor_NoRegister();
            iVar5 = (int)pUVar15->_padding_;
            if ((*(int *)(this_00->_padding_ + 0x38) < iVar5) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
                &pUVar15->_padding_)) goto LAB_149f5bfda;
          }
          local_48 = 0;
          if ((local_44 < 0) && (local_44 != 0)) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGComponent_*>_>
                      (8,8,0,&local_58,0,&local_44);
          }
          pAVar16 = (AActor *)Z_Construct_UClass_UPCGComponent_NoRegister();
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pAVar16 != (AActor *)0x0) goto LAB_149f5c030;
LAB_149f5c061:
            pAVar25 = (AActor *)0x0;
          }
          else {
            if (pAVar16 == (AActor *)0x0) goto LAB_149f5c061;
            UE::GC::MarkAsReachable((UObject *)pAVar16);
LAB_149f5c030:
            pUVar15 = Z_Construct_UClass_UActorComponent_NoRegister();
            if (pUVar15 == (UClass *)0x0) goto LAB_149f5c061;
            iVar5 = (int)pUVar15->_padding_;
            if (((int)(pAVar16->PrimaryActorTick)._padding_ < iVar5) ||
               ((longlong *)
                *(undefined1 **)((pAVar16->PrimaryActorTick)._padding_ + (longlong)iVar5 * 8) !=
                &pUVar15->_padding_)) {
              bVar10 = false;
            }
            else {
              bVar10 = true;
            }
            pAVar25 = pAVar16;
            if (!bVar10) goto LAB_149f5c061;
          }
          pAVar17 = (AActor *)Z_Construct_UClass_UActorComponent_NoRegister();
          if (pAVar25 == pAVar17) {
            local_b8 = pAVar16;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar16 != (AActor *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pAVar16);
            }
            AActor::
            ForEachComponent_Internal<UPCGComponent,1,0,_AActor::GetComponents<UPCGComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                      (this_00,(TSubclassOf<UActorComponent>)&local_b8,
                       (TArray<UPCGComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                        *)&local_58);
          }
          else {
            local_b0 = pAVar16;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar16 != (AActor *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pAVar16);
            }
            AActor::
            ForEachComponent_Internal<UPCGComponent,0,0,_AActor::GetComponents<UPCGComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                      (this_00,(TSubclassOf<UActorComponent>)&local_b0,
                       (TArray<UPCGComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                        *)&local_58);
          }
          uVar13 = local_48;
          uVar18 = (ulonglong)(int)local_48;
          FVar22 = (ForElementType<UPCGComponent_*>)&local_58;
          if (local_58.SecondaryData != (ForElementType<UPCGComponent_*>)0x0) {
            FVar22 = local_58.SecondaryData;
          }
          FVar4 = (ForElementType<UPCGComponent_*>)((longlong)FVar22 + uVar18 * 8);
          while( true ) {
            if ((uint)uVar18 != uVar13) {
              `TCheckedPointerIterator<UPCGComponent_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_c5);
            }
            if (FVar22 == FVar4) break;
            UPCGComponent::CleanupLocalImmediate(*(UPCGComponent **)FVar22,param_1,false);
            uVar18 = (ulonglong)local_48;
            FVar22 = (ForElementType<UPCGComponent_*>)((longlong)FVar22 + 8);
          }
          local_48 = 0;
          if ((local_44 < 0) && (local_44 != 0)) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGComponent_*>_>
                      (8,8,0,&local_58,0,&local_44);
          }
        }
      }
      if (local_80.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      }
      uVar18 = (ulonglong)(uint)local_c4._0_4_;
      pUVar23 = (UPCGManagedActors *)&pUVar23->_padding_;
    }
    piVar1 = &((TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)(uVar8 + 0x90))->
              ArrayMax;
    pFVar21 = (((TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)(uVar8 + 0x90))->
              AllocatorInstance).Data;
    iVar5 = ((TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)(uVar8 + 0x90))->ArrayNum
    ;
    if (*piVar1 < 0) {
      DestructItems<TSoftObjectPtr<AActor>,int>((TSoftObjectPtr<AActor> *)pFVar21,iVar5);
      ((TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)(uVar8 + 0x90))->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)(uVar8 + 0x90),0,piVar1);
      }
    }
    else {
      DestructItems<TSoftObjectPtr<AActor>,int>((TSoftObjectPtr<AActor> *)pFVar21,iVar5);
      ((TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)(uVar8 + 0x90))->ArrayNum = 0;
    }
    bVar10 = true;
    if (local_58.SecondaryData != (ForElementType<UPCGComponent_*>)0x0) {
      FMemory::Free((void *)local_58.SecondaryData);
    }
  }
  else {
    *(undefined1 *)&this->_padding_ = 1;
    PCGGeneratedResourcesLogging::LogManagedActorsRelease
              ((UPCGManagedResource *)this,&this->GeneratedActorsArray,false,true);
    iVar5 = (this->GeneratedActorsArray).ArrayNum;
    pFVar19 = (FWeakObjectPtr *)(this->GeneratedActorsArray).AllocatorInstance.Data;
    pFVar2 = pFVar19 + (longlong)iVar5 * 5;
    while( true ) {
      if ((this->GeneratedActorsArray).ArrayNum != iVar5) {
        local_c7 = 0;
        `TCheckedPointerIterator<TSoftObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_c7);
      }
      if (pFVar19 == pFVar2) break;
      local_a8.WeakPtr = *pFVar19;
      FSoftObjectPath::FSoftObjectPath(&local_a8.ObjectID,(FSoftObjectPath *)(pFVar19 + 1));
      pUVar14 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_a8);
      if (pUVar14 != (UObject *)0x0) {
        pUVar15 = Z_Construct_UClass_AActor_NoRegister();
        iVar12 = (int)pUVar15->_padding_;
        if ((iVar12 <= *(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar12 * 8) ==
            &pUVar15->_padding_)) {
          pUVar14 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_a8);
          if (pUVar14 == (UObject *)0x0) {
LAB_149f5bd64:
            pUVar14 = (UObject *)0x0;
          }
          else {
            pUVar15 = Z_Construct_UClass_AActor_NoRegister();
            iVar12 = (int)pUVar15->_padding_;
            if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar12) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar12 * 8) !=
                &pUVar15->_padding_)) goto LAB_149f5bd64;
          }
          puVar20 = &pUVar14[0xc].field_0x18;
          if (((*(undefined1 **)puVar20 <
                (undefined1 *)
                ((longlong)&PCGHelpers::MarkedForCleanupPCGTag.ComparisonIndex.Value + 1)) &&
              (&PCGHelpers::MarkedForCleanupPCGTag <
               (FName *)(*(undefined1 **)puVar20 + (longlong)*(int *)&pUVar14[0xc].field_0x24 * 8)))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          iVar12 = *(int *)&pUVar14[0xc].field_0x20;
          if (iVar12 == *(int *)&pUVar14[0xc].field_0x24) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,(ForAnyElementType *)puVar20,(int *)&pUVar14[0xc].field_0x24);
          }
          *(int *)&pUVar14[0xc].field_0x20 = iVar12 + 1;
          *(FName *)(*(longlong *)puVar20 + (longlong)iVar12 * 8) =
               PCGHelpers::MarkedForCleanupPCGTag;
        }
      }
      if (local_a8.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      }
      pFVar19 = pFVar19 + 5;
    }
    bVar10 = false;
  }
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar10;
}

// ReleaseIfUnused @ 149f5c8b0

bool __thiscall
UPCGManagedActors::ReleaseIfUnused
          (UPCGManagedActors *this,
          TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
          *param_1)

{
  if ((char)this->_padding_ == '\0') {
    if ((this->GeneratedActorsArray).ArrayNum != 0) {
      return false;
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2b8))(this,1,param_1);
  }
  return true;
}

// StaticRegisterNativesUPCGManagedActors @ 149f63980

void __cdecl UPCGManagedActors::StaticRegisterNativesUPCGManagedActors(void)

{
  return;
}


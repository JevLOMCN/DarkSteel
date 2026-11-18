// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b46c640

UClass * __cdecl UDS_ContentDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ContentDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ContentDataSet",
               &Z_Registration_Info_UClass_UDS_ContentDataSet.InnerSingleton,
               StaticRegisterNativesUDS_ContentDataSet,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ContentDataSet>,
               InternalVTableHelperCtorCaller<UDS_ContentDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ContentDataSet.InnerSingleton;
}

// UDS_ContentDataSet @ 14b471970

UDS_ContentDataSet * __thiscall
UDS_ContentDataSet::UDS_ContentDataSet(UDS_ContentDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ContentDataSet__6B_;
  *(undefined8 *)&this->ContentsFunctionDataMap = 0;
  *(undefined8 *)&(this->ContentsFunctionDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ContentsFunctionDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->ContentsFunctionDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ContentsFunctionDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContentsFunctionDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->ContentsFunctionDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContentsFunctionDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContentsFunctionDataMap).field_0x48 = 0;
  return this;
}

// ~UDS_ContentDataSet @ 14b472d10

void __thiscall UDS_ContentDataSet::~UDS_ContentDataSet(UDS_ContentDataSet *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ContentDataSet__6B_;
  *(undefined4 *)&(this->ContentsFunctionDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContentsFunctionDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_ContentsFunctionData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_ContentsFunctionData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_ContentsFunctionData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContentsFunctionDataMap);
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4765f0

UClass * __cdecl UDS_ContentDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ContentDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ContentDataSet",
               &Z_Registration_Info_UClass_UDS_ContentDataSet.InnerSingleton,
               StaticRegisterNativesUDS_ContentDataSet,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ContentDataSet>,
               InternalVTableHelperCtorCaller<UDS_ContentDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ContentDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_ContentDataSet @ 14b476f00

void __cdecl UDS_ContentDataSet::StaticRegisterNativesUDS_ContentDataSet(void)

{
  return;
}

// UDS_ContentDataSet @ 14ba32930

UDS_ContentDataSet * __thiscall
UDS_ContentDataSet::UDS_ContentDataSet(UDS_ContentDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ContentDataSet__6B_;
  *(undefined8 *)&this->ContentsFunctionDataMap = 0;
  *(undefined8 *)&(this->ContentsFunctionDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ContentsFunctionDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->ContentsFunctionDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ContentsFunctionDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContentsFunctionDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->ContentsFunctionDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContentsFunctionDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContentsFunctionDataMap).field_0x48 = 0;
  return this;
}

// GetContentData @ 14ba46550

TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr> __cdecl
UDS_ContentDataSet::GetContentData(ulong64 *param_1,uint *param_2)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *this;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_18;
  UObject *local_10;
  
  TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)&local_18);
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_18);
  UDS_DataSetBase::GetData(this,(ulong64)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar2) goto LAB_14ba4664a;
  pUVar3 = FWeakObjectPtr::Get(&local_res20);
  if (pUVar3 == (UObject *)0x0) {
LAB_14ba465d5:
    pUVar3 = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UDS_ContentData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14ba465d5;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_10 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    *param_1 = (ulong64)local_res18;
    return (TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
LAB_14ba4664a:
  *param_1 = 0;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res18);
  return (TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// OnAdded @ 14ba5ecf0

void __thiscall UDS_ContentDataSet::OnAdded(UDS_ContentDataSet *this)

{
  return;
}

// TryGetContentsFunctionData @ 14ba77170

bool __thiscall
UDS_ContentDataSet::TryGetContentsFunctionData
          (UDS_ContentDataSet *this,EDS_ContentsFunctionType *param_1,
          FDS_ContentsFunctionData *param_2)

{
  EDS_ContentsFunctionType EVar1;
  longlong lVar2;
  int iVar3;
  FDS_ContentsFunctionData *pFVar4;
  undefined1 *puVar5;
  
  EVar1 = *param_1;
  if (*(int *)&(this->ContentsFunctionDataMap).field_0x8 !=
      *(int *)&(this->ContentsFunctionDataMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ContentsFunctionDataMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ContentsFunctionDataMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ContentsFunctionDataMap).field_0x48 + ~None & EVar1)
                              * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->ContentsFunctionDataMap;
      do {
        if (*(EDS_ContentsFunctionType *)((longlong)iVar3 * 0x40 + lVar2) == EVar1) {
          pFVar4 = TMapBase<int,FDS_ContentsFunctionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ContentsFunctionData,0>_>
                   ::FindChecked((TMapBase<int,FDS_ContentsFunctionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ContentsFunctionData,0>_>
                                  *)&this->ContentsFunctionDataMap,EVar1);
          param_2->FunctionType = pFVar4->FunctionType;
          param_2->FunctionLockType = pFVar4->FunctionLockType;
          param_2->FunctionLockMessageID = pFVar4->FunctionLockMessageID;
          ::FString::operator=(&param_2->ContentsName,&pFVar4->ContentsName);
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    (&param_2->FunctionLockValues,&pFVar4->FunctionLockValues);
          return true;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x40 + 0x38 + lVar2);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// UpdateContentLockData @ 14ba7c1a0

void __thiscall
UDS_ContentDataSet::UpdateContentLockData(UDS_ContentDataSet *this,ContentsDataResponse *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *_Src;
  TSet<TTuple<int,FDS_ContentsFunctionData>,TDefaultMapHashableKeyFuncs<int,FDS_ContentsFunctionData,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar4;
  int iVar5;
  int *piVar6;
  UObject *pUVar7;
  UDS_ContentData *pUVar8;
  FDS_ContentsFunctionTableRow *pFVar9;
  ForAnyElementType *pFVar10;
  uint *puVar11;
  ForAnyElementType FVar12;
  UDS_ContentManager *this_01;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  UDS_ContentData *local_res18;
  TSet<TTuple<int,FDS_ContentsFunctionData>,TDefaultMapHashableKeyFuncs<int,FDS_ContentsFunctionData,0>,FDefaultSetAllocator>
  *local_res20;
  UDS_ContentData **local_90;
  int *local_88;
  int local_80;
  undefined1 local_7c;
  long64 local_78;
  ForAnyElementType local_70;
  undefined8 uStack_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  
  uVar14 = (param_1->_impl_).contents_base_table_.soo_rep_.field0_0x0.long_rep.elements_int;
  piVar1 = &(param_1->_impl_).contents_base_table_.soo_rep_.field0_0x0.long_rep.size;
  lVar15 = 0;
  if ((uVar14 & 4) == 0) {
    uVar13 = (uint)uVar14 & 3;
  }
  else {
    uVar13 = *piVar1;
  }
  (**(code **)(this->_padding_ + 0x2c0))();
  if (0 < (int)uVar13) {
    do {
      uVar14 = (param_1->_impl_).contents_base_table_.soo_rep_.field0_0x0.long_rep.elements_int;
      piVar6 = (int *)(uVar14 & 0xfffffffffffffff8);
      if ((uVar14 & 4) == 0) {
        piVar6 = piVar1;
      }
      iVar2 = piVar6[lVar15];
      pUVar7 = GetTransientPackageAsObject();
      pUVar8 = NewObject<UDS_ContentData>(pUVar7);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_ContentData *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      local_res18 = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_ContentData *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      UDS_DataSetBase::AddData
                ((UDS_DataSetBase *)this,(longlong)iVar2,(TObjectPtr<UDS_DataBase>)&local_res18);
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)uVar13);
  }
  lVar15 = 0;
  iVar2 = *(int *)&(param_1->_impl_).contents_function_table_.field_0x8;
  local_res20 = (TSet<TTuple<int,FDS_ContentsFunctionData>,TDefaultMapHashableKeyFuncs<int,FDS_ContentsFunctionData,0>,FDefaultSetAllocator>
                 *)&this->ContentsFunctionDataMap;
  TSet<TTuple<int,FDS_ContentsFunctionData>,TDefaultMapHashableKeyFuncs<int,FDS_ContentsFunctionData,0>,FDefaultSetAllocator>
  ::Empty(local_res20,iVar2);
  this_00 = local_res20;
  if (0 < iVar2) {
    local_90 = &local_res18;
    local_88 = &local_80;
    do {
      uVar14 = *(ulonglong *)&(param_1->_impl_).contents_function_table_;
      if ((uVar14 & 1) != 0) {
        uVar14 = *(ulonglong *)(uVar14 + 7 + lVar15 * 8);
      }
      local_70.Data = (FScriptContainerElement *)0x0;
      uStack_68 = 0;
      local_78 = 0;
      local_60.Data = (FScriptContainerElement *)0x0;
      local_58 = 0;
      local_80 = *(int *)(uVar14 + 0x2c);
      local_res18 = (UDS_ContentData *)CONCAT44(local_res18._4_4_,local_80);
      local_7c = (undefined1)*(undefined4 *)(uVar14 + 0x30);
      pFVar9 = FDS_ContentsFunctionTableRow::Get((longlong)local_80,true);
      if (pFVar9 != (FDS_ContentsFunctionTableRow *)0x0) {
        local_78 = (pFVar9->ID_DoNotUseMessage).ID;
        pFVar10 = (ForAnyElementType *)
                  (**(code **)((pFVar9->ID_Name)._padding_ + 8))(&pFVar9->ID_Name);
        if (&local_70 != pFVar10) {
          iVar5 = *(int *)&pFVar10[1].Data;
          _Src = pFVar10->Data;
          uStack_68 = CONCAT44(uStack_68._4_4_,iVar5);
          if ((iVar5 == 0) && (uStack_68._4_4_ == 0)) {
            uStack_68 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar5,uStack_68._4_4_,&local_70,iVar5,(int *)((longlong)&uStack_68 + 4));
            if (iVar5 != 0) {
              memcpy(local_70.Data,_Src,(longlong)iVar5 * 2);
            }
          }
        }
      }
      lVar16 = 0;
      if ((*(ulonglong *)(uVar14 + 0x18) & 4) == 0) {
        uVar13 = (uint)*(ulonglong *)(uVar14 + 0x18) & 3;
      }
      else {
        uVar13 = *(uint *)(uVar14 + 0x20);
      }
      if (0 < (int)uVar13) {
        iVar5 = (int)local_58;
        do {
          puVar11 = (uint *)(*(ulonglong *)(uVar14 + 0x18) & 0xfffffffffffffff8);
          if ((*(ulonglong *)(uVar14 + 0x18) & 4) == 0) {
            puVar11 = (uint *)(uVar14 + 0x20);
          }
          uVar3 = puVar11[lVar16];
          for (FVar12.Data = local_60.Data; FVar12.Data != local_60.Data + (longlong)iVar5 * 4;
              FVar12.Data = FVar12.Data + 4) {
            if (*(uint *)FVar12.Data == uVar3) goto LAB_14ba7c412;
          }
          if (iVar5 == local_58._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_60,(int *)((longlong)&local_58 + 4));
          }
          local_58 = CONCAT44(local_58._4_4_,iVar5 + 1);
          *(uint *)(local_60.Data + (longlong)iVar5 * 4) = uVar3;
          iVar5 = iVar5 + 1;
LAB_14ba7c412:
          lVar16 = lVar16 + 1;
        } while (lVar16 < (int)uVar13);
      }
      TSet<TTuple<int,FDS_ContentsFunctionData>,TDefaultMapHashableKeyFuncs<int,FDS_ContentsFunctionData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_&,FDS_ContentsFunctionData_&>_>
                (this_00,(TPairInitializer<int_&,FDS_ContentsFunctionData_&> *)&local_res20,
                 (bool *)&local_90);
      if (local_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data);
      }
      if (local_70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar2);
  }
  *(undefined1 *)&this->_padding_ = 1;
  bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar4) {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar7[3].field_0x20 = 1;
  }
  this_01 = UDS_ContentManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_01 != (UDS_ContentManager *)0x0) {
      UDS_ContentManager::OnBroadcast(this_01);
    }
  }
  else if (this_01 != (UDS_ContentManager *)0x0) {
    UE::GC::MarkAsReachable((UObject *)this_01);
    UDS_ContentManager::OnBroadcast(this_01);
    return;
  }
  return;
}

// UpdateContentsLockDataComplete @ 14ba7c510

void __thiscall UDS_ContentDataSet::UpdateContentsLockDataComplete(UDS_ContentDataSet *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_ContentManager *this_00;
  
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[3].field_0x20 = 1;
  }
  this_00 = UDS_ContentManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 != (UDS_ContentManager *)0x0) {
      UDS_ContentManager::OnBroadcast(this_00);
      return;
    }
  }
  else if (this_00 != (UDS_ContentManager *)0x0) {
    UE::GC::MarkAsReachable((UObject *)this_00);
    UDS_ContentManager::OnBroadcast(this_00);
    return;
  }
  return;
}


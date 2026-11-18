// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// FStateTreeWeakTaskRef @ 14d52ccf0

FStateTreeWeakTaskRef * __thiscall
FStateTreeWeakTaskRef::FStateTreeWeakTaskRef
          (FStateTreeWeakTaskRef *this,TNotNull<UStateTree_const_*> param_1,
          FStateTreeIndex16 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  UStateTree *local_res8;
  FGuid local_18;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1.Val != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1.Val);
  }
  (this->StateTree).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1.Val;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1.Val != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1.Val);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->NodeIndex).Value = param_2.Value;
  (this->NodeId).A = 0;
  (this->NodeId).B = 0;
  (this->NodeId).C = 0;
  (this->NodeId).D = 0;
  pFVar4 = UStateTree::GetNodeIdFromIndex
                     (param_1.Val,&local_18,(FStateTreeIndex16)(this->NodeIndex).Value);
  uVar1 = pFVar4->B;
  uVar2 = pFVar4->C;
  uVar3 = pFVar4->D;
  (this->NodeId).A = pFVar4->A;
  (this->NodeId).B = uVar1;
  (this->NodeId).C = uVar2;
  (this->NodeId).D = uVar3;
  return this;
}

// Pin @ 14d532d30

FStateTreeStrongTaskRef * __thiscall
FStateTreeWeakTaskRef::Pin
          (FStateTreeWeakTaskRef *this,FStateTreeStrongTaskRef *__return_storage_ptr__)

{
  FStateTreeIndex16 FVar1;
  ushort uVar2;
  int iVar3;
  UStateTree *this_00;
  UScriptStruct *pUVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar10;
  FGuid *pFVar11;
  FConstStructView *pFVar12;
  UPackage *pUVar13;
  UStateTree *pUVar14;
  UObject **ppUVar15;
  uchar *puVar16;
  undefined4 local_res8;
  undefined4 uStackX_c;
  UScriptStruct *local_88;
  uchar *puStack_80;
  UObject *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  UObject *local_50;
  uchar *local_48;
  ushort local_40;
  UScriptStruct *local_3c;
  uchar *puStack_34;
  
  pUVar14 = (UStateTree *)0x0;
  local_res8 = 0;
  TVar10 = FWeakObjectPtr::Pin((FWeakObjectPtr *)this);
  this_00 = *(UStateTree **)TVar10.Object;
  *(undefined8 *)TVar10.Object = 0;
  if ((UObject *)CONCAT44(uStackX_c,local_res8) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)CONCAT44(uStackX_c,local_res8));
  }
  if (((this_00 != (UStateTree *)0x0) &&
      (FVar1.Value = (this->NodeIndex).Value, FVar1.Value != 0xffff)) &&
     ((int)(uint)FVar1.Value < (this_00->Nodes).NumItems)) {
    pFVar11 = UStateTree::GetNodeIdFromIndex(this_00,(FGuid *)&local_88,FVar1);
    if ((((this->NodeId).D != pFVar11->D || (this->NodeId).C != pFVar11->C) ||
        (this->NodeId).B != pFVar11->B) || pFVar11->A != (this->NodeId).A) {
      `FStateTreeWeakTaskRef::Pin'::__l5::<lambda_1>::operator()(&local_res8);
    }
    uVar2 = (this->NodeIndex).Value;
    uVar9 = 0xffffffff;
    if (uVar2 != 0xffff) {
      uVar9 = (uint)uVar2;
    }
    pFVar12 = FInstancedStructContainer::operator[]
                        (&this_00->Nodes,(FConstStructView *)&local_88,uVar9);
    puVar16 = pFVar12->StructMemory;
    if ((puVar16 == (uchar *)0x0) ||
       (pUVar4 = pFVar12->ScriptStruct, pUVar4 == (UScriptStruct *)0x0)) {
LAB_14d532ea4:
      puVar16 = (uchar *)0x0;
    }
    else {
      if (Z_Registration_Info_UScriptStruct_FStateTreeTaskBase.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar13 = Z_Construct_UPackage__Script_StateTreeModule();
        Z_Registration_Info_UScriptStruct_FStateTreeTaskBase.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTaskBase,(UObject *)pUVar13,
                             L"StateTreeTaskBase");
      }
      if (pUVar4 != Z_Registration_Info_UScriptStruct_FStateTreeTaskBase.OuterSingleton) {
        if (Z_Registration_Info_UScriptStruct_FStateTreeTaskBase.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar13 = Z_Construct_UPackage__Script_StateTreeModule();
          Z_Registration_Info_UScriptStruct_FStateTreeTaskBase.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTaskBase,(UObject *)pUVar13,
                               L"StateTreeTaskBase");
          if (Z_Registration_Info_UScriptStruct_FStateTreeTaskBase.OuterSingleton ==
              (UScriptStruct *)0x0) goto LAB_14d532ea4;
        }
        iVar3 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeTaskBase.OuterSingleton)->
                     _padding_;
        if (((int)pUVar4->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar3 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FStateTreeTaskBase.OuterSingleton)->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (!bVar7) goto LAB_14d532ea4;
      }
    }
    if (puVar16 != (uchar *)0x0) {
      local_88 = *(UScriptStruct **)&this->NodeId;
      puStack_80 = *(uchar **)&(this->NodeId).C;
      uVar2 = (this->NodeIndex).Value;
      UObjectBase::AddRef((UObjectBase *)this_00);
      UObjectBase::AddRef((UObjectBase *)this_00);
      local_3c = local_88;
      puStack_34 = puStack_80;
      local_48 = puVar16;
      local_40 = uVar2;
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
      ppUVar15 = &local_50;
      bVar8 = true;
      bVar7 = false;
      pUVar14 = this_00;
      goto LAB_14d532f15;
    }
  }
  local_68 = 0xffff;
  ppUVar15 = &local_78;
  local_58 = 0;
  bVar8 = false;
  bVar7 = true;
  local_70 = 0;
  local_60 = 0;
LAB_14d532f15:
  (__return_storage_ptr__->StateTree).Object = (UObject *)pUVar14;
  *ppUVar15 = (UObject *)0x0;
  __return_storage_ptr__->Task = (FStateTreeTaskBase *)ppUVar15[1];
  (__return_storage_ptr__->NodeIndex).Value = *(ushort *)(ppUVar15 + 2);
  uVar5 = *(undefined8 *)((longlong)ppUVar15 + 0x14);
  uVar6 = *(undefined8 *)((longlong)ppUVar15 + 0x1c);
  (__return_storage_ptr__->NodeId).A = (int)uVar5;
  (__return_storage_ptr__->NodeId).B = (int)((ulonglong)uVar5 >> 0x20);
  (__return_storage_ptr__->NodeId).C = (int)uVar6;
  (__return_storage_ptr__->NodeId).D = (int)((ulonglong)uVar6 >> 0x20);
  if (bVar7) {
    if (local_78 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_78);
    }
  }
  if ((bVar8) && (local_50 != (UObject *)0x0)) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_50);
  }
  if (this_00 != (UStateTree *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
  }
  return __return_storage_ptr__;
}

// operator() @ 1505801f0

bool __thiscall `FStateTreeWeakTaskRef::Pin'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5986073470088249410>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5986073470088249410>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 14

// FRigMultiParentElement @ 14a2212d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigMultiParentElement * __thiscall
FRigMultiParentElement::FRigMultiParentElement
          (FRigMultiParentElement *this,URigHierarchy *param_1,ERigElementType param_2)

{
  FRigTransformElement::FRigTransformElement((FRigTransformElement *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7FRigMultiParentElement__6B_;
  (this->ParentConstraints).AllocatorInstance.SecondaryData =
       (ForElementType<FRigElementParentConstraint>)0x0;
  (this->ParentConstraints).ArrayNum = 0;
  (this->ParentConstraints).ArrayMax = 1;
  *(undefined8 *)&this->IndexLookup = 0;
  *(undefined8 *)&(this->IndexLookup).field_0x8 = 0;
  *(undefined8 *)&(this->IndexLookup).field_0x20 = 0;
  *(undefined4 *)&(this->IndexLookup).field_0x28 = 0;
  *(undefined4 *)&(this->IndexLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->IndexLookup).field_0x34 = 0;
  *(undefined4 *)&(this->IndexLookup).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->IndexLookup).field_0x40 = 0;
  *(undefined4 *)&(this->IndexLookup).field_0x48 = 0;
  return this;
}

// ~FRigMultiParentElement @ 14a2260e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigMultiParentElement::~FRigMultiParentElement(FRigMultiParentElement *this)

{
  void *pvVar1;
  ForElementType<FRigElementParentConstraint> FVar2;
  
  this->_padding_ = (longlong)&___7FRigMultiParentElement__6B_;
  *(undefined4 *)&(this->IndexLookup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IndexLookup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IndexLookup);
  FVar2 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FRigElementParentConstraint>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  this->_padding_ = (longlong)&___7FRigTransformElement__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRigBaseElement::~FRigBaseElement((FRigBaseElement *)this);
  return;
}

// GetElementTypeIndex @ 14a263480

int __thiscall FRigMultiParentElement::GetElementTypeIndex(FRigMultiParentElement *this)

{
  return ElementTypeIndex;
}

// GetScriptStruct @ 14a26a860

UScriptStruct * __thiscall FRigMultiParentElement::GetScriptStruct(FRigMultiParentElement *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigMultiParentElement.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigMultiParentElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigMultiParentElement,(UObject *)pUVar1,
                         L"RigMultiParentElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigMultiParentElement.OuterSingleton;
}

// StaticStruct @ 14a2cae70

UScriptStruct * __cdecl FRigMultiParentElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigMultiParentElement.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigMultiParentElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigMultiParentElement,(UObject *)pUVar1,
                         L"RigMultiParentElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigMultiParentElement.OuterSingleton;
}

// FRigMultiParentElement @ 14a2dc9d0

FRigMultiParentElement * __thiscall
FRigMultiParentElement::FRigMultiParentElement
          (FRigMultiParentElement *this,FRigMultiParentElement *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FRigElementParentConstraint> _Dst;
  ForElementType<FRigElementParentConstraint> _Src;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRigTransformElement__6B_;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 3;
  FRigTransformElement::operator=((FRigTransformElement *)this,(FRigTransformElement *)param_1);
  this->_padding_ = (longlong)&___7FRigMultiParentElement__6B_;
  (this->ParentConstraints).AllocatorInstance.SecondaryData =
       (ForElementType<FRigElementParentConstraint>)0x0;
  _Src = (param_1->ParentConstraints).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ParentConstraints).ArrayNum;
  (this->ParentConstraints).ArrayNum = iVar2;
  if (_Src == (ForElementType<FRigElementParentConstraint>)0x0) {
    _Src = (ForElementType<FRigElementParentConstraint>)&param_1->ParentConstraints;
  }
  piVar1 = &(this->ParentConstraints).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementParentConstraint>_>
              (0xa0,0x10,iVar2,0,&(this->ParentConstraints).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->ParentConstraints).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<FRigElementParentConstraint>)0x0) {
      _Dst = (ForElementType<FRigElementParentConstraint>)&this->ParentConstraints;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 * 0xa0);
  }
  *(undefined8 *)&(this->IndexLookup).field_0x0 = 0;
  *(undefined8 *)&(this->IndexLookup).field_0x8 = 0;
  *(undefined8 *)&(this->IndexLookup).field_0x20 = 0;
  *(undefined4 *)&(this->IndexLookup).field_0x28 = 0;
  *(undefined4 *)&(this->IndexLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->IndexLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IndexLookup).field_0x34 = 0;
  *(undefined8 *)&(this->IndexLookup).field_0x40 = 0;
  *(undefined4 *)&(this->IndexLookup).field_0x48 = 0;
  TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
               *)&this->IndexLookup,
              (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
               *)&param_1->IndexLookup);
  return this;
}

// FRigMultiParentElement @ 14a2dcbc0

FRigMultiParentElement * __thiscall
FRigMultiParentElement::FRigMultiParentElement(FRigMultiParentElement *this)

{
  FRigTransformElement::FRigTransformElement((FRigTransformElement *)this);
  this->_padding_ = (longlong)&___7FRigMultiParentElement__6B_;
  (this->ParentConstraints).AllocatorInstance.SecondaryData =
       (ForElementType<FRigElementParentConstraint>)0x0;
  (this->ParentConstraints).ArrayNum = 0;
  (this->ParentConstraints).ArrayMax = 1;
  *(undefined8 *)&this->IndexLookup = 0;
  *(undefined8 *)&(this->IndexLookup).field_0x8 = 0;
  *(undefined8 *)&(this->IndexLookup).field_0x20 = 0;
  *(undefined4 *)&(this->IndexLookup).field_0x28 = 0;
  *(undefined4 *)&(this->IndexLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->IndexLookup).field_0x34 = 0;
  *(undefined4 *)&(this->IndexLookup).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->IndexLookup).field_0x40 = 0;
  *(undefined4 *)&(this->IndexLookup).field_0x48 = 0;
  return this;
}

// operator= @ 14a2e0870

FRigMultiParentElement * __thiscall
FRigMultiParentElement::operator=(FRigMultiParentElement *this,FRigMultiParentElement *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FRigElementParentConstraint> _Dst;
  ForElementType<FRigElementParentConstraint> _Src;
  
  FRigTransformElement::operator=((FRigTransformElement *)this,(FRigTransformElement *)param_1);
  if (this != param_1) {
    piVar1 = &(this->ParentConstraints).ArrayMax;
    _Src = (param_1->ParentConstraints).AllocatorInstance.SecondaryData;
    iVar2 = (param_1->ParentConstraints).ArrayNum;
    if (_Src == (ForElementType<FRigElementParentConstraint>)0x0) {
      _Src = (ForElementType<FRigElementParentConstraint>)&param_1->ParentConstraints;
    }
    (this->ParentConstraints).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementParentConstraint>_>
                (0xa0,0x10,iVar2,*piVar1,&(this->ParentConstraints).AllocatorInstance,iVar2,piVar1);
      _Dst = (this->ParentConstraints).AllocatorInstance.SecondaryData;
      if (iVar2 != 0) {
        if (_Dst == (ForElementType<FRigElementParentConstraint>)0x0) {
          _Dst = (ForElementType<FRigElementParentConstraint>)&this->ParentConstraints;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 * 0xa0);
      }
    }
  }
  TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
               *)&this->IndexLookup,
              (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
               *)&param_1->IndexLookup);
  return this;
}

// CopyFrom @ 14a2f8be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigMultiParentElement::CopyFrom(FRigMultiParentElement *this,FRigBaseElement *param_1)

{
  TArray<FRigElementParentConstraint,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
  *this_00;
  FRigBaseElement *pFVar3;
  ForElementType<FRigElementParentConstraint> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ForElementType<FRigElementParentConstraint> FVar11;
  FRigBaseElement *pFVar12;
  longlong lVar13;
  FRigMultiParentElement *pFVar14;
  undefined8 *puVar15;
  undefined1 auStackY_148 [32];
  uint local_f8 [2];
  FRigMultiParentElement *local_f0;
  FRigBaseElement *local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_f0 = this;
  FRigTransformElement::CopyFrom((FRigTransformElement *)this,param_1);
  if ((param_1 == (FRigBaseElement *)0x0) ||
     (bVar6 = FRigBaseElement::IsA<FRigMultiParentElement>(param_1), !bVar6)) {
    param_1 = (FRigBaseElement *)0x0;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Element",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                       ,0x3f1,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar1 = &this->ParentConstraints;
  piVar2 = &(this->ParentConstraints).ArrayMax;
  (this->ParentConstraints).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementParentConstraint>_>
              (0xa0,0x10,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  uVar9 = *(uint *)&param_1[4].CachedNameString.Data.AllocatorInstance.Data;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (*piVar2 < (int)uVar9) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementParentConstraint>_>
              (0xa0,0x10,uVar9,&pTVar1->AllocatorInstance,(this->ParentConstraints).ArrayNum,piVar2)
    ;
  }
  this_00 = &this->IndexLookup;
  TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
           *)this_00);
  TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
             *)this_00,*(int *)&param_1[5].Owner - param_1[5].ChildCacheIndex);
  local_f8[0] = 0;
  pFVar14 = this;
  if (0 < *(int *)&param_1[4].CachedNameString.Data.AllocatorInstance.Data) {
    do {
      uVar9 = local_f8[0];
      uVar7 = 0;
      if ((int)local_f8[0] < *(int *)&param_1[4].CachedNameString.Data.AllocatorInstance.Data) {
        uVar7 = ~local_f8[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (FRigBaseElement *)param_1[4].ComponentIndices.AllocatorInstance.Data;
      lVar13 = pFVar14->_padding_;
      pFVar12 = param_1 + 3;
      if (pFVar3 != (FRigBaseElement *)0x0) {
        pFVar12 = pFVar3;
      }
      pFVar10 = (FScriptContainerElement *)((longlong)(int)uVar9 * 0xa0 + (longlong)pFVar12);
      pFVar3 = *(FRigBaseElement **)pFVar10;
      lStack_e0 = *(longlong *)(pFVar10 + 8);
      local_d8 = *(longlong *)(pFVar10 + 0x10);
      lStack_d0 = *(longlong *)(pFVar10 + 0x18);
      local_c8 = *(longlong *)(pFVar10 + 0x20);
      lStack_c0 = *(longlong *)(pFVar10 + 0x28);
      local_b8 = *(longlong *)(pFVar10 + 0x30);
      lStack_b0 = *(longlong *)(pFVar10 + 0x38);
      local_a8 = *(longlong *)(pFVar10 + 0x40);
      lStack_a0 = *(longlong *)(pFVar10 + 0x48);
      local_98 = *(longlong *)(pFVar10 + 0x50);
      lStack_90 = *(longlong *)(pFVar10 + 0x58);
      local_88 = *(longlong *)(pFVar10 + 0x60);
      lStack_80 = *(longlong *)(pFVar10 + 0x68);
      local_78 = *(longlong *)(pFVar10 + 0x70);
      lStack_70 = *(longlong *)(pFVar10 + 0x78);
      local_68 = *(longlong *)(pFVar10 + 0x80);
      lStack_60 = *(longlong *)(pFVar10 + 0x88);
      local_58 = *(longlong *)(pFVar10 + 0x90);
      lStack_50 = *(longlong *)(pFVar10 + 0x98);
      uVar9 = pFVar3->Index;
      local_e8 = pFVar3;
      if (((int)uVar9 < 0) || (*(int *)(lVar13 + 0x100) <= (int)uVar9)) {
LAB_14a2f8e6c:
        pFVar12 = (FRigBaseElement *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Element",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                           ,0x3f9,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        uVar7 = 0;
        if ((int)uVar9 < *(int *)(lVar13 + 0x100)) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar12 = *(FRigBaseElement **)(*(longlong *)(lVar13 + 0xf8) + (longlong)(int)uVar9 * 8);
        if ((pFVar12 == (FRigBaseElement *)0x0) ||
           (bVar6 = FRigBaseElement::IsA<FRigTransformElement>(pFVar12), !bVar6))
        goto LAB_14a2f8e6c;
      }
      FVar4 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<FRigElementParentConstraint>)pTVar1;
      if (FVar4 != (ForElementType<FRigElementParentConstraint>)0x0) {
        FVar11 = FVar4;
      }
      local_e8 = pFVar12;
      if ((ulonglong)FVar11 <= &local_e8) {
        FVar11 = (ForElementType<FRigElementParentConstraint>)pTVar1;
        if (FVar4 != (ForElementType<FRigElementParentConstraint>)0x0) {
          FVar11 = FVar4;
        }
        if ((&local_e8 < (FRigBaseElement **)((longlong)*piVar2 * 0xa0 + (longlong)FVar11)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = (this->ParentConstraints).ArrayNum;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementParentConstraint>_>
                          (0x10a0,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->ParentConstraints).ArrayNum = iVar8 + 1;
      FVar4 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<FRigElementParentConstraint>)pTVar1;
      if (FVar4 != (ForElementType<FRigElementParentConstraint>)0x0) {
        FVar11 = FVar4;
      }
      puVar15 = (undefined8 *)((longlong)iVar8 * 0xa0 + (longlong)FVar11);
      *puVar15 = local_e8;
      puVar15[1] = lStack_e0;
      puVar15[2] = local_d8;
      puVar15[3] = lStack_d0;
      puVar15[4] = local_c8;
      puVar15[5] = lStack_c0;
      puVar15[6] = local_b8;
      puVar15[7] = lStack_b0;
      puVar15[8] = local_a8;
      puVar15[9] = lStack_a0;
      puVar15[10] = local_98;
      puVar15[0xb] = lStack_90;
      puVar15[0xc] = local_88;
      puVar15[0xd] = lStack_80;
      puVar15[0xe] = local_78;
      puVar15[0xf] = lStack_70;
      puVar15[0x10] = local_68;
      puVar15[0x11] = lStack_60;
      puVar15[0x12] = local_58;
      puVar15[0x13] = lStack_50;
      lVar13 = (longlong)(int)local_f8[0];
      uVar9 = 0;
      if ((int)local_f8[0] < (this->ParentConstraints).ArrayNum) {
        uVar9 = ~local_f8[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar4 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<FRigElementParentConstraint>)pTVar1;
      if (FVar4 != (ForElementType<FRigElementParentConstraint>)0x0) {
        FVar11 = FVar4;
      }
      lVar13 = *(longlong *)(lVar13 * 0xa0 + (longlong)FVar11);
      if (((*(FName *)(lVar13 + 0x14) != (pFVar3->Key).Name) ||
          (*(ERigElementType *)(lVar13 + 0x10) != (pFVar3->Key).Type)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParentConstraints[ParentIndex].ParentElement->GetKey() == SourceParentElement->GetKey()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                             ,0x4ff,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
      ::Emplace<FRigElementKey_const_&,int_const_&>
                ((TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                  *)this_00,&local_e8->Key,(int *)local_f8);
      local_f8[0] = local_f8[0] + 1;
      pFVar14 = local_f0;
    } while ((int)local_f8[0] < *(int *)&param_1[4].CachedNameString.Data.AllocatorInstance.Data);
  }
  return;
}

// CopyPose @ 14a2fcde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigMultiParentElement::CopyPose
          (FRigMultiParentElement *this,FRigBaseElement *param_1,bool param_2,bool param_3,
          bool param_4)

{
  ForElementType<FRigElementParentConstraint> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  FRigBaseElement *pFVar8;
  longlong lVar9;
  ForElementType<FRigElementParentConstraint> FVar10;
  ForElementType<FSetElementId> FVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  FRigBaseElement *pFVar16;
  FRigBaseElement *pFVar17;
  uint *puVar18;
  undefined1 auStackY_198 [32];
  uint local_164;
  int local_160 [2];
  FRigBaseElement *local_158;
  TPairInitializer<int_const_&,int_const_&> local_150;
  int *local_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_158 = param_1;
  FRigTransformElement::CopyPose((FRigTransformElement *)this,param_1,param_2,param_3,param_4);
  if (param_4) {
    if ((param_1 == (FRigBaseElement *)0x0) ||
       (bVar3 = FRigBaseElement::IsA<FRigMultiParentElement>(param_1), !bVar3)) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4557919968548616949>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                         ,0x50b,"Source");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      iVar5 = (this->ParentConstraints).ArrayNum;
      uVar15 = 0;
      local_98.Elements._0_8_ = 0;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      local_98.Elements._40_4_ = 0;
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._48_4_ = 0xffffffff;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      local_164 = 0;
      pFVar16 = param_1;
      if (0 < iVar5) {
        uVar14 = uVar15;
        local_158 = param_1;
        do {
          uVar13 = (uint)uVar14;
          uVar4 = 0;
          if ((int)uVar13 < (this->ParentConstraints).ArrayNum) {
            uVar4 = ~uVar13 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar1 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
          FVar10 = (ForElementType<FRigElementParentConstraint>)&this->ParentConstraints;
          if (FVar1 != (ForElementType<FRigElementParentConstraint>)0x0) {
            FVar10 = FVar1;
          }
          plVar7 = (longlong *)((longlong)(int)uVar13 * 0xa0 + (longlong)FVar10);
          local_138 = *plVar7;
          lStack_130 = plVar7[1];
          local_128 = plVar7[2];
          lStack_120 = plVar7[3];
          local_118 = plVar7[4];
          lStack_110 = plVar7[5];
          local_108 = plVar7[6];
          lStack_100 = plVar7[7];
          local_f8 = plVar7[8];
          lStack_f0 = plVar7[9];
          local_e8 = plVar7[10];
          lStack_e0 = plVar7[0xb];
          local_d8 = plVar7[0xc];
          lStack_d0 = plVar7[0xd];
          local_c8 = plVar7[0xe];
          lStack_c0 = plVar7[0xf];
          local_b8 = plVar7[0x10];
          lStack_b0 = plVar7[0x11];
          local_a8 = plVar7[0x12];
          lStack_a0 = plVar7[0x13];
          pFVar16 = (FRigBaseElement *)param_1[4].ComponentIndices.AllocatorInstance.Data;
          pFVar17 = param_1 + 3;
          if (pFVar16 != (FRigBaseElement *)0x0) {
            pFVar17 = pFVar16;
          }
          pFVar16 = (FRigBaseElement *)
                    ((longlong)*(int *)&param_1[4].CachedNameString.Data.AllocatorInstance.Data *
                     0xa0 + (longlong)pFVar17);
          if (pFVar17 != pFVar16) {
            pFVar8 = pFVar17;
            do {
              if ((*(longlong *)(pFVar8->_padding_ + 0x14) == *(longlong *)(local_138 + 0x14)) &&
                 (*(char *)(pFVar8->_padding_ + 0x10) == *(char *)(local_138 + 0x10))) {
                local_160[0] = (int)(((longlong)pFVar8 - (longlong)pFVar17) / 0xa0);
                if (local_160[0] != -1) {
                  local_150.Value = (int *)&local_164;
                  local_140 = local_160;
                  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<int_const_&,int_const_&>_>
                            (&local_98,&local_150,(bool *)&local_150.Value);
                }
                goto LAB_14a2fcfee;
              }
              pFVar8 = (FRigBaseElement *)&pFVar8[1].ComponentIndices;
            } while (pFVar8 != pFVar16);
          }
          local_160[0] = -1;
LAB_14a2fcfee:
          iVar5 = (this->ParentConstraints).ArrayNum;
          local_164 = local_164 + 1;
          uVar14 = (ulonglong)local_164;
          pFVar16 = local_158;
        } while ((int)local_164 < iVar5);
      }
      uVar14 = uVar15;
      if (0 < iVar5) {
        do {
          uVar4 = (uint)uVar15;
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar11 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar11 = local_98.Hash.SecondaryData;
            }
            uVar13 = *(uint *)((longlong)FVar11 + (local_98.HashSize - 1 & uVar15) * 4);
            while (uVar13 != 0xffffffff) {
              puVar12 = (uint *)((longlong)(int)uVar13 * 0x10 + local_98.Elements._0_8_);
              if (*puVar12 == uVar4) {
                puVar18 = puVar12 + 1;
                if (puVar12 == (uint *)0x0) {
                  puVar18 = (uint *)0x0;
                }
                if (puVar18 != (uint *)0x0) {
                  uVar13 = 0;
                  if ((int)uVar4 < (this->ParentConstraints).ArrayNum) {
                    uVar13 = ~uVar4 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  FVar1 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
                  uVar13 = *puVar18;
                  FVar10 = (ForElementType<FRigElementParentConstraint>)&this->ParentConstraints;
                  if (FVar1 != (ForElementType<FRigElementParentConstraint>)0x0) {
                    FVar10 = FVar1;
                  }
                  uVar6 = 0;
                  if ((int)uVar13 < *(int *)&pFVar16[4].CachedNameString.Data.AllocatorInstance.Data
                     ) {
                    uVar6 = ~uVar13 >> 0x1f;
                  }
                  if ((uVar6 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar17 = (FRigBaseElement *)pFVar16[4].ComponentIndices.AllocatorInstance.Data;
                  pFVar16 = pFVar16 + 3;
                  if (pFVar17 != (FRigBaseElement *)0x0) {
                    pFVar16 = pFVar17;
                  }
                  lVar9 = (longlong)(int)uVar13 * 0xa0;
                  if (param_2) {
                    *(undefined8 *)(uVar14 + 8 + (longlong)FVar10) =
                         *(undefined8 *)(lVar9 + 8 + (longlong)pFVar16);
                    *(undefined4 *)(uVar14 + 0x10 + (longlong)FVar10) =
                         *(undefined4 *)(lVar9 + 0x10 + (longlong)pFVar16);
                  }
                  if (param_3) {
                    *(undefined8 *)(uVar14 + 0x14 + (longlong)FVar10) =
                         *(undefined8 *)(lVar9 + 0x14 + (longlong)pFVar16);
                    *(undefined4 *)(uVar14 + 0x1c + (longlong)FVar10) =
                         *(undefined4 *)(lVar9 + 0x1c + (longlong)pFVar16);
                  }
                  *(undefined1 *)(uVar14 + 0x90 + (longlong)FVar10) = 1;
                  pFVar16 = local_158;
                  goto LAB_14a2fd155;
                }
                break;
              }
              uVar13 = puVar12[2];
            }
          }
          if (param_2) {
            uVar13 = 0;
            if ((int)uVar4 < (this->ParentConstraints).ArrayNum) {
              uVar13 = ~uVar4 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FVar1 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
            FVar10 = (ForElementType<FRigElementParentConstraint>)&this->ParentConstraints;
            if (FVar1 != (ForElementType<FRigElementParentConstraint>)0x0) {
              FVar10 = FVar1;
            }
            *(undefined8 *)(uVar14 + 8 + (longlong)FVar10) = 0;
            *(undefined4 *)(uVar14 + 0x10 + (longlong)FVar10) = 0;
          }
          if (param_3) {
            uVar13 = 0;
            if ((int)uVar4 < (this->ParentConstraints).ArrayNum) {
              uVar13 = ~uVar4 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FVar1 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
            FVar10 = (ForElementType<FRigElementParentConstraint>)&this->ParentConstraints;
            if (FVar1 != (ForElementType<FRigElementParentConstraint>)0x0) {
              FVar10 = FVar1;
            }
            *(undefined8 *)(uVar14 + 0x14 + (longlong)FVar10) = 0;
            *(undefined4 *)(uVar14 + 0x1c + (longlong)FVar10) = 0;
          }
LAB_14a2fd155:
          uVar15 = (ulonglong)(uVar4 + 1);
          uVar14 = uVar14 + 0xa0;
        } while ((int)(uVar4 + 1) < (this->ParentConstraints).ArrayNum);
      }
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
    }
  }
  return;
}

// IsElementDirty @ 14a328270

bool __thiscall FRigMultiParentElement::IsElementDirty(FRigMultiParentElement *this,Type param_1)

{
  bool bVar1;
  Type TVar2;
  
  if ((param_1 == CurrentLocal) || (TVar2 = InitialGlobal, param_1 == CurrentGlobal)) {
    TVar2 = CurrentGlobal;
  }
  bVar1 = FRigCurrentAndInitialDirtyState::IsDirty
                    ((FRigCurrentAndInitialDirtyState *)&this->_padding_,TVar2);
  return bVar1;
}

// Load @ 14a32c390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigMultiParentElement::Load
          (FRigMultiParentElement *this,FArchive *param_1,
          FRigHierarchySerializationSettings *param_2)

{
  TArray<FRigElementParentConstraint,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  longlong *plVar3;
  URigHierarchy *this_00;
  code *pcVar4;
  double dVar5;
  bool *pbVar6;
  TTransform<double> *pTVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  TTransform<double> *pTVar13;
  bool *pbVar14;
  long64 lVar15;
  FRigBaseElement *this_01;
  UPackage *pUVar16;
  ForElementType<FRigElementParentConstraint> FVar17;
  ForElementType<FRigElementParentConstraint> FVar18;
  longlong lVar19;
  uint uVar20;
  void *_Dst;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_f8;
  uint local_f4;
  FRigElementKey local_f0;
  FName local_e0;
  undefined1 local_d8 [16];
  FRigLocalAndGlobalDirtyState local_c8;
  FRigLocalAndGlobalDirtyState local_a8;
  FRigLocalAndGlobalTransform local_88;
  FRigLocalAndGlobalTransform local_68;
  
  FRigBaseElement::Load((FRigBaseElement *)this,param_1,param_2);
  if (param_2->SerializationPhase == StaticData) {
    FRigCurrentAndInitialTransform::Load
              ((FRigCurrentAndInitialTransform *)&this->_padding_,param_1,param_2,
               (FRigCurrentAndInitialDirtyState *)&this->_padding_);
  }
  if (param_2->SerializationPhase == StaticData) {
    iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
    if (iVar9 < 0xe) {
      local_88.Local.StorageIndex = -1;
      local_88.Local.Storage = (TTransform<double> *)0x0;
      local_88.Global.StorageIndex = -1;
      local_88.Global.Storage = (TTransform<double> *)0x0;
      local_68.Local.StorageIndex = -1;
      local_68.Local.Storage = (TTransform<double> *)0x0;
      local_68.Global.StorageIndex = -1;
      local_68.Global.Storage = (TTransform<double> *)0x0;
      local_c8.Global.StorageIndex = -1;
      local_c8.Global.Storage = (bool *)0x0;
      local_c8.Local.StorageIndex = -1;
      local_c8.Local.Storage = (bool *)0x0;
      local_a8.Global.StorageIndex = -1;
      local_a8.Global.Storage = (bool *)0x0;
      local_a8.Local.StorageIndex = -1;
      local_a8.Local.Storage = (bool *)0x0;
      if (param_2->bSerializeCurrentTransform != false) {
        FRigLocalAndGlobalTransform::Load(&local_88,param_1,param_2,&local_c8);
      }
      if ((param_2->bSerializeInitialTransform != false) &&
         (FRigLocalAndGlobalTransform::Load(&local_68,param_1,param_2,&local_a8),
         pTVar7 = local_88.Local.Storage, param_2->bSerializeCurrentTransform == false)) {
        if (local_88.Local.Storage != (TTransform<double> *)0x0) {
          pTVar13 = FRigComputedTransform::Get(&local_68.Local);
          dVar5 = (pTVar13->Rotation).XY.m128d_f64[1];
          (pTVar7->Rotation).XY.m128d_f64[0] = (pTVar13->Rotation).XY.m128d_f64[0];
          (pTVar7->Rotation).XY.m128d_f64[1] = dVar5;
          dVar5 = (pTVar13->Rotation).ZW.m128d_f64[1];
          (pTVar7->Rotation).ZW.m128d_f64[0] = (pTVar13->Rotation).ZW.m128d_f64[0];
          (pTVar7->Rotation).ZW.m128d_f64[1] = dVar5;
          dVar5 = (pTVar13->Translation).XY.m128d_f64[1];
          (pTVar7->Translation).XY.m128d_f64[0] = (pTVar13->Translation).XY.m128d_f64[0];
          (pTVar7->Translation).XY.m128d_f64[1] = dVar5;
          dVar5 = (pTVar13->Translation).ZW.m128d_f64[1];
          (pTVar7->Translation).ZW.m128d_f64[0] = (pTVar13->Translation).ZW.m128d_f64[0];
          (pTVar7->Translation).ZW.m128d_f64[1] = dVar5;
          dVar5 = (pTVar13->Scale3D).XY.m128d_f64[1];
          (pTVar7->Scale3D).XY.m128d_f64[0] = (pTVar13->Scale3D).XY.m128d_f64[0];
          (pTVar7->Scale3D).XY.m128d_f64[1] = dVar5;
          dVar5 = (pTVar13->Scale3D).ZW.m128d_f64[1];
          (pTVar7->Scale3D).ZW.m128d_f64[0] = (pTVar13->Scale3D).ZW.m128d_f64[0];
          (pTVar7->Scale3D).ZW.m128d_f64[1] = dVar5;
        }
        pTVar7 = local_88.Global.Storage;
        if (local_88.Global.Storage != (TTransform<double> *)0x0) {
          pTVar13 = FRigComputedTransform::Get(&local_68.Global);
          dVar5 = (pTVar13->Rotation).XY.m128d_f64[1];
          (pTVar7->Rotation).XY.m128d_f64[0] = (pTVar13->Rotation).XY.m128d_f64[0];
          (pTVar7->Rotation).XY.m128d_f64[1] = dVar5;
          dVar5 = (pTVar13->Rotation).ZW.m128d_f64[1];
          (pTVar7->Rotation).ZW.m128d_f64[0] = (pTVar13->Rotation).ZW.m128d_f64[0];
          (pTVar7->Rotation).ZW.m128d_f64[1] = dVar5;
          dVar5 = (pTVar13->Translation).XY.m128d_f64[1];
          (pTVar7->Translation).XY.m128d_f64[0] = (pTVar13->Translation).XY.m128d_f64[0];
          (pTVar7->Translation).XY.m128d_f64[1] = dVar5;
          dVar5 = (pTVar13->Translation).ZW.m128d_f64[1];
          (pTVar7->Translation).ZW.m128d_f64[0] = (pTVar13->Translation).ZW.m128d_f64[0];
          (pTVar7->Translation).ZW.m128d_f64[1] = dVar5;
          dVar5 = (pTVar13->Scale3D).XY.m128d_f64[1];
          (pTVar7->Scale3D).XY.m128d_f64[0] = (pTVar13->Scale3D).XY.m128d_f64[0];
          (pTVar7->Scale3D).XY.m128d_f64[1] = dVar5;
          dVar5 = (pTVar13->Scale3D).ZW.m128d_f64[1];
          (pTVar7->Scale3D).ZW.m128d_f64[0] = (pTVar13->Scale3D).ZW.m128d_f64[0];
          (pTVar7->Scale3D).ZW.m128d_f64[1] = dVar5;
        }
        pbVar6 = local_c8.Local.Storage;
        if (local_c8.Local.Storage != (bool *)0x0) {
          pbVar14 = local_a8.Local.Storage;
          if (local_a8.Local.Storage == (bool *)0x0) {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4557919968548617693>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                               ,0x223,"false");
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pbVar14 = &bDefaultDirtyFlag;
          }
          *pbVar6 = *pbVar14;
        }
        pbVar6 = local_c8.Global.Storage;
        if (local_c8.Global.Storage != (bool *)0x0) {
          pbVar14 = local_a8.Global.Storage;
          if (local_a8.Global.Storage == (bool *)0x0) {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4557919968548617693>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                               ,0x223,"false");
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pbVar14 = &bDefaultDirtyFlag;
          }
          *pbVar6 = *pbVar14;
        }
      }
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    local_res20[0] = 0;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    uVar11 = local_res20[0];
    lVar19 = (longlong)(int)local_res20[0];
    pTVar1 = &this->ParentConstraints;
    piVar2 = &(this->ParentConstraints).ArrayNum;
    iVar9 = *piVar2;
    if (iVar9 < (int)local_res20[0]) {
      iVar9 = local_res20[0] - iVar9;
      iVar10 = UE::Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementParentConstraint>_>
                         (0xa0,0x10,iVar9,&pTVar1->AllocatorInstance,piVar2,
                          &(this->ParentConstraints).ArrayMax);
      FVar17 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
      if (FVar17 == (ForElementType<FRigElementParentConstraint>)0x0) {
        FVar17 = (ForElementType<FRigElementParentConstraint>)pTVar1;
      }
      DefaultConstructItems<FRigElementParentConstraint,int>
                ((void *)((longlong)FVar17 + (longlong)iVar10 * 0xa0),iVar9);
    }
    else {
      if ((int)local_res20[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res20[0]);
      }
      if ((int)local_res20[0] < iVar9) {
        uVar20 = iVar9 - local_res20[0];
        if (((int)(uVar20 | local_res20[0]) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar20 != 0) {
          FVar17 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
          if (FVar17 == (ForElementType<FRigElementParentConstraint>)0x0) {
            FVar17 = (ForElementType<FRigElementParentConstraint>)pTVar1;
          }
          _Dst = (void *)((longlong)FVar17 + lVar19 * 0xa0);
          iVar9 = (*piVar2 - uVar11) - uVar20;
          if (iVar9 != 0) {
            memmove(_Dst,(void *)((longlong)(int)uVar20 * 0xa0 + (longlong)_Dst),
                    (longlong)iVar9 * 0xa0);
          }
          *piVar2 = *piVar2 - uVar20;
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementParentConstraint>_>
                    (0xa0,0x10,&pTVar1->AllocatorInstance,*piVar2,
                     &(this->ParentConstraints).ArrayMax);
        }
      }
    }
  }
  else if (param_2->SerializationPhase == InterElementData) {
    local_res18[0] = 0;
    if (0 < (this->ParentConstraints).ArrayNum) {
      pTVar1 = &this->ParentConstraints;
      do {
        local_f0.Type = None;
        local_f0.Name.ComparisonIndex.Value = 0;
        local_f0.Name.Number = 0;
        if (((param_1->field_0x28 & 4) == 0) && ((param_1->field_0x2b & 5) == 0)) {
          if ((param_1->field_0x28 & 1) != 0) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              if (Z_Registration_Info_UEnum_ERigElementType.OuterSingleton == (UEnum *)0x0) {
                pUVar16 = Z_Construct_UPackage__Script_ControlRig();
                Z_Registration_Info_UEnum_ERigElementType.OuterSingleton =
                     GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementType,(UObject *)pUVar16,
                                   L"ERigElementType");
              }
              ElementTypeEnum = Z_Registration_Info_UEnum_ERigElementType.OuterSingleton;
              _Init_thread_footer(&::_TSS0);
            }
            local_e0.ComparisonIndex.Value = 0;
            local_e0.Number = 0;
            (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_e0);
            lVar15 = UEnum::GetValueByName(ElementTypeEnum,local_e0,None);
            local_f0.Type = (ERigElementType)lVar15;
            goto LAB_14a32c82c;
          }
        }
        else {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            if (Z_Registration_Info_UEnum_ERigElementType.OuterSingleton == (UEnum *)0x0) {
              pUVar16 = Z_Construct_UPackage__Script_ControlRig();
              Z_Registration_Info_UEnum_ERigElementType.OuterSingleton =
                   GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementType,(UObject *)pUVar16,
                                 L"ERigElementType");
            }
            ElementTypeEnum = Z_Registration_Info_UEnum_ERigElementType.OuterSingleton;
            _Init_thread_footer(&::_TSS0);
          }
          UEnum::GetNameByValue(ElementTypeEnum,(long64)local_d8);
          (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_d8);
LAB_14a32c82c:
          (**(code **)(*(longlong *)param_1 + 0x178))(param_1);
        }
        bVar8 = ::FName::IsWithinBounds(local_f0.Name.ComparisonIndex);
        if ((((!bVar8) || (local_f0.Name == (FName)0x0)) || (local_f0.Type == None)) &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4557919968548617012>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                               ,0x4cc,"ParentKey.IsValid()"), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = (URigHierarchy *)this->_padding_;
        iVar9 = URigHierarchy::GetIndex(this_00,&local_f0,true);
        this_01 = URigHierarchy::Get(this_00,iVar9);
        if (((this_01 == (FRigBaseElement *)0x0) ||
            (bVar8 = FRigBaseElement::IsA<FRigTransformElement>(this_01), !bVar8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Element",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                               ,0x3f9,L""), this_01 = (FRigBaseElement *)0x0, bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar19 = (longlong)(int)local_res18[0];
        uVar11 = 0;
        if ((int)local_res18[0] < (this->ParentConstraints).ArrayNum) {
          uVar11 = ~local_res18[0] >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar17 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<FRigElementParentConstraint>)pTVar1;
        if (FVar17 != (ForElementType<FRigElementParentConstraint>)0x0) {
          FVar18 = FVar17;
        }
        *(FRigBaseElement **)(lVar19 * 0xa0 + (longlong)FVar18) = this_01;
        lVar19 = (longlong)(int)local_res18[0];
        uVar20 = 0;
        uVar11 = uVar20;
        if ((int)local_res18[0] < (this->ParentConstraints).ArrayNum) {
          uVar11 = ~local_res18[0] >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar17 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<FRigElementParentConstraint>)pTVar1;
        if (FVar17 != (ForElementType<FRigElementParentConstraint>)0x0) {
          FVar18 = FVar17;
        }
        *(undefined1 *)(lVar19 * 0xa0 + 0x90 + (longlong)FVar18) = 1;
        iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
        if (iVar9 < 8) {
          plVar3 = *(longlong **)&param_1->field_0x8;
          local_f8 = 0;
          if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_f8,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_f8);
            }
          }
          else {
            local_f8 = *(uint *)*plVar3;
            *plVar3 = *plVar3 + 4;
          }
          uVar11 = local_f8;
          lVar19 = (longlong)(int)local_res18[0];
          uVar12 = uVar20;
          if ((int)local_res18[0] < (this->ParentConstraints).ArrayNum) {
            uVar12 = ~local_res18[0] >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar17 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
          if (FVar17 == (ForElementType<FRigElementParentConstraint>)0x0) {
            FVar17 = (ForElementType<FRigElementParentConstraint>)pTVar1;
          }
          lVar19 = lVar19 * 0xa0;
          *(uint *)(lVar19 + 0x14 + (longlong)FVar17) = uVar11;
          *(uint *)(lVar19 + 0x18 + (longlong)FVar17) = uVar11;
          *(uint *)(lVar19 + 0x1c + (longlong)FVar17) = uVar11;
          plVar3 = *(longlong **)&param_1->field_0x8;
          local_f4 = 0;
          if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_f4,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_f4);
            }
          }
          else {
            local_f4 = *(uint *)*plVar3;
            *plVar3 = *plVar3 + 4;
          }
          uVar11 = local_f4;
          lVar19 = (longlong)(int)local_res18[0];
          uVar12 = uVar20;
          if ((int)local_res18[0] < (this->ParentConstraints).ArrayNum) {
            uVar12 = ~local_res18[0] >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar17 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
          FVar18 = (ForElementType<FRigElementParentConstraint>)pTVar1;
          if (FVar17 != (ForElementType<FRigElementParentConstraint>)0x0) {
            FVar18 = FVar17;
          }
          lVar19 = lVar19 * 0xa0;
          *(uint *)(lVar19 + 8 + (longlong)FVar18) = uVar11;
          *(uint *)(lVar19 + 0xc + (longlong)FVar18) = uVar11;
          *(uint *)(lVar19 + 0x10 + (longlong)FVar18) = uVar11;
        }
        else {
          lVar19 = (longlong)(int)local_res18[0];
          uVar11 = uVar20;
          if ((int)local_res18[0] < (this->ParentConstraints).ArrayNum) {
            uVar11 = ~local_res18[0] >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar17 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
          FVar18 = (ForElementType<FRigElementParentConstraint>)pTVar1;
          if (FVar17 != (ForElementType<FRigElementParentConstraint>)0x0) {
            FVar18 = FVar17;
          }
          ::operator<<(param_1,(FRigElementWeight *)((longlong)FVar18 + lVar19 * 0xa0 + 0x14));
          lVar19 = (longlong)(int)local_res18[0];
          uVar11 = uVar20;
          if ((int)local_res18[0] < (this->ParentConstraints).ArrayNum) {
            uVar11 = ~local_res18[0] >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar17 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
          FVar18 = (ForElementType<FRigElementParentConstraint>)pTVar1;
          if (FVar17 != (ForElementType<FRigElementParentConstraint>)0x0) {
            FVar18 = FVar17;
          }
          ::operator<<(param_1,(FRigElementWeight *)((longlong)FVar18 + lVar19 * 0xa0 + 8));
        }
        iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
        lVar19 = (longlong)(int)local_res18[0];
        iVar9 = (this->ParentConstraints).ArrayNum;
        if (iVar10 < 0x25) {
          if ((int)local_res18[0] < iVar9) {
            uVar20 = ~local_res18[0] >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar17 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
          FVar18 = (ForElementType<FRigElementParentConstraint>)pTVar1;
          if (FVar17 != (ForElementType<FRigElementParentConstraint>)0x0) {
            FVar18 = FVar17;
          }
          *(undefined8 *)(lVar19 * 0xa0 + 0x20 + (longlong)FVar18) = 0;
        }
        else {
          pcVar4 = *(code **)(*(longlong *)param_1 + 0x178);
          if ((int)local_res18[0] < iVar9) {
            uVar20 = ~local_res18[0] >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar17 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
          FVar18 = (ForElementType<FRigElementParentConstraint>)pTVar1;
          if (FVar17 != (ForElementType<FRigElementParentConstraint>)0x0) {
            FVar18 = FVar17;
          }
          (*pcVar4)(param_1,(longlong)FVar18 + lVar19 * 0xa0 + 0x20);
        }
        TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
        ::Emplace<FRigElementKey_const_&,int_const_&>
                  ((TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                    *)&this->IndexLookup,&local_f0,(int *)local_res18);
        local_res18[0] = local_res18[0] + 1;
      } while ((int)local_res18[0] < (this->ParentConstraints).ArrayNum);
    }
  }
  return;
}

// MarkElementDirty @ 14a3318e0

void __thiscall FRigMultiParentElement::MarkElementDirty(FRigMultiParentElement *this,Type param_1)

{
  Type TVar1;
  
  if ((param_1 == CurrentLocal) || (TVar1 = InitialGlobal, param_1 == CurrentGlobal)) {
    TVar1 = CurrentGlobal;
  }
  FRigCurrentAndInitialDirtyState::MarkDirty
            ((FRigCurrentAndInitialDirtyState *)&this->_padding_,TVar1);
  return;
}

// Save @ 14a345770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigMultiParentElement::Save
          (FRigMultiParentElement *this,FArchive *param_1,
          FRigHierarchySerializationSettings *param_2)

{
  uint *puVar1;
  TArray<FRigElementParentConstraint,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ForElementType<FRigElementParentConstraint> FVar6;
  undefined4 *puVar7;
  uint *puVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  long64 lVar12;
  UPackage *pUVar13;
  ForElementType<FRigElementParentConstraint> FVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint local_res18 [2];
  FName local_res20;
  undefined1 local_58 [8];
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  FRigTransformElement::Save((FRigTransformElement *)this,param_1,param_2);
  if (param_2->SerializationPhase == StaticData) {
    plVar5 = *(longlong **)&param_1->field_0x8;
    local_res18[0] = (this->ParentConstraints).ArrayNum;
    if (*plVar5 + 4U <= (ulonglong)plVar5[1]) {
      *plVar5 = *plVar5 + 4;
      return;
    }
    if ((param_1->field_0x2a & 1) != 0) {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      return;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    return;
  }
  if ((param_2->SerializationPhase == InterElementData) &&
     (uVar17 = 0, 0 < (this->ParentConstraints).ArrayNum)) {
    pTVar2 = &this->ParentConstraints;
    lVar16 = 0;
    do {
      local_50 = local_50 & 0xffffff00;
      uVar18 = ~uVar17 >> 0x1f;
      uStack_4c = 0;
      uStack_48 = 0;
      uVar11 = 0;
      if ((int)uVar17 < (this->ParentConstraints).ArrayNum) {
        uVar11 = uVar18;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar6 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<FRigElementParentConstraint>)pTVar2;
      if (FVar6 != (ForElementType<FRigElementParentConstraint>)0x0) {
        FVar14 = FVar6;
      }
      if (*(longlong *)(lVar16 + (longlong)FVar14) != 0) {
        uVar11 = 0;
        if ((int)uVar17 < (this->ParentConstraints).ArrayNum) {
          uVar11 = uVar18;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar6 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<FRigElementParentConstraint>)pTVar2;
        if (FVar6 != (ForElementType<FRigElementParentConstraint>)0x0) {
          FVar14 = FVar6;
        }
        uVar4 = *(undefined8 *)(*(longlong *)(lVar16 + (longlong)FVar14) + 0x10);
        local_50 = (uint)uVar4;
        uStack_4c = (undefined4)((ulonglong)uVar4 >> 0x20);
        uStack_48 = *(undefined4 *)(*(longlong *)(lVar16 + (longlong)FVar14) + 0x18);
      }
      if (((param_1->field_0x28 & 4) == 0) && ((param_1->field_0x2b & 5) == 0)) {
        if ((param_1->field_0x28 & 1) != 0) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            if (Z_Registration_Info_UEnum_ERigElementType.OuterSingleton == (UEnum *)0x0) {
              pUVar13 = Z_Construct_UPackage__Script_ControlRig();
              Z_Registration_Info_UEnum_ERigElementType.OuterSingleton =
                   GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementType,(UObject *)pUVar13,
                                 L"ERigElementType");
            }
            ElementTypeEnum = Z_Registration_Info_UEnum_ERigElementType.OuterSingleton;
            _Init_thread_footer(&::_TSS0);
          }
          local_res20.ComparisonIndex.Value = 0;
          local_res20.Number = 0;
          (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res20);
          lVar12 = UEnum::GetValueByName(ElementTypeEnum,local_res20,None);
          local_50 = CONCAT31(local_50._1_3_,(char)lVar12);
          goto LAB_14a3459ef;
        }
      }
      else {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          if (Z_Registration_Info_UEnum_ERigElementType.OuterSingleton == (UEnum *)0x0) {
            pUVar13 = Z_Construct_UPackage__Script_ControlRig();
            Z_Registration_Info_UEnum_ERigElementType.OuterSingleton =
                 GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementType,(UObject *)pUVar13,
                               L"ERigElementType");
          }
          ElementTypeEnum = Z_Registration_Info_UEnum_ERigElementType.OuterSingleton;
          _Init_thread_footer(&::_TSS0);
        }
        UEnum::GetNameByValue(ElementTypeEnum,(long64)local_58);
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_58);
LAB_14a3459ef:
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&uStack_4c);
      }
      uVar11 = 0;
      if ((int)uVar17 < (this->ParentConstraints).ArrayNum) {
        uVar11 = uVar18;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar6 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<FRigElementParentConstraint>)pTVar2;
      if (FVar6 != (ForElementType<FRigElementParentConstraint>)0x0) {
        FVar14 = FVar6;
      }
      lVar15 = (longlong)FVar14 + lVar16;
      puVar7 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
      if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(uint *)(lVar15 + 0x14),4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)(lVar15 + 0x14));
        }
      }
      else {
        *(undefined4 *)(lVar15 + 0x14) = *puVar7;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      puVar1 = (uint *)(lVar15 + 0x18);
      puVar3 = &param_1->field_0x2a;
      puVar8 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar1);
        }
      }
      else {
        *puVar1 = *puVar8;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      puVar1 = (uint *)(lVar15 + 0x1c);
      puVar8 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar1);
        }
      }
      else {
        *puVar1 = *puVar8;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar11 = 0;
      if ((int)uVar17 < (this->ParentConstraints).ArrayNum) {
        uVar11 = uVar18;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar6 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<FRigElementParentConstraint>)pTVar2;
      if (FVar6 != (ForElementType<FRigElementParentConstraint>)0x0) {
        FVar14 = FVar6;
      }
      lVar15 = (longlong)FVar14 + lVar16;
      puVar7 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
      if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(uint *)(lVar15 + 8),4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)(lVar15 + 8));
        }
      }
      else {
        *(undefined4 *)(lVar15 + 8) = *puVar7;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      puVar1 = (uint *)(lVar15 + 0xc);
      puVar8 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar1);
        }
      }
      else {
        *puVar1 = *puVar8;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)(lVar15 + 0x10));
        }
      }
      else {
        *(uint *)(lVar15 + 0x10) = *puVar1;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      pcVar9 = *(code **)(*(longlong *)param_1 + 0x178);
      uVar11 = 0;
      if ((int)uVar17 < (this->ParentConstraints).ArrayNum) {
        uVar11 = uVar18;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar6 = (this->ParentConstraints).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<FRigElementParentConstraint>)pTVar2;
      if (FVar6 != (ForElementType<FRigElementParentConstraint>)0x0) {
        FVar14 = FVar6;
      }
      (*pcVar9)(param_1,(uchar *)((longlong)FVar14 + 0x20) + lVar16);
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0xa0;
    } while ((int)uVar17 < (this->ParentConstraints).ArrayNum);
  }
  return;
}


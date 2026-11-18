// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// AddGuid @ 142166520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::FPropertyTypeNameBuilder::AddGuid(FPropertyTypeNameBuilder *this,FGuid *param_1)

{
  FName *pFVar1;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  TStringBuilderBase<wchar_t> local_98;
  wchar_t local_78 [48];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  local_98.Base = local_78;
  local_98.CurPos = local_78;
  local_98.End = (wchar_t *)local_18;
  FGuid::AppendString(param_1,&local_98,DigitsWithHyphensLower);
  pFVar1 = ::FName::FName(local_a8,(int)((longlong)local_98.CurPos - (longlong)local_98.Base >> 1),
                          local_98.Base,FNAME_Add);
  AddName(this,*pFVar1);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
  return;
}

// AddName @ 1421665d0

void __thiscall UE::FPropertyTypeNameBuilder::AddName(FPropertyTypeNameBuilder *this,FName param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<int,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FName *pFVar4;
  uint uVar5;
  ForElementType<UE::FPropertyTypeNameNode> FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ForElementType<int> FVar10;
  ForElementType<UE::FPropertyTypeNameNode> FVar11;
  uint uVar12;
  
  piVar1 = &this->ActiveIndex;
  if ((*piVar1 < 0) && ((this->Nodes).ArrayNum != 0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveIndex >= 0 || Nodes.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTypeName.cpp"
                       ,0x1d5,L"Only one type name may be added as the root node.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = (this->Nodes).ArrayNum;
  piVar2 = &(this->Nodes).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::FPropertyTypeNameNode>_>
                      (0x40c,(ForElementType<UE::FPropertyTypeNameNode> *)this,piVar2);
  }
  (this->Nodes).ArrayNum = iVar9 + 1;
  FVar6 = (this->Nodes).AllocatorInstance.SecondaryData;
  FVar11 = (ForElementType<UE::FPropertyTypeNameNode>)this;
  if (FVar6 != (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
    FVar11 = FVar6;
  }
  pFVar4 = (FName *)((longlong)FVar11 + (longlong)iVar9 * 0xc);
  DefaultConstructItems<UE::FPropertyTypeNameNode,int>(pFVar4,1);
  *pFVar4 = param_1;
  pFVar4[1].ComparisonIndex.Value = 0;
  pTVar3 = &this->OuterNodeIndex;
  FVar10 = (this->OuterNodeIndex).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<int>)0x0) {
    FVar10 = (ForElementType<int>)pTVar3;
  }
  if (((ulonglong)FVar10 <= piVar1) &&
     (piVar1 < (undefined1 *)((longlong)FVar10 + (longlong)(this->OuterNodeIndex).ArrayMax * 4))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = (this->OuterNodeIndex).ArrayNum;
  piVar2 = &(this->OuterNodeIndex).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->OuterNodeIndex).ArrayNum = iVar9 + 1;
  FVar10 = (this->OuterNodeIndex).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<int>)0x0) {
    FVar10 = (ForElementType<int>)pTVar3;
  }
  *(int *)((longlong)FVar10 + (longlong)iVar9 * 4) = *piVar1;
  uVar5 = *piVar1;
  if (-1 < (int)uVar5) {
    uVar12 = 0;
    if ((int)uVar5 < (this->Nodes).ArrayNum) {
      uVar12 = ~uVar5 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FVar6 = (this->Nodes).AllocatorInstance.SecondaryData;
    if (FVar6 != (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
      this = (FPropertyTypeNameBuilder *)FVar6;
    }
    *(int *)((uchar *)((longlong)this + 8) + (longlong)(int)uVar5 * 0xc) =
         *(int *)((uchar *)((longlong)this + 8) + (longlong)(int)uVar5 * 0xc) + 1;
  }
  return;
}

// AddPath @ 1421667b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::FPropertyTypeNameBuilder::AddPath(FPropertyTypeNameBuilder *this,UField *param_1)

{
  ForElementType<UObject_*> *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<UObject_*> FVar5;
  ForElementType<UObject_*> FVar6;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  ForElementType<UObject_*> local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_88 [8];
  longlong local_80 [2];
  ForElementType<UObject_*> local_70;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_1 == (UField *)0x0) {
    local_80[1] = 0;
    AddName(this,(FName)0x0);
  }
  else {
    AddName(this,(FName)param_1->_padding_);
    local_80[0] = param_1->_padding_;
    local_70.SecondaryData = (ForElementType<UObject_*>)0x0;
    local_28 = 0;
    local_24 = 8;
    if (local_80[0] != 0) {
      do {
        FVar5 = (ForElementType<UObject_*>)&local_70;
        if (local_70.SecondaryData != (ForElementType<UObject_*>)0x0) {
          FVar5 = local_70.SecondaryData;
        }
        if ((ulonglong)FVar5 <= local_80) {
          FVar5 = (ForElementType<UObject_*>)&local_70;
          if (local_70.SecondaryData != (ForElementType<UObject_*>)0x0) {
            FVar5 = local_70.SecondaryData;
          }
          if (local_80 < (longlong *)((longlong)FVar5 + (longlong)local_24 * 8)) {
            local_a0 = (longlong)local_28;
            local_98 = 8;
            local_b8 = local_80;
            local_b0 = (ForElementType<UObject_*>)&local_70;
            if (local_70.SecondaryData != (ForElementType<UObject_*>)0x0) {
              local_b0 = local_70.SecondaryData;
            }
            local_a8 = (longlong)local_24;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        iVar4 = local_28;
        if (local_28 == local_24) {
          iVar4 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                            (0x808,&local_70,&local_24);
        }
        local_28 = iVar4 + 1;
        FVar5 = (ForElementType<UObject_*>)&local_70;
        if (local_70.SecondaryData != (ForElementType<UObject_*>)0x0) {
          FVar5 = local_70.SecondaryData;
        }
        *(longlong *)((longlong)FVar5 + (longlong)iVar4 * 8) = local_80[0];
        local_80[0] = *(longlong *)(local_80[0] + 0x20);
      } while (local_80[0] != 0);
      if (local_28 != 0) {
        if (((this->Nodes).ArrayNum == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Nodes.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTypeName.cpp"
                               ,0x1ca,L"A type name must be added prior to setting type parameters."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = local_28;
        this->ActiveIndex = (this->Nodes).ArrayNum + -1;
        FVar5 = (ForElementType<UObject_*>)&local_70;
        if (local_70.SecondaryData != (ForElementType<UObject_*>)0x0) {
          FVar5 = local_70.SecondaryData;
        }
        FVar6 = (ForElementType<UObject_*>)((longlong)FVar5 + (longlong)local_28 * 8);
        while( true ) {
          if (local_28 != iVar4) {
            `TCheckedPointerIterator<UObject_*,int,1>::operator!='::__l2::<lambda_1>::operator()
                      (local_88);
          }
          if (FVar6 == FVar5) break;
          pFVar1 = (ForElementType<UObject_*> *)((longlong)FVar6 - 8);
          FVar6 = (ForElementType<UObject_*>)((longlong)FVar6 - 8);
          AddName(this,*(FName *)((longlong)*pFVar1 + 0x18));
        }
        EndParameters(this);
      }
    }
    if (local_70.SecondaryData != (ForElementType<UObject_*>)0x0) {
      FMemory::Free((void *)local_70.SecondaryData);
    }
  }
  return;
}

// AddType @ 142166db0

void __thiscall
UE::FPropertyTypeNameBuilder::AddType(FPropertyTypeNameBuilder *this,FPropertyTypeName param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  FPropertyTypeName FVar7;
  int iVar8;
  longlong lVar9;
  
  lVar4 = (longlong)param_1.Index >> 0xd;
  lVar9 = (ulonglong)(param_1.Index & 0x1fff) * 0xc;
  AddName(this,*(FName *)(lVar9 + (longlong)GPropertyTypeNameTable.Blocks[lVar4]));
  iVar1 = *(int *)(lVar9 + 8 + (longlong)GPropertyTypeNameTable.Blocks[lVar4]);
  if (iVar1 != 0) {
    if (((this->Nodes).ArrayNum == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Nodes.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTypeName.cpp"
                           ,0x1ca,L"A type name must be added prior to setting type parameters."),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar8 = 0;
    this->ActiveIndex = (this->Nodes).ArrayNum + -1;
    if (0 < iVar1) {
      do {
        lVar9 = (longlong)GPropertyTypeNameTable.Blocks[lVar4] +
                (ulonglong)(param_1.Index & 0x1fff) * 0xc;
        if (iVar8 < *(int *)(lVar9 + 8)) {
          lVar5 = lVar9 + 0xc;
          iVar6 = iVar8;
          if (iVar8 != 0) {
            do {
              iVar6 = iVar6 + -1 + *(int *)(lVar5 + 8);
              lVar5 = lVar5 + 0xc;
            } while (0 < iVar6);
          }
          FVar7.Index = (int)((lVar5 - lVar9) / 0xc) + param_1.Index;
        }
        else {
          FVar7.Index = 0;
        }
        AddType(this,FVar7);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar1);
    }
    EndParameters(this);
  }
  return;
}

// BeginParameters @ 1421681d0

void __thiscall UE::FPropertyTypeNameBuilder::BeginParameters(FPropertyTypeNameBuilder *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Nodes).ArrayNum == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Nodes.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTypeName.cpp"
                       ,0x1ca,L"A type name must be added prior to setting type parameters.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->ActiveIndex = (this->Nodes).ArrayNum + -1;
  return;
}

// Build @ 1421682b0

FPropertyTypeName __thiscall UE::FPropertyTypeNameBuilder::Build(FPropertyTypeNameBuilder *this)

{
  ForElementType<UE::FPropertyTypeNameNode> FVar1;
  int iVar2;
  int *in_RDX;
  
  iVar2 = (this->Nodes).ArrayNum;
  *in_RDX = 0;
  if (iVar2 != 0) {
    FVar1 = (this->Nodes).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
      this = (FPropertyTypeNameBuilder *)FVar1;
    }
    iVar2 = FPropertyTypeNameTable::FindOrAddByName
                      (&GPropertyTypeNameTable,(FPropertyTypeNameNode *)this);
    *in_RDX = iVar2;
  }
  return (FPropertyTypeName)(int)in_RDX;
}

// EndParameters @ 142175c20

void __thiscall UE::FPropertyTypeNameBuilder::EndParameters(FPropertyTypeNameBuilder *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<int> FVar5;
  
  uVar1 = this->ActiveIndex;
  uVar4 = 0;
  if ((int)uVar1 < (this->OuterNodeIndex).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  FVar5 = (this->OuterNodeIndex).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<int>)0x0) {
    FVar5 = (ForElementType<int>)&this->OuterNodeIndex;
  }
  this->ActiveIndex = *(int *)((longlong)FVar5 + (longlong)(int)uVar1 * 4);
  return;
}

// Reset @ 1421891c0

void __thiscall UE::FPropertyTypeNameBuilder::Reset(FPropertyTypeNameBuilder *this)

{
  int *piVar1;
  
  piVar1 = &(this->Nodes).ArrayMax;
  (this->Nodes).ArrayNum = 0;
  if (*piVar1 < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::FPropertyTypeNameNode>_>
              (0xc,4,0,(ForElementType<UE::FPropertyTypeNameNode> *)this,0,piVar1);
  }
  (this->OuterNodeIndex).ArrayNum = 0;
  if ((this->OuterNodeIndex).ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,0,&(this->OuterNodeIndex).AllocatorInstance,0,&(this->OuterNodeIndex).ArrayMax);
  }
  this->ActiveIndex = -1;
  return;
}

// TryParse @ 142195330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::FPropertyTypeNameBuilder::TryParse(FPropertyTypeNameBuilder *this,TStringView<wchar_t> *param_1)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FName *pFVar9;
  longlong lVar10;
  int iVar11;
  wchar_t *pwVar12;
  int iVar13;
  int iVar14;
  wchar_t *pwVar15;
  undefined8 uVar16;
  undefined1 auStack_118 [32];
  int local_f8;
  int local_f0;
  int local_e8;
  int local_e0;
  int local_dc;
  wchar_t *local_d8;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  wchar_t *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FName local_a8 [2];
  TArrayView<wchar_t_const_,int> local_98;
  TStringView<wchar_t> local_88;
  wchar_t *local_78;
  int local_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined2 local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_e0 = (this->Nodes).ArrayNum;
  pwVar15 = param_1->DataPtr;
  uVar16._0_4_ = param_1->Size;
  uVar16._4_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar14 = 0;
  local_dc = this->ActiveIndex;
  bVar6 = true;
  do {
    local_c8 = (wchar_t *)&local_58;
    uStack_c0 = 3;
    local_98._12_4_ = uStack_bc;
    local_98.ArrayNum = 3;
    local_54 = 0x29;
    local_58 = 0x2c0028;
    local_98.DataPtr = local_c8;
    local_88.DataPtr = pwVar15;
    local_88._8_8_ = uVar16;
    iVar7 = String::FindFirstOfAnyChar(&local_88,&local_98,CaseSensitive,(int *)0x0);
    bVar3 = false;
    local_e8 = (int)uVar16;
    local_d8 = pwVar15;
    if (iVar7 != 0) {
      iVar13 = local_e8;
      pwVar12 = pwVar15;
      if (0 < iVar7) {
        iVar11 = local_e8;
        if (iVar7 < local_e8) {
          iVar11 = iVar7;
        }
        iVar13 = 0;
        local_78 = pwVar15;
        local_70 = 0;
        pwVar12 = local_68;
        uVar16 = uStack_60;
        if (0 < iVar11) {
          iVar13 = iVar11;
          local_70 = iVar11;
        }
      }
      uStack_60 = uVar16;
      local_68 = pwVar12;
      iVar11 = 0;
      pwVar12 = pwVar15 + iVar13;
      while ((pwVar15 != pwVar12 && (iVar8 = iswspace(*pwVar15), iVar8 != 0))) {
        iVar11 = iVar11 + 1;
        pwVar15 = pwVar15 + 1;
      }
      pwVar15 = local_d8 + iVar11;
      iVar13 = iVar13 - iVar11;
      if (iVar13 != 0) {
        lVar10 = (longlong)iVar13;
        pwVar12 = pwVar15 + lVar10 + -1;
        do {
          iVar11 = iswspace(*pwVar12);
          if (iVar11 == 0) break;
          iVar13 = iVar13 + -1;
          pwVar12 = pwVar12 + -1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      bVar3 = false;
      if (iVar13 != 0) {
        if (!bVar6) goto LAB_1421955e8;
        pFVar9 = ::FName::FName(local_a8,iVar13,pwVar15,FNAME_Add);
        AddName(this,*pFVar9);
        bVar6 = false;
        bVar3 = true;
      }
      if (iVar7 == -1) {
        if ((iVar14 == 0) && (!bVar6)) {
          return true;
        }
        goto LAB_1421955e8;
      }
    }
    pwVar15 = local_d8;
    iVar13 = local_e8;
    if (bVar6) {
LAB_1421955e8:
      TArray<UE::FPropertyTypeNameNode,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>::
      SetNum(&this->Nodes,local_e0,No);
      TArray<int,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>::SetNum
                (&this->OuterNodeIndex,local_e0,No);
      this->ActiveIndex = local_dc;
      return false;
    }
    if (((iVar7 < 0) || (local_e8 <= iVar7)) &&
       (local_f8 = iVar7, local_f0 = local_e8,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < Size",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                          ,0x234,
                          L"Index out of bounds on StringView: index %i on a view with a length of %i"
                         ), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    wVar1 = pwVar15[iVar7];
    if (wVar1 == L'(') {
      if (!bVar3) goto LAB_1421955e8;
      iVar14 = iVar14 + 1;
      if (((this->Nodes).ArrayNum == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Nodes.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTypeName.cpp"
                             ,0x1ca,L"A type name must be added prior to setting type parameters."),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      this->ActiveIndex = (this->Nodes).ArrayNum + -1;
LAB_142195583:
      bVar6 = true;
    }
    else {
      if (iVar14 < 1) goto LAB_1421955e8;
      if (wVar1 != L')') goto LAB_142195583;
      EndParameters(this);
      iVar14 = iVar14 + -1;
    }
    iVar11 = (iVar13 - iVar7) + -1;
    iVar7 = iVar13;
    if (iVar11 < iVar13) {
      iVar7 = iVar11;
    }
    iStack_b0 = 0;
    if (0 < iVar7) {
      iStack_b0 = iVar7;
    }
    pwVar15 = pwVar15 + ((longlong)iVar13 - (longlong)iStack_b0);
    uVar16._4_4_ = uStack_ac;
    uVar16._0_4_ = iStack_b0;
    local_b8 = pwVar15;
  } while( true );
}


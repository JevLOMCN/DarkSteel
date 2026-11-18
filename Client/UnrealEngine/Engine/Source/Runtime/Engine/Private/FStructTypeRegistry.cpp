// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FStructTypeRegistry @ 1485a5040

FStructTypeRegistry * __thiscall
UE::Shader::FStructTypeRegistry::FStructTypeRegistry
          (FStructTypeRegistry *this,FMemStackBase *param_1)

{
  this->Allocator = param_1;
  *(undefined8 *)&this->Types = 0;
  *(undefined8 *)&(this->Types).field_0x8 = 0;
  *(undefined8 *)&(this->Types).field_0x20 = 0;
  *(undefined4 *)&(this->Types).field_0x28 = 0;
  *(undefined4 *)&(this->Types).field_0x2c = 0x80;
  *(undefined4 *)&(this->Types).field_0x34 = 0;
  *(undefined4 *)&(this->Types).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Types).field_0x40 = 0;
  *(undefined4 *)&(this->Types).field_0x48 = 0;
  return this;
}

// EmitDeclarationsCode @ 1485b3e70

void __thiscall
UE::Shader::FStructTypeRegistry::EmitDeclarationsCode
          (FStructTypeRegistry *this,TStringBuilderBase<wchar_t> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  byte *pbVar12;
  longlong lVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  uint local_res18;
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Types).field_0x28;
  puVar1 = &(this->Types).field_0x10;
  iVar14 = 0;
  uVar6 = 1;
  iVar16 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->Types).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar11 = *puVar17;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1485b3f1e;
      uVar11 = puVar17[lVar8 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = iVar16 + -1 + (int)lVar8;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1485b3f1e:
  uVar11 = *(uint *)&(this->Types).field_0x28;
  uVar9 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar14);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_8c,
                       *(int *)&(this->Types).field_0x8 - *(int *)&(this->Types).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Types).field_0x28;
  local_res18 = uVar11;
  if (uVar11 != uVar6) {
    puVar15 = *(undefined1 **)&(this->Types).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar14;
      uVar9 = uVar9 + 0x20;
      iVar14 = iVar14 + 1;
      uVar11 = uVar6;
      local_res18 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1485b4020;
      uVar11 = *(uint *)(puVar15 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar9;
    local_res18 = uVar11;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
      local_res18 = uVar6;
    }
  }
LAB_1485b4020:
  while( true ) {
    if (*(int *)&(this->Types).field_0x8 - *(int *)&(this->Types).field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::Shader::FStructType_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = *(longlong *)
             (*(longlong *)&this->Types + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (*(int *)(lVar8 + 0x20) != 0) {
      TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"struct %s\n");
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"{\n",2);
      lVar10 = *(longlong *)(lVar8 + 0x18);
      lVar13 = lVar10 + (longlong)*(int *)(lVar8 + 0x20) * 0x28;
      if (lVar10 != lVar13) {
        pbVar12 = (byte *)(lVar10 + 0x18);
        do {
          if (((*pbVar12 != 0x19) && (0x1b < *pbVar12)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)Type < NumValueTypes",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                                 ,0x45,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"\t%s %s;\n");
          lVar10 = lVar10 + 0x28;
          pbVar12 = pbVar12 + 0x28;
        } while (lVar10 != lVar13);
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"};\n",3);
      lVar13 = *(longlong *)(lVar8 + 0x18);
      lVar8 = lVar13 + (longlong)*(int *)(lVar8 + 0x20) * 0x28;
      if (lVar13 != lVar8) {
        pbVar12 = (byte *)(lVar13 + 0x18);
        do {
          if (((*pbVar12 != 0x19) && (0x1b < *pbVar12)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)Type < NumValueTypes",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                                 ,0x45,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TStringBuilderBase<wchar_t>::AppendfImpl
                    (param_1,L"%s %s_Set%s(%s Self, %s Value) { Self.%s = Value; return Self; }\n");
          lVar13 = lVar13 + 0x28;
          pbVar12 = pbVar12 + 0x28;
        } while (lVar13 != lVar8);
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"\n",1);
      uVar11 = local_res18;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// FindType @ 1485c1e00

FStructType * __thiscall
UE::Shader::FStructTypeRegistry::FindType(FStructTypeRegistry *this,ulong64 param_1)

{
  FStructType **ppFVar1;
  
  ppFVar1 = TMapBase<unsigned___int64,UE::Shader::FStructType_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Shader::FStructType_const_*,0>_>
            ::Find((TMapBase<unsigned___int64,UE::Shader::FStructType_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Shader::FStructType_const_*,0>_>
                    *)&this->Types,param_1);
  if (ppFVar1 != (FStructType **)0x0) {
    return *ppFVar1;
  }
  return (FStructType *)0x0;
}

// NewExternalType @ 1485d00e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FStructType * __thiscall
UE::Shader::FStructTypeRegistry::NewExternalType
          (FStructTypeRegistry *this,TStringView<wchar_t> *param_1)

{
  ulonglong uVar1;
  size_t _Size;
  FXxHash64 FVar2;
  FStructType *pFVar3;
  wchar_t *_Dst;
  longlong lVar4;
  ulong64 uVar5;
  undefined1 auStack_318 [88];
  FStructType *local_2c0;
  FStructType *local_2b8;
  TPairInitializer<unsigned___int64_const_&,UE::Shader::FStructType_const_*_const_&> local_2b0;
  FStructType **local_2a0;
  FXxHash64Builder local_280;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_318;
  FXxHash64Builder::Reset(&local_280);
  FXxHash64Builder::Update(&local_280,param_1->DataPtr,(longlong)param_1->Size * 2);
  FVar2 = FXxHash64Builder::Finalize(&local_280);
  local_2b8 = *(FStructType **)FVar2.Hash;
  pFVar3 = FMemStackBase::Alloc(this->Allocator,0x48,0x10);
  local_2c0 = (FStructType *)0x0;
  if (pFVar3 != (FStructType *)0x0) {
    pFVar3->Hash = 0;
    pFVar3->Name = (wchar_t *)0x0;
    *(undefined8 *)&(pFVar3->Fields).ArrayNum = 0;
    *(undefined8 *)&(pFVar3->ComponentTypes).ArrayNum = 0;
    *(undefined8 *)&(pFVar3->FlatFieldTypes).ArrayNum = 0;
    pFVar3->DerivativeType = (FStructType *)0x0;
    (pFVar3->Fields).DataPtr = (FStructField *)0x0;
    (pFVar3->ComponentTypes).DataPtr = (EValueComponentType *)0x0;
    (pFVar3->FlatFieldTypes).DataPtr = (EValueType *)0x0;
    local_2c0 = pFVar3;
  }
  uVar5 = 8;
  lVar4 = (longlong)(int)*(undefined8 *)&param_1->Size;
  _Size = lVar4 * 2;
  uVar1 = _Size + 2;
  if (0xf < uVar1) {
    uVar5 = 0x10;
  }
  _Dst = FMemStackBase::Alloc(this->Allocator,uVar1,uVar5);
  memcpy(_Dst,param_1->DataPtr,_Size);
  _Dst[lVar4] = L'\0';
  local_2c0->Name = _Dst;
  local_2c0->Hash = (ulong64)local_2b8;
  local_2b0.Value = &local_2b8;
  local_2a0 = &local_2c0;
  TSet<TTuple<unsigned___int64,UE::Shader::FStructType_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Shader::FStructType_const_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,UE::Shader::FStructType_const_*_const_&>_>
            ((TSet<TTuple<unsigned___int64,UE::Shader::FStructType_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Shader::FStructType_const_*,0>,FDefaultSetAllocator>
              *)&this->Types,&local_2b0,(bool *)&local_2b0.Value);
  return local_2c0;
}

// NewType @ 1485d0230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FStructType * __thiscall
UE::Shader::FStructTypeRegistry::NewType(FStructTypeRegistry *this,FStructTypeInitializer *param_1)

{
  EValueType *pEVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  size_t sVar6;
  FName FVar7;
  FStructTypeRegistry *this_00;
  FStructField *pFVar8;
  bool bVar9;
  EValueType EVar10;
  uint uVar11;
  ForElementType<UE::Shader::FStructFieldInitializer> FVar12;
  ulong64 uVar13;
  FStructType *pFVar14;
  wchar_t *pwVar15;
  FValueTypeDescription *pFVar16;
  longlong lVar17;
  FXxHash64 FVar18;
  FStructType **ppFVar19;
  EValueComponentType *pEVar20;
  FString *pFVar21;
  int iVar22;
  FName *pFVar23;
  ulonglong uVar24;
  ForElementType<UE::Shader::FStructFieldInitializer> FVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  int *piVar28;
  uint uVar29;
  undefined1 auStackY_6b8 [32];
  int local_680;
  uint local_67c;
  FStructType *local_678;
  ForElementType<UE::Shader::FStructFieldInitializer> local_670;
  uint uStack_668;
  undefined4 uStack_664;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  FString local_648;
  int local_638;
  FStructTypeRegistry *local_630;
  FStructField *local_628;
  int *local_620;
  ForElementType<UE::Shader::FStructFieldInitializer> local_618;
  ulong64 local_610;
  TPairInitializer<unsigned___int64_const_&,UE::Shader::FStructType_const_*_const_&> local_608;
  int *local_5f8;
  FString local_5f0;
  wchar_t *local_5e0;
  undefined8 uStack_5d8;
  ulong64 *local_5d0;
  FStructType **local_5c8;
  FString local_5b8;
  FStructTypeInitializer local_5a8;
  wchar_t *local_580;
  undefined8 uStack_578;
  wchar_t *local_570;
  undefined8 uStack_568;
  wchar_t *local_560;
  undefined8 uStack_558;
  ForElementType<UE::Shader::FStructFieldInitializer> local_550;
  uint local_2c8;
  uint local_2c4;
  FXxHash64Builder local_2c0;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_6b8;
  local_638 = (param_1->Fields).ArrayNum;
  FVar12 = (ForElementType<UE::Shader::FStructFieldInitializer>)(longlong)local_638;
  uVar29 = 0;
  local_550.SecondaryData = (ForElementType<UE::Shader::FStructFieldInitializer>)0x0;
  local_2c8 = 0;
  local_2c4 = 0x10;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = FVar12;
  uVar13 = SUB168(ZEXT816(0x28) * auVar5,0);
  if (SUB168(ZEXT816(0x28) * auVar5,8) != 0) {
    uVar13 = 0xffffffffffffffff;
  }
  local_670 = FVar12;
  local_630 = this;
  local_628 = FMemStackBase::Alloc(this->Allocator,uVar13,0x10);
  if (local_628 == (FStructField *)0x0) {
    local_628 = (FStructField *)0x0;
  }
  else if (FVar12 != (ForElementType<UE::Shader::FStructFieldInitializer>)0x0) {
    pFVar23 = &(local_628->Type).ObjectType;
    FVar25 = FVar12;
    do {
      pFVar23[-1].ComparisonIndex = 0;
      pFVar23[-1].Number = 0;
      pFVar23->ComparisonIndex = 0;
      pFVar23->Number = 0;
      *(undefined1 *)&pFVar23[1].ComparisonIndex.Value = 0;
      pFVar23 = pFVar23 + 5;
      FVar25 = (ForElementType<UE::Shader::FStructFieldInitializer>)((longlong)FVar25 - 1);
    } while (FVar25 != (ForElementType<UE::Shader::FStructFieldInitializer>)0x0);
  }
  pFVar8 = local_628;
  local_680 = 0;
  local_67c = 0;
  FXxHash64Builder::Reset(&local_2c0);
  FXxHash64Builder::Update(&local_2c0,(param_1->Name).DataPtr,(longlong)(param_1->Name).Size * 2);
  piVar28 = &pFVar8->ComponentIndex;
  local_5f8 = piVar28;
  if (0 < (longlong)FVar12) {
    local_608.Value = (FStructType **)(-0x20 - (longlong)local_628);
    local_67c = uVar29;
    local_618 = FVar12;
    do {
      ppFVar19 = local_608.Value;
      uVar11 = 0;
      if ((int)uVar29 < (param_1->Fields).ArrayNum) {
        uVar11 = ~uVar29 >> 0x1f;
      }
      local_620 = piVar28;
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pFVar14 = (FStructType *)(*pcVar4)();
        return pFVar14;
      }
      puVar27 = (undefined8 *)
                ((longlong)ppFVar19 + (longlong)(param_1->Fields).DataPtr + (longlong)piVar28);
      FXxHash64Builder::Update(&local_2c0,(void *)*puVar27,(longlong)*(int *)(puVar27 + 1) * 2);
      if (*(char *)(puVar27 + 4) != '\x19') {
        puVar26 = puVar27 + 4;
      }
      else {
        puVar26 = (undefined8 *)puVar27[2];
      }
      uVar11 = 8;
      if (*(char *)(puVar27 + 4) != '\x19') {
        uVar11 = 1;
      }
      FXxHash64Builder::Update(&local_2c0,puVar26,(ulonglong)uVar11);
      uVar3 = puVar27[1];
      local_5e0 = (wchar_t *)*puVar27;
      uStack_5d8 = puVar27[1];
      sVar6 = (longlong)(int)uVar3 * 2;
      uVar24 = sVar6 + 2;
      uVar11 = 8;
      if (0xf < uVar24) {
        uVar11 = 0x10;
      }
      local_580 = local_5e0;
      uStack_578 = uStack_5d8;
      pwVar15 = FMemStackBase::Alloc(this->Allocator,uVar24,(ulonglong)uVar11);
      memcpy(pwVar15,local_5e0,sVar6);
      piVar28 = local_620;
      pwVar15[(int)uVar3] = L'\0';
      ((FStructField *)(local_620 + -8))->Name = pwVar15;
      FVar7 = *(FName *)(puVar27 + 3);
      ((FType *)(local_620 + -6))->StructType = (FStructType *)puVar27[2];
      *(FName *)(local_620 + -4) = FVar7;
      *(undefined8 *)(local_620 + -2) = puVar27[4];
      *local_620 = local_680;
      local_620[1] = local_67c;
      EVar10 = *(EValueType *)(puVar27 + 4);
      if (EVar10 == Struct) {
        iVar22 = *(int *)(puVar27[2] + 0x30);
      }
      else if (EVar10 == Object) {
        iVar22 = 1;
      }
      else {
        pFVar16 = GetValueTypeDescription(EVar10);
        iVar22 = (int)pFVar16->NumComponents;
      }
      local_680 = local_680 + iVar22;
      bVar2 = *(byte *)(puVar27 + 4);
      if (bVar2 == 0x19) {
        iVar22 = *(int *)(puVar27[2] + 0x40);
      }
      else {
        iVar22 = 1;
      }
      local_67c = local_67c + iVar22;
      if (param_1->bIsDerivativeType == false) {
        if (bVar2 == 0x19) {
          uStack_658 = Void;
          local_660 = *(longlong *)(puVar27[2] + 0x10);
          local_650 = CONCAT71(local_650._1_7_,-(local_660 != Void)) & 0xffffffffffffff19;
        }
        else if (bVar2 == 0x1a) {
          local_660 = puVar27[2];
          uStack_658 = puVar27[3];
          local_650 = puVar27[4];
        }
        else {
          if ((0x1b < bVar2) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)Type < NumValueTypes",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                                 ,0x45,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            pFVar14 = (FStructType *)(*pcVar4)();
            return pFVar14;
          }
          uVar24 = 0x1c;
          if (bVar2 < 0x1c) {
            uVar24 = (ulonglong)bVar2;
          }
          if (GValueTypeDescriptions[uVar24].ComponentType == Void) {
            local_660 = Void;
            uStack_658 = Void;
            local_650 = local_650 & 0xffffffffffffff00;
          }
          else {
            EVar10 = MakeValueType(Float,(int)GValueTypeDescriptions[uVar24].NumComponents);
            local_650 = CONCAT71(local_650._1_7_,EVar10);
            local_660 = Void;
            uStack_658 = Void;
            if (((EVar10 == Struct) || (EVar10 == Object)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InValueType != EValueType::Struct && InValueType != EValueType::Object"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Shader\\ShaderTypes.h"
                                   ,0xb7,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              pFVar14 = (FStructType *)(*pcVar4)();
              return pFVar14;
            }
          }
        }
        if ((char)local_650 != '\0') {
          if (local_2c8 == local_2c4) {
            local_2c8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FStructFieldInitializer>_>
                                  (0x828,&local_550,(int *)&local_2c4);
          }
          lVar17 = (longlong)(int)local_2c8;
          uVar3 = puVar27[1];
          FVar12 = (ForElementType<UE::Shader::FStructFieldInitializer>)&local_550;
          if (local_550.SecondaryData != (ForElementType<UE::Shader::FStructFieldInitializer>)0x0) {
            FVar12 = local_550.SecondaryData;
          }
          pEVar1 = (EValueType *)((longlong)FVar12 + lVar17 * 0x28);
          local_2c8 = local_2c8 + 1;
          *(undefined8 *)pEVar1 = *puVar27;
          *(undefined8 *)(pEVar1 + 8) = uVar3;
          *(undefined8 *)((uchar *)((longlong)FVar12 + 0x10) + lVar17 * 0x28) = local_660;
          *(undefined8 *)((uchar *)((longlong)FVar12 + 0x10) + lVar17 * 0x28 + 8) = uStack_658;
          *(undefined8 *)((uchar *)((longlong)FVar12 + 0x20) + lVar17 * 0x28) = local_650;
        }
      }
      piVar28 = piVar28 + 10;
      uVar29 = uVar29 + 1;
      local_618 = (ForElementType<UE::Shader::FStructFieldInitializer>)((longlong)local_618 - 1);
    } while (local_618 != (ForElementType<UE::Shader::FStructFieldInitializer>)0x0);
    local_618 = (ForElementType<UE::Shader::FStructFieldInitializer>)0x0;
    FVar12 = local_670;
    local_620 = piVar28;
  }
  piVar28 = local_5f8;
  FVar18 = FXxHash64Builder::Finalize(&local_2c0);
                    /* WARNING: Load size is inaccurate */
  local_610 = *FVar18.Hash;
  ppFVar19 = TMapBase<unsigned___int64,UE::Shader::FStructType_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Shader::FStructType_const_*,0>_>
             ::Find((TMapBase<unsigned___int64,UE::Shader::FStructType_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Shader::FStructType_const_*,0>_>
                     *)&this->Types,local_610);
  if (ppFVar19 == (FStructType **)0x0) {
    pEVar20 = FMemStackBase::Alloc(this->Allocator,(longlong)local_680,0x10);
    FVar25 = (ForElementType<UE::Shader::FStructFieldInitializer>)
             FMemStackBase::Alloc(this->Allocator,(longlong)(int)local_67c,0x10);
    if (0 < (longlong)FVar12) {
      do {
        Shader::Private::SetFieldType
                  ((EValueType *)FVar25,pEVar20,piVar28[1],*piVar28,(FType *)(piVar28 + -6));
        piVar28 = piVar28 + 10;
        FVar12 = (ForElementType<UE::Shader::FStructFieldInitializer>)((longlong)FVar12 - 1);
      } while (FVar12 != (ForElementType<UE::Shader::FStructFieldInitializer>)0x0);
    }
    this_00 = local_630;
    local_678 = FMemStackBase::Alloc(local_630->Allocator,0x48,0x10);
    if (local_678 != (FStructType *)0x0) {
      local_678->Hash = 0;
      local_678->Name = (wchar_t *)0x0;
      *(undefined8 *)&(local_678->Fields).ArrayNum = 0;
      *(undefined8 *)&(local_678->ComponentTypes).ArrayNum = 0;
      *(undefined8 *)&(local_678->FlatFieldTypes).ArrayNum = 0;
      local_678->DerivativeType = (FStructType *)0x0;
      (local_678->Fields).DataPtr = (FStructField *)0x0;
      (local_678->ComponentTypes).DataPtr = (EValueComponentType *)0x0;
      (local_678->FlatFieldTypes).DataPtr = (EValueType *)0x0;
    }
    local_5e0 = (param_1->Name).DataPtr;
    uStack_5d8 = *(undefined8 *)&(param_1->Name).Size;
    uVar13 = 8;
    lVar17 = (longlong)(int)*(undefined8 *)&(param_1->Name).Size;
    sVar6 = lVar17 * 2;
    uVar24 = sVar6 + 2;
    if (0xf < uVar24) {
      uVar13 = 0x10;
    }
    local_570 = local_5e0;
    uStack_568 = uStack_5d8;
    pwVar15 = FMemStackBase::Alloc(this_00->Allocator,uVar24,uVar13);
    memcpy(pwVar15,local_5e0,sVar6);
    uStack_668 = local_638;
    pwVar15[lVar17] = L'\0';
    local_678->Name = pwVar15;
    local_678->Hash = local_610;
    if ((local_638 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FStructType *)(*pcVar4)();
      return pFVar14;
    }
    local_670 = (ForElementType<UE::Shader::FStructFieldInitializer>)local_628;
    (local_678->Fields).DataPtr = local_628;
    *(ulonglong *)&(local_678->Fields).ArrayNum = CONCAT44(uStack_664,uStack_668);
    if ((local_680 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FStructType *)(*pcVar4)();
      return pFVar14;
    }
    uStack_668 = local_680;
    (local_678->ComponentTypes).DataPtr = pEVar20;
    *(ulonglong *)&(local_678->ComponentTypes).ArrayNum = CONCAT44(uStack_664,local_680);
    if (((int)local_67c < 0) &&
       (local_670 = (ForElementType<UE::Shader::FStructFieldInitializer>)pEVar20,
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FStructType *)(*pcVar4)();
      return pFVar14;
    }
    uStack_668 = local_67c;
    (local_678->FlatFieldTypes).DataPtr = (EValueType *)FVar25;
    *(ulonglong *)&(local_678->FlatFieldTypes).ArrayNum = CONCAT44(uStack_664,local_67c);
    local_5d0 = &local_610;
    local_5c8 = &local_678;
    local_670 = FVar25;
    TSet<TTuple<unsigned___int64,UE::Shader::FStructType_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Shader::FStructType_const_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,UE::Shader::FStructType_const_*_const_&>_>
              ((TSet<TTuple<unsigned___int64,UE::Shader::FStructType_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Shader::FStructType_const_*,0>,FDefaultSetAllocator>
                *)&this->Types,&local_608,(bool *)&local_5d0);
    pFVar14 = local_678;
    if (0 < (int)local_2c8) {
      local_560 = (param_1->Name).DataPtr;
      uStack_558 = *(undefined8 *)&(param_1->Name).Size;
      local_648.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_648.Data.ArrayNum = 0;
      local_648.Data.ArrayMax = 0;
      pFVar21 = ::FString::ConstructFromPtrSize
                          (&local_5b8,(param_1->Name).DataPtr,
                           (int)*(undefined8 *)&(param_1->Name).Size);
      if (&local_648 != pFVar21) {
        if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_648.Data.AllocatorInstance.Data);
        }
        local_648.Data.AllocatorInstance.Data = (pFVar21->Data).AllocatorInstance.Data;
        (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_648.Data.ArrayNum = (pFVar21->Data).ArrayNum;
        local_648.Data.ArrayMax = (pFVar21->Data).ArrayMax;
        (pFVar21->Data).ArrayNum = 0;
        (pFVar21->Data).ArrayMax = 0;
      }
      if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
      }
      ::FString::ConcatFC(&local_5f0,&local_648,L"_Deriv");
      if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_648.Data.AllocatorInstance.Data);
      }
      uVar29 = local_2c8;
      uStack_668 = local_5f0.Data.ArrayNum + -1;
      if (local_5f0.Data.ArrayNum == 0) {
        uStack_668 = 0;
      }
      local_5a8.Name._12_4_ = uStack_664;
      local_5a8.Name.Size = uStack_668;
      local_670 = (ForElementType<UE::Shader::FStructFieldInitializer>)&local_550;
      if (local_550.SecondaryData != (ForElementType<UE::Shader::FStructFieldInitializer>)0x0) {
        local_670 = local_550.SecondaryData;
      }
      local_5a8.Name.DataPtr = (wchar_t *)local_5f0.Data.AllocatorInstance.Data;
      if (((int)local_2c8 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pFVar14 = (FStructType *)(*pcVar4)();
        return pFVar14;
      }
      uStack_668 = uVar29;
      local_5a8.Fields._12_4_ = uStack_664;
      local_5a8.Fields.ArrayNum = uVar29;
      local_5a8.bIsDerivativeType = true;
      local_5a8.Fields.DataPtr = (FStructFieldInitializer *)local_670;
      pFVar14 = NewType(this_00,&local_5a8);
      local_678->DerivativeType = pFVar14;
      pFVar14 = local_678;
      if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
        pFVar14 = local_678;
      }
    }
  }
  else {
    pFVar14 = *ppFVar19;
  }
  if (local_550.SecondaryData != (ForElementType<UE::Shader::FStructFieldInitializer>)0x0) {
    FMemory::Free((void *)local_550.SecondaryData);
  }
  return pFVar14;
}


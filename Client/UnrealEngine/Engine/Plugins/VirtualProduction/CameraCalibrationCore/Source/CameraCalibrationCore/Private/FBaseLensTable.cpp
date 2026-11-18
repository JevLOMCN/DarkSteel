// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 29

// StaticStruct @ 14d679610

UScriptStruct * __cdecl FBaseLensTable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBaseLensTable.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FBaseLensTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBaseLensTable,(UObject *)pUVar1,L"BaseLensTable"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FBaseLensTable.OuterSingleton;
}

// ~FBaseLensTable @ 14d6abe90

void __thiscall FBaseLensTable::~FBaseLensTable(FBaseLensTable *this)

{
  return;
}

// operator() @ 14d6afa00

void __thiscall
`FBaseLensTable::ForEachFocusPoint'::__l2::<lambda_1>::operator()
          (void *this,FBaseFocusPoint *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  
  fVar1 = *(float *)((longlong)this + 0x40);
  fVar2 = *(float *)((longlong)this + 0x44);
  fVar6 = (float)(**(code **)((longlong)*param_1 + 8))(param_1);
  if ((float)((uint)(fVar6 - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar2) {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
    pcVar3 = *(code **)((longlong)this + 0x10);
    plVar5 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x38);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar3)(uVar4,param_1);
  }
  return;
}

// operator() @ 14d6b1eb0

void __thiscall
`FBaseLensTable::ForEachLinkedFocusPoint'::__l9::<lambda_1>::operator()
          (void *this,FBaseFocusPoint *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  fVar1 = *(float *)((longlong)this + 0x40);
  fVar2 = *(float *)((longlong)this + 0x44);
  fVar6 = (float)(**(code **)((longlong)*param_1 + 8))(param_1);
  if ((float)((uint)(fVar6 - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar2) {
    local_res8[0] = *(undefined1 *)((longlong)this + 0x49);
    local_res10[0] = *(undefined1 *)((longlong)this + 0x48);
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
    pcVar3 = *(code **)((longlong)this + 0x10);
    plVar5 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x38);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar3)(uVar4,param_1,local_res10,local_res8);
  }
  return;
}

// BuildParameterCurveAtFocus @ 14d6b7e50

bool __thiscall
FBaseLensTable::BuildParameterCurveAtFocus
          (FBaseLensTable *this,float param_1,int param_2,FRichCurve *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Tables\\BaseLensTable.h"
             ,0x9c,L"Pure virtual not implemented (%s)");
  return false;
}

// BuildParameterCurveAtZoom @ 14d6b84b0

bool __thiscall
FBaseLensTable::BuildParameterCurveAtZoom
          (FBaseLensTable *this,float param_1,int param_2,FRichCurve *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Tables\\BaseLensTable.h"
             ,0xa5,L"Pure virtual not implemented (%s)");
  return false;
}

// CanEditCurveKeyAttributes @ 14d6b91c0

bool __thiscall FBaseLensTable::CanEditCurveKeyAttributes(FBaseLensTable *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Tables\\BaseLensTable.h"
             ,0xc5,L"Pure virtual not implemented (%s)");
  return false;
}

// CanEditCurveKeyPositions @ 14d6b9240

bool __thiscall FBaseLensTable::CanEditCurveKeyPositions(FBaseLensTable *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Tables\\BaseLensTable.h"
             ,0xbe,L"Pure virtual not implemented (%s)");
  return false;
}

// CopyCurveKeys @ 14d6be2c0

void __thiscall
FBaseLensTable::CopyCurveKeys
          (FBaseLensTable *this,FRichCurve *param_1,FRichCurve *param_2,
          TArrayView<FKeyHandle_const_,int> *param_3)

{
  undefined8 uVar1;
  int iVar2;
  FKeyHandle FVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  FRichCurveKey *pFVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  FRichCurveKey local_68 [2];
  
  iVar2 = param_3->ArrayNum;
  uVar14 = 0;
  if (0 < iVar2) {
    lVar15 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar14 < iVar2) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar3.Index = *(uint *)((longlong)&param_3->DataPtr->Index + lVar15);
      uVar10 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)param_1,FVar3);
      if (uVar10 != 0xffffffff) {
        pFVar12 = FRichCurve::GetKey(param_1,local_68,FVar3);
        uVar7 = *(undefined8 *)pFVar12;
        uVar8 = *(undefined8 *)&pFVar12->Value;
        fVar4 = pFVar12->LeaveTangentWeight;
        uVar1 = *(undefined8 *)&pFVar12->ArriveTangentWeight;
        uVar11 = 0;
        if ((int)uVar10 < (param_2->Keys).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (param_2->Keys).AllocatorInstance.Data;
        lVar13 = (longlong)(int)uVar10 * 0x1c;
        *(undefined8 *)(pFVar5 + lVar13) = uVar7;
        *(undefined8 *)(pFVar5 + lVar13 + 8) = uVar8;
        *(undefined8 *)(pFVar5 + lVar13 + 0x10) = uVar1;
        *(float *)(pFVar5 + lVar13 + 0x18) = fVar4;
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 4;
    } while ((int)uVar14 < iVar2);
  }
  FRichCurve::AutoSetTangents(param_2,0.0);
  return;
}

// DoesFocusPointExists @ 14d6c0840

bool __thiscall
FBaseLensTable::DoesFocusPointExists(FBaseLensTable *this,float param_1,float param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Tables\\BaseLensTable.h"
             ,0x72,L"Pure virtual not implemented (%s)");
  return false;
}

// DoesZoomPointExists @ 14d6c0a30

bool __thiscall
FBaseLensTable::DoesZoomPointExists(FBaseLensTable *this,float param_1,float param_2,float param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Tables\\BaseLensTable.h"
             ,0x7b,L"Pure virtual not implemented (%s)");
  return false;
}

// ForEachFocusPoint @ 14d6cac70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBaseLensTable::ForEachFocusPoint
          (FBaseLensTable *this,TFunction<void___cdecl(FBaseFocusPoint_const_&)> *param_1,
          float param_2,float param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  code *local_c8 [5];
  undefined8 *local_a0;
  FBaseLensTable *local_98;
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  float local_58;
  float local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pcVar1 = *(code **)(this->_padding_ + 0x20);
  local_88 = *(longlong *)param_1;
  local_60 = (longlong *)0x0;
  local_98 = this;
  if (local_88 != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&local_78);
  }
  local_c8[0] = (code *)0x0;
  local_58 = param_2;
  local_54 = param_3;
  local_a0 = FMemory::Malloc(0x60,0x10);
  *local_a0 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FBaseLensTable::ForEachFocusPoint'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_a0[2] = local_98;
  local_a0[4] = local_88;
  local_a0[9] = local_60;
  local_60 = (longlong *)0x0;
  local_a0[6] = local_78;
  local_a0[7] = uStack_70;
  local_a0[8] = local_68;
  if (local_a0[4] != 0) {
    local_88 = 0;
  }
  *(float *)(local_a0 + 10) = local_58;
  *(float *)((longlong)local_a0 + 0x54) = local_54;
  if (local_a0 + 2 != (undefined8 *)0x0) {
    local_c8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FBaseLensTable::ForEachFocusPoint'::__l2::<lambda_1>,void,FBaseFocusPoint_const_&>
                  ::Call;
  }
  (*pcVar1)(this,local_c8);
  if (local_88 != 0) {
    plVar3 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar3 = local_60;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar3 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// ForEachLinkedFocusPoint @ 14d6cae10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBaseLensTable::ForEachLinkedFocusPoint
          (FBaseLensTable *this,
          TFunction<void___cdecl(FBaseFocusPoint_const_&,ELensDataCategory,FLinkPointMetadata)>
          *param_1,float param_2,float param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<unsigned_int> FVar14;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  int iStack_198;
  uint uStack_194;
  TBitArray<FDefaultBitArrayAllocator> *local_190;
  undefined4 uStack_188;
  uint uStack_184;
  int local_180;
  uint uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  int local_170;
  int local_16c;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  code *local_138;
  undefined8 *local_110;
  longlong local_108;
  int local_100;
  TBitArray<FDefaultBitArrayAllocator> local_f8;
  int local_d4;
  void *local_c8;
  undefined4 local_c0;
  FBaseLensTable *local_b8;
  longlong local_a8;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *local_80;
  float local_78;
  float local_74;
  undefined2 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  bVar4 = FWeakObjectPtr::IsValid(&(this->LensFile).WeakPtr);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8650075855109750913>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\BaseLensTable.cpp"
                       ,0x81,"LensFile.IsValid()");
    if (!bVar4) {
      if (*(longlong *)param_1 != 0) {
        plVar10 = (longlong *)&param_1->field_0x10;
        if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
          plVar10 = *(longlong **)&param_1->field_0x28;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)this->_padding_)(this);
  uVar13 = local_f8.NumBits;
  iStack_198 = 0;
  local_180 = 0;
  uStack_194 = 1;
  uStack_184 = 0;
  if (local_f8.NumBits != 0) {
    FVar14 = (ForElementType<unsigned_int>)&local_f8;
    if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_f8.AllocatorInstance.SecondaryData;
    }
    uVar12 = *(uint *)FVar14;
    while (uVar12 == 0) {
      lVar7 = (longlong)iStack_198;
      local_180 = local_180 + 0x20;
      iStack_198 = iStack_198 + 1;
      uStack_184 = local_f8.NumBits;
      if ((int)((local_f8.NumBits - 1U) + ((int)(local_f8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iStack_198) goto LAB_14d6caf61;
      uVar12 = *(uint *)((longlong)FVar14 + (lVar7 + 1) * 4);
    }
    uStack_194 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_194 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_170 = (int)lVar7;
    uStack_184 = local_180 + -1 + local_170;
    if (local_f8.NumBits < (int)uStack_184) {
      uStack_184 = local_f8.NumBits;
    }
  }
LAB_14d6caf61:
  local_1a0 = &local_108;
  local_190 = &local_f8;
  uVar12 = local_f8.NumBits & 0xffffffe0;
  iStack_178 = local_100 - local_d4;
  uStack_188 = 0xffffffff;
  TStack_160.CurrentBitIndex = uStack_184;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  TStack_160._padding_ = CONCAT44(uStack_194,iStack_198);
  iVar11 = local_f8.NumBits >> 5;
  TStack_160._28_4_ = uStack_184;
  TStack_160.BaseBitIndex = local_180;
  uStack_140 = CONCAT44(uStack_174,iStack_178);
  bVar6 = (byte)local_f8.NumBits;
  uStack_17c = uStack_184;
  local_168 = local_1a0;
  TStack_160.Array = local_190;
  if ((local_f8.NumBits < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar13 != local_f8.NumBits) {
    FVar14 = (ForElementType<unsigned_int>)&local_f8;
    if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_f8.AllocatorInstance.SecondaryData;
    }
    uVar13 = -1 << (bVar6 & 0x1f) & *(uint *)((longlong)FVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar7 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = local_f8.NumBits;
      if ((int)((local_f8.NumBits - 1U) + ((int)(local_f8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar11) goto LAB_14d6cb073;
      uVar13 = *(uint *)((longlong)FVar14 + (lVar7 + 1) * 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_16c = (int)lVar7;
    uVar13 = local_16c + -1 + uVar12;
    if (local_f8.NumBits < (int)uVar13) {
      uVar13 = local_f8.NumBits;
    }
  }
LAB_14d6cb073:
  do {
    plVar10 = local_168;
    if ((int)local_168[1] - *(int *)((longlong)local_168 + 0x34) != (int)uStack_140) {
      local_1a8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_ELensDataCategory,FLinkPointMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
    }
    lVar7 = (longlong)TStack_160.CurrentBitIndex;
    if (((TStack_160.CurrentBitIndex == uVar13) && (TStack_160.Array == &local_f8)) &&
       (plVar10 == &local_108)) goto LAB_14d6cb270;
    lVar2 = *plVar10;
    pUVar5 = FWeakObjectPtr::Get(&(this->LensFile).WeakPtr);
    switch(*(undefined1 *)(lVar2 + lVar7 * 0xc)) {
    default:
switchD_14d6cb0e1_caseD_0:
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8650075855109750922>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\BaseLensTable.cpp"
                         ,0x8a,"LinkDataTable");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
LAB_14d6cb270:
      local_c0 = 0;
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_ELensDataCategory,FLinkPointMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_ELensDataCategory,FLinkPointMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_108);
      if (*(longlong *)param_1 == 0) {
        return;
      }
      plVar10 = (longlong *)&param_1->field_0x10;
      if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
        plVar10 = *(longlong **)&param_1->field_0x28;
      }
      (**(code **)(*plVar10 + 0x10))();
      return;
    case 2:
      lVar8 = 0x200;
      break;
    case 3:
      lVar8 = 0x1d0;
      break;
    case 4:
      lVar8 = 0x230;
      break;
    case 5:
      lVar8 = 0x290;
      break;
    case 6:
      lVar8 = 0x260;
    }
    plVar10 = (longlong *)(&pUVar5->field_0x0 + lVar8);
    if (plVar10 == (longlong *)0x0) goto switchD_14d6cb0e1_caseD_0;
    local_80 = (longlong *)0x0;
    pcVar3 = *(code **)(*plVar10 + 0x20);
    local_a8 = *(longlong *)param_1;
    local_b8 = this;
    if (local_a8 != 0) {
      puVar9 = *(undefined8 **)&param_1->field_0x28;
      if (*(undefined8 **)&param_1->field_0x28 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)&param_1->field_0x10;
      }
      (**(code **)*puVar9)(puVar9,&local_98);
    }
    local_70 = *(undefined2 *)(lVar2 + lVar7 * 0xc);
    local_138 = (code *)0x0;
    local_110 = (undefined8 *)0x0;
    local_78 = param_2;
    local_74 = param_3;
    local_110 = FMemory::Malloc(0x60,0x10);
    *local_110 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FBaseLensTable::ForEachLinkedFocusPoint'::`9'::<lambda_1>,0,1>
                  ::_vftable_;
    local_110[2] = local_b8;
    local_110[4] = local_a8;
    local_110[9] = local_80;
    local_80 = (longlong *)0x0;
    local_110[6] = local_98;
    local_110[7] = uStack_90;
    local_110[8] = local_88;
    if (local_110[4] != 0) {
      local_a8 = 0;
    }
    *(float *)(local_110 + 10) = local_78;
    *(float *)((longlong)local_110 + 0x54) = local_74;
    *(undefined2 *)(local_110 + 0xb) = local_70;
    if (local_110 + 2 != (undefined8 *)0x0) {
      local_138 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FBaseLensTable::ForEachLinkedFocusPoint'::__l9::<lambda_1>,void,FBaseFocusPoint_const_&>
                  ::Call;
    }
    (*pcVar3)(plVar10);
    if (local_a8 != 0) {
      plVar10 = &local_98;
      if (local_80 != (longlong *)0x0) {
        plVar10 = local_80;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  } while( true );
}

// ForEachPoint @ 14d6cb320

void __thiscall
FBaseLensTable::ForEachPoint
          (FBaseLensTable *this,TFunction<void___cdecl(FBaseFocusPoint_const_&)> *param_1)

{
  longlong *plVar1;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Tables\\BaseLensTable.h"
             ,0x8a,L"Pure virtual not implemented (%s)");
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x00014d6cb365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// GetBaseFocusPoint @ 14d6d1da0

FBaseFocusPoint * __thiscall FBaseLensTable::GetBaseFocusPoint(FBaseLensTable *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Tables\\BaseLensTable.h"
             ,0x93,L"Pure virtual not implemented (%s)");
  return (FBaseFocusPoint *)0x0;
}

// GetCurveKeyPositionRange @ 14d6d3430

TRange<double> * __thiscall
FBaseLensTable::GetCurveKeyPositionRange
          (FBaseLensTable *this,TRange<double> *__return_storage_ptr__,int param_1)

{
  (__return_storage_ptr__->LowerBound).Type.Value = '\x01';
  (__return_storage_ptr__->LowerBound).Value = -1.7976931348623157e+308;
  (__return_storage_ptr__->UpperBound).Value = 1.7976931348623157e+308;
  (__return_storage_ptr__->UpperBound).Type.Value = '\0';
  return __return_storage_ptr__;
}

// GetFocusPointNum @ 14d6d4690

int __thiscall FBaseLensTable::GetFocusPointNum(FBaseLensTable *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Tables\\BaseLensTable.h"
             ,0x8d,L"Pure virtual not implemented (%s)");
  return -1;
}

// GetFriendlyPointName @ 14d6d4ae0

FName __cdecl FBaseLensTable::GetFriendlyPointName(ELensDataCategory param_1)

{
  undefined7 in_register_00000009;
  FName this;
  char in_DL;
  
  this._1_7_ = in_register_00000009;
  this.ComparisonIndex.Value._0_1_ = param_1;
  if (in_DL == '\x02') {
    ::FName::FName((FName *)this,L"Focal Length");
    return this;
  }
  if (in_DL == '\x03') {
    ::FName::FName((FName *)this,L"Distortion Parameters");
    return this;
  }
  if (in_DL == '\x04') {
    ::FName::FName((FName *)this,L"Image Center");
    return this;
  }
  if (in_DL != '\x05') {
    if (in_DL != '\x06') {
      ::FName::FName((FName *)this,L"");
      return this;
    }
    ::FName::FName((FName *)this,L"Nodal Offset");
    return this;
  }
  ::FName::FName((FName *)this,L"ST Map");
  return this;
}

// GetLinkedCategories @ 14d6d52f0

TMap<ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ELensDataCategory,FLinkPointMetadata,0>_>
* __thiscall
FBaseLensTable::GetLinkedCategories
          (FBaseLensTable *this,
          TMap<ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ELensDataCategory,FLinkPointMetadata,0>_>
          *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Tables\\BaseLensTable.h"
             ,0x6b,L"Pure virtual not implemented (%s)");
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  return __return_storage_ptr__;
}

// GetParameterValueLabel @ 14d6d6d80

FText * __thiscall
FBaseLensTable::GetParameterValueLabel
          (FBaseLensTable *this,FText *__return_storage_ptr__,int param_1)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetParameterValueUnitLabel @ 14d6d6f20

FText * __thiscall
FBaseLensTable::GetParameterValueUnitLabel
          (FBaseLensTable *this,FText *__return_storage_ptr__,int param_1)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetScriptStruct @ 14d6d8bf0

UScriptStruct * __thiscall FBaseLensTable::GetScriptStruct(FBaseLensTable *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Tables\\BaseLensTable.h"
             ,0x96,L"Pure virtual not implemented (%s)");
  return (UScriptStruct *)0x0;
}

// GetTotalPointNum @ 14d6dbf30

int __thiscall FBaseLensTable::GetTotalPointNum(FBaseLensTable *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Tables\\BaseLensTable.h"
             ,0x90,L"Pure virtual not implemented (%s)");
  return -1;
}

// HasLinkedFocusValues @ 14d6dd2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FBaseLensTable::HasLinkedFocusValues(FBaseLensTable *this,float param_1,float param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  UObject *pUVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<unsigned_int> FVar14;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [8];
  longlong *local_120;
  int iStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  int local_100;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  int local_ec;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  longlong local_b8;
  int local_b0;
  TBitArray<FDefaultBitArrayAllocator> local_a8;
  int local_84;
  void *local_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_158;
  bVar5 = FWeakObjectPtr::IsValid(&(this->LensFile).WeakPtr);
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8650075855109750941>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\BaseLensTable.cpp"
                       ,0x9d,"LensFile.IsValid()");
    if (!bVar5) {
      return false;
    }
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  (**(code **)this->_padding_)(this,&local_b8);
  uVar13 = local_a8.NumBits;
  iStack_118 = 0;
  local_100 = 0;
  uStack_114 = 1;
  uStack_104 = 0;
  if (local_a8.NumBits != 0) {
    FVar14 = (ForElementType<unsigned_int>)&local_a8;
    if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_a8.AllocatorInstance.SecondaryData;
    }
    uVar12 = *(uint *)FVar14;
    while (uVar12 == 0) {
      lVar10 = (longlong)iStack_118;
      local_100 = local_100 + 0x20;
      iStack_118 = iStack_118 + 1;
      uStack_104 = local_a8.NumBits;
      if ((int)((local_a8.NumBits - 1U) + ((int)(local_a8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iStack_118) goto LAB_14d6dd413;
      uVar12 = *(uint *)((longlong)FVar14 + (lVar10 + 1) * 4);
    }
    uStack_114 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_114 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_f0 = (int)lVar10;
    uStack_104 = local_f0 + -1 + local_100;
    if (local_a8.NumBits < (int)uStack_104) {
      uStack_104 = local_a8.NumBits;
    }
  }
LAB_14d6dd413:
  local_120 = &local_b8;
  local_110 = &local_a8;
  iStack_f8 = local_b0 - local_84;
  uVar12 = local_a8.NumBits & 0xffffffe0;
  uStack_108 = 0xffffffff;
  TStack_e0.CurrentBitIndex = uStack_104;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  TStack_e0._padding_ = CONCAT44(uStack_114,iStack_118);
  iVar11 = local_a8.NumBits >> 5;
  TStack_e0._28_4_ = uStack_104;
  TStack_e0.BaseBitIndex = local_100;
  uStack_c0 = CONCAT44(uStack_f4,iStack_f8);
  bVar9 = (byte)local_a8.NumBits;
  uStack_fc = uStack_104;
  local_e8 = local_120;
  TStack_e0.Array = local_110;
  if ((local_a8.NumBits < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (uVar13 != local_a8.NumBits) {
    FVar14 = (ForElementType<unsigned_int>)&local_a8;
    if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_a8.AllocatorInstance.SecondaryData;
    }
    uVar13 = -1 << (bVar9 & 0x1f) & *(uint *)((longlong)FVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = local_a8.NumBits;
      if ((int)((local_a8.NumBits - 1U) + ((int)(local_a8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar11) goto LAB_14d6dd530;
      uVar13 = *(uint *)((longlong)FVar14 + (lVar10 + 1) * 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_ec = (int)lVar10;
    uVar13 = local_ec + -1 + uVar12;
    if (local_a8.NumBits < (int)uVar13) {
      uVar13 = local_a8.NumBits;
    }
  }
LAB_14d6dd530:
  do {
    plVar1 = local_e8;
    if ((int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34) != (int)uStack_c0) {
      local_128[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_ELensDataCategory,FLinkPointMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    lVar10 = (longlong)TStack_e0.CurrentBitIndex;
    if (((TStack_e0.CurrentBitIndex == uVar13) && (TStack_e0.Array == &local_a8)) &&
       (plVar1 == &local_b8)) {
LAB_14d6dd622:
      bVar5 = false;
      goto LAB_14d6dd624;
    }
    lVar3 = *plVar1;
    pUVar8 = FWeakObjectPtr::Get(&(this->LensFile).WeakPtr);
    switch(*(undefined1 *)(lVar3 + lVar10 * 0xc)) {
    default:
      goto switchD_14d6dd590_caseD_0;
    case 2:
      lVar10 = 0x200;
      break;
    case 3:
      lVar10 = 0x1d0;
      break;
    case 4:
      lVar10 = 0x230;
      break;
    case 5:
      lVar10 = 0x290;
      break;
    case 6:
      lVar10 = 0x260;
    }
    plVar1 = (longlong *)(&pUVar8->field_0x0 + lVar10);
    if (plVar1 == (longlong *)0x0) {
switchD_14d6dd590_caseD_0:
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8650075855109750950>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\BaseLensTable.cpp"
                         ,0xa6,"LinkDataTable");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      goto LAB_14d6dd622;
    }
    cVar7 = (**(code **)(*plVar1 + 8))(plVar1,param_1,param_2);
    if (cVar7 != '\0') {
      bVar5 = true;
LAB_14d6dd624:
      local_70 = 0;
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_ELensDataCategory,FLinkPointMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_ELensDataCategory,FLinkPointMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_b8);
      return bVar5;
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  } while( true );
}

// HasLinkedZoomValues @ 14d6dd6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FBaseLensTable::HasLinkedZoomValues(FBaseLensTable *this,float param_1,float param_2,float param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  UObject *pUVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<unsigned_int> FVar14;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [8];
  longlong *local_140;
  int iStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  uint uStack_124;
  int local_120;
  uint uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  longlong local_d8;
  int local_d0;
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  int local_a4;
  void *local_98;
  undefined4 local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar5 = FWeakObjectPtr::IsValid(&(this->LensFile).WeakPtr);
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8650075855109750966>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\BaseLensTable.cpp"
                       ,0xb6,"LensFile.IsValid()");
    if (!bVar5) {
      return false;
    }
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  (**(code **)this->_padding_)(this,&local_d8);
  uVar13 = local_c8.NumBits;
  iStack_138 = 0;
  local_120 = 0;
  uStack_134 = 1;
  uStack_124 = 0;
  if (local_c8.NumBits != 0) {
    FVar14 = (ForElementType<unsigned_int>)&local_c8;
    if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_c8.AllocatorInstance.SecondaryData;
    }
    uVar12 = *(uint *)FVar14;
    while (uVar12 == 0) {
      lVar10 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      uStack_124 = local_c8.NumBits;
      if ((int)((local_c8.NumBits - 1U) + ((int)(local_c8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iStack_138) goto LAB_14d6dd7f1;
      uVar12 = *(uint *)((longlong)FVar14 + (lVar10 + 1) * 4);
    }
    uStack_134 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_134 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_110 = (int)lVar10;
    uStack_124 = local_110 + -1 + local_120;
    if (local_c8.NumBits < (int)uStack_124) {
      uStack_124 = local_c8.NumBits;
    }
  }
LAB_14d6dd7f1:
  local_140 = &local_d8;
  local_130 = &local_c8;
  iStack_118 = local_d0 - local_a4;
  uVar12 = local_c8.NumBits & 0xffffffe0;
  uStack_128 = 0xffffffff;
  TStack_100.CurrentBitIndex = uStack_124;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uStack_134,iStack_138);
  iVar11 = local_c8.NumBits >> 5;
  TStack_100._28_4_ = uStack_124;
  TStack_100.BaseBitIndex = local_120;
  uStack_e0 = CONCAT44(uStack_114,iStack_118);
  bVar9 = (byte)local_c8.NumBits;
  uStack_11c = uStack_124;
  local_108 = local_140;
  TStack_100.Array = local_130;
  if ((local_c8.NumBits < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (uVar13 != local_c8.NumBits) {
    FVar14 = (ForElementType<unsigned_int>)&local_c8;
    if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_c8.AllocatorInstance.SecondaryData;
    }
    uVar13 = -1 << (bVar9 & 0x1f) & *(uint *)((longlong)FVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = local_c8.NumBits;
      if ((int)((local_c8.NumBits - 1U) + ((int)(local_c8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar11) goto LAB_14d6dd910;
      uVar13 = *(uint *)((longlong)FVar14 + (lVar10 + 1) * 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_10c = (int)lVar10;
    uVar13 = local_10c + -1 + uVar12;
    if (local_c8.NumBits < (int)uVar13) {
      uVar13 = local_c8.NumBits;
    }
  }
LAB_14d6dd910:
  do {
    plVar1 = local_108;
    if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
      local_148[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_ELensDataCategory,FLinkPointMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_148);
    }
    lVar10 = (longlong)TStack_100.CurrentBitIndex;
    if (((TStack_100.CurrentBitIndex == uVar13) && (TStack_100.Array == &local_c8)) &&
       (plVar1 == &local_d8)) {
LAB_14d6dda06:
      bVar5 = false;
      goto LAB_14d6dda08;
    }
    lVar3 = *plVar1;
    pUVar8 = FWeakObjectPtr::Get(&(this->LensFile).WeakPtr);
    switch(*(undefined1 *)(lVar3 + lVar10 * 0xc)) {
    default:
      goto switchD_14d6dd970_caseD_0;
    case 2:
      lVar10 = 0x200;
      break;
    case 3:
      lVar10 = 0x1d0;
      break;
    case 4:
      lVar10 = 0x230;
      break;
    case 5:
      lVar10 = 0x290;
      break;
    case 6:
      lVar10 = 0x260;
    }
    plVar1 = (longlong *)(&pUVar8->field_0x0 + lVar10);
    if (plVar1 == (longlong *)0x0) {
switchD_14d6dd970_caseD_0:
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8650075855109750975>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\BaseLensTable.cpp"
                         ,0xbf,"LinkDataTable");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      goto LAB_14d6dda06;
    }
    cVar7 = (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2,param_3);
    if (cVar7 != '\0') {
      bVar5 = true;
LAB_14d6dda08:
      local_90 = 0;
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_ELensDataCategory,FLinkPointMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_ELensDataCategory,FLinkPointMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_d8);
      return bVar5;
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  } while( true );
}

// IsFocusBetweenNeighbor @ 14d6e19e0

bool __thiscall
FBaseLensTable::IsFocusBetweenNeighbor(FBaseLensTable *this,float param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  iVar4 = (**(code **)(this->_padding_ + 0x28))();
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar1 = __real_322bcc77;
  if (iVar4 == 1) {
LAB_14d6e1b20:
    bVar3 = true;
  }
  else {
    iVar7 = 0;
    if (iVar4 < 1) {
LAB_14d6e1b1c:
      bVar3 = false;
    }
    else {
      do {
        plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x38))(this,iVar7);
        if ((plVar5 != (longlong *)0x0) &&
           (fVar8 = (float)(**(code **)(*plVar5 + 8))(plVar5),
           (float)((uint)(fVar8 - param_1) & uVar2) <= fVar1)) {
          if ((iVar7 + -1 < 0) || (iVar4 <= iVar7 + -1)) {
            fVar8 = (float)(**(code **)(*plVar5 + 8))(plVar5);
          }
          else {
            plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x38))(this);
            fVar8 = (float)(**(code **)(*plVar6 + 8))(plVar6);
          }
          if (iVar7 + 1 < iVar4) {
            plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x38))(this,iVar7 + 1);
            fVar9 = (float)(**(code **)(*plVar5 + 8))(plVar5);
          }
          else {
            fVar9 = (float)(**(code **)(*plVar5 + 8))(plVar5);
          }
          if ((((float)((uint)(fVar8 - fVar9) & uVar2) <= fVar1) ||
              ((param_2 <= fVar8 && (fVar1 < (float)((uint)(fVar8 - param_2) & uVar2))))) ||
             ((fVar9 <= param_2 && (fVar1 < (float)((uint)(fVar9 - param_2) & uVar2)))))
          goto LAB_14d6e1b1c;
          goto LAB_14d6e1b20;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar4);
      bVar3 = false;
    }
  }
  return bVar3;
}

// PropagateCurveValuesToCrossCurves @ 14d6e57b0

void __thiscall
FBaseLensTable::PropagateCurveValuesToCrossCurves
          (FBaseLensTable *this,FRichCurve *param_1,float param_2,
          TFunctionRef<FRichCurve_*___cdecl(float)> *param_3)

{
  code *pcVar1;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  FKeyHandle FVar6;
  FRichCurve *this_00;
  undefined4 extraout_var;
  longlong lVar7;
  float in_XMM1_Da;
  FKeyHandle local_58;
  undefined4 local_50 [4];
  TIndexedContainerIterator<TArray<FRichCurveKey,TSizedDefaultAllocator<32>_>_const_,FRichCurveKey_const_,int>
  local_40 [3];
  
  FRichCurve::GetKeyIterator(param_1,local_40);
  while( true ) {
    iVar3 = local_40[0].Index;
    pTVar2 = local_40[0].Container;
    if (local_40[0].Index < 0) {
      return;
    }
    if ((local_40[0].Container)->ArrayNum <= local_40[0].Index) break;
    uVar5 = 0;
    if (local_40[0].Index < (local_40[0].Container)->ArrayNum) {
      uVar5 = (uint)~local_40[0].Index >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_50[0] = *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 0x1c + 4);
    this_00 = (FRichCurve *)(**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_50);
    if (this_00 != (FRichCurve *)0x0) {
      FRealCurve::FindKey((FRealCurve *)this_00,in_XMM1_Da,param_2);
      FVar6 = FKeyHandle::Invalid();
      pTVar2 = local_40[0].Container;
      if (local_58.Index != *(uint *)CONCAT44(extraout_var,FVar6.Index)) {
        lVar7 = (longlong)local_40[0].Index;
        uVar5 = 0;
        if (local_40[0].Index < (local_40[0].Container)->ArrayNum) {
          uVar5 = (uint)~local_40[0].Index >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FRichCurve::SetKeyValue
                  (this_00,local_58,*(float *)((pTVar2->AllocatorInstance).Data + lVar7 * 0x1c + 8),
                   true);
      }
    }
    local_40[0].Index = local_40[0].Index + 1;
  }
  return;
}

// SetParameterCurveKeysAtFocus @ 14d6ebe30

void __thiscall
FBaseLensTable::SetParameterCurveKeysAtFocus
          (FBaseLensTable *this,float param_1,int param_2,FRichCurve *param_3,
          TArrayView<FKeyHandle_const_,int> *param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Tables\\BaseLensTable.h"
             ,0xae,L"Pure virtual not implemented (%s)");
  return;
}

// SetParameterCurveKeysAtZoom @ 14d6ec920

void __thiscall
FBaseLensTable::SetParameterCurveKeysAtZoom
          (FBaseLensTable *this,float param_1,int param_2,FRichCurve *param_3,
          TArrayView<FKeyHandle_const_,int> *param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Tables\\BaseLensTable.h"
             ,0xb7,L"Pure virtual not implemented (%s)");
  return;
}


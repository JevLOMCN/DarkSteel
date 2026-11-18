// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// MergeTopTwoValues @ 1485cfa20

void __thiscall
UE::Shader::FPreshaderStack::MergeTopTwoValues(FPreshaderStack *this,EValueType param_1,int param_2)

{
  int *piVar1;
  FValueComponent *_Dst;
  code *pcVar2;
  bool bVar3;
  FPreshaderType *_Dst_00;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = (this->Values).ArrayNum;
  uVar5 = iVar4 - 1;
  uVar6 = 0;
  if ((int)uVar5 < iVar4) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  _Dst_00 = (this->Values).AllocatorInstance.Data + (int)uVar5;
  iVar4 = (this->Values).ArrayNum + ~uVar5;
  if (iVar4 != 0) {
    memmove(_Dst_00,_Dst_00 + 1,(longlong)iVar4 << 5);
  }
  piVar1 = &(this->Values).ArrayNum;
  *piVar1 = *piVar1 + -1;
  uVar6 = (this->Components).ArrayNum - param_2;
  if ((int)(uVar6 | param_2) < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (this->Components).AllocatorInstance.Data + (int)uVar6;
    iVar4 = ((this->Components).ArrayNum - uVar6) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,_Dst + param_2,(longlong)iVar4 << 3);
    }
    piVar1 = &(this->Components).ArrayNum;
    *piVar1 = *piVar1 - param_2;
  }
  iVar4 = (this->Values).ArrayNum;
  uVar5 = iVar4 - 1;
  uVar6 = 0;
  if ((int)uVar5 < iVar4) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  (this->Values).AllocatorInstance.Data[(longlong)(this->Values).ArrayNum + -1].ValueType = param_1;
  return;
}

// OverrideTopType @ 1485d16c0

void __thiscall
UE::Shader::FPreshaderStack::OverrideTopType(FPreshaderStack *this,EValueType param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = (this->Values).ArrayNum;
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
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
  if ((this->Values).AllocatorInstance.Data[(longlong)(this->Values).ArrayNum + -1].StructTypeHash
      != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Values.Last().IsStruct()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Shader\\PreshaderTypes.h"
                       ,0x4e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (this->Values).ArrayNum;
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
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
  (this->Values).AllocatorInstance.Data[(longlong)(this->Values).ArrayNum + -1].ValueType = param_1;
  return;
}

// PeekValue @ 1485d17e0

FPreshaderValue * __thiscall
UE::Shader::FPreshaderStack::PeekValue
          (FPreshaderStack *this,FPreshaderValue *__return_storage_ptr__,int param_1)

{
  EValueType EVar1;
  FPreshaderType *pFVar2;
  FPreshaderType *pFVar3;
  FValueComponent *pFVar4;
  code *pcVar5;
  EValueComponentType *pEVar6;
  undefined8 uVar7;
  TArrayView<UE::Shader::EValueComponentType_const_,int> *pTVar8;
  undefined4 uVar9;
  bool bVar10;
  FPreshaderValue *pFVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined4 uStack_2c;
  
  uVar16 = 0;
  (__return_storage_ptr__->Type).StructTypeHash = 0;
  (__return_storage_ptr__->Type).StructComponentTypes.DataPtr = (EValueComponentType *)0x0;
  (__return_storage_ptr__->Type).StructComponentTypes.ArrayNum = 0;
  (__return_storage_ptr__->Type).ValueType = Void;
  (__return_storage_ptr__->Component).DataPtr = (FValueComponent *)0x0;
  (__return_storage_ptr__->Component).ArrayNum = 0;
  iVar19 = (this->Values).ArrayNum;
  uVar14 = ~param_1 + iVar19;
  uVar18 = 0;
  if ((int)uVar14 < iVar19) {
    uVar18 = ~uVar14 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPreshaderValue *)(*pcVar5)();
    return pFVar11;
  }
  lVar12 = (longlong)((this->Values).ArrayNum - param_1);
  pFVar2 = (this->Values).AllocatorInstance.Data;
  pFVar3 = pFVar2 + lVar12 + -1;
  pEVar6 = (pFVar3->StructComponentTypes).DataPtr;
  (__return_storage_ptr__->Type).StructTypeHash = pFVar3->StructTypeHash;
  (__return_storage_ptr__->Type).StructComponentTypes.DataPtr = pEVar6;
  pTVar8 = &pFVar2[lVar12 + -1].StructComponentTypes;
  uVar9 = *(undefined4 *)&pTVar8->field_0xc;
  uVar7 = pTVar8[1].DataPtr;
  (__return_storage_ptr__->Type).StructComponentTypes.ArrayNum = pTVar8->ArrayNum;
  *(undefined4 *)&(__return_storage_ptr__->Type).StructComponentTypes.field_0xc = uVar9;
  *(undefined8 *)&(__return_storage_ptr__->Type).ValueType = uVar7;
  uVar18 = 0;
  uVar14 = uVar16;
  if (0 < param_1) {
    do {
      iVar19 = (this->Values).ArrayNum;
      uVar15 = ~uVar16 + iVar19;
      uVar18 = 0;
      if ((int)uVar15 < iVar19) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPreshaderValue *)(*pcVar5)();
        return pFVar11;
      }
      lVar12 = (longlong)(int)((this->Values).ArrayNum - uVar16);
      pFVar3 = (this->Values).AllocatorInstance.Data;
      if (pFVar3[lVar12 + -1].StructTypeHash == 0) {
        EVar1 = pFVar3[lVar12 + -1].ValueType;
        if ((Any < EVar1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(uint32)Type < NumValueTypes",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                                ,0x45,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPreshaderValue *)(*pcVar5)();
          return pFVar11;
        }
        uVar13 = 0x1c;
        if (EVar1 < Num) {
          uVar13 = (ulonglong)EVar1;
        }
        iVar19 = (int)GValueTypeDescriptions[uVar13].NumComponents;
      }
      else {
        iVar19 = pFVar3[lVar12 + -1].StructComponentTypes.ArrayNum;
      }
      uVar18 = uVar14 + iVar19;
      uVar16 = uVar16 + 1;
      uVar14 = uVar18;
    } while ((int)uVar16 < param_1);
  }
  if ((__return_storage_ptr__->Type).StructTypeHash == 0) {
    EVar1 = (__return_storage_ptr__->Type).ValueType;
    if ((Any < EVar1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)Type < NumValueTypes",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                            ,0x45,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FPreshaderValue *)(*pcVar5)();
      return pFVar11;
    }
    uVar13 = 0x1c;
    if (EVar1 < Num) {
      uVar13 = (ulonglong)EVar1;
    }
    iVar19 = (int)GValueTypeDescriptions[uVar13].NumComponents;
  }
  else {
    iVar19 = (__return_storage_ptr__->Type).StructComponentTypes.ArrayNum;
  }
  iVar17 = ((this->Components).ArrayNum - iVar19) - uVar18;
  if ((iVar17 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ComponentIndex >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\Preshader.cpp"
                          ,200,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPreshaderValue *)(*pcVar5)();
    return pFVar11;
  }
  pFVar4 = (this->Components).AllocatorInstance.Data;
  if ((iVar19 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPreshaderValue *)(*pcVar5)();
    return pFVar11;
  }
  (__return_storage_ptr__->Component).DataPtr = pFVar4 + iVar17;
  *(ulonglong *)&(__return_storage_ptr__->Component).ArrayNum = CONCAT44(uStack_2c,iVar19);
  return __return_storage_ptr__;
}

// PopResult @ 1485d1bb0

void __thiscall
UE::Shader::FPreshaderStack::PopResult(FPreshaderStack *this,FPreshaderValue *param_1)

{
  int *piVar1;
  int iVar2;
  FPreshaderType *pFVar3;
  FValueComponent *pFVar4;
  code *pcVar5;
  EValueComponentType *pEVar6;
  undefined4 uVar7;
  EValueType EVar8;
  undefined7 uVar9;
  bool bVar10;
  int iVar11;
  undefined4 uStack_c;
  
  iVar2 = (this->Values).ArrayNum;
  if (0 < iVar2) {
    if ((iVar2 != 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Values.Num() == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\Preshader.cpp"
                            ,0xaf,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((this->Values).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = (this->Components).ArrayNum;
    iVar11 = FPreshaderType::GetNumComponents((this->Values).AllocatorInstance.Data);
    if ((iVar11 != iVar2) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Values[0].GetNumComponents() == Components.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\Preshader.cpp"
                            ,0xb0,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((this->Values).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->Values).AllocatorInstance.Data;
    pEVar6 = (pFVar3->StructComponentTypes).DataPtr;
    (param_1->Type).StructTypeHash = pFVar3->StructTypeHash;
    (param_1->Type).StructComponentTypes.DataPtr = pEVar6;
    uVar7 = *(undefined4 *)&(pFVar3->StructComponentTypes).field_0xc;
    EVar8 = pFVar3->ValueType;
    uVar9 = *(undefined7 *)&pFVar3->field_0x19;
    (param_1->Type).StructComponentTypes.ArrayNum = (pFVar3->StructComponentTypes).ArrayNum;
    *(undefined4 *)&(param_1->Type).StructComponentTypes.field_0xc = uVar7;
    (param_1->Type).ValueType = EVar8;
    *(undefined7 *)&(param_1->Type).field_0x19 = uVar9;
    pFVar4 = (this->Components).AllocatorInstance.Data;
    iVar2 = (this->Components).ArrayNum;
    if ((iVar2 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    piVar1 = &(this->Values).ArrayMax;
    (param_1->Component).DataPtr = pFVar4;
    *(ulonglong *)&(param_1->Component).ArrayNum = CONCAT44(uStack_c,iVar2);
    (this->Values).ArrayNum = 0;
    if (*piVar1 < 0) {
      Core::Private::
      ReallocTo<2,TNonRelocatableInlineAllocator<8>::ForElementType<UE::Shader::FPreshaderType>_>
                (0x20,8,0,(ForElementType<UE::Shader::FPreshaderType> *)this,0,piVar1);
    }
    piVar1 = &(this->Components).ArrayMax;
    (this->Components).ArrayNum = 0;
    if (*piVar1 < 0) {
      Core::Private::
      ReallocTo<2,TNonRelocatableInlineAllocator<64>::ForElementType<UE::Shader::FValueComponent>_>
                (8,8,0,&(this->Components).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// PopValue @ 1485d1da0

FPreshaderValue * __thiscall
UE::Shader::FPreshaderStack::PopValue(FPreshaderStack *this,FPreshaderValue *__return_storage_ptr__)

{
  int *piVar1;
  FPreshaderType *pFVar2;
  EValueType EVar3;
  FPreshaderType *pFVar4;
  FValueComponent *pFVar5;
  code *pcVar6;
  ulong64 uVar7;
  EValueComponentType *pEVar8;
  undefined8 uVar9;
  TArrayView<UE::Shader::EValueComponentType_const_,int> *pTVar10;
  int iVar11;
  undefined4 uVar12;
  bool bVar13;
  int iVar14;
  FPreshaderValue *pFVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uStack_1c;
  
  (__return_storage_ptr__->Type).StructTypeHash = 0;
  (__return_storage_ptr__->Type).StructComponentTypes.DataPtr = (EValueComponentType *)0x0;
  (__return_storage_ptr__->Type).StructComponentTypes.ArrayNum = 0;
  (__return_storage_ptr__->Type).ValueType = Void;
  (__return_storage_ptr__->Component).DataPtr = (FValueComponent *)0x0;
  (__return_storage_ptr__->Component).ArrayNum = 0;
  if ((this->Values).ArrayNum < 1) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FPreshaderValue *)(*pcVar6)();
      return pFVar15;
    }
  }
  iVar14 = (this->Values).ArrayNum;
  pFVar4 = (this->Values).AllocatorInstance.Data;
  pFVar2 = pFVar4 + (longlong)iVar14 + -1;
  uVar7 = pFVar2->StructTypeHash;
  pEVar8 = (pFVar2->StructComponentTypes).DataPtr;
  pTVar10 = &pFVar4[(longlong)iVar14 + -1].StructComponentTypes;
  iVar11 = pTVar10->ArrayNum;
  uVar12 = *(undefined4 *)&pTVar10->field_0xc;
  uVar9 = pTVar10[1].DataPtr;
  (this->Values).ArrayNum = iVar14 + -1;
  (__return_storage_ptr__->Type).StructTypeHash = uVar7;
  (__return_storage_ptr__->Type).StructComponentTypes.DataPtr = pEVar8;
  (__return_storage_ptr__->Type).StructComponentTypes.ArrayNum = iVar11;
  *(undefined4 *)&(__return_storage_ptr__->Type).StructComponentTypes.field_0xc = uVar12;
  *(undefined8 *)&(__return_storage_ptr__->Type).ValueType = uVar9;
  if ((__return_storage_ptr__->Type).StructTypeHash == 0) {
    EVar3 = (__return_storage_ptr__->Type).ValueType;
    if (Any < EVar3) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(uint32)Type < NumValueTypes",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                          ,0x45,L"");
      if (bVar13) {
        pcVar6 = (code *)swi(3);
        pFVar15 = (FPreshaderValue *)(*pcVar6)();
        return pFVar15;
      }
    }
    uVar16 = 0x1c;
    if (EVar3 < Num) {
      uVar16 = (ulonglong)EVar3;
    }
    uVar18 = (uint)GValueTypeDescriptions[uVar16].NumComponents;
  }
  else {
    uVar18 = (__return_storage_ptr__->Type).StructComponentTypes.ArrayNum;
  }
  iVar14 = (this->Components).ArrayNum;
  pFVar5 = (this->Components).AllocatorInstance.Data;
  uVar19 = iVar14 - uVar18;
  if ((int)uVar18 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FPreshaderValue *)(*pcVar6)();
      return pFVar15;
    }
  }
  (__return_storage_ptr__->Component).DataPtr = pFVar5 + (int)uVar19;
  *(ulonglong *)&(__return_storage_ptr__->Component).ArrayNum = CONCAT44(uStack_1c,uVar18);
  uVar17 = 0;
  if (iVar14 <= (this->Components).ArrayNum) {
    uVar17 = ~(uVar19 | uVar18) >> 0x1f;
  }
  if (uVar17 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x458,
                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                       );
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FPreshaderValue *)(*pcVar6)();
      return pFVar15;
    }
  }
  if (uVar18 != 0) {
    pFVar5 = (this->Components).AllocatorInstance.Data + (int)uVar19;
    iVar14 = ((this->Components).ArrayNum - uVar19) - uVar18;
    if (iVar14 != 0) {
      memmove(pFVar5,pFVar5 + (int)uVar18,(longlong)iVar14 << 3);
    }
    piVar1 = &(this->Components).ArrayNum;
    *piVar1 = *piVar1 - uVar18;
  }
  return __return_storage_ptr__;
}

// PushEmptyValue @ 1485d3960

TArrayView<UE::Shader::FValueComponent,int> * __thiscall
UE::Shader::FPreshaderStack::PushEmptyValue
          (FPreshaderStack *this,TArrayView<UE::Shader::FValueComponent,int> *__return_storage_ptr__
          ,FPreshaderType *param_1)

{
  int *piVar1;
  FPreshaderType *pFVar2;
  FPreshaderType *pFVar3;
  FValueComponent *pFVar4;
  code *pcVar5;
  EValueComponentType *pEVar6;
  undefined8 uVar7;
  TArrayView<UE::Shader::EValueComponentType_const_,int> *pTVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  TArrayView<UE::Shader::FValueComponent,int> *pTVar13;
  
  pFVar2 = (this->Values).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Values).ArrayMax)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TArrayView<UE::Shader::FValueComponent,int> *)(*pcVar5)();
      return pTVar13;
    }
  }
  iVar11 = (this->Values).ArrayNum;
  piVar1 = &(this->Values).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TNonRelocatableInlineAllocator<8>::ForElementType<UE::Shader::FPreshaderType>_>
                       (0x820,(ForElementType<UE::Shader::FPreshaderType> *)this,piVar1);
  }
  (this->Values).ArrayNum = iVar11 + 1;
  pEVar6 = (param_1->StructComponentTypes).DataPtr;
  pFVar3 = (this->Values).AllocatorInstance.Data;
  pFVar2 = pFVar3 + iVar11;
  pFVar2->StructTypeHash = param_1->StructTypeHash;
  (pFVar2->StructComponentTypes).DataPtr = pEVar6;
  uVar9 = *(undefined4 *)&(param_1->StructComponentTypes).field_0xc;
  uVar7 = *(undefined8 *)&param_1->ValueType;
  pTVar8 = &pFVar3[iVar11].StructComponentTypes;
  pTVar8->ArrayNum = (param_1->StructComponentTypes).ArrayNum;
  *(undefined4 *)&pTVar8->field_0xc = uVar9;
  pTVar8[1].DataPtr = uVar7;
  iVar11 = FPreshaderType::GetNumComponents(param_1);
  iVar12 = TArray<UE::Shader::FValueComponent,TNonRelocatableInlineAllocator<64>_>::AddZeroed
                     (&this->Components,iVar11);
  pFVar4 = (this->Components).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar11;
  __return_storage_ptr__->DataPtr = pFVar4 + iVar12;
  if (iVar11 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TArrayView<UE::Shader::FValueComponent,int> *)(*pcVar5)();
      return pTVar13;
    }
  }
  return __return_storage_ptr__;
}

// PushEmptyValue @ 1485d3a90

FValueComponent * __thiscall
UE::Shader::FPreshaderStack::PushEmptyValue(FPreshaderStack *this,EValueType param_1,int param_2)

{
  int *piVar1;
  FPreshaderType *pFVar2;
  FPreshaderType *pFVar3;
  code *pcVar4;
  TArrayView<UE::Shader::EValueComponentType_const_,int> *pTVar5;
  bool bVar6;
  int iVar7;
  FValueComponent *pFVar8;
  FPreshaderType local_28;
  
  pFVar2 = (this->Values).AllocatorInstance.Data;
  local_28.StructTypeHash = 0;
  local_28.StructComponentTypes.DataPtr = (EValueComponentType *)0x0;
  local_28.StructComponentTypes.ArrayNum = 0;
  local_28.ValueType = param_1;
  if ((pFVar2 <= &local_28) && (&local_28 < pFVar2 + (this->Values).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FValueComponent *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar7 = (this->Values).ArrayNum;
  piVar1 = &(this->Values).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TNonRelocatableInlineAllocator<8>::ForElementType<UE::Shader::FPreshaderType>_>
                      (0x820,(ForElementType<UE::Shader::FPreshaderType> *)this,piVar1);
  }
  (this->Values).ArrayNum = iVar7 + 1;
  pFVar3 = (this->Values).AllocatorInstance.Data;
  pFVar2 = pFVar3 + iVar7;
  pFVar2->StructTypeHash = local_28.StructTypeHash;
  (pFVar2->StructComponentTypes).DataPtr = local_28.StructComponentTypes.DataPtr;
  pTVar5 = &pFVar3[iVar7].StructComponentTypes;
  *(ulonglong *)&pTVar5->ArrayNum =
       CONCAT44(local_28.StructComponentTypes._12_4_,local_28.StructComponentTypes.ArrayNum);
  *(ulonglong *)(pTVar5 + 1) = CONCAT71(local_28._25_7_,local_28.ValueType);
  iVar7 = TArray<UE::Shader::FValueComponent,TNonRelocatableInlineAllocator<64>_>::AddZeroed
                    (&this->Components,param_2);
  return (this->Components).AllocatorInstance.Data + iVar7;
}

// PushValue @ 1485d3ba0

void __thiscall
UE::Shader::FPreshaderStack::PushValue
          (FPreshaderStack *this,FPreshaderType *param_1,
          TArrayView<UE::Shader::FValueComponent_const_,int> *param_2)

{
  int *piVar1;
  int iVar2;
  FPreshaderType *pFVar3;
  FValueComponent *_Src;
  FPreshaderType *pFVar4;
  code *pcVar5;
  EValueComponentType *pEVar6;
  undefined8 uVar7;
  TArrayView<UE::Shader::EValueComponentType_const_,int> *pTVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  
  iVar2 = param_2->ArrayNum;
  iVar11 = FPreshaderType::GetNumComponents(param_1);
  if (iVar2 != iVar11) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InComponents.Num() == InType.GetNumComponents()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\Preshader.cpp"
                        ,0x88,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (this->Values).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Values).ArrayMax)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar11 = (this->Values).ArrayNum;
  piVar1 = &(this->Values).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TNonRelocatableInlineAllocator<8>::ForElementType<UE::Shader::FPreshaderType>_>
                       (0x820,(ForElementType<UE::Shader::FPreshaderType> *)this,piVar1);
  }
  _Src = param_2->DataPtr;
  (this->Values).ArrayNum = iVar11 + 1;
  pEVar6 = (param_1->StructComponentTypes).DataPtr;
  pFVar4 = (this->Values).AllocatorInstance.Data;
  pFVar3 = pFVar4 + iVar11;
  pFVar3->StructTypeHash = param_1->StructTypeHash;
  (pFVar3->StructComponentTypes).DataPtr = pEVar6;
  uVar9 = *(undefined4 *)&(param_1->StructComponentTypes).field_0xc;
  uVar7 = *(undefined8 *)&param_1->ValueType;
  pTVar8 = &pFVar4[iVar11].StructComponentTypes;
  pTVar8->ArrayNum = (param_1->StructComponentTypes).ArrayNum;
  *(undefined4 *)&pTVar8->field_0xc = uVar9;
  pTVar8[1].DataPtr = uVar7;
  if ((_Src == (FValueComponent *)0x0) && (iVar2 != 0)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Ptr != nullptr || Count == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x9c1,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar11 = Core::Private::
           ReallocGrow<2,TNonRelocatableInlineAllocator<64>::ForElementType<UE::Shader::FValueComponent>_>
                     (8,8,iVar2,&(this->Components).AllocatorInstance,&(this->Components).ArrayNum,
                      &(this->Components).ArrayMax);
  if (iVar2 != 0) {
    memcpy((this->Components).AllocatorInstance.Data + iVar11,_Src,(longlong)iVar2 << 3);
  }
  return;
}

// PushValue @ 1485d3d50

void __thiscall
UE::Shader::FPreshaderStack::PushValue(FPreshaderStack *this,FPreshaderValue *param_1)

{
  int *piVar1;
  FPreshaderType *pFVar2;
  FPreshaderValue *pFVar3;
  FPreshaderType *pFVar4;
  FValueComponent *_Src;
  code *pcVar5;
  EValueComponentType *pEVar6;
  undefined8 uVar7;
  TArrayView<UE::Shader::EValueComponentType_const_,int> *pTVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = FPreshaderType::GetNumComponents(&param_1->Type);
  if ((param_1->Component).ArrayNum != iVar11) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InValue.Component.Num() == InValue.Type.GetNumComponents()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\Preshader.cpp"
                        ,0x81,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (FPreshaderValue *)(this->Values).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) &&
     (param_1 < (FPreshaderValue *)(&pFVar3->Type + (this->Values).ArrayMax))) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar11 = (this->Values).ArrayNum;
  piVar1 = &(this->Values).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TNonRelocatableInlineAllocator<8>::ForElementType<UE::Shader::FPreshaderType>_>
                       (0x820,(ForElementType<UE::Shader::FPreshaderType> *)this,piVar1);
  }
  (this->Values).ArrayNum = iVar11 + 1;
  pEVar6 = (param_1->Type).StructComponentTypes.DataPtr;
  pFVar4 = (this->Values).AllocatorInstance.Data;
  pFVar2 = pFVar4 + iVar11;
  pFVar2->StructTypeHash = (param_1->Type).StructTypeHash;
  (pFVar2->StructComponentTypes).DataPtr = pEVar6;
  uVar9 = *(undefined4 *)&(param_1->Type).StructComponentTypes.field_0xc;
  uVar7 = *(undefined8 *)&(param_1->Type).ValueType;
  pTVar8 = &pFVar4[iVar11].StructComponentTypes;
  pTVar8->ArrayNum = (param_1->Type).StructComponentTypes.ArrayNum;
  *(undefined4 *)&pTVar8->field_0xc = uVar9;
  pTVar8[1].DataPtr = uVar7;
  iVar11 = (param_1->Component).ArrayNum;
  _Src = (param_1->Component).DataPtr;
  if ((_Src == (FValueComponent *)0x0) && (iVar11 != 0)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Ptr != nullptr || Count == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x9c1,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar12 = Core::Private::
           ReallocGrow<2,TNonRelocatableInlineAllocator<64>::ForElementType<UE::Shader::FValueComponent>_>
                     (8,8,iVar11,&(this->Components).AllocatorInstance,&(this->Components).ArrayNum,
                      &(this->Components).ArrayMax);
  if (iVar11 != 0) {
    memcpy((this->Components).AllocatorInstance.Data + iVar12,_Src,(longlong)iVar11 << 3);
  }
  return;
}

// PushValue @ 1485d3ee0

void __thiscall UE::Shader::FPreshaderStack::PushValue(FPreshaderStack *this,FValue *param_1)

{
  int *piVar1;
  EValueType EVar2;
  FStructType *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FValueTypeDescription *pFVar9;
  FPreshaderType *pFVar10;
  ForElementType<UE::Shader::FValueComponent> _Src;
  TArray<UE::Shader::FValueComponent,TNonRelocatableInlineAllocator<64>_> *pTVar11;
  
  EVar2 = (param_1->Type).ValueType;
  if (EVar2 == Struct) {
    iVar7 = (((param_1->Type).StructType)->ComponentTypes).ArrayNum;
  }
  else if (EVar2 == Object) {
    iVar7 = 1;
  }
  else {
    pFVar9 = GetValueTypeDescription(EVar2);
    iVar7 = (int)pFVar9->NumComponents;
  }
  if ((param_1->Component).ArrayNum != iVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InValue.Component.Num() == InValue.Type.GetNumComponents()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\Preshader.cpp"
                       ,0x7a,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->Values).ArrayNum;
  piVar1 = &(this->Values).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TNonRelocatableInlineAllocator<8>::ForElementType<UE::Shader::FPreshaderType>_>
                      (0x820,(ForElementType<UE::Shader::FPreshaderType> *)this,piVar1);
  }
  (this->Values).ArrayNum = iVar7 + 1;
  pFVar10 = (this->Values).AllocatorInstance.Data + iVar7;
  pFVar10->StructTypeHash = 0;
  (pFVar10->StructComponentTypes).DataPtr = (EValueComponentType *)0x0;
  (pFVar10->StructComponentTypes).ArrayNum = 0;
  pFVar10->ValueType = (param_1->Type).ValueType;
  if ((param_1->Type).ValueType == Struct) {
    pFVar10->StructTypeHash = ((param_1->Type).StructType)->Hash;
    pFVar3 = (param_1->Type).StructType;
    iVar7 = (pFVar3->ComponentTypes).ArrayNum;
    uVar5 = *(undefined4 *)&(pFVar3->ComponentTypes).field_0xc;
    (pFVar10->StructComponentTypes).DataPtr = (pFVar3->ComponentTypes).DataPtr;
    (pFVar10->StructComponentTypes).ArrayNum = iVar7;
    *(undefined4 *)&(pFVar10->StructComponentTypes).field_0xc = uVar5;
  }
  pTVar11 = &this->Components;
  if (pTVar11 ==
      (TArray<UE::Shader::FValueComponent,TNonRelocatableInlineAllocator<64>_> *)&param_1->Component
     ) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (param_1->Component).ArrayNum;
  if (iVar7 != 0) {
    iVar8 = Core::Private::
            ReallocGrow<2,TNonRelocatableInlineAllocator<64>::ForElementType<UE::Shader::FValueComponent>_>
                      (8,8,iVar7,&pTVar11->AllocatorInstance,&(this->Components).ArrayNum,
                       &(this->Components).ArrayMax);
    _Src = (param_1->Component).AllocatorInstance.SecondaryData;
    if (_Src == (ForElementType<UE::Shader::FValueComponent>)0x0) {
      _Src = (ForElementType<UE::Shader::FValueComponent>)&param_1->Component;
    }
    memcpy((pTVar11->AllocatorInstance).Data + iVar8,(void *)_Src,(longlong)iVar7 << 3);
  }
  return;
}


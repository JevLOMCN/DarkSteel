// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 18

// TOperatorJumpTable<void,wchar_t> @ 14179cb30

TOperatorJumpTable<void,wchar_t> * __thiscall
TOperatorJumpTable<void,wchar_t>::TOperatorJumpTable<void,wchar_t>
          (TOperatorJumpTable<void,wchar_t> *this)

{
  *(undefined8 *)&this->PreUnaryOps = 0;
  *(undefined8 *)&(this->PreUnaryOps).field_0x8 = 0;
  *(undefined8 *)&(this->PreUnaryOps).field_0x20 = 0;
  *(undefined4 *)&(this->PreUnaryOps).field_0x28 = 0;
  *(undefined4 *)&(this->PreUnaryOps).field_0x2c = 0x80;
  *(undefined4 *)&(this->PreUnaryOps).field_0x34 = 0;
  *(undefined4 *)&(this->PreUnaryOps).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PreUnaryOps).field_0x40 = 0;
  *(undefined4 *)&(this->PreUnaryOps).field_0x48 = 0;
  *(undefined8 *)&this->PostUnaryOps = 0;
  *(undefined8 *)&(this->PostUnaryOps).field_0x8 = 0;
  *(undefined8 *)&(this->PostUnaryOps).field_0x20 = 0;
  *(undefined4 *)&(this->PostUnaryOps).field_0x28 = 0;
  *(undefined4 *)&(this->PostUnaryOps).field_0x2c = 0x80;
  *(undefined4 *)&(this->PostUnaryOps).field_0x34 = 0;
  *(undefined4 *)&(this->PostUnaryOps).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PostUnaryOps).field_0x40 = 0;
  *(undefined4 *)&(this->PostUnaryOps).field_0x48 = 0;
  *(undefined8 *)&this->BinaryOps = 0;
  *(undefined8 *)&(this->BinaryOps).field_0x8 = 0;
  *(undefined8 *)&(this->BinaryOps).field_0x20 = 0;
  *(undefined4 *)&(this->BinaryOps).field_0x28 = 0;
  *(undefined4 *)&(this->BinaryOps).field_0x2c = 0x80;
  *(undefined4 *)&(this->BinaryOps).field_0x34 = 0;
  *(undefined4 *)&(this->BinaryOps).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BinaryOps).field_0x40 = 0;
  *(undefined4 *)&(this->BinaryOps).field_0x48 = 0;
  *(undefined8 *)&this->BinaryShortCircuits = 0;
  *(undefined8 *)&(this->BinaryShortCircuits).field_0x8 = 0;
  *(undefined8 *)&(this->BinaryShortCircuits).field_0x20 = 0;
  *(undefined4 *)&(this->BinaryShortCircuits).field_0x28 = 0;
  *(undefined4 *)&(this->BinaryShortCircuits).field_0x2c = 0x80;
  *(undefined4 *)&(this->BinaryShortCircuits).field_0x34 = 0;
  *(undefined4 *)&(this->BinaryShortCircuits).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BinaryShortCircuits).field_0x40 = 0;
  *(undefined4 *)&(this->BinaryShortCircuits).field_0x48 = 0;
  return this;
}

// ~TOperatorJumpTable<void,wchar_t> @ 1417a6270

void __thiscall
TOperatorJumpTable<void,wchar_t>::~TOperatorJumpTable<void,wchar_t>
          (TOperatorJumpTable<void,wchar_t> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->BinaryShortCircuits).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BinaryShortCircuits).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BinaryShortCircuits);
  *(undefined4 *)&(this->BinaryOps).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BinaryOps).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BinaryOps);
  *(undefined4 *)&(this->PostUnaryOps).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PostUnaryOps).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PostUnaryOps);
  *(undefined4 *)&(this->PreUnaryOps).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PreUnaryOps).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ExecBinary @ 1417c9a10

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorJumpTable<void,wchar_t>::ExecBinary
          (TOperatorJumpTable<void,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2,
          TExpressionToken<wchar_t> *param_3,void *param_4)

{
  wchar_t *pwVar1;
  ITextData *pIVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  FGuid *pFVar17;
  FText *pFVar18;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar19;
  FTextFormat *pFVar20;
  undefined8 uVar21;
  longlong lVar22;
  uint *puVar23;
  uint *puVar24;
  undefined1 *puVar25;
  TExpressionToken<wchar_t> *local_res18;
  TExpressionToken<wchar_t> *local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_168;
  FFormatArgumentValue local_158;
  FFormatArgumentValue local_138;
  FFormatArgumentValue local_118;
  FOperatorFunctionID local_f8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  local_res18 = param_1;
  local_res20 = param_2;
  pFVar17 = FExpressionNode::GetTypeId(&param_1->Node);
  local_f8.OperatorType.A = pFVar17->A;
  local_f8.OperatorType.B = pFVar17->B;
  uVar4 = pFVar17->C;
  uVar5 = pFVar17->D;
  local_f8.OperatorType.C = uVar4;
  local_f8.OperatorType.D = uVar5;
  pFVar17 = FExpressionNode::GetTypeId(&param_2->Node);
  uVar6 = pFVar17->A;
  uVar7 = pFVar17->B;
  uVar8 = pFVar17->C;
  uVar9 = pFVar17->D;
  local_f8.LeftOperandType.A = uVar6;
  local_f8.LeftOperandType.B = uVar7;
  local_f8.LeftOperandType.C = uVar8;
  local_f8.LeftOperandType.D = uVar9;
  pFVar17 = FExpressionNode::GetTypeId(&param_3->Node);
  uVar10 = pFVar17->A;
  uVar11 = pFVar17->B;
  uVar12 = pFVar17->C;
  uVar13 = pFVar17->D;
  local_f8.RightOperandType.A = uVar10;
  local_f8.RightOperandType.B = uVar11;
  local_f8.RightOperandType.C = uVar12;
  local_f8.RightOperandType.D = uVar13;
  uVar15 = ::GetTypeHash(&local_f8);
  if (*(int *)&(this->BinaryOps).field_0x8 != *(int *)&(this->BinaryOps).field_0x34) {
    puVar25 = *(undefined1 **)&(this->BinaryOps).field_0x40;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = &(this->BinaryOps).field_0x38;
    }
    uVar15 = *(uint *)(puVar25 +
                      (ulonglong)(*(int *)&(this->BinaryOps).field_0x48 - 1U & uVar15) * 4);
    if (uVar15 != 0xffffffff) {
      do {
        puVar23 = (uint *)((longlong)(int)uVar15 * 0x70 + *(longlong *)&this->BinaryOps);
        param_2 = local_res20;
        if (((((local_f8.OperatorType.D == puVar23[3] && local_f8.OperatorType.C == puVar23[2]) &&
              local_f8.OperatorType.B == puVar23[1]) && local_f8.OperatorType.A == *puVar23) &&
            (((local_f8.LeftOperandType.D == puVar23[7] && local_f8.LeftOperandType.C == puVar23[6])
             && local_f8.LeftOperandType.B == puVar23[5]) &&
             local_f8.LeftOperandType.A == puVar23[4])) &&
           (((local_f8.RightOperandType.D == puVar23[0xb] &&
             local_f8.RightOperandType.C == puVar23[10]) &&
            local_f8.RightOperandType.B == puVar23[9]) && local_f8.RightOperandType.A == puVar23[8])
           ) {
          if (uVar15 != 0xffffffff) {
            puVar24 = puVar23 + 0xc;
            if (puVar23 == (uint *)0x0) {
              puVar24 = (uint *)0x0;
            }
            if (puVar24 != (uint *)0x0) {
              local_res18 = param_4;
              UE::Core::Private::Function::CheckCallable(*(void **)puVar24);
              pcVar3 = *(code **)puVar24;
              puVar23 = puVar24 + 4;
              if (*(uint **)(puVar24 + 10) != (uint *)0x0) {
                puVar23 = *(uint **)(puVar24 + 10);
              }
              uVar21 = (**(code **)(*(longlong *)puVar23 + 8))();
              (*pcVar3)(__return_storage_ptr__,uVar21,local_res20,param_3,&local_res18);
              return __return_storage_ptr__;
            }
          }
          break;
        }
        uVar15 = puVar23[0x18];
      } while (uVar15 != 0xffffffff);
    }
  }
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  pwVar1 = (local_res18->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_c8,pwVar1,
             (int)((longlong)(local_res18->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar18 = FText::FromString(&local_98,&local_c8);
  local_158.Type = Text;
  FText::FText((FText *)&local_158.TextValue,pFVar18);
  if ((local_158.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         ), bVar14)) {
    pcVar3 = (code *)swi(3);
    pTVar19 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar19;
  }
  if (((local_168.AllocatorInstance.Data <= &local_158) &&
      (&local_158 <
       (FFormatArgumentValue *)
       (local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar3 = (code *)swi(3);
    pTVar19 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar19;
  }
  iVar16 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar16 + 1;
  lVar22 = (longlong)iVar16 * 0x20;
  *(Type *)&local_168.AllocatorInstance.Data[lVar22].field_0x0 = local_158.Type;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_158.field1_0x8.IntValue._4_4_,local_158.field1_0x8.FloatValue);
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_158.field1_0x8.IntValue._4_4_,local_158.field1_0x8.FloatValue);
  *(float *)(local_168.AllocatorInstance.Data + lVar22 + 8) = local_158.field1_0x8.FloatValue;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_158.field1_0x8.IntValue._4_4_,local_158.field1_0x8.FloatValue);
  *(undefined8 *)&local_168.AllocatorInstance.Data[lVar22 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_168.AllocatorInstance.Data + lVar22 + 0x18) = 0;
  if ((local_158.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_168.AllocatorInstance.Data + lVar22 + 0x10),
                   (FText *)&local_158.TextValue),
     local_158.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)
                 *(ITextData *)local_158.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pwVar1 = (param_2->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_b8,pwVar1,(int)((longlong)(param_2->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar18 = FText::FromString(&local_88,&local_b8);
  local_138.Type = Text;
  FText::FText((FText *)&local_138.TextValue,pFVar18);
  if ((local_138.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         ), bVar14)) {
    pcVar3 = (code *)swi(3);
    pTVar19 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar19;
  }
  if (((local_168.AllocatorInstance.Data <= &local_138) &&
      (&local_138 <
       (FFormatArgumentValue *)
       (local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar3 = (code *)swi(3);
    pTVar19 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar19;
  }
  iVar16 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar16 + 1;
  lVar22 = (longlong)iVar16 * 0x20;
  *(Type *)&local_168.AllocatorInstance.Data[lVar22].field_0x0 = local_138.Type;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
  *(float *)(local_168.AllocatorInstance.Data + lVar22 + 8) = local_138.field1_0x8.FloatValue;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
  *(undefined8 *)&local_168.AllocatorInstance.Data[lVar22 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_168.AllocatorInstance.Data + lVar22 + 0x18) = 0;
  if ((local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_168.AllocatorInstance.Data + lVar22 + 0x10),
                   (FText *)&local_138.TextValue),
     local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)
                 *(ITextData *)local_138.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pwVar1 = (param_3->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_a8,pwVar1,(int)((longlong)(param_3->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar18 = FText::FromString(&local_78,&local_a8);
  local_118.Type = Text;
  FText::FText((FText *)&local_118.TextValue,pFVar18);
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         ), bVar14)) {
    pcVar3 = (code *)swi(3);
    pTVar19 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar19;
  }
  if (((local_168.AllocatorInstance.Data <= &local_118) &&
      (&local_118 <
       (FFormatArgumentValue *)
       (local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar3 = (code *)swi(3);
    pTVar19 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar19;
  }
  iVar16 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar16 + 1;
  lVar22 = (longlong)iVar16 * 0x20;
  *(Type *)&local_168.AllocatorInstance.Data[lVar22].field_0x0 = local_118.Type;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(float *)(local_168.AllocatorInstance.Data + lVar22 + 8) = local_118.field1_0x8.FloatValue;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(undefined8 *)&local_168.AllocatorInstance.Data[lVar22 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_168.AllocatorInstance.Data + lVar22 + 0x18) = 0;
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_168.AllocatorInstance.Data + lVar22 + 0x10),
                   (FText *)&local_118.TextValue),
     local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)
                 *(ITextData *)local_118.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pFVar18 = FText::AsLocalizable_Advanced_LocText
                      (&local_58,L"ExpressionParser",L"BinaryExecutionError",
                       L"Binary operator {0} cannot operate on {1} and {2}");
  pFVar20 = FTextFormat::FTextFormat(&local_48,pFVar18,Default);
  pFVar18 = FText::Format(&local_68,pFVar20,&local_168);
  *(undefined8 *)&__return_storage_ptr__->Variant = 0;
  pIVar2 = (pFVar18->TextData).Reference;
  *(ITextData **)&__return_storage_ptr__->Variant = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res20);
  }
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar18->Flags;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
  if ((FFormatArgumentValue *)local_168.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExecPostUnary @ 1417ca1d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorJumpTable<void,wchar_t>::ExecPostUnary
          (TOperatorJumpTable<void,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2,void *param_3)

{
  wchar_t *pwVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FGuid *pFVar7;
  FText *pFVar8;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar9;
  FTextFormat *pFVar10;
  longlong lVar11;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>
  *this_00;
  uint *puVar12;
  undefined1 *puVar13;
  TExpressionToken<wchar_t> *local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_128;
  FFormatArgumentValue local_118;
  FFormatArgumentValue local_f8;
  FOperatorFunctionID local_d8;
  FString local_a8;
  FString local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  local_res20 = param_2;
  pFVar7 = FExpressionNode::GetTypeId(&param_1->Node);
  local_d8.OperatorType.A = pFVar7->A;
  local_d8.OperatorType.B = pFVar7->B;
  local_d8.OperatorType.C = pFVar7->C;
  local_d8.OperatorType.D = pFVar7->D;
  pFVar7 = FExpressionNode::GetTypeId(&param_2->Node);
  local_d8.LeftOperandType.A = pFVar7->A;
  local_d8.LeftOperandType.B = pFVar7->B;
  local_d8.LeftOperandType.C = pFVar7->C;
  local_d8.LeftOperandType.D = pFVar7->D;
  local_d8.RightOperandType.A = 0;
  local_d8.RightOperandType.B = 0;
  local_d8.RightOperandType.C = 0;
  local_d8.RightOperandType.D = 0;
  uVar5 = ::GetTypeHash(&local_d8);
  if (*(int *)&(this->PostUnaryOps).field_0x8 != *(int *)&(this->PostUnaryOps).field_0x34) {
    puVar13 = *(undefined1 **)&(this->PostUnaryOps).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->PostUnaryOps).field_0x38;
    }
    uVar5 = *(uint *)(puVar13 +
                     (ulonglong)(*(int *)&(this->PostUnaryOps).field_0x48 - 1U & uVar5) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar12 = (uint *)((longlong)(int)uVar5 * 0x70 + *(longlong *)&this->PostUnaryOps);
        param_2 = local_res20;
        if (((((local_d8.OperatorType.D == puVar12[3] && local_d8.OperatorType.C == puVar12[2]) &&
              local_d8.OperatorType.B == puVar12[1]) && local_d8.OperatorType.A == *puVar12) &&
            (((local_d8.LeftOperandType.D == puVar12[7] && local_d8.LeftOperandType.C == puVar12[6])
             && local_d8.LeftOperandType.B == puVar12[5]) &&
             local_d8.LeftOperandType.A == puVar12[4])) &&
           (((local_d8.RightOperandType.C == puVar12[10] &&
             local_d8.RightOperandType.D == puVar12[0xb]) &&
            local_d8.RightOperandType.B == puVar12[9]) && local_d8.RightOperandType.A == puVar12[8])
           ) {
          if (uVar5 != 0xffffffff) {
            this_00 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>
                       *)(puVar12 + 0xc);
            if (puVar12 == (uint *)0x0) {
              this_00 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>
                         *)0x0;
            }
            if (this_00 !=
                (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>
                 *)0x0) {
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>
              ::operator()(this_00,__return_storage_ptr__,&local_res20->Node,param_3);
              return __return_storage_ptr__;
            }
          }
          break;
        }
        uVar5 = puVar12[0x18];
      } while (uVar5 != 0xffffffff);
    }
  }
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  pwVar1 = (param_1->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_a8,pwVar1,(int)((longlong)(param_1->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar8 = FText::FromString(&local_88,&local_a8);
  local_118.Type = Text;
  FText::FText((FText *)&local_118.TextValue,pFVar8);
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar9;
  }
  if (((local_128.AllocatorInstance.Data <= &local_118) &&
      (&local_118 <
       (FFormatArgumentValue *)
       (local_128.AllocatorInstance.Data + (longlong)local_128.ArrayMax * 0x20))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar9;
  }
  iVar6 = local_128.ArrayNum;
  if (local_128.ArrayNum == local_128.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_128.AllocatorInstance,&local_128.ArrayMax);
  }
  local_128.ArrayNum = iVar6 + 1;
  lVar11 = (longlong)iVar6 * 0x20;
  *(Type *)&local_128.AllocatorInstance.Data[lVar11].field_0x0 = local_118.Type;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(float *)(local_128.AllocatorInstance.Data + lVar11 + 8) = local_118.field1_0x8.FloatValue;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(undefined8 *)&local_128.AllocatorInstance.Data[lVar11 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_128.AllocatorInstance.Data + lVar11 + 0x18) = 0;
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_128.AllocatorInstance.Data + lVar11 + 0x10),
                   (FText *)&local_118.TextValue),
     local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)
                 *(ITextData *)local_118.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pwVar1 = (param_2->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_98,pwVar1,(int)((longlong)(param_2->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar8 = FText::FromString(&local_78,&local_98);
  local_f8.Type = Text;
  FText::FText((FText *)&local_f8.TextValue,pFVar8);
  if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar9;
  }
  if (((local_128.AllocatorInstance.Data <= &local_f8) &&
      (&local_f8 <
       (FFormatArgumentValue *)
       (local_128.AllocatorInstance.Data + (longlong)local_128.ArrayMax * 0x20))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar9;
  }
  iVar6 = local_128.ArrayNum;
  if (local_128.ArrayNum == local_128.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_128.AllocatorInstance,&local_128.ArrayMax);
  }
  local_128.ArrayNum = iVar6 + 1;
  lVar11 = (longlong)iVar6 * 0x20;
  *(Type *)&local_128.AllocatorInstance.Data[lVar11].field_0x0 = local_f8.Type;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(float *)(local_128.AllocatorInstance.Data + lVar11 + 8) = local_f8.field1_0x8.FloatValue;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(undefined8 *)&local_128.AllocatorInstance.Data[lVar11 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_128.AllocatorInstance.Data + lVar11 + 0x18) = 0;
  if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_128.AllocatorInstance.Data + lVar11 + 0x10),
                   (FText *)&local_f8.TextValue),
     local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*(ITextData *)local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"ExpressionParser",L"PostUnaryExecutionError",
                      L"Post-unary operator {0} cannot operate on {1}");
  pFVar10 = FTextFormat::FTextFormat(&local_48,pFVar8,Default);
  pFVar8 = FText::Format(&local_68,pFVar10,&local_128);
  *(undefined8 *)&__return_storage_ptr__->Variant = 0;
  pIVar2 = (pFVar8->TextData).Reference;
  *(ITextData **)&__return_storage_ptr__->Variant = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res20);
  }
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar8->Flags;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
  if ((FFormatArgumentValue *)local_128.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExecPreUnary @ 1417ca790

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorJumpTable<void,wchar_t>::ExecPreUnary
          (TOperatorJumpTable<void,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2,void *param_3)

{
  wchar_t *pwVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FGuid *pFVar7;
  FText *pFVar8;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar9;
  FTextFormat *pFVar10;
  longlong lVar11;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>
  *this_00;
  uint *puVar12;
  undefined1 *puVar13;
  TExpressionToken<wchar_t> *local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_128;
  FFormatArgumentValue local_118;
  FFormatArgumentValue local_f8;
  FOperatorFunctionID local_d8;
  FString local_a8;
  FString local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  local_res20 = param_2;
  pFVar7 = FExpressionNode::GetTypeId(&param_1->Node);
  local_d8.OperatorType.A = pFVar7->A;
  local_d8.OperatorType.B = pFVar7->B;
  local_d8.OperatorType.C = pFVar7->C;
  local_d8.OperatorType.D = pFVar7->D;
  local_d8.LeftOperandType.A = 0;
  local_d8.LeftOperandType.B = 0;
  local_d8.LeftOperandType.C = 0;
  local_d8.LeftOperandType.D = 0;
  pFVar7 = FExpressionNode::GetTypeId(&param_2->Node);
  local_d8.RightOperandType.A = pFVar7->A;
  local_d8.RightOperandType.B = pFVar7->B;
  local_d8.RightOperandType.C = pFVar7->C;
  local_d8.RightOperandType.D = pFVar7->D;
  uVar5 = ::GetTypeHash(&local_d8);
  if (*(int *)&(this->PreUnaryOps).field_0x8 != *(int *)&(this->PreUnaryOps).field_0x34) {
    puVar13 = *(undefined1 **)&(this->PreUnaryOps).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->PreUnaryOps).field_0x38;
    }
    uVar5 = *(uint *)(puVar13 +
                     (ulonglong)(*(int *)&(this->PreUnaryOps).field_0x48 - 1U & uVar5) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar12 = (uint *)((longlong)(int)uVar5 * 0x70 + *(longlong *)&this->PreUnaryOps);
        param_2 = local_res20;
        if (((((local_d8.OperatorType.D == puVar12[3] && local_d8.OperatorType.C == puVar12[2]) &&
              local_d8.OperatorType.B == puVar12[1]) && local_d8.OperatorType.A == *puVar12) &&
            (((local_d8.LeftOperandType.C == puVar12[6] && local_d8.LeftOperandType.D == puVar12[7])
             && local_d8.LeftOperandType.B == puVar12[5]) &&
             local_d8.LeftOperandType.A == puVar12[4])) &&
           (((local_d8.RightOperandType.D == puVar12[0xb] &&
             local_d8.RightOperandType.C == puVar12[10]) &&
            local_d8.RightOperandType.B == puVar12[9]) && local_d8.RightOperandType.A == puVar12[8])
           ) {
          if (uVar5 != 0xffffffff) {
            this_00 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>
                       *)(puVar12 + 0xc);
            if (puVar12 == (uint *)0x0) {
              this_00 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>
                         *)0x0;
            }
            if (this_00 !=
                (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>
                 *)0x0) {
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>
              ::operator()(this_00,__return_storage_ptr__,&local_res20->Node,param_3);
              return __return_storage_ptr__;
            }
          }
          break;
        }
        uVar5 = puVar12[0x18];
      } while (uVar5 != 0xffffffff);
    }
  }
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  pwVar1 = (param_1->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_a8,pwVar1,(int)((longlong)(param_1->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar8 = FText::FromString(&local_88,&local_a8);
  local_118.Type = Text;
  FText::FText((FText *)&local_118.TextValue,pFVar8);
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar9;
  }
  if (((local_128.AllocatorInstance.Data <= &local_118) &&
      (&local_118 <
       (FFormatArgumentValue *)
       (local_128.AllocatorInstance.Data + (longlong)local_128.ArrayMax * 0x20))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar9;
  }
  iVar6 = local_128.ArrayNum;
  if (local_128.ArrayNum == local_128.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_128.AllocatorInstance,&local_128.ArrayMax);
  }
  local_128.ArrayNum = iVar6 + 1;
  lVar11 = (longlong)iVar6 * 0x20;
  *(Type *)&local_128.AllocatorInstance.Data[lVar11].field_0x0 = local_118.Type;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(float *)(local_128.AllocatorInstance.Data + lVar11 + 8) = local_118.field1_0x8.FloatValue;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(undefined8 *)&local_128.AllocatorInstance.Data[lVar11 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_128.AllocatorInstance.Data + lVar11 + 0x18) = 0;
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_128.AllocatorInstance.Data + lVar11 + 0x10),
                   (FText *)&local_118.TextValue),
     local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)
                 *(ITextData *)local_118.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pwVar1 = (param_2->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_98,pwVar1,(int)((longlong)(param_2->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar8 = FText::FromString(&local_78,&local_98);
  local_f8.Type = Text;
  FText::FText((FText *)&local_f8.TextValue,pFVar8);
  if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar9;
  }
  if (((local_128.AllocatorInstance.Data <= &local_f8) &&
      (&local_f8 <
       (FFormatArgumentValue *)
       (local_128.AllocatorInstance.Data + (longlong)local_128.ArrayMax * 0x20))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar9;
  }
  iVar6 = local_128.ArrayNum;
  if (local_128.ArrayNum == local_128.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_128.AllocatorInstance,&local_128.ArrayMax);
  }
  local_128.ArrayNum = iVar6 + 1;
  lVar11 = (longlong)iVar6 * 0x20;
  *(Type *)&local_128.AllocatorInstance.Data[lVar11].field_0x0 = local_f8.Type;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(float *)(local_128.AllocatorInstance.Data + lVar11 + 8) = local_f8.field1_0x8.FloatValue;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(undefined8 *)&local_128.AllocatorInstance.Data[lVar11 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_128.AllocatorInstance.Data + lVar11 + 0x18) = 0;
  if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_128.AllocatorInstance.Data + lVar11 + 0x10),
                   (FText *)&local_f8.TextValue),
     local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*(ITextData *)local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"ExpressionParser",L"PreUnaryExecutionError",
                      L"Pre-unary operator {0} cannot operate on {1}");
  pFVar10 = FTextFormat::FTextFormat(&local_48,pFVar8,Default);
  pFVar8 = FText::Format(&local_68,pFVar10,&local_128);
  *(undefined8 *)&__return_storage_ptr__->Variant = 0;
  pIVar2 = (pFVar8->TextData).Reference;
  *(ITextData **)&__return_storage_ptr__->Variant = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res20);
  }
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar8->Flags;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
  if ((FFormatArgumentValue *)local_128.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ShouldShortCircuit @ 1417fe810

bool __thiscall
TOperatorJumpTable<void,wchar_t>::ShouldShortCircuit
          (TOperatorJumpTable<void,wchar_t> *this,TExpressionToken<wchar_t> *param_1,
          TExpressionToken<wchar_t> *param_2,void *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  FGuid *pFVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined1 *puVar8;
  void *local_res8;
  FOperatorFunctionID local_68;
  
  pFVar4 = FExpressionNode::GetTypeId(&param_1->Node);
  local_68.OperatorType.A = pFVar4->A;
  local_68.OperatorType.B = pFVar4->B;
  local_68.OperatorType.C = pFVar4->C;
  local_68.OperatorType.D = pFVar4->D;
  pFVar4 = FExpressionNode::GetTypeId(&param_2->Node);
  local_68.LeftOperandType.A = pFVar4->A;
  local_68.LeftOperandType.B = pFVar4->B;
  local_68.LeftOperandType.C = pFVar4->C;
  local_68.LeftOperandType.D = pFVar4->D;
  local_68.RightOperandType.A = 0;
  local_68.RightOperandType.B = 0;
  local_68.RightOperandType.C = 0;
  local_68.RightOperandType.D = 0;
  uVar3 = ::GetTypeHash(&local_68);
  if (*(int *)&(this->BinaryShortCircuits).field_0x8 !=
      *(int *)&(this->BinaryShortCircuits).field_0x34) {
    puVar8 = *(undefined1 **)&(this->BinaryShortCircuits).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->BinaryShortCircuits).field_0x38;
    }
    uVar3 = *(uint *)(puVar8 + (ulonglong)
                               (*(int *)&(this->BinaryShortCircuits).field_0x48 - 1U & uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x70 + *(longlong *)&this->BinaryShortCircuits);
        if (((((local_68.OperatorType.D == puVar5[3] && local_68.OperatorType.C == puVar5[2]) &&
              local_68.OperatorType.B == puVar5[1]) && local_68.OperatorType.A == *puVar5) &&
            (((local_68.LeftOperandType.B == puVar5[5] && local_68.LeftOperandType.D == puVar5[7])
             && local_68.LeftOperandType.C == puVar5[6]) && local_68.LeftOperandType.A == puVar5[4])
            ) && (((local_68.RightOperandType.D == puVar5[0xb] &&
                   local_68.RightOperandType.C == puVar5[10]) &&
                  local_68.RightOperandType.B == puVar5[9]) &&
                  local_68.RightOperandType.A == puVar5[8])) {
          if (uVar3 == 0xffffffff) {
            return false;
          }
          puVar7 = puVar5 + 0xc;
          if (puVar5 == (uint *)0x0) {
            puVar7 = (uint *)0x0;
          }
          if (puVar7 == (uint *)0x0) {
            return false;
          }
          local_res8 = param_3;
          UE::Core::Private::Function::CheckCallable(*(void **)puVar7);
          pcVar1 = *(code **)puVar7;
          puVar5 = puVar7 + 4;
          if (*(uint **)(puVar7 + 10) != (uint *)0x0) {
            puVar5 = *(uint **)(puVar7 + 10);
          }
          uVar6 = (**(code **)(*(longlong *)puVar5 + 8))();
          uVar2 = (*pcVar1)(uVar6,param_2,&local_res8);
          return (bool)uVar2;
        }
        uVar3 = puVar5[0x18];
      } while (uVar3 != 0xffffffff);
    }
  }
  return false;
}

// ~TOperatorJumpTable<FShortCircuitTestContext,wchar_t> @ 1418be1a0

void __thiscall
TOperatorJumpTable<FShortCircuitTestContext,wchar_t>::
~TOperatorJumpTable<FShortCircuitTestContext,wchar_t>
          (TOperatorJumpTable<FShortCircuitTestContext,wchar_t> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->BinaryShortCircuits).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BinaryShortCircuits).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BinaryShortCircuits);
  *(undefined4 *)&(this->BinaryOps).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BinaryOps).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BinaryOps);
  *(undefined4 *)&(this->PostUnaryOps).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PostUnaryOps).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PostUnaryOps);
  *(undefined4 *)&(this->PreUnaryOps).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PreUnaryOps).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ExecBinary @ 1418d8940

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorJumpTable<FShortCircuitTestContext,wchar_t>::ExecBinary
          (TOperatorJumpTable<FShortCircuitTestContext,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2,
          TExpressionToken<wchar_t> *param_3,FShortCircuitTestContext *param_4)

{
  wchar_t *pwVar1;
  ITextData *pIVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FText *pFVar15;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar16;
  FTextFormat *pFVar17;
  undefined8 uVar18;
  longlong lVar19;
  uint *puVar20;
  uint *puVar21;
  undefined1 *puVar22;
  TExpressionToken<wchar_t> *local_res18;
  TExpressionToken<wchar_t> *local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_168;
  FFormatArgumentValue local_158;
  FFormatArgumentValue local_138;
  FFormatArgumentValue local_118;
  FOperatorFunctionID local_f8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  local_f8.OperatorType.A = (param_1->Node).TypeId.A;
  local_f8.OperatorType.B = (param_1->Node).TypeId.B;
  local_f8.OperatorType.C = (param_1->Node).TypeId.C;
  local_f8.OperatorType.D = (param_1->Node).TypeId.D;
  uVar4 = (param_2->Node).TypeId.A;
  uVar5 = (param_2->Node).TypeId.B;
  uVar6 = (param_2->Node).TypeId.C;
  uVar7 = (param_2->Node).TypeId.D;
  uVar8 = (param_3->Node).TypeId.A;
  uVar9 = (param_3->Node).TypeId.B;
  uVar10 = (param_3->Node).TypeId.C;
  uVar11 = (param_3->Node).TypeId.D;
  local_res18 = param_1;
  local_res20 = param_2;
  local_f8.LeftOperandType.A = uVar4;
  local_f8.LeftOperandType.B = uVar5;
  local_f8.LeftOperandType.C = uVar6;
  local_f8.LeftOperandType.D = uVar7;
  local_f8.RightOperandType.A = uVar8;
  local_f8.RightOperandType.B = uVar9;
  local_f8.RightOperandType.C = uVar10;
  local_f8.RightOperandType.D = uVar11;
  uVar13 = ::GetTypeHash(&local_f8);
  if (*(int *)&(this->BinaryOps).field_0x8 != *(int *)&(this->BinaryOps).field_0x34) {
    puVar22 = *(undefined1 **)&(this->BinaryOps).field_0x40;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = &(this->BinaryOps).field_0x38;
    }
    uVar13 = *(uint *)(puVar22 +
                      (ulonglong)(*(int *)&(this->BinaryOps).field_0x48 - 1U & uVar13) * 4);
    if (uVar13 != 0xffffffff) {
      do {
        puVar20 = (uint *)((longlong)(int)uVar13 * 0x70 + *(longlong *)&this->BinaryOps);
        param_2 = local_res20;
        if (((((local_f8.OperatorType.D == puVar20[3] && local_f8.OperatorType.C == puVar20[2]) &&
              local_f8.OperatorType.B == puVar20[1]) && local_f8.OperatorType.A == *puVar20) &&
            (((local_f8.LeftOperandType.D == puVar20[7] && local_f8.LeftOperandType.C == puVar20[6])
             && local_f8.LeftOperandType.B == puVar20[5]) &&
             local_f8.LeftOperandType.A == puVar20[4])) &&
           (((local_f8.RightOperandType.D == puVar20[0xb] &&
             local_f8.RightOperandType.C == puVar20[10]) &&
            local_f8.RightOperandType.B == puVar20[9]) && local_f8.RightOperandType.A == puVar20[8])
           ) {
          if (uVar13 != 0xffffffff) {
            puVar21 = puVar20 + 0xc;
            if (puVar20 == (uint *)0x0) {
              puVar21 = (uint *)0x0;
            }
            if (puVar21 != (uint *)0x0) {
              local_res18 = (TExpressionToken<wchar_t> *)param_4;
              UE::Core::Private::Function::CheckCallable(*(void **)puVar21);
              pcVar3 = *(code **)puVar21;
              puVar20 = puVar21 + 4;
              if (*(uint **)(puVar21 + 10) != (uint *)0x0) {
                puVar20 = *(uint **)(puVar21 + 10);
              }
              uVar18 = (**(code **)(*(longlong *)puVar20 + 8))();
              (*pcVar3)(__return_storage_ptr__,uVar18,local_res20,param_3,&local_res18);
              return __return_storage_ptr__;
            }
          }
          break;
        }
        uVar13 = puVar20[0x18];
      } while (uVar13 != 0xffffffff);
    }
  }
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  pwVar1 = (local_res18->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_c8,pwVar1,
             (int)((longlong)(local_res18->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar15 = FText::FromString(&local_98,&local_c8);
  local_158.Type = Text;
  FText::FText((FText *)&local_158.TextValue,pFVar15);
  if ((local_158.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         ), bVar12)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar16;
  }
  if (((local_168.AllocatorInstance.Data <= &local_158) &&
      (&local_158 <
       (FFormatArgumentValue *)
       (local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar16;
  }
  iVar14 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar14 + 1;
  lVar19 = (longlong)iVar14 * 0x20;
  *(Type *)&local_168.AllocatorInstance.Data[lVar19].field_0x0 = local_158.Type;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar19 + 8) =
       CONCAT44(local_158.field1_0x8.IntValue._4_4_,local_158.field1_0x8.FloatValue);
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar19 + 8) =
       CONCAT44(local_158.field1_0x8.IntValue._4_4_,local_158.field1_0x8.FloatValue);
  *(float *)(local_168.AllocatorInstance.Data + lVar19 + 8) = local_158.field1_0x8.FloatValue;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar19 + 8) =
       CONCAT44(local_158.field1_0x8.IntValue._4_4_,local_158.field1_0x8.FloatValue);
  *(undefined8 *)&local_168.AllocatorInstance.Data[lVar19 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_168.AllocatorInstance.Data + lVar19 + 0x18) = 0;
  if ((local_158.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_168.AllocatorInstance.Data + lVar19 + 0x10),
                   (FText *)&local_158.TextValue),
     local_158.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)
                 *(ITextData *)local_158.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pwVar1 = (param_2->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_b8,pwVar1,(int)((longlong)(param_2->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar15 = FText::FromString(&local_88,&local_b8);
  local_138.Type = Text;
  FText::FText((FText *)&local_138.TextValue,pFVar15);
  if ((local_138.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         ), bVar12)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar16;
  }
  if (((local_168.AllocatorInstance.Data <= &local_138) &&
      (&local_138 <
       (FFormatArgumentValue *)
       (local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar16;
  }
  iVar14 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar14 + 1;
  lVar19 = (longlong)iVar14 * 0x20;
  *(Type *)&local_168.AllocatorInstance.Data[lVar19].field_0x0 = local_138.Type;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar19 + 8) =
       CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar19 + 8) =
       CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
  *(float *)(local_168.AllocatorInstance.Data + lVar19 + 8) = local_138.field1_0x8.FloatValue;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar19 + 8) =
       CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
  *(undefined8 *)&local_168.AllocatorInstance.Data[lVar19 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_168.AllocatorInstance.Data + lVar19 + 0x18) = 0;
  if ((local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_168.AllocatorInstance.Data + lVar19 + 0x10),
                   (FText *)&local_138.TextValue),
     local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)
                 *(ITextData *)local_138.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pwVar1 = (param_3->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_a8,pwVar1,(int)((longlong)(param_3->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar15 = FText::FromString(&local_78,&local_a8);
  local_118.Type = Text;
  FText::FText((FText *)&local_118.TextValue,pFVar15);
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         ), bVar12)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar16;
  }
  if (((local_168.AllocatorInstance.Data <= &local_118) &&
      (&local_118 <
       (FFormatArgumentValue *)
       (local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar16;
  }
  iVar14 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar14 + 1;
  lVar19 = (longlong)iVar14 * 0x20;
  *(Type *)&local_168.AllocatorInstance.Data[lVar19].field_0x0 = local_118.Type;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar19 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar19 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(float *)(local_168.AllocatorInstance.Data + lVar19 + 8) = local_118.field1_0x8.FloatValue;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar19 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(undefined8 *)&local_168.AllocatorInstance.Data[lVar19 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_168.AllocatorInstance.Data + lVar19 + 0x18) = 0;
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_168.AllocatorInstance.Data + lVar19 + 0x10),
                   (FText *)&local_118.TextValue),
     local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)
                 *(ITextData *)local_118.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_58,L"ExpressionParser",L"BinaryExecutionError",
                       L"Binary operator {0} cannot operate on {1} and {2}");
  pFVar17 = FTextFormat::FTextFormat(&local_48,pFVar15,Default);
  pFVar15 = FText::Format(&local_68,pFVar17,&local_168);
  *(undefined8 *)&__return_storage_ptr__->Variant = 0;
  pIVar2 = (pFVar15->TextData).Reference;
  *(ITextData **)&__return_storage_ptr__->Variant = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res20);
  }
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar15->Flags;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
  if ((FFormatArgumentValue *)local_168.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExecPostUnary @ 1418d90d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorJumpTable<FShortCircuitTestContext,wchar_t>::ExecPostUnary
          (TOperatorJumpTable<FShortCircuitTestContext,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2,
          FShortCircuitTestContext *param_3)

{
  wchar_t *pwVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FText *pFVar7;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar8;
  FTextFormat *pFVar9;
  longlong lVar10;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>
  *this_00;
  uint *puVar11;
  undefined1 *puVar12;
  TExpressionToken<wchar_t> *local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_128;
  FFormatArgumentValue local_118;
  FFormatArgumentValue local_f8;
  FOperatorFunctionID local_d8;
  FString local_a8;
  FString local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  local_d8.OperatorType.A = (param_1->Node).TypeId.A;
  local_d8.OperatorType.B = (param_1->Node).TypeId.B;
  local_d8.OperatorType.C = (param_1->Node).TypeId.C;
  local_d8.OperatorType.D = (param_1->Node).TypeId.D;
  local_d8.LeftOperandType.A = (param_2->Node).TypeId.A;
  local_d8.LeftOperandType.B = (param_2->Node).TypeId.B;
  local_d8.LeftOperandType.C = (param_2->Node).TypeId.C;
  local_d8.LeftOperandType.D = (param_2->Node).TypeId.D;
  local_d8.RightOperandType.A = 0;
  local_d8.RightOperandType.B = 0;
  local_d8.RightOperandType.C = 0;
  local_d8.RightOperandType.D = 0;
  local_res20 = param_2;
  uVar5 = ::GetTypeHash(&local_d8);
  if (*(int *)&(this->PostUnaryOps).field_0x8 != *(int *)&(this->PostUnaryOps).field_0x34) {
    puVar12 = *(undefined1 **)&(this->PostUnaryOps).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->PostUnaryOps).field_0x38;
    }
    uVar5 = *(uint *)(puVar12 +
                     (ulonglong)(*(int *)&(this->PostUnaryOps).field_0x48 - 1U & uVar5) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar5 * 0x70 + *(longlong *)&this->PostUnaryOps);
        param_2 = local_res20;
        if (((((local_d8.OperatorType.D == puVar11[3] && local_d8.OperatorType.C == puVar11[2]) &&
              local_d8.OperatorType.B == puVar11[1]) && local_d8.OperatorType.A == *puVar11) &&
            (((local_d8.LeftOperandType.D == puVar11[7] && local_d8.LeftOperandType.C == puVar11[6])
             && local_d8.LeftOperandType.B == puVar11[5]) &&
             local_d8.LeftOperandType.A == puVar11[4])) &&
           (((local_d8.RightOperandType.C == puVar11[10] &&
             local_d8.RightOperandType.D == puVar11[0xb]) &&
            local_d8.RightOperandType.B == puVar11[9]) && local_d8.RightOperandType.A == puVar11[8])
           ) {
          if (uVar5 != 0xffffffff) {
            this_00 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>
                       *)(puVar11 + 0xc);
            if (puVar11 == (uint *)0x0) {
              this_00 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>
                         *)0x0;
            }
            if (this_00 !=
                (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>
                 *)0x0) {
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>
              ::operator()(this_00,__return_storage_ptr__,&local_res20->Node,param_3);
              return __return_storage_ptr__;
            }
          }
          break;
        }
        uVar5 = puVar11[0x18];
      } while (uVar5 != 0xffffffff);
    }
  }
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  pwVar1 = (param_1->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_a8,pwVar1,(int)((longlong)(param_1->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar7 = FText::FromString(&local_88,&local_a8);
  local_118.Type = Text;
  FText::FText((FText *)&local_118.TextValue,pFVar7);
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar8;
  }
  if (((local_128.AllocatorInstance.Data <= &local_118) &&
      (&local_118 <
       (FFormatArgumentValue *)
       (local_128.AllocatorInstance.Data + (longlong)local_128.ArrayMax * 0x20))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar8;
  }
  iVar6 = local_128.ArrayNum;
  if (local_128.ArrayNum == local_128.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_128.AllocatorInstance,&local_128.ArrayMax);
  }
  local_128.ArrayNum = iVar6 + 1;
  lVar10 = (longlong)iVar6 * 0x20;
  *(Type *)&local_128.AllocatorInstance.Data[lVar10].field_0x0 = local_118.Type;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar10 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar10 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(float *)(local_128.AllocatorInstance.Data + lVar10 + 8) = local_118.field1_0x8.FloatValue;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar10 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(undefined8 *)&local_128.AllocatorInstance.Data[lVar10 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_128.AllocatorInstance.Data + lVar10 + 0x18) = 0;
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_128.AllocatorInstance.Data + lVar10 + 0x10),
                   (FText *)&local_118.TextValue),
     local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)
                 *(ITextData *)local_118.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pwVar1 = (param_2->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_98,pwVar1,(int)((longlong)(param_2->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar7 = FText::FromString(&local_78,&local_98);
  local_f8.Type = Text;
  FText::FText((FText *)&local_f8.TextValue,pFVar7);
  if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar8;
  }
  if (((local_128.AllocatorInstance.Data <= &local_f8) &&
      (&local_f8 <
       (FFormatArgumentValue *)
       (local_128.AllocatorInstance.Data + (longlong)local_128.ArrayMax * 0x20))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar8;
  }
  iVar6 = local_128.ArrayNum;
  if (local_128.ArrayNum == local_128.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_128.AllocatorInstance,&local_128.ArrayMax);
  }
  local_128.ArrayNum = iVar6 + 1;
  lVar10 = (longlong)iVar6 * 0x20;
  *(Type *)&local_128.AllocatorInstance.Data[lVar10].field_0x0 = local_f8.Type;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar10 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar10 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(float *)(local_128.AllocatorInstance.Data + lVar10 + 8) = local_f8.field1_0x8.FloatValue;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar10 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(undefined8 *)&local_128.AllocatorInstance.Data[lVar10 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_128.AllocatorInstance.Data + lVar10 + 0x18) = 0;
  if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_128.AllocatorInstance.Data + lVar10 + 0x10),
                   (FText *)&local_f8.TextValue),
     local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*(ITextData *)local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"ExpressionParser",L"PostUnaryExecutionError",
                      L"Post-unary operator {0} cannot operate on {1}");
  pFVar9 = FTextFormat::FTextFormat(&local_48,pFVar7,Default);
  pFVar7 = FText::Format(&local_68,pFVar9,&local_128);
  *(undefined8 *)&__return_storage_ptr__->Variant = 0;
  pIVar2 = (pFVar7->TextData).Reference;
  *(ITextData **)&__return_storage_ptr__->Variant = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res20);
  }
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar7->Flags;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
  if ((FFormatArgumentValue *)local_128.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExecPreUnary @ 1418d9680

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorJumpTable<FShortCircuitTestContext,wchar_t>::ExecPreUnary
          (TOperatorJumpTable<FShortCircuitTestContext,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2,
          FShortCircuitTestContext *param_3)

{
  wchar_t *pwVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FText *pFVar7;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar8;
  FTextFormat *pFVar9;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>
  *this_00;
  longlong lVar10;
  uint *puVar11;
  undefined1 *puVar12;
  TExpressionToken<wchar_t> *local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_128;
  FFormatArgumentValue local_118;
  FFormatArgumentValue local_f8;
  FOperatorFunctionID local_d8;
  FString local_a8;
  FString local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  local_d8.OperatorType.A = (param_1->Node).TypeId.A;
  local_d8.OperatorType.B = (param_1->Node).TypeId.B;
  local_d8.OperatorType.C = (param_1->Node).TypeId.C;
  local_d8.OperatorType.D = (param_1->Node).TypeId.D;
  local_d8.LeftOperandType.A = 0;
  local_d8.LeftOperandType.B = 0;
  local_d8.RightOperandType.A = (param_2->Node).TypeId.A;
  local_d8.RightOperandType.B = (param_2->Node).TypeId.B;
  local_d8.RightOperandType.C = (param_2->Node).TypeId.C;
  local_d8.RightOperandType.D = (param_2->Node).TypeId.D;
  local_d8.LeftOperandType.C = 0;
  local_d8.LeftOperandType.D = 0;
  local_res20 = param_2;
  uVar5 = ::GetTypeHash(&local_d8);
  if (*(int *)&(this->PreUnaryOps).field_0x8 != *(int *)&(this->PreUnaryOps).field_0x34) {
    puVar12 = *(undefined1 **)&(this->PreUnaryOps).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->PreUnaryOps).field_0x38;
    }
    uVar5 = *(uint *)(puVar12 +
                     (ulonglong)(*(int *)&(this->PreUnaryOps).field_0x48 - 1U & uVar5) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar11 = (uint *)(*(longlong *)&this->PreUnaryOps + (longlong)(int)uVar5 * 0x70);
        param_2 = local_res20;
        if (((((local_d8.OperatorType.D == puVar11[3] && local_d8.OperatorType.C == puVar11[2]) &&
              local_d8.OperatorType.B == puVar11[1]) && local_d8.OperatorType.A == *puVar11) &&
            (((local_d8.LeftOperandType.C == puVar11[6] && local_d8.LeftOperandType.D == puVar11[7])
             && local_d8.LeftOperandType.B == puVar11[5]) &&
             local_d8.LeftOperandType.A == puVar11[4])) &&
           (((local_d8.RightOperandType.D == puVar11[0xb] &&
             local_d8.RightOperandType.C == puVar11[10]) &&
            local_d8.RightOperandType.B == puVar11[9]) && local_d8.RightOperandType.A == puVar11[8])
           ) {
          if (uVar5 != 0xffffffff) {
            this_00 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>
                       *)(puVar11 + 0xc);
            if (puVar11 == (uint *)0x0) {
              this_00 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>
                         *)0x0;
            }
            if (this_00 !=
                (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>
                 *)0x0) {
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>
              ::operator()(this_00,__return_storage_ptr__,&local_res20->Node,param_3);
              return __return_storage_ptr__;
            }
          }
          break;
        }
        uVar5 = puVar11[0x18];
      } while (uVar5 != 0xffffffff);
    }
  }
  pwVar1 = (param_1->Context).TokenStart;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  ::FString::ConstructFromPtrSize
            (&local_a8,pwVar1,(int)((longlong)(param_1->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar7 = FText::FromString(&local_88,&local_a8);
  local_118.Type = Text;
  FText::FText((FText *)&local_118.TextValue,pFVar7);
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar8;
  }
  if (((local_128.AllocatorInstance.Data <= &local_118) &&
      (&local_118 <
       (FFormatArgumentValue *)
       (local_128.AllocatorInstance.Data + (longlong)local_128.ArrayMax * 0x20))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar8;
  }
  iVar6 = local_128.ArrayNum;
  if (local_128.ArrayNum == local_128.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_128.AllocatorInstance,&local_128.ArrayMax);
  }
  local_128.ArrayNum = iVar6 + 1;
  lVar10 = (longlong)iVar6 * 0x20;
  *(Type *)&local_128.AllocatorInstance.Data[lVar10].field_0x0 = local_118.Type;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar10 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar10 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(float *)(local_128.AllocatorInstance.Data + lVar10 + 8) = local_118.field1_0x8.FloatValue;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar10 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(undefined8 *)&local_128.AllocatorInstance.Data[lVar10 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_128.AllocatorInstance.Data + lVar10 + 0x18) = 0;
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_128.AllocatorInstance.Data + lVar10 + 0x10),
                   (FText *)&local_118.TextValue),
     local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)
                 *(ITextData *)local_118.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pwVar1 = (param_2->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_98,pwVar1,(int)((longlong)(param_2->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar7 = FText::FromString(&local_78,&local_98);
  local_f8.Type = Text;
  FText::FText((FText *)&local_f8.TextValue,pFVar7);
  if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar8;
  }
  if (((local_128.AllocatorInstance.Data <= &local_f8) &&
      (&local_f8 <
       (FFormatArgumentValue *)
       (local_128.AllocatorInstance.Data + (longlong)local_128.ArrayMax * 0x20))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar8;
  }
  iVar6 = local_128.ArrayNum;
  if (local_128.ArrayNum == local_128.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_128.AllocatorInstance,&local_128.ArrayMax);
  }
  local_128.ArrayNum = iVar6 + 1;
  lVar10 = (longlong)iVar6 * 0x20;
  *(Type *)&local_128.AllocatorInstance.Data[lVar10].field_0x0 = local_f8.Type;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar10 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar10 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(float *)(local_128.AllocatorInstance.Data + lVar10 + 8) = local_f8.field1_0x8.FloatValue;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar10 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(undefined8 *)&local_128.AllocatorInstance.Data[lVar10 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_128.AllocatorInstance.Data + lVar10 + 0x18) = 0;
  if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_128.AllocatorInstance.Data + lVar10 + 0x10),
                   (FText *)&local_f8.TextValue),
     local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*(ITextData *)local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"ExpressionParser",L"PreUnaryExecutionError",
                      L"Pre-unary operator {0} cannot operate on {1}");
  pFVar9 = FTextFormat::FTextFormat(&local_48,pFVar7,Default);
  pFVar7 = FText::Format(&local_68,pFVar9,&local_128);
  *(undefined8 *)&__return_storage_ptr__->Variant = 0;
  pIVar2 = (pFVar7->TextData).Reference;
  *(ITextData **)&__return_storage_ptr__->Variant = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res20);
  }
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar7->Flags;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
  if ((FFormatArgumentValue *)local_128.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ShouldShortCircuit @ 1418f9370

bool __thiscall
TOperatorJumpTable<FShortCircuitTestContext,wchar_t>::ShouldShortCircuit
          (TOperatorJumpTable<FShortCircuitTestContext,wchar_t> *this,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2,
          FShortCircuitTestContext *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  FShortCircuitTestContext *local_res8;
  FOperatorFunctionID local_68;
  
  local_68.OperatorType.A = (param_1->Node).TypeId.A;
  local_68.OperatorType.B = (param_1->Node).TypeId.B;
  local_68.OperatorType.C = (param_1->Node).TypeId.C;
  local_68.OperatorType.D = (param_1->Node).TypeId.D;
  local_68.LeftOperandType.A = (param_2->Node).TypeId.A;
  local_68.LeftOperandType.B = (param_2->Node).TypeId.B;
  local_68.LeftOperandType.C = (param_2->Node).TypeId.C;
  local_68.LeftOperandType.D = (param_2->Node).TypeId.D;
  local_68.RightOperandType.A = 0;
  local_68.RightOperandType.B = 0;
  local_68.RightOperandType.C = 0;
  local_68.RightOperandType.D = 0;
  uVar3 = ::GetTypeHash(&local_68);
  if (*(int *)&(this->BinaryShortCircuits).field_0x8 !=
      *(int *)&(this->BinaryShortCircuits).field_0x34) {
    puVar7 = *(undefined1 **)&(this->BinaryShortCircuits).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->BinaryShortCircuits).field_0x38;
    }
    uVar3 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->BinaryShortCircuits).field_0x48 - 1U & uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar4 = (uint *)((longlong)(int)uVar3 * 0x70 + *(longlong *)&this->BinaryShortCircuits);
        if (((((local_68.OperatorType.D == puVar4[3] && local_68.OperatorType.C == puVar4[2]) &&
              local_68.OperatorType.B == puVar4[1]) && local_68.OperatorType.A == *puVar4) &&
            (((local_68.LeftOperandType.B == puVar4[5] && local_68.LeftOperandType.D == puVar4[7])
             && local_68.LeftOperandType.C == puVar4[6]) && local_68.LeftOperandType.A == puVar4[4])
            ) && (((local_68.RightOperandType.D == puVar4[0xb] &&
                   local_68.RightOperandType.C == puVar4[10]) &&
                  local_68.RightOperandType.B == puVar4[9]) &&
                  local_68.RightOperandType.A == puVar4[8])) {
          if (uVar3 == 0xffffffff) {
            return false;
          }
          puVar6 = puVar4 + 0xc;
          if (puVar4 == (uint *)0x0) {
            puVar6 = (uint *)0x0;
          }
          if (puVar6 == (uint *)0x0) {
            return false;
          }
          local_res8 = param_3;
          UE::Core::Private::Function::CheckCallable(*(void **)puVar6);
          pcVar1 = *(code **)puVar6;
          puVar4 = puVar6 + 4;
          if (*(uint **)(puVar6 + 10) != (uint *)0x0) {
            puVar4 = *(uint **)(puVar6 + 10);
          }
          uVar5 = (**(code **)(*(longlong *)puVar4 + 8))();
          uVar2 = (*pcVar1)(uVar5,param_2,&local_res8);
          return (bool)uVar2;
        }
        uVar3 = puVar4[0x18];
      } while (uVar3 != 0xffffffff);
    }
  }
  return false;
}

// TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> @ 141914190

TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> * __thiscall
TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>::
TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>
          (TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> *this)

{
  *(undefined8 *)&this->PreUnaryOps = 0;
  *(undefined8 *)&(this->PreUnaryOps).field_0x8 = 0;
  *(undefined8 *)&(this->PreUnaryOps).field_0x20 = 0;
  *(undefined4 *)&(this->PreUnaryOps).field_0x28 = 0;
  *(undefined4 *)&(this->PreUnaryOps).field_0x2c = 0x80;
  *(undefined4 *)&(this->PreUnaryOps).field_0x34 = 0;
  *(undefined4 *)&(this->PreUnaryOps).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PreUnaryOps).field_0x40 = 0;
  *(undefined4 *)&(this->PreUnaryOps).field_0x48 = 0;
  *(undefined8 *)&this->PostUnaryOps = 0;
  *(undefined8 *)&(this->PostUnaryOps).field_0x8 = 0;
  *(undefined8 *)&(this->PostUnaryOps).field_0x20 = 0;
  *(undefined4 *)&(this->PostUnaryOps).field_0x28 = 0;
  *(undefined4 *)&(this->PostUnaryOps).field_0x2c = 0x80;
  *(undefined4 *)&(this->PostUnaryOps).field_0x34 = 0;
  *(undefined4 *)&(this->PostUnaryOps).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PostUnaryOps).field_0x40 = 0;
  *(undefined4 *)&(this->PostUnaryOps).field_0x48 = 0;
  *(undefined8 *)&this->BinaryOps = 0;
  *(undefined8 *)&(this->BinaryOps).field_0x8 = 0;
  *(undefined8 *)&(this->BinaryOps).field_0x20 = 0;
  *(undefined4 *)&(this->BinaryOps).field_0x28 = 0;
  *(undefined4 *)&(this->BinaryOps).field_0x2c = 0x80;
  *(undefined4 *)&(this->BinaryOps).field_0x34 = 0;
  *(undefined4 *)&(this->BinaryOps).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BinaryOps).field_0x40 = 0;
  *(undefined4 *)&(this->BinaryOps).field_0x48 = 0;
  *(undefined8 *)&this->BinaryShortCircuits = 0;
  *(undefined8 *)&(this->BinaryShortCircuits).field_0x8 = 0;
  *(undefined8 *)&(this->BinaryShortCircuits).field_0x20 = 0;
  *(undefined4 *)&(this->BinaryShortCircuits).field_0x28 = 0;
  *(undefined4 *)&(this->BinaryShortCircuits).field_0x2c = 0x80;
  *(undefined4 *)&(this->BinaryShortCircuits).field_0x34 = 0;
  *(undefined4 *)&(this->BinaryShortCircuits).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BinaryShortCircuits).field_0x40 = 0;
  *(undefined4 *)&(this->BinaryShortCircuits).field_0x48 = 0;
  return this;
}

// ~TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> @ 141919de0

void __thiscall
TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>::
~TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>
          (TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->BinaryShortCircuits).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BinaryShortCircuits).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BinaryShortCircuits);
  *(undefined4 *)&(this->BinaryOps).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BinaryOps).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BinaryOps);
  *(undefined4 *)&(this->PostUnaryOps).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PostUnaryOps).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PostUnaryOps);
  *(undefined4 *)&(this->PreUnaryOps).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PreUnaryOps).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator= @ 14191cda0

TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> * __thiscall
TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>::operator=
          (TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> *this,
          TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMap<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>_>
  *pTVar3;
  TMap<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>_>
  *this_00;
  TMap<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>_>
  *pTVar4;
  TMap<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>_>
  *this_01;
  void *pvVar5;
  
  TMap<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>_>
  ::operator=(&this->PreUnaryOps,&param_1->PreUnaryOps);
  TMap<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>_>
  ::operator=(&this->PostUnaryOps,&param_1->PostUnaryOps);
  pTVar3 = &param_1->BinaryOps;
  this_00 = &this->BinaryOps;
  if (this_00 != pTVar3) {
    TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->BinaryOps).field_0x8);
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
    puVar1 = &(param_1->BinaryOps).field_0x10;
    *(undefined8 *)this_00 = *(undefined8 *)pTVar3;
    puVar2 = &(this->BinaryOps).field_0x10;
    *(undefined8 *)pTVar3 = 0;
    *(undefined4 *)&(this->BinaryOps).field_0x8 = *(undefined4 *)&(param_1->BinaryOps).field_0x8;
    *(undefined4 *)&(this->BinaryOps).field_0xc = *(undefined4 *)&(param_1->BinaryOps).field_0xc;
    *(undefined8 *)&(param_1->BinaryOps).field_0x8 = 0;
    if (puVar2 != puVar1) {
      if (*(longlong *)&(param_1->BinaryOps).field_0x20 == 0) {
        memmove(puVar2,puVar1,0x10);
      }
      pvVar5 = *(void **)&(this->BinaryOps).field_0x20;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      *(undefined8 *)&(this->BinaryOps).field_0x20 = *(undefined8 *)&(param_1->BinaryOps).field_0x20
      ;
      *(undefined8 *)&(param_1->BinaryOps).field_0x20 = 0;
      *(undefined4 *)&(this->BinaryOps).field_0x28 = *(undefined4 *)&(param_1->BinaryOps).field_0x28
      ;
      *(undefined4 *)&(this->BinaryOps).field_0x2c = *(undefined4 *)&(param_1->BinaryOps).field_0x2c
      ;
      *(undefined8 *)&(param_1->BinaryOps).field_0x28 = 0;
    }
    *(undefined4 *)&(this->BinaryOps).field_0x30 = *(undefined4 *)&(param_1->BinaryOps).field_0x30;
    *(undefined4 *)&(this->BinaryOps).field_0x34 = *(undefined4 *)&(param_1->BinaryOps).field_0x34;
    *(undefined4 *)&(param_1->BinaryOps).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->BinaryOps).field_0x34 = 0;
    if (*(longlong *)&(param_1->BinaryOps).field_0x40 == 0) {
      *(undefined4 *)&(this->BinaryOps).field_0x38 = *(undefined4 *)&(param_1->BinaryOps).field_0x38
      ;
    }
    pvVar5 = *(void **)&(this->BinaryOps).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    *(undefined8 *)&(this->BinaryOps).field_0x40 = *(undefined8 *)&(param_1->BinaryOps).field_0x40;
    *(undefined8 *)&(param_1->BinaryOps).field_0x40 = 0;
    *(undefined4 *)&(this->BinaryOps).field_0x48 = *(undefined4 *)&(param_1->BinaryOps).field_0x48;
    *(undefined4 *)&(param_1->BinaryOps).field_0x48 = 0;
  }
  pTVar4 = &param_1->BinaryShortCircuits;
  this_01 = &this->BinaryShortCircuits;
  if (this_01 != pTVar4) {
    TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_01,0,*(int *)&(this->BinaryShortCircuits).field_0x8);
    if (*(void **)this_01 != (void *)0x0) {
      FMemory::Free(*(void **)this_01);
    }
    puVar1 = &(param_1->BinaryShortCircuits).field_0x10;
    *(undefined8 *)this_01 = *(undefined8 *)pTVar4;
    puVar2 = &(this->BinaryShortCircuits).field_0x10;
    *(undefined8 *)pTVar4 = 0;
    *(undefined4 *)&(this->BinaryShortCircuits).field_0x8 =
         *(undefined4 *)&(param_1->BinaryShortCircuits).field_0x8;
    *(undefined4 *)&(this->BinaryShortCircuits).field_0xc =
         *(undefined4 *)&(param_1->BinaryShortCircuits).field_0xc;
    *(undefined8 *)&(param_1->BinaryShortCircuits).field_0x8 = 0;
    if (puVar2 != puVar1) {
      if (*(longlong *)&(param_1->BinaryShortCircuits).field_0x20 == 0) {
        memmove(puVar2,puVar1,0x10);
      }
      pvVar5 = *(void **)&(this->BinaryShortCircuits).field_0x20;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      *(undefined8 *)&(this->BinaryShortCircuits).field_0x20 =
           *(undefined8 *)&(param_1->BinaryShortCircuits).field_0x20;
      *(undefined8 *)&(param_1->BinaryShortCircuits).field_0x20 = 0;
      *(undefined4 *)&(this->BinaryShortCircuits).field_0x28 =
           *(undefined4 *)&(param_1->BinaryShortCircuits).field_0x28;
      *(undefined4 *)&(this->BinaryShortCircuits).field_0x2c =
           *(undefined4 *)&(param_1->BinaryShortCircuits).field_0x2c;
      *(undefined8 *)&(param_1->BinaryShortCircuits).field_0x28 = 0;
    }
    *(undefined4 *)&(this->BinaryShortCircuits).field_0x30 =
         *(undefined4 *)&(param_1->BinaryShortCircuits).field_0x30;
    *(undefined4 *)&(this->BinaryShortCircuits).field_0x34 =
         *(undefined4 *)&(param_1->BinaryShortCircuits).field_0x34;
    *(undefined4 *)&(param_1->BinaryShortCircuits).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->BinaryShortCircuits).field_0x34 = 0;
    if (*(longlong *)&(param_1->BinaryShortCircuits).field_0x40 == 0) {
      *(undefined4 *)&(this->BinaryShortCircuits).field_0x38 =
           *(undefined4 *)&(param_1->BinaryShortCircuits).field_0x38;
    }
    pvVar5 = *(void **)&(this->BinaryShortCircuits).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    *(undefined8 *)&(this->BinaryShortCircuits).field_0x40 =
         *(undefined8 *)&(param_1->BinaryShortCircuits).field_0x40;
    *(undefined8 *)&(param_1->BinaryShortCircuits).field_0x40 = 0;
    *(undefined4 *)&(this->BinaryShortCircuits).field_0x48 =
         *(undefined4 *)&(param_1->BinaryShortCircuits).field_0x48;
    *(undefined4 *)&(param_1->BinaryShortCircuits).field_0x48 = 0;
  }
  return this;
}

// ExecBinary @ 141938b60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>::ExecBinary
          (TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2,
          TExpressionToken<wchar_t> *param_3,ITextFilterExpressionContext *param_4)

{
  wchar_t *pwVar1;
  ITextData *pIVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  FGuid *pFVar17;
  FText *pFVar18;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar19;
  FTextFormat *pFVar20;
  undefined8 uVar21;
  longlong lVar22;
  uint *puVar23;
  uint *puVar24;
  undefined1 *puVar25;
  TExpressionToken<wchar_t> *local_res18;
  TExpressionToken<wchar_t> *local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_168;
  FFormatArgumentValue local_158;
  FFormatArgumentValue local_138;
  FFormatArgumentValue local_118;
  FOperatorFunctionID local_f8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  local_res18 = param_1;
  local_res20 = param_2;
  pFVar17 = FExpressionNode::GetTypeId(&param_1->Node);
  local_f8.OperatorType.A = pFVar17->A;
  local_f8.OperatorType.B = pFVar17->B;
  uVar4 = pFVar17->C;
  uVar5 = pFVar17->D;
  local_f8.OperatorType.C = uVar4;
  local_f8.OperatorType.D = uVar5;
  pFVar17 = FExpressionNode::GetTypeId(&param_2->Node);
  uVar6 = pFVar17->A;
  uVar7 = pFVar17->B;
  uVar8 = pFVar17->C;
  uVar9 = pFVar17->D;
  local_f8.LeftOperandType.A = uVar6;
  local_f8.LeftOperandType.B = uVar7;
  local_f8.LeftOperandType.C = uVar8;
  local_f8.LeftOperandType.D = uVar9;
  pFVar17 = FExpressionNode::GetTypeId(&param_3->Node);
  uVar10 = pFVar17->A;
  uVar11 = pFVar17->B;
  uVar12 = pFVar17->C;
  uVar13 = pFVar17->D;
  local_f8.RightOperandType.A = uVar10;
  local_f8.RightOperandType.B = uVar11;
  local_f8.RightOperandType.C = uVar12;
  local_f8.RightOperandType.D = uVar13;
  uVar15 = ::GetTypeHash(&local_f8);
  if (*(int *)&(this->BinaryOps).field_0x8 != *(int *)&(this->BinaryOps).field_0x34) {
    puVar25 = *(undefined1 **)&(this->BinaryOps).field_0x40;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = &(this->BinaryOps).field_0x38;
    }
    uVar15 = *(uint *)(puVar25 +
                      (ulonglong)(*(int *)&(this->BinaryOps).field_0x48 - 1U & uVar15) * 4);
    if (uVar15 != 0xffffffff) {
      do {
        puVar23 = (uint *)((longlong)(int)uVar15 * 0x70 + *(longlong *)&this->BinaryOps);
        param_2 = local_res20;
        if (((((local_f8.OperatorType.D == puVar23[3] && local_f8.OperatorType.C == puVar23[2]) &&
              local_f8.OperatorType.B == puVar23[1]) && local_f8.OperatorType.A == *puVar23) &&
            (((local_f8.LeftOperandType.D == puVar23[7] && local_f8.LeftOperandType.C == puVar23[6])
             && local_f8.LeftOperandType.B == puVar23[5]) &&
             local_f8.LeftOperandType.A == puVar23[4])) &&
           (((local_f8.RightOperandType.D == puVar23[0xb] &&
             local_f8.RightOperandType.C == puVar23[10]) &&
            local_f8.RightOperandType.B == puVar23[9]) && local_f8.RightOperandType.A == puVar23[8])
           ) {
          if (uVar15 != 0xffffffff) {
            puVar24 = puVar23 + 0xc;
            if (puVar23 == (uint *)0x0) {
              puVar24 = (uint *)0x0;
            }
            if (puVar24 != (uint *)0x0) {
              local_res18 = (TExpressionToken<wchar_t> *)param_4;
              UE::Core::Private::Function::CheckCallable(*(void **)puVar24);
              pcVar3 = *(code **)puVar24;
              puVar23 = puVar24 + 4;
              if (*(uint **)(puVar24 + 10) != (uint *)0x0) {
                puVar23 = *(uint **)(puVar24 + 10);
              }
              uVar21 = (**(code **)(*(longlong *)puVar23 + 8))();
              (*pcVar3)(__return_storage_ptr__,uVar21,local_res20,param_3,&local_res18);
              return __return_storage_ptr__;
            }
          }
          break;
        }
        uVar15 = puVar23[0x18];
      } while (uVar15 != 0xffffffff);
    }
  }
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  pwVar1 = (local_res18->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_c8,pwVar1,
             (int)((longlong)(local_res18->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar18 = FText::FromString(&local_98,&local_c8);
  local_158.Type = Text;
  FText::FText((FText *)&local_158.TextValue,pFVar18);
  if ((local_158.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         ), bVar14)) {
    pcVar3 = (code *)swi(3);
    pTVar19 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar19;
  }
  if (((local_168.AllocatorInstance.Data <= &local_158) &&
      (&local_158 <
       (FFormatArgumentValue *)
       (local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar3 = (code *)swi(3);
    pTVar19 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar19;
  }
  iVar16 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar16 + 1;
  lVar22 = (longlong)iVar16 * 0x20;
  *(Type *)&local_168.AllocatorInstance.Data[lVar22].field_0x0 = local_158.Type;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_158.field1_0x8.IntValue._4_4_,local_158.field1_0x8.FloatValue);
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_158.field1_0x8.IntValue._4_4_,local_158.field1_0x8.FloatValue);
  *(float *)(local_168.AllocatorInstance.Data + lVar22 + 8) = local_158.field1_0x8.FloatValue;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_158.field1_0x8.IntValue._4_4_,local_158.field1_0x8.FloatValue);
  *(undefined8 *)&local_168.AllocatorInstance.Data[lVar22 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_168.AllocatorInstance.Data + lVar22 + 0x18) = 0;
  if ((local_158.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_168.AllocatorInstance.Data + lVar22 + 0x10),
                   (FText *)&local_158.TextValue),
     local_158.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)
                 *(ITextData *)local_158.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pwVar1 = (param_2->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_b8,pwVar1,(int)((longlong)(param_2->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar18 = FText::FromString(&local_88,&local_b8);
  local_138.Type = Text;
  FText::FText((FText *)&local_138.TextValue,pFVar18);
  if ((local_138.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         ), bVar14)) {
    pcVar3 = (code *)swi(3);
    pTVar19 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar19;
  }
  if (((local_168.AllocatorInstance.Data <= &local_138) &&
      (&local_138 <
       (FFormatArgumentValue *)
       (local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar3 = (code *)swi(3);
    pTVar19 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar19;
  }
  iVar16 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar16 + 1;
  lVar22 = (longlong)iVar16 * 0x20;
  *(Type *)&local_168.AllocatorInstance.Data[lVar22].field_0x0 = local_138.Type;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
  *(float *)(local_168.AllocatorInstance.Data + lVar22 + 8) = local_138.field1_0x8.FloatValue;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
  *(undefined8 *)&local_168.AllocatorInstance.Data[lVar22 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_168.AllocatorInstance.Data + lVar22 + 0x18) = 0;
  if ((local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_168.AllocatorInstance.Data + lVar22 + 0x10),
                   (FText *)&local_138.TextValue),
     local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)
                 *(ITextData *)local_138.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pwVar1 = (param_3->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_a8,pwVar1,(int)((longlong)(param_3->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar18 = FText::FromString(&local_78,&local_a8);
  local_118.Type = Text;
  FText::FText((FText *)&local_118.TextValue,pFVar18);
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         ), bVar14)) {
    pcVar3 = (code *)swi(3);
    pTVar19 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar19;
  }
  if (((local_168.AllocatorInstance.Data <= &local_118) &&
      (&local_118 <
       (FFormatArgumentValue *)
       (local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar3 = (code *)swi(3);
    pTVar19 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar19;
  }
  iVar16 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar16 + 1;
  lVar22 = (longlong)iVar16 * 0x20;
  *(Type *)&local_168.AllocatorInstance.Data[lVar22].field_0x0 = local_118.Type;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(float *)(local_168.AllocatorInstance.Data + lVar22 + 8) = local_118.field1_0x8.FloatValue;
  *(ulonglong *)(local_168.AllocatorInstance.Data + lVar22 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(undefined8 *)&local_168.AllocatorInstance.Data[lVar22 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_168.AllocatorInstance.Data + lVar22 + 0x18) = 0;
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_168.AllocatorInstance.Data + lVar22 + 0x10),
                   (FText *)&local_118.TextValue),
     local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)
                 *(ITextData *)local_118.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pFVar18 = FText::AsLocalizable_Advanced_LocText
                      (&local_58,L"ExpressionParser",L"BinaryExecutionError",
                       L"Binary operator {0} cannot operate on {1} and {2}");
  pFVar20 = FTextFormat::FTextFormat(&local_48,pFVar18,Default);
  pFVar18 = FText::Format(&local_68,pFVar20,&local_168);
  *(undefined8 *)&__return_storage_ptr__->Variant = 0;
  pIVar2 = (pFVar18->TextData).Reference;
  *(ITextData **)&__return_storage_ptr__->Variant = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res20);
  }
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar18->Flags;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
  if ((FFormatArgumentValue *)local_168.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExecPostUnary @ 141939320

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>::ExecPostUnary
          (TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2,
          ITextFilterExpressionContext *param_3)

{
  wchar_t *pwVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FGuid *pFVar7;
  FText *pFVar8;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar9;
  FTextFormat *pFVar10;
  longlong lVar11;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
  *this_00;
  uint *puVar12;
  undefined1 *puVar13;
  TExpressionToken<wchar_t> *local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_128;
  FFormatArgumentValue local_118;
  FFormatArgumentValue local_f8;
  FOperatorFunctionID local_d8;
  FString local_a8;
  FString local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  local_res20 = param_2;
  pFVar7 = FExpressionNode::GetTypeId(&param_1->Node);
  local_d8.OperatorType.A = pFVar7->A;
  local_d8.OperatorType.B = pFVar7->B;
  local_d8.OperatorType.C = pFVar7->C;
  local_d8.OperatorType.D = pFVar7->D;
  pFVar7 = FExpressionNode::GetTypeId(&param_2->Node);
  local_d8.LeftOperandType.A = pFVar7->A;
  local_d8.LeftOperandType.B = pFVar7->B;
  local_d8.LeftOperandType.C = pFVar7->C;
  local_d8.LeftOperandType.D = pFVar7->D;
  local_d8.RightOperandType.A = 0;
  local_d8.RightOperandType.B = 0;
  local_d8.RightOperandType.C = 0;
  local_d8.RightOperandType.D = 0;
  uVar5 = ::GetTypeHash(&local_d8);
  if (*(int *)&(this->PostUnaryOps).field_0x8 != *(int *)&(this->PostUnaryOps).field_0x34) {
    puVar13 = *(undefined1 **)&(this->PostUnaryOps).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->PostUnaryOps).field_0x38;
    }
    uVar5 = *(uint *)(puVar13 +
                     (ulonglong)(*(int *)&(this->PostUnaryOps).field_0x48 - 1U & uVar5) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar12 = (uint *)((longlong)(int)uVar5 * 0x70 + *(longlong *)&this->PostUnaryOps);
        param_2 = local_res20;
        if (((((local_d8.OperatorType.D == puVar12[3] && local_d8.OperatorType.C == puVar12[2]) &&
              local_d8.OperatorType.B == puVar12[1]) && local_d8.OperatorType.A == *puVar12) &&
            (((local_d8.LeftOperandType.D == puVar12[7] && local_d8.LeftOperandType.C == puVar12[6])
             && local_d8.LeftOperandType.B == puVar12[5]) &&
             local_d8.LeftOperandType.A == puVar12[4])) &&
           (((local_d8.RightOperandType.C == puVar12[10] &&
             local_d8.RightOperandType.D == puVar12[0xb]) &&
            local_d8.RightOperandType.B == puVar12[9]) && local_d8.RightOperandType.A == puVar12[8])
           ) {
          if (uVar5 != 0xffffffff) {
            this_00 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
                       *)(puVar12 + 0xc);
            if (puVar12 == (uint *)0x0) {
              this_00 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
                         *)0x0;
            }
            if (this_00 !=
                (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
                 *)0x0) {
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
              ::operator()(this_00,__return_storage_ptr__,&local_res20->Node,param_3);
              return __return_storage_ptr__;
            }
          }
          break;
        }
        uVar5 = puVar12[0x18];
      } while (uVar5 != 0xffffffff);
    }
  }
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  pwVar1 = (param_1->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_a8,pwVar1,(int)((longlong)(param_1->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar8 = FText::FromString(&local_88,&local_a8);
  local_118.Type = Text;
  FText::FText((FText *)&local_118.TextValue,pFVar8);
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar9;
  }
  if (((local_128.AllocatorInstance.Data <= &local_118) &&
      (&local_118 <
       (FFormatArgumentValue *)
       (local_128.AllocatorInstance.Data + (longlong)local_128.ArrayMax * 0x20))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar9;
  }
  iVar6 = local_128.ArrayNum;
  if (local_128.ArrayNum == local_128.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_128.AllocatorInstance,&local_128.ArrayMax);
  }
  local_128.ArrayNum = iVar6 + 1;
  lVar11 = (longlong)iVar6 * 0x20;
  *(Type *)&local_128.AllocatorInstance.Data[lVar11].field_0x0 = local_118.Type;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(float *)(local_128.AllocatorInstance.Data + lVar11 + 8) = local_118.field1_0x8.FloatValue;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(undefined8 *)&local_128.AllocatorInstance.Data[lVar11 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_128.AllocatorInstance.Data + lVar11 + 0x18) = 0;
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_128.AllocatorInstance.Data + lVar11 + 0x10),
                   (FText *)&local_118.TextValue),
     local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)
                 *(ITextData *)local_118.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pwVar1 = (param_2->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_98,pwVar1,(int)((longlong)(param_2->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar8 = FText::FromString(&local_78,&local_98);
  local_f8.Type = Text;
  FText::FText((FText *)&local_f8.TextValue,pFVar8);
  if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar9;
  }
  if (((local_128.AllocatorInstance.Data <= &local_f8) &&
      (&local_f8 <
       (FFormatArgumentValue *)
       (local_128.AllocatorInstance.Data + (longlong)local_128.ArrayMax * 0x20))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar9;
  }
  iVar6 = local_128.ArrayNum;
  if (local_128.ArrayNum == local_128.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_128.AllocatorInstance,&local_128.ArrayMax);
  }
  local_128.ArrayNum = iVar6 + 1;
  lVar11 = (longlong)iVar6 * 0x20;
  *(Type *)&local_128.AllocatorInstance.Data[lVar11].field_0x0 = local_f8.Type;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(float *)(local_128.AllocatorInstance.Data + lVar11 + 8) = local_f8.field1_0x8.FloatValue;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(undefined8 *)&local_128.AllocatorInstance.Data[lVar11 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_128.AllocatorInstance.Data + lVar11 + 0x18) = 0;
  if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_128.AllocatorInstance.Data + lVar11 + 0x10),
                   (FText *)&local_f8.TextValue),
     local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*(ITextData *)local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"ExpressionParser",L"PostUnaryExecutionError",
                      L"Post-unary operator {0} cannot operate on {1}");
  pFVar10 = FTextFormat::FTextFormat(&local_48,pFVar8,Default);
  pFVar8 = FText::Format(&local_68,pFVar10,&local_128);
  *(undefined8 *)&__return_storage_ptr__->Variant = 0;
  pIVar2 = (pFVar8->TextData).Reference;
  *(ITextData **)&__return_storage_ptr__->Variant = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res20);
  }
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar8->Flags;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
  if ((FFormatArgumentValue *)local_128.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExecPreUnary @ 1419398e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>::ExecPreUnary
          (TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> *this,
          TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2,
          ITextFilterExpressionContext *param_3)

{
  wchar_t *pwVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FGuid *pFVar7;
  FText *pFVar8;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar9;
  FTextFormat *pFVar10;
  longlong lVar11;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
  *this_00;
  uint *puVar12;
  undefined1 *puVar13;
  TExpressionToken<wchar_t> *local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_128;
  FFormatArgumentValue local_118;
  FFormatArgumentValue local_f8;
  FOperatorFunctionID local_d8;
  FString local_a8;
  FString local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  local_res20 = param_2;
  pFVar7 = FExpressionNode::GetTypeId(&param_1->Node);
  local_d8.OperatorType.A = pFVar7->A;
  local_d8.OperatorType.B = pFVar7->B;
  local_d8.OperatorType.C = pFVar7->C;
  local_d8.OperatorType.D = pFVar7->D;
  local_d8.LeftOperandType.A = 0;
  local_d8.LeftOperandType.B = 0;
  local_d8.LeftOperandType.C = 0;
  local_d8.LeftOperandType.D = 0;
  pFVar7 = FExpressionNode::GetTypeId(&param_2->Node);
  local_d8.RightOperandType.A = pFVar7->A;
  local_d8.RightOperandType.B = pFVar7->B;
  local_d8.RightOperandType.C = pFVar7->C;
  local_d8.RightOperandType.D = pFVar7->D;
  uVar5 = ::GetTypeHash(&local_d8);
  if (*(int *)&(this->PreUnaryOps).field_0x8 != *(int *)&(this->PreUnaryOps).field_0x34) {
    puVar13 = *(undefined1 **)&(this->PreUnaryOps).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->PreUnaryOps).field_0x38;
    }
    uVar5 = *(uint *)(puVar13 +
                     (ulonglong)(*(int *)&(this->PreUnaryOps).field_0x48 - 1U & uVar5) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar12 = (uint *)((longlong)(int)uVar5 * 0x70 + *(longlong *)&this->PreUnaryOps);
        param_2 = local_res20;
        if (((((local_d8.OperatorType.D == puVar12[3] && local_d8.OperatorType.C == puVar12[2]) &&
              local_d8.OperatorType.B == puVar12[1]) && local_d8.OperatorType.A == *puVar12) &&
            (((local_d8.LeftOperandType.C == puVar12[6] && local_d8.LeftOperandType.D == puVar12[7])
             && local_d8.LeftOperandType.B == puVar12[5]) &&
             local_d8.LeftOperandType.A == puVar12[4])) &&
           (((local_d8.RightOperandType.D == puVar12[0xb] &&
             local_d8.RightOperandType.C == puVar12[10]) &&
            local_d8.RightOperandType.B == puVar12[9]) && local_d8.RightOperandType.A == puVar12[8])
           ) {
          if (uVar5 != 0xffffffff) {
            this_00 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
                       *)(puVar12 + 0xc);
            if (puVar12 == (uint *)0x0) {
              this_00 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
                         *)0x0;
            }
            if (this_00 !=
                (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
                 *)0x0) {
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
              ::operator()(this_00,__return_storage_ptr__,&local_res20->Node,param_3);
              return __return_storage_ptr__;
            }
          }
          break;
        }
        uVar5 = puVar12[0x18];
      } while (uVar5 != 0xffffffff);
    }
  }
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  pwVar1 = (param_1->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_a8,pwVar1,(int)((longlong)(param_1->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar8 = FText::FromString(&local_88,&local_a8);
  local_118.Type = Text;
  FText::FText((FText *)&local_118.TextValue,pFVar8);
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar9;
  }
  if (((local_128.AllocatorInstance.Data <= &local_118) &&
      (&local_118 <
       (FFormatArgumentValue *)
       (local_128.AllocatorInstance.Data + (longlong)local_128.ArrayMax * 0x20))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar9;
  }
  iVar6 = local_128.ArrayNum;
  if (local_128.ArrayNum == local_128.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_128.AllocatorInstance,&local_128.ArrayMax);
  }
  local_128.ArrayNum = iVar6 + 1;
  lVar11 = (longlong)iVar6 * 0x20;
  *(Type *)&local_128.AllocatorInstance.Data[lVar11].field_0x0 = local_118.Type;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(float *)(local_128.AllocatorInstance.Data + lVar11 + 8) = local_118.field1_0x8.FloatValue;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_118.field1_0x8.IntValue._4_4_,local_118.field1_0x8.FloatValue);
  *(undefined8 *)&local_128.AllocatorInstance.Data[lVar11 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_128.AllocatorInstance.Data + lVar11 + 0x18) = 0;
  if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_128.AllocatorInstance.Data + lVar11 + 0x10),
                   (FText *)&local_118.TextValue),
     local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)
                 *(ITextData *)local_118.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pwVar1 = (param_2->Context).TokenStart;
  ::FString::ConstructFromPtrSize
            (&local_98,pwVar1,(int)((longlong)(param_2->Context).TokenEnd - (longlong)pwVar1 >> 1));
  pFVar8 = FText::FromString(&local_78,&local_98);
  local_f8.Type = Text;
  FText::FText((FText *)&local_f8.TextValue,pFVar8);
  if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar9;
  }
  if (((local_128.AllocatorInstance.Data <= &local_f8) &&
      (&local_f8 <
       (FFormatArgumentValue *)
       (local_128.AllocatorInstance.Data + (longlong)local_128.ArrayMax * 0x20))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
    return pTVar9;
  }
  iVar6 = local_128.ArrayNum;
  if (local_128.ArrayNum == local_128.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_128.AllocatorInstance,&local_128.ArrayMax);
  }
  local_128.ArrayNum = iVar6 + 1;
  lVar11 = (longlong)iVar6 * 0x20;
  *(Type *)&local_128.AllocatorInstance.Data[lVar11].field_0x0 = local_f8.Type;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(float *)(local_128.AllocatorInstance.Data + lVar11 + 8) = local_f8.field1_0x8.FloatValue;
  *(ulonglong *)(local_128.AllocatorInstance.Data + lVar11 + 8) =
       CONCAT44(local_f8.field1_0x8.IntValue._4_4_,local_f8.field1_0x8.FloatValue);
  *(undefined8 *)&local_128.AllocatorInstance.Data[lVar11 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_128.AllocatorInstance.Data + lVar11 + 0x18) = 0;
  if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_128.AllocatorInstance.Data + lVar11 + 0x10),
                   (FText *)&local_f8.TextValue),
     local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*(ITextData *)local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"ExpressionParser",L"PreUnaryExecutionError",
                      L"Pre-unary operator {0} cannot operate on {1}");
  pFVar10 = FTextFormat::FTextFormat(&local_48,pFVar8,Default);
  pFVar8 = FText::Format(&local_68,pFVar10,&local_128);
  *(undefined8 *)&__return_storage_ptr__->Variant = 0;
  pIVar2 = (pFVar8->TextData).Reference;
  *(ITextData **)&__return_storage_ptr__->Variant = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res20);
  }
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar8->Flags;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
  if ((FFormatArgumentValue *)local_128.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ShouldShortCircuit @ 14196db00

bool __thiscall
TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>::ShouldShortCircuit
          (TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> *this,
          TExpressionToken<wchar_t> *param_1,TExpressionToken<wchar_t> *param_2,
          ITextFilterExpressionContext *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  FGuid *pFVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined1 *puVar8;
  ITextFilterExpressionContext *local_res8;
  FOperatorFunctionID local_68;
  
  pFVar4 = FExpressionNode::GetTypeId(&param_1->Node);
  local_68.OperatorType.A = pFVar4->A;
  local_68.OperatorType.B = pFVar4->B;
  local_68.OperatorType.C = pFVar4->C;
  local_68.OperatorType.D = pFVar4->D;
  pFVar4 = FExpressionNode::GetTypeId(&param_2->Node);
  local_68.LeftOperandType.A = pFVar4->A;
  local_68.LeftOperandType.B = pFVar4->B;
  local_68.LeftOperandType.C = pFVar4->C;
  local_68.LeftOperandType.D = pFVar4->D;
  local_68.RightOperandType.A = 0;
  local_68.RightOperandType.B = 0;
  local_68.RightOperandType.C = 0;
  local_68.RightOperandType.D = 0;
  uVar3 = ::GetTypeHash(&local_68);
  if (*(int *)&(this->BinaryShortCircuits).field_0x8 !=
      *(int *)&(this->BinaryShortCircuits).field_0x34) {
    puVar8 = *(undefined1 **)&(this->BinaryShortCircuits).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->BinaryShortCircuits).field_0x38;
    }
    uVar3 = *(uint *)(puVar8 + (ulonglong)
                               (*(int *)&(this->BinaryShortCircuits).field_0x48 - 1U & uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x70 + *(longlong *)&this->BinaryShortCircuits);
        if (((((local_68.OperatorType.D == puVar5[3] && local_68.OperatorType.C == puVar5[2]) &&
              local_68.OperatorType.B == puVar5[1]) && local_68.OperatorType.A == *puVar5) &&
            (((local_68.LeftOperandType.B == puVar5[5] && local_68.LeftOperandType.D == puVar5[7])
             && local_68.LeftOperandType.C == puVar5[6]) && local_68.LeftOperandType.A == puVar5[4])
            ) && (((local_68.RightOperandType.D == puVar5[0xb] &&
                   local_68.RightOperandType.C == puVar5[10]) &&
                  local_68.RightOperandType.B == puVar5[9]) &&
                  local_68.RightOperandType.A == puVar5[8])) {
          if (uVar3 == 0xffffffff) {
            return false;
          }
          puVar7 = puVar5 + 0xc;
          if (puVar5 == (uint *)0x0) {
            puVar7 = (uint *)0x0;
          }
          if (puVar7 == (uint *)0x0) {
            return false;
          }
          local_res8 = param_3;
          UE::Core::Private::Function::CheckCallable(*(void **)puVar7);
          pcVar1 = *(code **)puVar7;
          puVar5 = puVar7 + 4;
          if (*(uint **)(puVar7 + 10) != (uint *)0x0) {
            puVar5 = *(uint **)(puVar7 + 10);
          }
          uVar6 = (**(code **)(*(longlong *)puVar5 + 8))();
          uVar2 = (*pcVar1)(uVar6,param_2,&local_res8);
          return (bool)uVar2;
        }
        uVar3 = puVar5[0x18];
      } while (uVar3 != 0xffffffff);
    }
  }
  return false;
}


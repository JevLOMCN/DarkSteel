// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// FValue @ 147f66ae0

FValue * __thiscall UE::Shader::FValue::FValue(FValue *this,FLinearColor *param_1)

{
  TArray<UE::Shader::FValueComponent,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FValue *pFVar6;
  ForElementType<UE::Shader::FValueComponent> FVar7;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  (this->Type).ValueType = Float4;
  pTVar1 = &this->Component;
  (this->Type).StructType = (FStructType *)0x0;
  (this->Type).ObjectType.ComparisonIndex = 0;
  (this->Type).ObjectType.Number = 0;
  piVar2 = &(this->Component).ArrayMax;
  (this->Component).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Shader::FValueComponent>)0x0;
  (this->Component).ArrayNum = 0;
  *piVar2 = 0x10;
  local_38 = (ulonglong)(uint)(param_1->field0_0x0)._s_0.R;
  if ((pTVar1 <= &local_38) && (&local_38 < &(this->Component).AllocatorInstance.SecondaryData)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(ulonglong *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_38;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  local_30 = (ulonglong)(uint)(param_1->field0_0x0)._s_0.G;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  if (((ulonglong)FVar7 <= &local_30) &&
     (&local_30 < (ulonglong *)((longlong)FVar7 + (longlong)*piVar2 * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(ulonglong *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_30;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  local_28 = (ulonglong)(uint)(param_1->field0_0x0)._s_0.B;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  if (((ulonglong)FVar7 <= &local_28) &&
     (&local_28 < (ulonglong *)((longlong)FVar7 + (longlong)*piVar2 * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(ulonglong *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_28;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  local_20 = (ulonglong)(uint)(param_1->field0_0x0)._s_0.A;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  if (((ulonglong)FVar7 <= &local_20) &&
     (&local_20 < (ulonglong *)((longlong)FVar7 + (longlong)*piVar2 * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(ulonglong *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_20;
  return this;
}

// FValue @ 147f66e40

FValue * __thiscall UE::Shader::FValue::FValue(FValue *this,float param_1)

{
  TArray<UE::Shader::FValueComponent,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValue *pFVar5;
  ForElementType<UE::Shader::FValueComponent> FVar6;
  ulonglong local_18 [2];
  
  (this->Type).ValueType = Float1;
  pTVar1 = &this->Component;
  (this->Type).StructType = (FStructType *)0x0;
  (this->Type).ObjectType.ComparisonIndex = 0;
  (this->Type).ObjectType.Number = 0;
  (this->Component).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Shader::FValueComponent>)0x0;
  (this->Component).ArrayNum = 0;
  (this->Component).ArrayMax = 0x10;
  local_18[0] = (ulonglong)(uint)param_1;
  if ((pTVar1 <= local_18) && (local_18 < &(this->Component).AllocatorInstance.SecondaryData)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FValue *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->Component).ArrayNum;
  if (iVar4 == (this->Component).ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,&(this->Component).ArrayMax);
  }
  (this->Component).ArrayNum = iVar4 + 1;
  FVar6 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar6 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(ulonglong *)((longlong)FVar6 + (longlong)iVar4 * 8) = local_18[0];
  return this;
}

// FValue @ 147f66f50

FValue * __thiscall
UE::Shader::FValue::FValue(FValue *this,float param_1,float param_2,float param_3,float param_4)

{
  TArray<UE::Shader::FValueComponent,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FValue *pFVar6;
  ForElementType<UE::Shader::FValueComponent> FVar7;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30 [5];
  
  (this->Type).ValueType = Float4;
  pTVar1 = &this->Component;
  (this->Type).StructType = (FStructType *)0x0;
  (this->Type).ObjectType.ComparisonIndex = 0;
  (this->Type).ObjectType.Number = 0;
  piVar2 = &(this->Component).ArrayMax;
  (this->Component).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Shader::FValueComponent>)0x0;
  (this->Component).ArrayNum = 0;
  *piVar2 = 0x10;
  local_48 = (ulonglong)(uint)param_1;
  if ((pTVar1 <= &local_48) && (&local_48 < &(this->Component).AllocatorInstance.SecondaryData)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  local_40 = (ulonglong)(uint)param_2;
  *(ulonglong *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_48;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  if (((ulonglong)FVar7 <= &local_40) &&
     (&local_40 < (ulonglong *)((longlong)FVar7 + (longlong)*piVar2 * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  local_38 = (ulonglong)(uint)param_3;
  *(ulonglong *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_40;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  if (((ulonglong)FVar7 <= &local_38) &&
     (&local_38 < (ulonglong *)((longlong)FVar7 + (longlong)*piVar2 * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  local_30[0] = (ulonglong)(uint)param_4;
  *(ulonglong *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_38;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  if (((ulonglong)FVar7 <= local_30) &&
     (local_30 < (ulonglong *)((longlong)FVar7 + (longlong)*piVar2 * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(ulonglong *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_30[0];
  return this;
}

// FValue @ 147f672c0

FValue * __thiscall
UE::Shader::FValue::FValue(FValue *this,double param_1,double param_2,double param_3,double param_4)

{
  TArray<UE::Shader::FValueComponent,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FValue *pFVar6;
  ForElementType<UE::Shader::FValueComponent> FVar7;
  double local_48;
  double local_40;
  double local_38;
  double local_30 [5];
  
  (this->Type).ValueType = Double4;
  pTVar1 = &this->Component;
  (this->Type).StructType = (FStructType *)0x0;
  (this->Type).ObjectType.ComparisonIndex = 0;
  (this->Type).ObjectType.Number = 0;
  piVar2 = &(this->Component).ArrayMax;
  (this->Component).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Shader::FValueComponent>)0x0;
  (this->Component).ArrayNum = 0;
  *piVar2 = 0x10;
  local_48 = param_1;
  if ((pTVar1 <= &local_48) && (&local_48 < &(this->Component).AllocatorInstance.SecondaryData)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(double *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_48;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  local_40 = param_2;
  if (((ulonglong)FVar7 <= &local_40) &&
     (&local_40 < (double *)((longlong)FVar7 + (longlong)*piVar2 * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(double *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_40;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  local_38 = param_3;
  if (((ulonglong)FVar7 <= &local_38) &&
     (&local_38 < (double *)((longlong)FVar7 + (longlong)*piVar2 * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  local_30[0] = param_4;
  *(double *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_38;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  if (((ulonglong)FVar7 <= local_30) &&
     (local_30 < (double *)((longlong)FVar7 + (longlong)*piVar2 * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(double *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_30[0];
  return this;
}

// FValue @ 147f67620

FValue * __thiscall
UE::Shader::FValue::FValue(FValue *this,bool param_1,bool param_2,bool param_3,bool param_4)

{
  TArray<UE::Shader::FValueComponent,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FValue *pFVar6;
  ForElementType<UE::Shader::FValueComponent> FVar7;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  (this->Type).ValueType = Bool4;
  pTVar1 = &this->Component;
  (this->Type).StructType = (FStructType *)0x0;
  (this->Type).ObjectType.ComparisonIndex = 0;
  (this->Type).ObjectType.Number = 0;
  (this->Component).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Shader::FValueComponent>)0x0;
  piVar2 = &(this->Component).ArrayMax;
  (this->Component).ArrayNum = 0;
  *piVar2 = 0x10;
  local_38 = (ulonglong)param_1;
  if ((pTVar1 <= &local_38) && (&local_38 < &(this->Component).AllocatorInstance.SecondaryData)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  local_30 = (ulonglong)param_2;
  *(ulonglong *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_38;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  if (((ulonglong)FVar7 <= &local_30) &&
     (&local_30 < (ulonglong *)((longlong)FVar7 + (longlong)*piVar2 * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  local_28 = (ulonglong)param_3;
  *(ulonglong *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_30;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  if (((ulonglong)FVar7 <= &local_28) &&
     (&local_28 < (ulonglong *)((longlong)FVar7 + (longlong)*piVar2 * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(ulonglong *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_28;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  local_20 = (ulonglong)param_4;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  if (((ulonglong)FVar7 <= &local_20) &&
     (&local_20 < (ulonglong *)((longlong)FVar7 + (longlong)*piVar2 * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(ulonglong *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_20;
  return this;
}

// FValue @ 147fa56b0

FValue * __thiscall UE::Shader::FValue::FValue(FValue *this,FValue *param_1)

{
  ForElementType<UE::Shader::FValueComponent> FVar1;
  FName FVar2;
  undefined7 uVar3;
  
  FVar2 = (param_1->Type).ObjectType;
  (this->Type).StructType = (param_1->Type).StructType;
  (this->Type).ObjectType = FVar2;
  uVar3 = *(undefined7 *)&(param_1->Type).field_0x11;
  (this->Type).ValueType = (param_1->Type).ValueType;
  *(undefined7 *)&(this->Type).field_0x11 = uVar3;
  (this->Component).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Shader::FValueComponent>)0x0;
  if ((param_1->Component).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Shader::FValueComponent>)0x0) {
    memmove(&this->Component,&param_1->Component,0x80);
  }
  FVar1 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->Component).AllocatorInstance.SecondaryData =
       (param_1->Component).AllocatorInstance.SecondaryData;
  (param_1->Component).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Shader::FValueComponent>)0x0;
  (this->Component).ArrayNum = (param_1->Component).ArrayNum;
  (this->Component).ArrayMax = (param_1->Component).ArrayMax;
  (param_1->Component).ArrayNum = 0;
  (param_1->Component).ArrayMax = 0x10;
  return this;
}

// operator= @ 147faa430

FValue * __thiscall UE::Shader::FValue::operator=(FValue *this,FValue *param_1)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  undefined7 uVar4;
  ForElementType<UE::Shader::FValueComponent> _Dst;
  ForElementType<UE::Shader::FValueComponent> _Src;
  
  FVar3 = (param_1->Type).ObjectType;
  (this->Type).StructType = (param_1->Type).StructType;
  (this->Type).ObjectType = FVar3;
  uVar4 = *(undefined7 *)&(param_1->Type).field_0x11;
  (this->Type).ValueType = (param_1->Type).ValueType;
  *(undefined7 *)&(this->Type).field_0x11 = uVar4;
  if (this != param_1) {
    piVar1 = &(this->Component).ArrayMax;
    _Src = (param_1->Component).AllocatorInstance.SecondaryData;
    iVar2 = (param_1->Component).ArrayNum;
    if (_Src == (ForElementType<UE::Shader::FValueComponent>)0x0) {
      _Src = (ForElementType<UE::Shader::FValueComponent>)&param_1->Component;
    }
    (this->Component).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0x10;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                (8,8,iVar2,*piVar1,&(this->Component).AllocatorInstance,iVar2,piVar1);
      _Dst = (this->Component).AllocatorInstance.SecondaryData;
      if (iVar2 != 0) {
        if (_Dst == (ForElementType<UE::Shader::FValueComponent>)0x0) {
          _Dst = (ForElementType<UE::Shader::FValueComponent>)&this->Component;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 3);
      }
    }
  }
  return this;
}

// FValue @ 1485a5080

FValue * __thiscall UE::Shader::FValue::FValue(FValue *this,TVector4<double> *param_1)

{
  TArray<UE::Shader::FValueComponent,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FValue *pFVar6;
  ForElementType<UE::Shader::FValueComponent> FVar7;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  pTVar1 = &this->Component;
  (this->Type).ValueType = Double4;
  piVar2 = &(this->Component).ArrayMax;
  (this->Type).StructType = (FStructType *)0x0;
  (this->Type).ObjectType.ComparisonIndex = 0;
  (this->Type).ObjectType.Number = 0;
  (this->Component).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Shader::FValueComponent>)0x0;
  (this->Component).ArrayNum = 0;
  *piVar2 = 0x10;
  local_28 = (param_1->field0_0x0)._s_0.X;
  if ((pTVar1 <= &local_28) && (&local_28 < &(this->Component).AllocatorInstance.SecondaryData)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(double *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_28;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  local_20 = (param_1->field0_0x0)._s_0.Y;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  if (((ulonglong)FVar7 <= &local_20) &&
     (&local_20 < (double *)((longlong)FVar7 + (longlong)*piVar2 * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(double *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_20;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  local_18 = (param_1->field0_0x0)._s_0.Z;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  if (((ulonglong)FVar7 <= &local_18) &&
     (&local_18 < (double *)((longlong)FVar7 + (longlong)*piVar2 * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(double *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_18;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  local_10 = (param_1->field0_0x0)._s_0.W;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  if (((ulonglong)FVar7 <= &local_10) &&
     (&local_10 < (double *)((longlong)FVar7 + (longlong)*piVar2 * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(double *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_10;
  return this;
}

// FValue @ 1485a53d0

FValue * __thiscall
UE::Shader::FValue::FValue(FValue *this,float param_1,float param_2,float param_3)

{
  TArray<UE::Shader::FValueComponent,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FValue *pFVar6;
  ForElementType<UE::Shader::FValueComponent> FVar7;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38 [6];
  
  (this->Type).ValueType = Float3;
  pTVar1 = &this->Component;
  (this->Type).StructType = (FStructType *)0x0;
  (this->Type).ObjectType.ComparisonIndex = 0;
  (this->Type).ObjectType.Number = 0;
  piVar2 = &(this->Component).ArrayMax;
  (this->Component).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Shader::FValueComponent>)0x0;
  (this->Component).ArrayNum = 0;
  *piVar2 = 0x10;
  local_48 = (ulonglong)(uint)param_1;
  if ((pTVar1 <= &local_48) && (&local_48 < &(this->Component).AllocatorInstance.SecondaryData)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  local_40 = (ulonglong)(uint)param_2;
  *(ulonglong *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_48;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  if (((ulonglong)FVar7 <= &local_40) &&
     (&local_40 < (ulonglong *)((longlong)FVar7 + (longlong)*piVar2 * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  local_38[0] = (ulonglong)(uint)param_3;
  *(ulonglong *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_40;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  if (((ulonglong)FVar7 <= local_38) &&
     (local_38 < (ulonglong *)((longlong)FVar7 + (longlong)*piVar2 * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FValue *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Component).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Component).ArrayNum = iVar5 + 1;
  FVar7 = (this->Component).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar7 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(ulonglong *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_38[0];
  return this;
}

// AsBool @ 1485abb50

TValue<bool> __thiscall UE::Shader::FValue::AsBool(FValue *this)

{
  TValue<bool> *in_RDX;
  FCastBool local_res10 [24];
  
  Shader::Private::AsType<UE::Shader::Private::FCastBool,UE::Shader::TValue<bool>_>
            (local_res10,this,in_RDX);
  return (TValue<bool>)SUB84(in_RDX,0);
}

// AsBoolScalar @ 1485abb80

bool __thiscall UE::Shader::FValue::AsBoolScalar(FValue *this)

{
  longlong lVar1;
  TValue<bool> local_res10 [6];
  
  Shader::Private::AsType<UE::Shader::Private::FCastBool,UE::Shader::TValue<bool>_>
            ((FCastBool *)local_res10,this,local_res10);
  lVar1 = 0;
  do {
    if (local_res10[0].Component[lVar1] != false) {
      return true;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 < 4);
  return false;
}

// AsDouble @ 1485abbc0

TValue<double> * __thiscall
UE::Shader::FValue::AsDouble(FValue *this,TValue<double> *__return_storage_ptr__)

{
  FCastDouble local_res10 [24];
  
  Shader::Private::AsType<UE::Shader::Private::FCastDouble,UE::Shader::TValue<double>_>
            (local_res10,this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AsFloat @ 1485abbf0

TValue<float> * __thiscall
UE::Shader::FValue::AsFloat(FValue *this,TValue<float> *__return_storage_ptr__)

{
  FCastFloat local_res10 [24];
  
  Shader::Private::AsType<UE::Shader::Private::FCastFloat,UE::Shader::TValue<float>_>
            (local_res10,this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AsFloatScalar @ 1485abc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall UE::Shader::FValue::AsFloatScalar(FValue *this)

{
  undefined1 auStack_48 [32];
  FCastFloat local_28 [8];
  TValue<float> local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  Shader::Private::AsType<UE::Shader::Private::FCastFloat,UE::Shader::TValue<float>_>
            (local_28,this,&local_20);
  return local_20.Component[0];
}

// AsInt @ 1485abc70

TValue<int> * __thiscall UE::Shader::FValue::AsInt(FValue *this,TValue<int> *__return_storage_ptr__)

{
  FCastInt local_res10 [24];
  
  Shader::Private::AsType<UE::Shader::Private::FCastInt,UE::Shader::TValue<int>_>
            (local_res10,this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AsLinearColor @ 1485abca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FLinearColor * __thiscall
UE::Shader::FValue::AsLinearColor(FValue *this,FLinearColor *__return_storage_ptr__)

{
  undefined1 auStack_48 [32];
  FCastFloat local_28 [8];
  TValue<float> local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  Shader::Private::AsType<UE::Shader::Private::FCastFloat,UE::Shader::TValue<float>_>
            (local_28,this,&local_20);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_20.Component._0_8_;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_20.Component._8_8_;
  return __return_storage_ptr__;
}

// AsMemoryImage @ 1485abcf0

FMemoryImageValue * __thiscall
UE::Shader::FValue::AsMemoryImage(FValue *this,FMemoryImageValue *__return_storage_ptr__)

{
  EValueType EVar1;
  ForElementType<UE::Shader::FValueComponent> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FMemoryImageValue *pFVar6;
  ulonglong uVar7;
  ForElementType<UE::Shader::FValueComponent> FVar8;
  uint uVar9;
  ulonglong _Size;
  
  EVar1 = (this->Type).ValueType;
  if ((((EVar1 == Struct) || (EVar1 == Object)) || (bVar4 = IsNumericType(EVar1), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type.IsNumeric()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                         ,0x1a4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FMemoryImageValue *)(*pcVar3)();
    return pFVar6;
  }
  EVar1 = (this->Type).ValueType;
  if ((Any < EVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)Type < NumValueTypes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FMemoryImageValue *)(*pcVar3)();
    return pFVar6;
  }
  uVar7 = 0x1c;
  if (EVar1 < Num) {
    uVar7 = (ulonglong)EVar1;
  }
  pFVar6 = __return_storage_ptr__;
  if (GValueTypeDescriptions[uVar7].ComponentSizeInBytes != '\0') {
    uVar9 = 0;
    if ('\0' < GValueTypeDescriptions[uVar7].NumComponents) {
      _Size = (ulonglong)(uint)(int)GValueTypeDescriptions[uVar7].ComponentSizeInBytes;
      do {
        uVar5 = 0;
        if ((int)uVar9 < (this->Component).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FMemoryImageValue *)(*pcVar3)();
          return pFVar6;
        }
        FVar2 = (this->Component).AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<UE::Shader::FValueComponent>)&this->Component;
        if (FVar2 != (ForElementType<UE::Shader::FValueComponent>)0x0) {
          FVar8 = FVar2;
        }
        memcpy(pFVar6,(void *)((longlong)FVar8 + (longlong)(int)uVar9 * 8),_Size);
        pFVar6 = (FMemoryImageValue *)(pFVar6->Bytes + _Size);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)GValueTypeDescriptions[uVar7].NumComponents);
    }
  }
  uVar9 = (int)pFVar6 - (int)__return_storage_ptr__;
  __return_storage_ptr__->Size = uVar9;
  if ((0x80 < uVar9) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Size <= FMemoryImageValue::MaxSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                         ,0x1b3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FMemoryImageValue *)(*pcVar3)();
    return pFVar6;
  }
  return __return_storage_ptr__;
}

// AsVector4d @ 1485ac0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector4<double> * __thiscall
UE::Shader::FValue::AsVector4d(FValue *this,TVector4<double> *__return_storage_ptr__)

{
  undefined1 auStack_58 [32];
  FCastDouble local_38 [8];
  TValue<double> local_30;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  Shader::Private::AsType<UE::Shader::Private::FCastDouble,UE::Shader::TValue<double>_>
            (local_38,this,&local_30);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_30.Component[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_30.Component[1];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_30.Component[2];
  (__return_storage_ptr__->field0_0x0)._s_0.W = local_30.Component[3];
  return __return_storage_ptr__;
}

// FromMemoryImage @ 1485c2d60

FValue * __cdecl
UE::Shader::FValue::FromMemoryImage
          (FValue *__return_storage_ptr__,EValueType param_1,void *param_2,uint *param_3)

{
  TArray<UE::Shader::FValueComponent,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  EValueType EVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FValue *pFVar10;
  ForElementType<UE::Shader::FValueComponent> FVar11;
  ForElementType<UE::Shader::FValueComponent> FVar12;
  uint uVar13;
  ulonglong _Size;
  int iVar14;
  void *_Src;
  
  if (Any < param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(uint32)Type < NumValueTypes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                       ,0x45,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FValue *)(*pcVar4)();
      return pFVar10;
    }
  }
  uVar7 = 0x1c;
  if (param_1 < 0x1c) {
    uVar7 = (uint)param_1;
  }
  if (GValueTypeDescriptions[uVar7].ComponentType == Void) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsNumericType(Type)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                       ,0x18d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FValue *)(*pcVar4)();
      return pFVar10;
    }
  }
  if (Any < param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(uint32)Type < NumValueTypes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                       ,0x45,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FValue *)(*pcVar4)();
      return pFVar10;
    }
  }
  iVar14 = (int)GValueTypeDescriptions[uVar7].NumComponents;
  EVar6 = MakeValueType(GValueTypeDescriptions[uVar7].ComponentType,iVar14);
  uVar13 = 0;
  (__return_storage_ptr__->Type).ValueType = EVar6;
  (__return_storage_ptr__->Type).StructType = (FStructType *)0x0;
  (__return_storage_ptr__->Type).ObjectType.ComparisonIndex = 0;
  (__return_storage_ptr__->Type).ObjectType.Number = 0;
  if ((byte)(EVar6 - Struct) < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InValueType != EValueType::Struct && InValueType != EValueType::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Shader\\ShaderTypes.h"
                       ,0xb7,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FValue *)(*pcVar4)();
      return pFVar10;
    }
  }
  piVar2 = &(__return_storage_ptr__->Component).ArrayNum;
  (__return_storage_ptr__->Component).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Shader::FValueComponent>)0x0;
  piVar3 = &(__return_storage_ptr__->Component).ArrayMax;
  *piVar2 = 0;
  pTVar1 = &__return_storage_ptr__->Component;
  *piVar3 = 0x10;
  iVar8 = Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                    (8,8,iVar14,&pTVar1->AllocatorInstance,piVar2,piVar3);
  FVar11 = (__return_storage_ptr__->Component).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar11 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  DefaultConstructItems<UE::Shader::FValueComponent,int>
            ((void *)((longlong)FVar11 + (longlong)iVar8 * 8),iVar14);
  _Src = param_2;
  if ((GValueTypeDescriptions[uVar7].ComponentSizeInBytes != '\0') &&
     ('\0' < GValueTypeDescriptions[uVar7].NumComponents)) {
    _Size = (ulonglong)(uint)(int)GValueTypeDescriptions[uVar7].ComponentSizeInBytes;
    do {
      uVar9 = 0;
      if ((int)uVar13 < (__return_storage_ptr__->Component).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FValue *)(*pcVar4)();
          return pFVar10;
        }
      }
      FVar11 = (__return_storage_ptr__->Component).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
      if (FVar11 != (ForElementType<UE::Shader::FValueComponent>)0x0) {
        FVar12 = FVar11;
      }
      memcpy((void *)((longlong)FVar12 + (longlong)(int)uVar13 * 8),_Src,_Size);
      _Src = (void *)((longlong)_Src + _Size);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)GValueTypeDescriptions[uVar7].NumComponents);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = (int)_Src - (int)param_2;
  }
  return __return_storage_ptr__;
}

// IsZero @ 1485ce700

bool __thiscall UE::Shader::FValue::IsZero(FValue *this)

{
  ForElementType<UE::Shader::FValueComponent> FVar1;
  EValueType EVar2;
  int iVar3;
  bool bVar4;
  ForElementType<UE::Shader::FValueComponent> FVar5;
  undefined1 local_res8 [8];
  
  EVar2 = (this->Type).ValueType;
  if (((EVar2 != Struct) && (EVar2 != Object)) && (bVar4 = IsNumericType(EVar2), bVar4)) {
    FVar5 = (this->Component).AllocatorInstance.SecondaryData;
    iVar3 = (this->Component).ArrayNum;
    if (FVar5 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
      FVar5 = (ForElementType<UE::Shader::FValueComponent>)&this->Component;
    }
    FVar1 = (ForElementType<UE::Shader::FValueComponent>)((longlong)FVar5 + (longlong)iVar3 * 8);
    while( true ) {
      if ((this->Component).ArrayNum != iVar3) {
        `TCheckedPointerIterator<UE::Shader::FValueComponent_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar5 == FVar1) break;
      if (*(longlong *)FVar5 != 0) {
        return false;
      }
      FVar5 = (ForElementType<UE::Shader::FValueComponent>)((longlong)FVar5 + 8);
    }
    return true;
  }
  return false;
}

// ToString @ 1485de530

wchar_t * __thiscall
UE::Shader::FValue::ToString
          (FValue *this,EValueStringFormat param_1,TStringBuilderBase<wchar_t> *param_2)

{
  EValueType EVar1;
  FStructType *pFVar2;
  ForElementType<UE::Shader::FValueComponent> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  EValueComponentType *pEVar7;
  FValueTypeDescription *pFVar8;
  wchar_t *pwVar9;
  size_t sVar10;
  EValueComponentType EVar11;
  ulonglong uVar12;
  int iVar13;
  ForElementType<UE::Shader::FValueComponent> FVar14;
  uint uVar15;
  ulonglong uVar16;
  wchar_t *local_res8;
  
  EVar1 = (this->Type).ValueType;
  if (EVar1 == Struct) {
    iVar13 = (((this->Type).StructType)->ComponentTypes).ArrayNum;
  }
  else if (EVar1 == Object) {
    iVar13 = 1;
  }
  else {
    pFVar8 = GetValueTypeDescription(EVar1);
    iVar13 = (int)pFVar8->NumComponents;
  }
  FType::GetName(&this->Type);
  local_res8 = (wchar_t *)0x0;
  if (param_1 == HLSL) {
    EVar1 = (this->Type).ValueType;
    if (EVar1 == Struct) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"{ ",2);
      local_res8 = L" }";
    }
    else {
      pFVar8 = GetValueTypeDescription(EVar1);
      if ((pFVar8->ComponentType == Numeric) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeDesc.ComponentType != EValueComponentType::Numeric",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                             ,0x252,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pwVar9 = (wchar_t *)(*pcVar4)();
        return pwVar9;
      }
      if (pFVar8->ComponentType != Double) {
        TStringBuilderBase<wchar_t>::AppendfImpl(param_2,L"%s(");
        local_res8 = L")";
      }
    }
  }
  uVar12 = 0;
  uVar16 = uVar12;
  if (0 < iVar13) {
    do {
      uVar15 = (uint)uVar12;
      if (uVar15 != 0) {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L", ",2);
      }
      EVar1 = (this->Type).ValueType;
      if (EVar1 == Struct) {
        pFVar2 = (this->Type).StructType;
        if ((pFVar2->ComponentTypes).ArrayNum <= (int)uVar15) goto LAB_1485de6a2;
        pEVar7 = TArrayView<enum_UE::Shader::EValueComponentType_const_,int>::operator[]
                           (&pFVar2->ComponentTypes,uVar15);
        EVar11 = *pEVar7;
      }
      else {
        if ((EVar1 != Object) && (bVar5 = IsNumericType(EVar1), bVar5)) {
          pFVar8 = GetValueTypeDescription((this->Type).ValueType);
          if (((pFVar8->NumComponents == '\x01') && (uVar15 < 4)) ||
             ((int)uVar15 < (int)pFVar8->NumComponents)) {
            EVar11 = pFVar8->ComponentType;
            goto LAB_1485de6a4;
          }
        }
LAB_1485de6a2:
        EVar11 = Void;
      }
LAB_1485de6a4:
      if (EVar11 == Float) {
        uVar6 = 0;
        if ((int)uVar15 < (this->Component).ArrayNum) {
          uVar6 = ~uVar15 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pwVar9 = (wchar_t *)(*pcVar4)();
          return pwVar9;
        }
        if (param_1 == HLSL) {
          pwVar9 = L"%0.8f";
        }
        else if (iVar13 == 1) {
          pwVar9 = L"%.4g";
        }
        else if ((iVar13 == 2) || (iVar13 == 3)) {
          pwVar9 = L"%.3g";
        }
        else {
          pwVar9 = L"%.2g";
        }
LAB_1485de964:
        TStringBuilderBase<wchar_t>::AppendfImpl(param_2,pwVar9);
      }
      else {
        if (EVar11 == Double) {
LAB_1485de807:
          uVar6 = 0;
          if ((int)uVar15 < (this->Component).ArrayNum) {
            uVar6 = ~uVar15 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pwVar9 = (wchar_t *)(*pcVar4)();
            return pwVar9;
          }
          if (param_1 == HLSL) {
            pwVar9 = L"%0.8f";
          }
          else if (iVar13 == 1) {
            pwVar9 = L"%.4g";
          }
          else if ((iVar13 == 2) || (iVar13 == 3)) {
            pwVar9 = L"%.3g";
          }
          else {
            pwVar9 = L"%.2g";
          }
          goto LAB_1485de964;
        }
        if (EVar11 == Int) {
          uVar6 = 0;
          if ((int)uVar15 < (this->Component).ArrayNum) {
            uVar6 = ~uVar15 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pwVar9 = (wchar_t *)(*pcVar4)();
            return pwVar9;
          }
          TStringBuilderBase<wchar_t>::AppendfImpl(param_2,L"%d");
        }
        else if (EVar11 == Bool) {
          uVar6 = 0;
          if ((int)uVar15 < (this->Component).ArrayNum) {
            uVar6 = ~uVar15 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pwVar9 = (wchar_t *)(*pcVar4)();
            return pwVar9;
          }
          FVar3 = (this->Component).AllocatorInstance.SecondaryData;
          pwVar9 = L"false";
          FVar14 = (ForElementType<UE::Shader::FValueComponent>)&this->Component;
          if (FVar3 != (ForElementType<UE::Shader::FValueComponent>)0x0) {
            FVar14 = FVar3;
          }
          if (*(char *)((longlong)FVar14 + uVar16) != '\0') {
            pwVar9 = L"true";
          }
          sVar10 = wcslen(pwVar9);
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,pwVar9,(int)sVar10);
        }
        else {
          if (EVar11 == Numeric) goto LAB_1485de807;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                             ,0x26a,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pwVar9 = (wchar_t *)(*pcVar4)();
            return pwVar9;
          }
        }
      }
      uVar12 = (ulonglong)(uVar15 + 1);
      uVar16 = uVar16 + 8;
    } while ((int)(uVar15 + 1) < iVar13);
  }
  if (local_res8 != (wchar_t *)0x0) {
    sVar10 = wcslen(local_res8);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,local_res8,(int)sVar10);
  }
  if (param_2->End < param_2->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(param_2,1);
  }
  *param_2->CurPos = L'\0';
  return param_2->Base;
}


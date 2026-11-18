// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 12

// ~FFieldNode<int> @ 143f488c0

void __thiscall FFieldNode<int>::~FFieldNode<int>(FFieldNode<int> *this)

{
  *(undefined ***)this = &___7FFieldNodeBase__6B_;
  return;
}

// ~FFieldNode<float> @ 143f488e0

void __thiscall FFieldNode<float>::~FFieldNode<float>(FFieldNode<float> *this)

{
  *(undefined ***)this = &___7FFieldNodeBase__6B_;
  return;
}

// ~FFieldNode<UE::Math::TVector<double>_> @ 143f48900

void __thiscall
FFieldNode<UE::Math::TVector<double>_>::~FFieldNode<UE::Math::TVector<double>_>
          (FFieldNode<UE::Math::TVector<double>_> *this)

{
  *(undefined ***)this = &___7FFieldNodeBase__6B_;
  return;
}

// FillSetupCount @ 143f672f0

void __thiscall FFieldNode<int>::FillSetupCount(FFieldNode<int> *this,int *param_1,int *param_2)

{
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 2;
  return;
}

// FillSetupCount @ 143f67300

void __thiscall FFieldNode<float>::FillSetupCount(FFieldNode<float> *this,int *param_1,int *param_2)

{
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 2;
  return;
}

// FillSetupCount @ 143f67310

void __thiscall
FFieldNode<UE::Math::TVector<double>_>::FillSetupCount
          (FFieldNode<UE::Math::TVector<double>_> *this,int *param_1,int *param_2)

{
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 2;
  return;
}

// FillSetupDatas @ 143f67e80

void __thiscall
FFieldNode<int>::FillSetupDatas
          (FFieldNode<int> *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int local_18;
  float local_14;
  float local_10 [2];
  
  local_18 = param_2->ArrayNum;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_1->ArrayMax * 4)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_18;
  iVar4 = (**(code **)(*(longlong *)this + 8))(this);
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_14 = (float)iVar4;
  if ((pFVar1 <= (FScriptContainerElement *)&local_14) &&
     ((FScriptContainerElement *)&local_14 < pFVar1 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_14;
  iVar4 = (**(code **)(*(longlong *)this + 0x10))(this);
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_10[0] = (float)iVar4;
  if ((pFVar1 <= (FScriptContainerElement *)local_10) &&
     ((FScriptContainerElement *)local_10 < pFVar1 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_10[0];
  return;
}

// FillSetupDatas @ 143f680b0

void __thiscall
FFieldNode<float>::FillSetupDatas
          (FFieldNode<float> *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int local_18;
  float local_14;
  float local_10 [2];
  
  local_18 = param_2->ArrayNum;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_1->ArrayMax * 4)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_18;
  iVar4 = (**(code **)(*(longlong *)this + 8))(this);
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_14 = (float)iVar4;
  if ((pFVar1 <= (FScriptContainerElement *)&local_14) &&
     ((FScriptContainerElement *)&local_14 < pFVar1 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_14;
  iVar4 = (**(code **)(*(longlong *)this + 0x10))(this);
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_10[0] = (float)iVar4;
  if ((pFVar1 <= (FScriptContainerElement *)local_10) &&
     ((FScriptContainerElement *)local_10 < pFVar1 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_10[0];
  return;
}

// FillSetupDatas @ 143f682e0

void __thiscall
FFieldNode<UE::Math::TVector<double>_>::FillSetupDatas
          (FFieldNode<UE::Math::TVector<double>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int local_18;
  float local_14;
  float local_10 [2];
  
  local_18 = param_2->ArrayNum;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_1->ArrayMax * 4)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_18;
  iVar4 = (**(code **)(*(longlong *)this + 8))(this);
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_14 = (float)iVar4;
  if ((pFVar1 <= (FScriptContainerElement *)&local_14) &&
     ((FScriptContainerElement *)&local_14 < pFVar1 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_14;
  iVar4 = (**(code **)(*(longlong *)this + 0x10))(this);
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_10[0] = (float)iVar4;
  if ((pFVar1 <= (FScriptContainerElement *)local_10) &&
     ((FScriptContainerElement *)local_10 < pFVar1 + (longlong)param_2->ArrayMax * 4)) {
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
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_10[0];
  return;
}

// Type @ 143f77480

EFieldType __thiscall FFieldNode<int>::Type(FFieldNode<int> *this)

{
  return EField_Int32;
}

// Type @ 143f77490

EFieldType __thiscall FFieldNode<float>::Type(FFieldNode<float> *this)

{
  return EField_Float;
}

// Type @ 143f774a0

EFieldType __thiscall
FFieldNode<UE::Math::TVector<double>_>::Type(FFieldNode<UE::Math::TVector<double>_> *this)

{
  return EField_FVector;
}


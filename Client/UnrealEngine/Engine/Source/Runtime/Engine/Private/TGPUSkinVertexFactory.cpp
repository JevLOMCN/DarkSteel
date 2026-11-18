// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// TGPUSkinVertexFactory<1> @ 147cc2840

TGPUSkinVertexFactory<1> * __thiscall
TGPUSkinVertexFactory<1>::TGPUSkinVertexFactory<1>
          (TGPUSkinVertexFactory<1> *this,FInitializer *param_1)

{
  FGPUBaseSkinVertexFactory::FGPUBaseSkinVertexFactory((FGPUBaseSkinVertexFactory *)this,param_1);
  *(undefined ***)this = &___7__TGPUSkinVertexFactory__00__6B_;
  return this;
}

// TGPUSkinVertexFactory<1> @ 147cc2870

TGPUSkinVertexFactory<1> * __thiscall
TGPUSkinVertexFactory<1>::TGPUSkinVertexFactory<1>
          (TGPUSkinVertexFactory<1> *this,Type param_1,uint param_2,uint param_3,uint param_4,
          bool param_5)

{
  FInitializer local_28;
  
  local_28.BaseVertexIndex = param_4;
  local_28.bUsedForPassthroughVertexFactory = param_5;
  local_28.BoneOffset = 0;
  local_28.FeatureLevel = param_1;
  local_28.NumBones = param_2;
  local_28.NumVertices = param_3;
  FGPUBaseSkinVertexFactory::FGPUBaseSkinVertexFactory((FGPUBaseSkinVertexFactory *)this,&local_28);
  *(undefined ***)this = &___7__TGPUSkinVertexFactory__00__6B_;
  return this;
}

// TGPUSkinVertexFactory<0> @ 147cc28d0

TGPUSkinVertexFactory<0> * __thiscall
TGPUSkinVertexFactory<0>::TGPUSkinVertexFactory<0>
          (TGPUSkinVertexFactory<0> *this,FInitializer *param_1)

{
  FGPUBaseSkinVertexFactory::FGPUBaseSkinVertexFactory((FGPUBaseSkinVertexFactory *)this,param_1);
  *(undefined ***)this = &___7__TGPUSkinVertexFactory__0A___6B_;
  return this;
}

// TGPUSkinVertexFactory<0> @ 147cc2900

TGPUSkinVertexFactory<0> * __thiscall
TGPUSkinVertexFactory<0>::TGPUSkinVertexFactory<0>
          (TGPUSkinVertexFactory<0> *this,Type param_1,uint param_2,uint param_3,uint param_4,
          bool param_5)

{
  FInitializer local_28;
  
  local_28.BaseVertexIndex = param_4;
  local_28.bUsedForPassthroughVertexFactory = param_5;
  local_28.BoneOffset = 0;
  local_28.FeatureLevel = param_1;
  local_28.NumBones = param_2;
  local_28.NumVertices = param_3;
  FGPUBaseSkinVertexFactory::FGPUBaseSkinVertexFactory((FGPUBaseSkinVertexFactory *)this,&local_28);
  *(undefined ***)this = &___7__TGPUSkinVertexFactory__0A___6B_;
  return this;
}

// ~TGPUSkinVertexFactory<1> @ 147cc78b0

void __thiscall TGPUSkinVertexFactory<1>::~TGPUSkinVertexFactory<1>(TGPUSkinVertexFactory<1> *this)

{
  *(undefined ***)this = &___7FGPUBaseSkinVertexFactory__6B_;
  if (*(FRHIResource **)&this->field_0x1a8 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x1a8);
  }
  if (*(FRHIResource **)&this->field_0x1a0 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x1a0);
  }
  if (*(void **)&this->field_0x198 != (void *)0x0) {
    ::operator_delete(*(void **)&this->field_0x198,0x140);
  }
  FGPUBaseSkinVertexFactory::FShaderDataType::~FShaderDataType
            ((FShaderDataType *)&this->field_0x140);
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  return;
}

// ~TGPUSkinVertexFactory<0> @ 147cc78c0

void __thiscall TGPUSkinVertexFactory<0>::~TGPUSkinVertexFactory<0>(TGPUSkinVertexFactory<0> *this)

{
  *(undefined ***)this = &___7FGPUBaseSkinVertexFactory__6B_;
  if (*(FRHIResource **)&this->field_0x1a8 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x1a8);
  }
  if (*(FRHIResource **)&this->field_0x1a0 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x1a0);
  }
  if (*(void **)&this->field_0x198 != (void *)0x0) {
    ::operator_delete(*(void **)&this->field_0x198,0x140);
  }
  FGPUBaseSkinVertexFactory::FShaderDataType::~FShaderDataType
            ((FShaderDataType *)&this->field_0x140);
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  return;
}

// AddVertexElements @ 147cd3a00

void __thiscall
TGPUSkinVertexFactory<1>::AddVertexElements
          (TGPUSkinVertexFactory<1> *this,TArray<FVertexElement,TFixedAllocator<17>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  if (*(longlong *)&this->field_0x198 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                       ,0x3ea,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TVar3 = (uint)(byte)this->field_0x1c;
  if (this->field_0x1c == 5) {
    TVar3 = GMaxRHIFeatureLevel;
  }
  GetVertexElements(TVar3,Default,*(FGPUSkinDataType **)&this->field_0x198,param_1,
                    (TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)&this->field_0x20,(int *)&this->field_0x1b0);
  FVertexFactory::AddPrimitiveIdStreamElement((FVertexFactory *)this,Default,param_1,'\x10','\x10');
  return;
}

// AddVertexElements @ 147cd3aa0

void __thiscall
TGPUSkinVertexFactory<0>::AddVertexElements
          (TGPUSkinVertexFactory<0> *this,TArray<FVertexElement,TFixedAllocator<17>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  if (*(longlong *)&this->field_0x198 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                       ,0x3ea,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TVar3 = (uint)(byte)this->field_0x1c;
  if (this->field_0x1c == 5) {
    TVar3 = GMaxRHIFeatureLevel;
  }
  GetVertexElements(TVar3,Default,*(FGPUSkinDataType **)&this->field_0x198,param_1,
                    (TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)&this->field_0x20,(int *)&this->field_0x1b0);
  FVertexFactory::AddPrimitiveIdStreamElement((FVertexFactory *)this,Default,param_1,'\x10','\x10');
  return;
}

// GetBoneInfluenceType @ 147cfad60

GPUSkinBoneInfluenceType __thiscall
TGPUSkinVertexFactory<1>::GetBoneInfluenceType(TGPUSkinVertexFactory<1> *this)

{
  return UnlimitedBoneInfluence;
}

// GetBoneInfluenceType @ 147cfad70

GPUSkinBoneInfluenceType __thiscall
TGPUSkinVertexFactory<0>::GetBoneInfluenceType(TGPUSkinVertexFactory<0> *this)

{
  return DefaultBoneInfluence;
}

// GetPSOPrecacheVertexFetchElements @ 147d0a9e0

void __cdecl
TGPUSkinVertexFactory<1>::GetPSOPrecacheVertexFetchElements
          (EVertexInputStreamType param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 local_58 [10];
  uchar auStack_4e [6];
  undefined1 local_48 [10];
  uchar auStack_3e [6];
  undefined1 local_38 [10];
  uchar auStack_2e [6];
  undefined1 local_28 [10];
  uchar auStack_1e [6];
  undefined1 local_18 [9];
  uchar auStack_f [7];
  
  if (param_1 != Default) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexInputStreamType == EVertexInputStreamType::Default",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                       ,0x354,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\x03';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_58) &&
     (local_58 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) {
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
  piVar1 = &param_2->ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_58[8] = '\x01';
  local_58[9] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  auStack_4e[0] = '\x05';
  auStack_4e[1] = '\x01';
  auStack_4e[2] = '\0';
  auStack_4e[3] = '\0';
  auStack_4e[4] = '\0';
  auStack_4e[5] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_58._6_2_,CONCAT42(local_58._2_4_,local_58._0_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_58 + 8)) &&
     (local_58 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_48[0] = '\x02';
  local_48[1] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  local_48[2] = '\x05';
  local_48[3] = '\x02';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_4e._4_2_,CONCAT42(auStack_4e._0_4_,local_58._8_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_48) &&
     (local_48 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_48[8] = '\x03';
  local_48[9] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  auStack_3e[0] = '\x14';
  auStack_3e[1] = '\x03';
  auStack_3e[2] = '\0';
  auStack_3e[3] = '\0';
  auStack_3e[4] = '\0';
  auStack_3e[5] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_48._6_2_,CONCAT42(local_48._2_4_,local_48._0_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_48 + 8)) &&
     (local_48 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_38[0] = '\x04';
  local_38[1] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  local_38[2] = '\r';
  local_38[3] = '\x05';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_3e._4_2_,CONCAT42(auStack_3e._0_4_,local_48._8_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_38) &&
     (local_38 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_38[8] = '\x05';
  local_38[9] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  auStack_2e[0] = '\r';
  auStack_2e[1] = '\x06';
  auStack_2e[2] = '\0';
  auStack_2e[3] = '\0';
  auStack_2e[4] = '\0';
  auStack_2e[5] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_38._6_2_,CONCAT42(local_38._2_4_,local_38._0_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_38 + 8)) &&
     (local_38 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_28[0] = '\x06';
  local_28[1] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  local_28[2] = '\b';
  local_28[3] = '\r';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_2e._4_2_,CONCAT42(auStack_2e._0_4_,local_38._8_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_28) &&
     (local_28 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_28[8] = '\a';
  local_28[9] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  auStack_1e[0] = '\x14';
  auStack_1e[1] = '\x10';
  auStack_1e[2] = '\0';
  auStack_1e[3] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_28._6_2_,CONCAT42(local_28._2_4_,local_28._0_2_));
  auStack_1e[4] = '\x01';
  auStack_1e[5] = '\0';
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_28 + 8)) &&
     (local_28 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_18[1] = '\0';
  local_18[2] = '\x03';
  param_2->ArrayNum = iVar4 + 1;
  local_18[3] = '\t';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_1e._4_2_,CONCAT42(auStack_1e._0_4_,local_28._8_2_));
  local_18[0] = (uchar)param_2->ArrayNum;
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_18) &&
     (local_18 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  auStack_f[0] = '\0';
  auStack_f[1] = '\x03';
  param_2->ArrayNum = iVar4 + 1;
  auStack_f[2] = '\n';
  auStack_f[3] = '\0';
  auStack_f[4] = '\0';
  auStack_f[5] = '\0';
  auStack_f[6] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT44(local_18._4_4_,CONCAT13(local_18[3],CONCAT21(local_18._1_2_,local_18[0])));
  local_18[8] = (uchar)param_2->ArrayNum;
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_18 + 8)) &&
     (local_18 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT44(auStack_f._3_4_,CONCAT13(auStack_f[2],CONCAT21(auStack_f._0_2_,local_18[8])));
  return;
}

// GetPSOPrecacheVertexFetchElements @ 147d0b0f0

void __cdecl
TGPUSkinVertexFactory<0>::GetPSOPrecacheVertexFetchElements
          (EVertexInputStreamType param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 local_78 [10];
  uchar auStack_6e [6];
  undefined1 local_68 [10];
  uchar auStack_5e [6];
  undefined1 local_58 [10];
  uchar auStack_4e [6];
  undefined1 local_48 [10];
  uchar auStack_3e [6];
  undefined1 local_38 [10];
  uchar auStack_2e [6];
  undefined1 local_28 [9];
  uchar auStack_1f [7];
  uchar local_18;
  uchar uStack_17;
  uchar uStack_16;
  uchar uStack_15;
  uchar uStack_14;
  uchar uStack_13;
  uchar uStack_12;
  uchar uStack_11;
  
  if (param_1 != Default) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexInputStreamType == EVertexInputStreamType::Default",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                       ,0x354,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\x03';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_78) &&
     (local_78 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) {
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
  piVar1 = &param_2->ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_78[8] = '\x01';
  local_78[9] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  auStack_6e[0] = '\x05';
  auStack_6e[1] = '\x01';
  auStack_6e[2] = '\0';
  auStack_6e[3] = '\0';
  auStack_6e[4] = '\0';
  auStack_6e[5] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_78._6_2_,CONCAT42(local_78._2_4_,local_78._0_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_78 + 8)) &&
     (local_78 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_68[0] = '\x02';
  local_68[1] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  local_68[2] = '\x05';
  local_68[3] = '\x02';
  local_68[4] = '\0';
  local_68[5] = '\0';
  local_68[6] = '\0';
  local_68[7] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_6e._4_2_,CONCAT42(auStack_6e._0_4_,local_78._8_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_68) &&
     (local_68 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_68[8] = '\x03';
  local_68[9] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  auStack_5e[0] = '\x06';
  auStack_5e[1] = '\x03';
  auStack_5e[2] = '\0';
  auStack_5e[3] = '\0';
  auStack_5e[4] = '\0';
  auStack_5e[5] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_68._6_2_,CONCAT42(local_68._2_4_,local_68._0_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_68 + 8)) &&
     (local_68 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_58[0] = '\x04';
  local_58[1] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  local_58[2] = '\x06';
  local_58[3] = '\x0e';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_5e._4_2_,CONCAT42(auStack_5e._0_4_,local_68._8_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_58) &&
     (local_58 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_58[8] = '\x05';
  local_58[9] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  auStack_4e[0] = '\a';
  auStack_4e[1] = '\x04';
  auStack_4e[2] = '\0';
  auStack_4e[3] = '\0';
  auStack_4e[4] = '\0';
  auStack_4e[5] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_58._6_2_,CONCAT42(local_58._2_4_,local_58._0_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_58 + 8)) &&
     (local_58 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_48[0] = '\x06';
  local_48[1] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  local_48[2] = '\a';
  local_48[3] = '\x0f';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_4e._4_2_,CONCAT42(auStack_4e._0_4_,local_58._8_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_48) &&
     (local_48 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_48[8] = '\a';
  local_48[9] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  auStack_3e[0] = '\r';
  auStack_3e[1] = '\x05';
  auStack_3e[2] = '\0';
  auStack_3e[3] = '\0';
  auStack_3e[4] = '\0';
  auStack_3e[5] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_48._6_2_,CONCAT42(local_48._2_4_,local_48._0_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_48 + 8)) &&
     (local_48 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_38[0] = '\b';
  local_38[1] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  local_38[2] = '\r';
  local_38[3] = '\x06';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_3e._4_2_,CONCAT42(auStack_3e._0_4_,local_48._8_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_38) &&
     (local_38 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_38[8] = '\t';
  local_38[9] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  auStack_2e[0] = '\b';
  auStack_2e[1] = '\r';
  auStack_2e[2] = '\0';
  auStack_2e[3] = '\0';
  auStack_2e[4] = '\0';
  auStack_2e[5] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_38._6_2_,CONCAT42(local_38._2_4_,local_38._0_2_));
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_38 + 8)) &&
     (local_38 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  local_28[0] = '\n';
  local_28[1] = '\0';
  param_2->ArrayNum = iVar4 + 1;
  local_28[2] = '\x14';
  local_28[3] = '\x10';
  local_28[4] = '\0';
  local_28[5] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_2e._4_2_,CONCAT42(auStack_2e._0_4_,local_38._8_2_));
  local_28[6] = '\x01';
  local_28[7] = '\0';
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_28) &&
     (local_28 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  auStack_1f[0] = '\0';
  auStack_1f[1] = '\x03';
  param_2->ArrayNum = iVar4 + 1;
  auStack_1f[2] = '\t';
  auStack_1f[3] = '\0';
  auStack_1f[4] = '\0';
  auStack_1f[5] = '\0';
  auStack_1f[6] = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_28._6_2_,CONCAT42(local_28._2_4_,local_28._0_2_));
  local_28[8] = (uchar)param_2->ArrayNum;
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_28 + 8)) &&
     (local_28 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  uStack_17 = '\0';
  uStack_16 = '\x03';
  param_2->ArrayNum = iVar4 + 1;
  uStack_15 = '\n';
  uStack_14 = '\0';
  uStack_13 = '\0';
  uStack_12 = '\0';
  uStack_11 = '\0';
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT44(auStack_1f._3_4_,CONCAT13(auStack_1f[2],CONCAT21(auStack_1f._0_2_,local_28[8])));
  local_18 = (uchar)param_2->ArrayNum;
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)&stack0xffffffffffffffe8) &&
     (&stack0xffffffffffffffe8 < (param_2->AllocatorInstance).InlineData + *piVar1)) {
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
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT44(_uStack_14,CONCAT13(uStack_15,CONCAT21(_uStack_17,local_18)));
  return;
}

// GetType @ 147d0fa90

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __thiscall TGPUSkinVertexFactory<1>::GetType(TGPUSkinVertexFactory<1> *this)

{
  return &StaticType;
}

// GetType @ 147d0faa0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __thiscall TGPUSkinVertexFactory<0>::GetType(TGPUSkinVertexFactory<0> *this)

{
  return &StaticType;
}

// GetVertexElements @ 147d10180

void __cdecl
TGPUSkinVertexFactory<1>::GetVertexElements
          (Type param_1,EVertexInputStreamType param_2,FGPUSkinDataType *param_3,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_4,
          TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_5,int *param_6)

{
  int *piVar1;
  EVertexStreamUsage EVar2;
  uchar uVar3;
  uchar uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  uint local_res10;
  undefined1 local_118 [9];
  uchar uStack_10f;
  uchar uStack_10e;
  uchar uStack_10d;
  ushort uStack_10c;
  ushort uStack_10a;
  undefined1 local_108 [9];
  uchar uStack_ff;
  uchar uStack_fe;
  uchar uStack_fd;
  ushort uStack_fc;
  ushort uStack_fa;
  undefined1 local_f8 [9];
  uchar uStack_ef;
  uchar uStack_ee;
  uchar uStack_ed;
  ushort uStack_ec;
  ushort uStack_ea;
  undefined1 local_e8 [9];
  uchar auStack_df [3];
  ushort uStack_dc;
  uchar auStack_da [2];
  undefined1 local_d8 [9];
  uchar uStack_cf;
  uchar uStack_ce;
  uchar uStack_cd;
  ushort uStack_cc;
  ushort uStack_ca;
  FVertexStream local_c8;
  FVertexStream local_b8;
  FVertexStream local_a8;
  FVertexStream local_98;
  FVertexStream local_88;
  FVertexStream local_78;
  FVertexStream local_68;
  FVertexStream local_58;
  FVertexStream local_48;
  FVertexStream local_38;
  
  if ((param_2 != Default) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputStreamType == EVertexInputStreamType::Default",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                         ,0x381,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_c8.VertexBuffer = (FVertexBuffer *)param_3->_padding_;
  EVar2 = *(EVertexStreamUsage *)((longlong)&param_3->_padding_ + 7);
  uVar3 = *(uchar *)((longlong)&param_3->_padding_ + 6);
  uVar4 = *(uchar *)((longlong)&param_3->_padding_ + 4);
  local_c8.Stride = (ushort)*(byte *)((longlong)&param_3->_padding_ + 5);
  local_c8.Offset = (uint)param_3->_padding_;
  local_c8.Padding = '\0';
  local_c8.VertexStreamUsage = EVar2;
  iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_c8);
  local_118[8] = (uchar)iVar7;
  uStack_10c = local_c8.Stride;
  uStack_10a = (ushort)(EVar2 & Instancing);
  uStack_10d = '\0';
  uStack_10f = uVar4;
  uStack_10e = uVar3;
  if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_118 + 8)) &&
      (local_118 + 8 < (param_4->AllocatorInstance).InlineData + param_4->ArrayMax)) &&
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
  iVar7 = param_4->ArrayNum;
  piVar1 = &param_4->ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_4->AllocatorInstance,piVar1);
  }
  local_b8.Padding = '\0';
  param_4->ArrayNum = iVar7 + 1;
  *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar7].Pad =
       CONCAT26(uStack_10a,
                CONCAT24(uStack_10c,
                         CONCAT13(uStack_10d,CONCAT12(uStack_10e,CONCAT11(uStack_10f,local_118[8])))
                        ));
  local_b8.VertexBuffer = (FVertexBuffer *)param_3->_padding_;
  EVar2 = *(EVertexStreamUsage *)((longlong)&param_3->_padding_ + 7);
  uVar3 = *(uchar *)((longlong)&param_3->_padding_ + 6);
  uVar4 = *(uchar *)((longlong)&param_3->_padding_ + 4);
  local_b8.Stride = (ushort)*(byte *)((longlong)&param_3->_padding_ + 5);
  local_b8.Offset = (uint)param_3->_padding_;
  local_b8.VertexStreamUsage = EVar2;
  iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_b8);
  local_108[0] = (uchar)iVar7;
  local_108._4_2_ = local_b8.Stride;
  local_108._6_2_ = ZEXT12(EVar2 & Instancing);
  local_108[3] = '\x01';
  local_108[1] = uVar4;
  local_108[2] = uVar3;
  if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_108) &&
      (local_108 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
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
  iVar7 = param_4->ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_4->AllocatorInstance,piVar1);
  }
  local_a8.Padding = '\0';
  param_4->ArrayNum = iVar7 + 1;
  *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar7].Pad =
       CONCAT26(local_108._6_2_,
                CONCAT24(local_108._4_2_,
                         CONCAT13(local_108[3],
                                  CONCAT12(local_108[2],CONCAT11(local_108[1],local_108[0])))));
  local_a8.VertexBuffer = (FVertexBuffer *)param_3->_padding_;
  EVar2 = *(EVertexStreamUsage *)((longlong)&param_3->_padding_ + 7);
  uVar3 = *(uchar *)((longlong)&param_3->_padding_ + 6);
  uVar4 = *(uchar *)((longlong)&param_3->_padding_ + 4);
  local_a8.Stride = (ushort)*(byte *)((longlong)&param_3->_padding_ + 5);
  local_a8.Offset = (uint)param_3->_padding_;
  local_a8.VertexStreamUsage = EVar2;
  iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_a8);
  local_108[8] = (uchar)iVar7;
  uStack_fc = local_a8.Stride;
  uStack_fa = (ushort)(EVar2 & Instancing);
  uStack_fd = '\x02';
  uStack_ff = uVar4;
  uStack_fe = uVar3;
  if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_108 + 8)) &&
      (local_108 + 8 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
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
  iVar7 = param_4->ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_4->AllocatorInstance,piVar1);
  }
  param_4->ArrayNum = iVar7 + 1;
  *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar7].Pad =
       CONCAT26(uStack_fa,
                CONCAT24(uStack_fc,
                         CONCAT13(uStack_fd,CONCAT12(uStack_fe,CONCAT11(uStack_ff,local_108[8])))));
  iVar7 = (int)param_3->_padding_;
  if (iVar7 != 0) {
    local_res10 = 0;
    if (0 < iVar7) {
      do {
        uVar8 = 0;
        if ((int)local_res10 < (int)param_3->_padding_) {
          uVar8 = ~local_res10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_98.Padding = '\0';
        local_98.VertexBuffer =
             (FVertexBuffer *)(&param_3->_padding_)[(longlong)(int)local_res10 * 2];
        EVar2 = *(EVertexStreamUsage *)
                 ((longlong)&param_3->_padding_ + (longlong)(int)local_res10 * 0x10 + 7);
        uVar3 = *(uchar *)((longlong)&param_3->_padding_ + (longlong)(int)local_res10 * 0x10 + 6);
        local_98.Stride =
             (ushort)*(byte *)((longlong)&param_3->_padding_ + (longlong)(int)local_res10 * 0x10 + 5
                              );
        local_98.Offset = (uint)(&param_3->_padding_)[(longlong)(int)local_res10 * 2];
        uVar4 = *(uchar *)((longlong)&param_3->_padding_ + (longlong)(int)local_res10 * 0x10 + 4);
        local_98.VertexStreamUsage = EVar2;
        iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_98);
        local_f8[0] = (uchar)iVar7;
        local_f8[3] = (char)local_res10 + '\x05';
        local_f8._4_2_ = local_98.Stride;
        local_f8._6_2_ = ZEXT12(EVar2 & Instancing);
        local_f8[1] = uVar4;
        local_f8[2] = uVar3;
        if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_f8) &&
            (local_f8 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
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
        iVar7 = param_4->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                            (0x208,&param_4->AllocatorInstance,piVar1);
        }
        local_res10 = local_res10 + 1;
        param_4->ArrayNum = iVar7 + 1;
        *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar7].Pad =
             CONCAT26(local_f8._6_2_,
                      CONCAT24(local_f8._4_2_,
                               CONCAT13(local_f8[3],
                                        CONCAT12(local_f8[2],CONCAT11(local_f8[1],local_f8[0])))));
        iVar7 = (int)param_3->_padding_;
      } while ((int)local_res10 < iVar7);
    }
    for (; iVar7 < 4; iVar7 = iVar7 + 1) {
      iVar9 = (int)param_3->_padding_;
      uVar12 = iVar9 - 1;
      uVar8 = 0;
      if ((int)uVar12 < iVar9) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar11 = (longlong)(int)uVar12;
      local_88.Padding = '\0';
      EVar2 = *(EVertexStreamUsage *)((longlong)&param_3->_padding_ + lVar11 * 0x10 + 7);
      local_88.VertexBuffer = (FVertexBuffer *)(&param_3->_padding_)[lVar11 * 2];
      uVar3 = *(uchar *)((longlong)&param_3->_padding_ + lVar11 * 0x10 + 6);
      uVar4 = *(uchar *)((longlong)&param_3->_padding_ + lVar11 * 0x10 + 4);
      local_88.Stride = (ushort)*(byte *)((longlong)&param_3->_padding_ + lVar11 * 0x10 + 5);
      local_88.Offset = (uint)(&param_3->_padding_)[lVar11 * 2];
      local_88.VertexStreamUsage = EVar2;
      iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_88);
      local_f8[8] = (uchar)iVar9;
      uStack_ed = (char)iVar7 + '\x05';
      uStack_ec = local_88.Stride;
      uStack_ea = (ushort)(EVar2 & Instancing);
      uStack_ef = uVar4;
      uStack_ee = uVar3;
      if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_f8 + 8)) &&
          (local_f8 + 8 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
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
      iVar9 = param_4->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_4->AllocatorInstance,piVar1);
      }
      param_4->ArrayNum = iVar9 + 1;
      *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar9].Pad =
           CONCAT26(uStack_ea,
                    CONCAT24(uStack_ec,
                             CONCAT13(uStack_ed,CONCAT12(uStack_ee,CONCAT11(uStack_ef,local_f8[8])))
                            ));
    }
  }
  if (param_3->_padding_ == 0) {
    param_3->_padding_ = GNullColorVertexBuffer._40_8_;
    *(undefined4 *)&param_3->_padding_ = 0;
  }
  if ((uchar  [8])param_3->_padding_ == (uchar  [8])0x0) {
    local_68.Stride = 0;
    local_68.VertexStreamUsage = ManualFetch;
    local_68.Padding = '\0';
    local_68.VertexBuffer = (FVertexBuffer *)&GNullColorVertexBuffer;
    local_68.Offset = 0;
    iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_68);
    local_e8[8] = (uchar)iVar7;
    uStack_dc = local_68.Stride;
    auStack_df[0] = '\0';
    auStack_df[1] = '\b';
    auStack_df[2] = '\r';
    auStack_da[0] = '\0';
    auStack_da[1] = '\0';
    if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_e8 + 8)) &&
        (local_e8 + 8 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
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
    iVar7 = param_4->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_4->AllocatorInstance,piVar1);
    }
    param_4->ArrayNum = iVar7 + 1;
    uVar10 = CONCAT26(auStack_da,
                      CONCAT24(uStack_dc,
                               CONCAT13(auStack_df[2],CONCAT21(auStack_df._0_2_,local_e8[8]))));
  }
  else {
    EVar2 = *(EVertexStreamUsage *)((longlong)&param_3->_padding_ + 7);
    uVar3 = *(uchar *)((longlong)&param_3->_padding_ + 6);
    uVar4 = *(uchar *)((longlong)&param_3->_padding_ + 4);
    local_78.Stride = (ushort)*(byte *)((longlong)&param_3->_padding_ + 5);
    local_78.Offset = (uint)param_3->_padding_;
    local_78.Padding = '\0';
    local_78.VertexBuffer = (FVertexBuffer *)param_3->_padding_;
    local_78.VertexStreamUsage = EVar2;
    iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_78);
    local_e8[0] = (uchar)iVar7;
    local_e8._4_2_ = local_78.Stride;
    local_e8._6_2_ = ZEXT12(EVar2 & Instancing);
    local_e8[3] = '\r';
    local_e8[1] = uVar4;
    local_e8[2] = uVar3;
    if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_e8) &&
        (local_e8 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
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
    iVar7 = param_4->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_4->AllocatorInstance,piVar1);
    }
    param_4->ArrayNum = iVar7 + 1;
    uVar10 = CONCAT26(local_e8._6_2_,
                      CONCAT24(local_e8._4_2_,
                               CONCAT13(local_e8[3],
                                        CONCAT12(local_e8[2],CONCAT11(local_e8[1],local_e8[0])))));
  }
  *(undefined8 *)(param_4->AllocatorInstance).InlineData[iVar7].Pad = uVar10;
  local_58.VertexBuffer = (param_3->BlendOffsetCount).VertexBuffer;
  EVar2 = (param_3->BlendOffsetCount).VertexStreamUsage;
  uVar3 = (param_3->BlendOffsetCount).Type.Value;
  uVar4 = (param_3->BlendOffsetCount).Offset;
  local_58.Stride = (ushort)(param_3->BlendOffsetCount).Stride;
  local_58.Offset = (param_3->BlendOffsetCount).StreamOffset;
  local_58.Padding = '\0';
  local_58.VertexStreamUsage = EVar2;
  iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_58);
  local_d8[0] = (uchar)iVar7;
  local_d8._4_2_ = local_58.Stride;
  local_d8._6_2_ = ZEXT12(EVar2 & Instancing);
  local_d8[3] = '\x03';
  local_d8[1] = uVar4;
  local_d8[2] = uVar3;
  if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_d8) &&
      (local_d8 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
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
  iVar7 = param_4->ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_4->AllocatorInstance,piVar1);
  }
  local_48.Padding = '\0';
  param_4->ArrayNum = iVar7 + 1;
  *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar7].Pad =
       CONCAT26(local_d8._6_2_,
                CONCAT24(local_d8._4_2_,
                         CONCAT13(local_d8[3],
                                  CONCAT12(local_d8[2],CONCAT11(local_d8[1],local_d8[0])))));
  local_48.VertexBuffer = (param_3->DeltaPositionComponent).VertexBuffer;
  EVar2 = (param_3->DeltaPositionComponent).VertexStreamUsage;
  uVar3 = (param_3->DeltaPositionComponent).Type.Value;
  uVar4 = (param_3->DeltaPositionComponent).Offset;
  local_48.Stride = (ushort)(param_3->DeltaPositionComponent).Stride;
  local_48.Offset = (param_3->DeltaPositionComponent).StreamOffset;
  local_48.VertexStreamUsage = EVar2;
  iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_48);
  local_118[0] = (byte)iVar7;
  local_118._4_2_ = local_48.Stride;
  local_118._6_2_ = ZEXT12(EVar2 & Instancing);
  local_118[3] = '\t';
  local_118[1] = uVar4;
  local_118[2] = uVar3;
  if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_118) &&
      (local_118 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
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
  iVar7 = param_4->ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_4->AllocatorInstance,piVar1);
  }
  param_4->ArrayNum = iVar7 + 1;
  local_38.Padding = '\0';
  *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar7].Pad =
       CONCAT26(local_118._6_2_,
                CONCAT24(local_118._4_2_,
                         CONCAT13(local_118[3],
                                  CONCAT12(local_118[2],CONCAT11(local_118[1],local_118[0])))));
  local_38.VertexBuffer = (param_3->DeltaTangentZComponent).VertexBuffer;
  EVar2 = (param_3->DeltaTangentZComponent).VertexStreamUsage;
  uVar3 = (param_3->DeltaTangentZComponent).Type.Value;
  uVar4 = (param_3->DeltaTangentZComponent).Offset;
  local_38.Stride = (ushort)(param_3->DeltaTangentZComponent).Stride;
  local_38.Offset = (param_3->DeltaTangentZComponent).StreamOffset;
  local_38.VertexStreamUsage = EVar2;
  iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_38);
  local_d8[8] = (uchar)iVar7;
  uStack_cc = local_38.Stride;
  uStack_ca = (ushort)(EVar2 & Instancing);
  uStack_cd = '\n';
  uStack_cf = uVar4;
  uStack_ce = uVar3;
  if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_d8 + 8)) &&
      (local_d8 + 8 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
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
  iVar7 = param_4->ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_4->AllocatorInstance,piVar1);
  }
  param_4->ArrayNum = iVar7 + 1;
  *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar7].Pad =
       CONCAT26(uStack_ca,
                CONCAT24(uStack_cc,
                         CONCAT13(uStack_cd,CONCAT12(uStack_ce,CONCAT11(uStack_cf,local_d8[8])))));
  *param_6 = (uint)local_118[0];
  return;
}

// GetVertexElements @ 147d10d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TGPUSkinVertexFactory<1>::GetVertexElements
          (Type param_1,EVertexInputStreamType param_2,FGPUSkinDataType *param_3,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStackY_108 [32];
  undefined1 local_b8 [144];
  void *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_1c = 8;
  local_28 = (void *)0x0;
  local_20 = 0;
  GetVertexElements(param_1,param_2,param_3,param_4,
                    (TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)(local_b8 + 0x10),(int *)(local_b8 + 8));
  bVar2 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
  if (bVar2) {
    bVar2 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)GMaxRHIShaderPlatform);
    if (!bVar2) {
      local_b8[0] = (uchar)local_20;
      local_b8[1] = '\0';
      local_b8[2] = '\x14';
      local_b8[3] = '\x10';
      local_b8[4] = '\0';
      local_b8[5] = '\0';
      local_b8[6] = '\x01';
      local_b8[7] = '\0';
      if ((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_b8) &&
         (local_b8 < (param_4->AllocatorInstance).InlineData + param_4->ArrayMax)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar3 = param_4->ArrayNum;
      if (iVar3 == param_4->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar3 + 1;
      *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar3].Pad =
           CONCAT44(local_b8._4_4_,CONCAT13(local_b8[3],CONCAT21(local_b8._1_2_,local_b8[0])));
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// GetVertexElements @ 147d10f00

void __cdecl
TGPUSkinVertexFactory<0>::GetVertexElements
          (Type param_1,EVertexInputStreamType param_2,FGPUSkinDataType *param_3,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_4,
          TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_5,int *param_6)

{
  int *piVar1;
  byte bVar2;
  uchar uVar3;
  uchar uVar4;
  EVertexStreamUsage EVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_198 [9];
  uchar uStack_18f;
  uchar uStack_18e;
  uchar uStack_18d;
  ushort uStack_18c;
  ushort uStack_18a;
  undefined1 local_188 [9];
  uchar uStack_17f;
  uchar uStack_17e;
  uchar uStack_17d;
  ushort uStack_17c;
  ushort uStack_17a;
  undefined1 local_178 [9];
  uchar uStack_16f;
  uchar uStack_16e;
  uchar uStack_16d;
  ushort uStack_16c;
  ushort uStack_16a;
  undefined1 local_168 [9];
  uchar auStack_15f [3];
  ushort uStack_15c;
  uchar auStack_15a [2];
  undefined1 local_158 [9];
  uchar uStack_14f;
  uchar uStack_14e;
  uchar uStack_14d;
  ushort uStack_14c;
  ushort uStack_14a;
  undefined1 local_148 [9];
  uchar uStack_13f;
  uchar uStack_13e;
  uchar uStack_13d;
  ushort uStack_13c;
  ushort uStack_13a;
  undefined1 local_138 [9];
  uchar uStack_12f;
  uchar uStack_12e;
  uchar uStack_12d;
  ushort uStack_12c;
  ushort uStack_12a;
  undefined1 local_128 [16];
  uchar local_118 [4];
  ushort local_114;
  byte local_112;
  uchar local_111;
  FVertexStream local_110;
  FVertexStream local_100;
  FVertexStream local_f0;
  FVertexStream local_e0;
  FVertexStream local_d0;
  FVertexStream local_c0;
  FVertexStream local_b0;
  FVertexStream local_a0;
  FVertexStream local_90;
  FVertexStream local_80;
  FVertexStream local_70;
  FVertexStream local_60;
  FVertexStream local_50;
  FVertexStream local_40;
  
  if ((param_2 != Default) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputStreamType == EVertexInputStreamType::Default",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                         ,0x381,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_128._8_8_ = param_3->_padding_;
  bVar2 = *(byte *)((longlong)&param_3->_padding_ + 7);
  uVar3 = *(uchar *)((longlong)&param_3->_padding_ + 6);
  uVar4 = *(uchar *)((longlong)&param_3->_padding_ + 4);
  local_114 = (ushort)*(byte *)((longlong)&param_3->_padding_ + 5);
  local_118 = *(uchar (*) [4])&param_3->_padding_;
  local_111 = '\0';
  local_112 = bVar2;
  iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                    (param_5,(FVertexStream *)(local_128 + 8));
  local_198[8] = (uchar)iVar8;
  uStack_18c = local_114;
  uStack_18a = (ushort)(bVar2 & 1);
  uStack_18d = '\0';
  uStack_18f = uVar4;
  uStack_18e = uVar3;
  if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_198 + 8)) &&
      (local_198 + 8 < (param_4->AllocatorInstance).InlineData + param_4->ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = param_4->ArrayNum;
  piVar1 = &param_4->ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_4->AllocatorInstance,piVar1);
  }
  local_110.Padding = '\0';
  param_4->ArrayNum = iVar8 + 1;
  *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar8].Pad =
       CONCAT26(uStack_18a,
                CONCAT24(uStack_18c,
                         CONCAT13(uStack_18d,CONCAT12(uStack_18e,CONCAT11(uStack_18f,local_198[8])))
                        ));
  local_110.VertexBuffer = (FVertexBuffer *)param_3->_padding_;
  EVar5 = *(EVertexStreamUsage *)((longlong)&param_3->_padding_ + 7);
  uVar3 = *(uchar *)((longlong)&param_3->_padding_ + 6);
  uVar4 = *(uchar *)((longlong)&param_3->_padding_ + 4);
  local_110.Stride = (ushort)*(byte *)((longlong)&param_3->_padding_ + 5);
  local_110.Offset = (uint)param_3->_padding_;
  local_110.VertexStreamUsage = EVar5;
  iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_110);
  local_188[0] = (uchar)iVar8;
  local_188._4_2_ = local_110.Stride;
  local_188._6_2_ = ZEXT12(EVar5 & Instancing);
  local_188[3] = '\x01';
  local_188[1] = uVar4;
  local_188[2] = uVar3;
  if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_188) &&
      (local_188 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = param_4->ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_4->AllocatorInstance,piVar1);
  }
  local_100.Padding = '\0';
  param_4->ArrayNum = iVar8 + 1;
  *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar8].Pad =
       CONCAT26(local_188._6_2_,
                CONCAT24(local_188._4_2_,
                         CONCAT13(local_188[3],
                                  CONCAT12(local_188[2],CONCAT11(local_188[1],local_188[0])))));
  local_100.VertexBuffer = (FVertexBuffer *)param_3->_padding_;
  EVar5 = *(EVertexStreamUsage *)((longlong)&param_3->_padding_ + 7);
  uVar3 = *(uchar *)((longlong)&param_3->_padding_ + 6);
  uVar4 = *(uchar *)((longlong)&param_3->_padding_ + 4);
  local_100.Stride = (ushort)*(byte *)((longlong)&param_3->_padding_ + 5);
  local_100.Offset = (uint)param_3->_padding_;
  local_100.VertexStreamUsage = EVar5;
  iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_100);
  local_188[8] = (uchar)iVar8;
  uStack_17c = local_100.Stride;
  uStack_17a = (ushort)(EVar5 & Instancing);
  uStack_17d = '\x02';
  uStack_17f = uVar4;
  uStack_17e = uVar3;
  if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_188 + 8)) &&
      (local_188 + 8 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = param_4->ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_4->AllocatorInstance,piVar1);
  }
  param_4->ArrayNum = iVar8 + 1;
  *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar8].Pad =
       CONCAT26(uStack_17a,
                CONCAT24(uStack_17c,
                         CONCAT13(uStack_17d,CONCAT12(uStack_17e,CONCAT11(uStack_17f,local_188[8])))
                        ));
  iVar8 = (int)param_3->_padding_;
  if (iVar8 != 0) {
    uVar13 = 0;
    if (0 < iVar8) {
      do {
        uVar12 = 0;
        if ((int)uVar13 < (int)param_3->_padding_) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_f0.Padding = '\0';
        local_f0.VertexBuffer = (FVertexBuffer *)(&param_3->_padding_)[(longlong)(int)uVar13 * 2];
        EVar5 = *(EVertexStreamUsage *)
                 ((longlong)&param_3->_padding_ + (longlong)(int)uVar13 * 0x10 + 7);
        uVar3 = *(uchar *)((longlong)&param_3->_padding_ + (longlong)(int)uVar13 * 0x10 + 6);
        local_f0.Stride =
             (ushort)*(byte *)((longlong)&param_3->_padding_ + (longlong)(int)uVar13 * 0x10 + 5);
        local_f0.Offset = (uint)(&param_3->_padding_)[(longlong)(int)uVar13 * 2];
        uVar4 = *(uchar *)((longlong)&param_3->_padding_ + (longlong)(int)uVar13 * 0x10 + 4);
        local_f0.VertexStreamUsage = EVar5;
        iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_f0);
        local_178[0] = (uchar)iVar8;
        local_178[3] = (char)uVar13 + '\x05';
        local_178._4_2_ = local_f0.Stride;
        local_178._6_2_ = ZEXT12(EVar5 & Instancing);
        local_178[1] = uVar4;
        local_178[2] = uVar3;
        if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_178) &&
            (local_178 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = param_4->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                            (0x208,&param_4->AllocatorInstance,piVar1);
        }
        uVar13 = uVar13 + 1;
        param_4->ArrayNum = iVar8 + 1;
        *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar8].Pad =
             CONCAT26(local_178._6_2_,
                      CONCAT24(local_178._4_2_,
                               CONCAT13(local_178[3],
                                        CONCAT12(local_178[2],CONCAT11(local_178[1],local_178[0]))))
                     );
        iVar8 = (int)param_3->_padding_;
      } while ((int)uVar13 < iVar8);
    }
    for (; iVar8 < 4; iVar8 = iVar8 + 1) {
      iVar9 = (int)param_3->_padding_;
      uVar12 = iVar9 - 1;
      uVar13 = 0;
      if ((int)uVar12 < iVar9) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar11 = (longlong)(int)uVar12;
      local_e0.Padding = '\0';
      EVar5 = *(EVertexStreamUsage *)((longlong)&param_3->_padding_ + lVar11 * 0x10 + 7);
      local_e0.VertexBuffer = (FVertexBuffer *)(&param_3->_padding_)[lVar11 * 2];
      uVar3 = *(uchar *)((longlong)&param_3->_padding_ + lVar11 * 0x10 + 6);
      uVar4 = *(uchar *)((longlong)&param_3->_padding_ + lVar11 * 0x10 + 4);
      local_e0.Stride = (ushort)*(byte *)((longlong)&param_3->_padding_ + lVar11 * 0x10 + 5);
      local_e0.Offset = (uint)(&param_3->_padding_)[lVar11 * 2];
      local_e0.VertexStreamUsage = EVar5;
      iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_e0);
      local_178[8] = (uchar)iVar9;
      uStack_16d = (char)iVar8 + '\x05';
      uStack_16c = local_e0.Stride;
      uStack_16a = (ushort)(EVar5 & Instancing);
      uStack_16f = uVar4;
      uStack_16e = uVar3;
      if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_178 + 8)) &&
          (local_178 + 8 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_4->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_4->AllocatorInstance,piVar1);
      }
      param_4->ArrayNum = iVar9 + 1;
      *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar9].Pad =
           CONCAT26(uStack_16a,
                    CONCAT24(uStack_16c,
                             CONCAT13(uStack_16d,
                                      CONCAT12(uStack_16e,CONCAT11(uStack_16f,local_178[8])))));
    }
  }
  if (param_3->_padding_ == 0) {
    param_3->_padding_ = GNullColorVertexBuffer._40_8_;
    *(undefined4 *)&param_3->_padding_ = 0;
  }
  if ((uchar  [8])param_3->_padding_ == (uchar  [8])0x0) {
    local_c0._12_4_ = 0x40000;
    local_c0.VertexBuffer = (FVertexBuffer *)&GNullColorVertexBuffer;
    local_c0.Offset = 0;
    iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_c0);
    local_168[8] = (uchar)iVar8;
    uStack_15c = local_c0.Stride;
    auStack_15f[0] = '\0';
    auStack_15f[1] = '\b';
    auStack_15f[2] = '\r';
    auStack_15a[0] = '\0';
    auStack_15a[1] = '\0';
    if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_168 + 8)) &&
        (local_168 + 8 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = param_4->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_4->AllocatorInstance,piVar1);
    }
    param_4->ArrayNum = iVar8 + 1;
    uVar10 = CONCAT26(auStack_15a,
                      CONCAT24(uStack_15c,
                               CONCAT13(auStack_15f[2],CONCAT21(auStack_15f._0_2_,local_168[8]))));
  }
  else {
    EVar5 = *(EVertexStreamUsage *)((longlong)&param_3->_padding_ + 7);
    uVar3 = *(uchar *)((longlong)&param_3->_padding_ + 6);
    uVar4 = *(uchar *)((longlong)&param_3->_padding_ + 4);
    local_d0.Stride = (ushort)*(byte *)((longlong)&param_3->_padding_ + 5);
    local_d0.Offset = (uint)param_3->_padding_;
    local_d0.Padding = '\0';
    local_d0.VertexBuffer = (FVertexBuffer *)param_3->_padding_;
    local_d0.VertexStreamUsage = EVar5;
    iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_d0);
    local_168[0] = (uchar)iVar8;
    local_168._4_2_ = local_d0.Stride;
    local_168._6_2_ = ZEXT12(EVar5 & Instancing);
    local_168[3] = '\r';
    local_168[1] = uVar4;
    local_168[2] = uVar3;
    if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_168) &&
        (local_168 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = param_4->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_4->AllocatorInstance,piVar1);
    }
    param_4->ArrayNum = iVar8 + 1;
    uVar10 = CONCAT26(local_168._6_2_,
                      CONCAT24(local_168._4_2_,
                               CONCAT13(local_168[3],
                                        CONCAT12(local_168[2],CONCAT11(local_168[1],local_168[0]))))
                     );
  }
  *(undefined8 *)(param_4->AllocatorInstance).InlineData[iVar8].Pad = uVar10;
  local_b0.VertexBuffer = (param_3->BoneIndices).VertexBuffer;
  EVar5 = (param_3->BoneIndices).VertexStreamUsage;
  uVar3 = (param_3->BoneIndices).Type.Value;
  uVar4 = (param_3->BoneIndices).Offset;
  local_b0.Stride = (ushort)(param_3->BoneIndices).Stride;
  local_b0.Offset = (param_3->BoneIndices).StreamOffset;
  local_b0.Padding = '\0';
  local_b0.VertexStreamUsage = EVar5;
  iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_b0);
  local_158[0] = (uchar)iVar8;
  local_158._4_2_ = local_b0.Stride;
  local_158._6_2_ = ZEXT12(EVar5 & Instancing);
  local_158[3] = '\x03';
  local_158[1] = uVar4;
  local_158[2] = uVar3;
  if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_158) &&
      (local_158 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = param_4->ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_4->AllocatorInstance,piVar1);
  }
  local_a0.Padding = '\0';
  param_4->ArrayNum = iVar8 + 1;
  *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar8].Pad =
       CONCAT26(local_158._6_2_,
                CONCAT24(local_158._4_2_,
                         CONCAT13(local_158[3],
                                  CONCAT12(local_158[2],CONCAT11(local_158[1],local_158[0])))));
  local_a0.VertexBuffer = (param_3->BoneWeights).VertexBuffer;
  EVar5 = (param_3->BoneWeights).VertexStreamUsage;
  uVar3 = (param_3->BoneWeights).Type.Value;
  uVar4 = (param_3->BoneWeights).Offset;
  local_a0.Stride = (ushort)(param_3->BoneWeights).Stride;
  local_a0.Offset = (param_3->BoneWeights).StreamOffset;
  local_a0.VertexStreamUsage = EVar5;
  iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_a0);
  local_158[8] = (uchar)iVar8;
  uStack_14c = local_a0.Stride;
  uStack_14a = (ushort)(EVar5 & Instancing);
  uStack_14d = '\x04';
  uStack_14f = uVar4;
  uStack_14e = uVar3;
  if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_158 + 8)) &&
      (local_158 + 8 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = param_4->ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_4->AllocatorInstance,piVar1);
  }
  param_4->ArrayNum = iVar8 + 1;
  *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar8].Pad =
       CONCAT26(uStack_14a,
                CONCAT24(uStack_14c,
                         CONCAT13(uStack_14d,CONCAT12(uStack_14e,CONCAT11(uStack_14f,local_158[8])))
                        ));
  if (param_3->NumBoneInfluences < 5) {
    local_70.VertexBuffer = (param_3->BoneIndices).VertexBuffer;
    EVar5 = (param_3->BoneIndices).VertexStreamUsage;
    uVar3 = (param_3->BoneIndices).Type.Value;
    uVar4 = (param_3->BoneIndices).Offset;
    local_70.Stride = (ushort)(param_3->BoneIndices).Stride;
    local_70.Offset = (param_3->BoneIndices).StreamOffset;
    local_70.Padding = '\0';
    local_70.VertexStreamUsage = EVar5;
    iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_70);
    local_138[0] = (uchar)iVar8;
    local_138._4_2_ = local_70.Stride;
    local_138._6_2_ = ZEXT12(EVar5 & Instancing);
    local_138[3] = '\x0e';
    local_138[1] = uVar4;
    local_138[2] = uVar3;
    if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_138) &&
        (local_138 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = param_4->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_4->AllocatorInstance,piVar1);
    }
    local_60.Padding = '\0';
    param_4->ArrayNum = iVar8 + 1;
    *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar8].Pad =
         CONCAT26(local_138._6_2_,
                  CONCAT24(local_138._4_2_,
                           CONCAT13(local_138[3],
                                    CONCAT12(local_138[2],CONCAT11(local_138[1],local_138[0])))));
    local_60.VertexBuffer = (param_3->BoneWeights).VertexBuffer;
    EVar5 = (param_3->BoneWeights).VertexStreamUsage;
    uVar3 = (param_3->BoneWeights).Type.Value;
    uVar4 = (param_3->BoneWeights).Offset;
    local_60.Stride = (ushort)(param_3->BoneWeights).Stride;
    local_60.Offset = (param_3->BoneWeights).StreamOffset;
    local_60.VertexStreamUsage = EVar5;
    iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_60);
    local_138[8] = (uchar)iVar8;
    uStack_12c = local_60.Stride;
    uStack_12a = (ushort)(EVar5 & Instancing);
    uStack_12d = '\x0f';
    uStack_12f = uVar4;
    uStack_12e = uVar3;
    if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_138 + 8)) &&
        (local_138 + 8 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = param_4->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_4->AllocatorInstance,piVar1);
    }
    param_4->ArrayNum = iVar8 + 1;
    uVar10 = CONCAT26(uStack_12a,
                      CONCAT24(uStack_12c,
                               CONCAT13(uStack_12d,
                                        CONCAT12(uStack_12e,CONCAT11(uStack_12f,local_138[8])))));
  }
  else {
    local_90.VertexBuffer = (param_3->ExtraBoneIndices).VertexBuffer;
    EVar5 = (param_3->ExtraBoneIndices).VertexStreamUsage;
    uVar3 = (param_3->ExtraBoneIndices).Type.Value;
    uVar4 = (param_3->ExtraBoneIndices).Offset;
    local_90.Stride = (ushort)(param_3->ExtraBoneIndices).Stride;
    local_90.Offset = (param_3->ExtraBoneIndices).StreamOffset;
    local_90.Padding = '\0';
    local_90.VertexStreamUsage = EVar5;
    iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_90);
    local_148[0] = (uchar)iVar8;
    local_148._4_2_ = local_90.Stride;
    local_148._6_2_ = ZEXT12(EVar5 & Instancing);
    local_148[3] = '\x0e';
    local_148[1] = uVar4;
    local_148[2] = uVar3;
    if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_148) &&
        (local_148 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = param_4->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_4->AllocatorInstance,piVar1);
    }
    local_80.Padding = '\0';
    param_4->ArrayNum = iVar8 + 1;
    *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar8].Pad =
         CONCAT26(local_148._6_2_,
                  CONCAT24(local_148._4_2_,
                           CONCAT13(local_148[3],
                                    CONCAT12(local_148[2],CONCAT11(local_148[1],local_148[0])))));
    local_80.VertexBuffer = (param_3->ExtraBoneWeights).VertexBuffer;
    EVar5 = (param_3->ExtraBoneWeights).VertexStreamUsage;
    uVar3 = (param_3->ExtraBoneWeights).Type.Value;
    uVar4 = (param_3->ExtraBoneWeights).Offset;
    local_80.Stride = (ushort)(param_3->ExtraBoneWeights).Stride;
    local_80.Offset = (param_3->ExtraBoneWeights).StreamOffset;
    local_80.VertexStreamUsage = EVar5;
    iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_80);
    local_148[8] = (uchar)iVar8;
    uStack_13c = local_80.Stride;
    uStack_13a = (ushort)(EVar5 & Instancing);
    uStack_13d = '\x0f';
    uStack_13f = uVar4;
    uStack_13e = uVar3;
    if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_148 + 8)) &&
        (local_148 + 8 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = param_4->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_4->AllocatorInstance,piVar1);
    }
    param_4->ArrayNum = iVar8 + 1;
    uVar10 = CONCAT26(uStack_13a,
                      CONCAT24(uStack_13c,
                               CONCAT13(uStack_13d,
                                        CONCAT12(uStack_13e,CONCAT11(uStack_13f,local_148[8])))));
  }
  *(undefined8 *)(param_4->AllocatorInstance).InlineData[iVar8].Pad = uVar10;
  local_50.VertexBuffer = (param_3->DeltaPositionComponent).VertexBuffer;
  EVar5 = (param_3->DeltaPositionComponent).VertexStreamUsage;
  uVar3 = (param_3->DeltaPositionComponent).Type.Value;
  uVar4 = (param_3->DeltaPositionComponent).Offset;
  local_50.Stride = (ushort)(param_3->DeltaPositionComponent).Stride;
  local_50.Offset = (param_3->DeltaPositionComponent).StreamOffset;
  local_50.Padding = '\0';
  local_50.VertexStreamUsage = EVar5;
  iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_50);
  local_198[0] = (byte)iVar8;
  local_198._4_2_ = local_50.Stride;
  local_198._6_2_ = ZEXT12(EVar5 & Instancing);
  local_198[3] = '\t';
  local_198[1] = uVar4;
  local_198[2] = uVar3;
  if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_198) &&
      (local_198 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = param_4->ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_4->AllocatorInstance,piVar1);
  }
  param_4->ArrayNum = iVar8 + 1;
  local_40.Padding = '\0';
  *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar8].Pad =
       CONCAT26(local_198._6_2_,
                CONCAT24(local_198._4_2_,
                         CONCAT13(local_198[3],
                                  CONCAT12(local_198[2],CONCAT11(local_198[1],local_198[0])))));
  local_40.VertexBuffer = (param_3->DeltaTangentZComponent).VertexBuffer;
  EVar5 = (param_3->DeltaTangentZComponent).VertexStreamUsage;
  uVar3 = (param_3->DeltaTangentZComponent).Type.Value;
  uVar4 = (param_3->DeltaTangentZComponent).Offset;
  local_40.Stride = (ushort)(param_3->DeltaTangentZComponent).Stride;
  local_40.Offset = (param_3->DeltaTangentZComponent).StreamOffset;
  local_40.VertexStreamUsage = EVar5;
  iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_40);
  local_128[0] = (uchar)iVar8;
  local_128._4_2_ = local_40.Stride;
  local_128._6_2_ = ZEXT12(EVar5 & Instancing);
  local_128[3] = '\n';
  local_128[1] = uVar4;
  local_128[2] = uVar3;
  if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_128) &&
      (local_128 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = param_4->ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_4->AllocatorInstance,piVar1);
  }
  param_4->ArrayNum = iVar8 + 1;
  *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar8].Pad =
       CONCAT26(local_128._6_2_,
                CONCAT24(local_128._4_2_,
                         CONCAT13(local_128[3],
                                  CONCAT12(local_128[2],CONCAT11(local_128[1],local_128[0])))));
  *param_6 = (uint)local_198[0];
  return;
}

// GetVertexElements @ 147d120a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TGPUSkinVertexFactory<0>::GetVertexElements
          (Type param_1,EVertexInputStreamType param_2,FGPUSkinDataType *param_3,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStackY_108 [32];
  undefined1 local_b8 [144];
  void *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_1c = 8;
  local_28 = (void *)0x0;
  local_20 = 0;
  GetVertexElements(param_1,param_2,param_3,param_4,
                    (TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)(local_b8 + 0x10),(int *)(local_b8 + 8));
  bVar2 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
  if (bVar2) {
    bVar2 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)GMaxRHIShaderPlatform);
    if (!bVar2) {
      local_b8[0] = (uchar)local_20;
      local_b8[1] = '\0';
      local_b8[2] = '\x14';
      local_b8[3] = '\x10';
      local_b8[4] = '\0';
      local_b8[5] = '\0';
      local_b8[6] = '\x01';
      local_b8[7] = '\0';
      if ((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_b8) &&
         (local_b8 < (param_4->AllocatorInstance).InlineData + param_4->ArrayMax)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar3 = param_4->ArrayNum;
      if (iVar3 == param_4->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar3 + 1;
      *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar3].Pad =
           CONCAT44(local_b8._4_4_,CONCAT13(local_b8[3],CONCAT21(local_b8._1_2_,local_b8[0])));
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// InitRHI @ 147d16d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TGPUSkinVertexFactory<1>::InitRHI(TGPUSkinVertexFactory<1> *this,FRHICommandListBase *param_1)

{
  undefined1 auStack_c8 [32];
  TArray<FVertexElement,TFixedAllocator<17>_> local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FGPUBaseSkinVertexFactory::InitRHI((FGPUBaseSkinVertexFactory *)this,param_1);
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0x11;
  (**(code **)(*(longlong *)this + 0xc0))(this,&local_a8);
  FVertexFactory::InitDeclaration((FVertexFactory *)this,&local_a8,Default);
  return;
}

// InitRHI @ 147d16e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TGPUSkinVertexFactory<0>::InitRHI(TGPUSkinVertexFactory<0> *this,FRHICommandListBase *param_1)

{
  undefined1 auStack_c8 [32];
  TArray<FVertexElement,TFixedAllocator<17>_> local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FGPUBaseSkinVertexFactory::InitRHI((FGPUBaseSkinVertexFactory *)this,param_1);
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0x11;
  (**(code **)(*(longlong *)this + 0xc0))(this,&local_a8);
  FVertexFactory::InitDeclaration((FVertexFactory *)this,&local_a8,Default);
  return;
}

// ModifyCompilationEnvironment @ 147d1ae40

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TGPUSkinVertexFactory<1>::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  EShaderPlatform EVar1;
  EVertexFactoryFlags EVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar5 = UseGPUScene((FStaticShaderPlatform)param_1->Platform,
                      (FGenericStaticFeatureLevel)
                      FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel);
  pTVar4 = CVarGPUSkinLimit2BoneInfluences.Ref;
  EVar2 = param_1->VertexFactoryType->Flags;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    lVar7 = 4;
    if (!bVar6) goto LAB_147d1aee4;
  }
  lVar7 = 0;
LAB_147d1aee4:
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"GPUSKIN_LIMIT_2BONE_INFLUENCES",
             (uint)(*(int *)((longlong)pTVar4->ShadowedValue + lVar7) != 0));
  FShaderCompilerEnvironment::SetDefine(param_2,L"GPUSKIN_UNLIMITED_BONE_INFLUENCE",1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"GPU_SKINNED_MESH_FACTORY",1);
  if (((EVar2 & SupportsPrimitiveIdStream) == None) || (!bVar5)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  FShaderCompilerEnvironment::SetDefine(param_2,L"VF_SUPPORTS_PRIMITIVE_SCENE_DATA",bVar5);
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"GPUSKIN_MORPH_USE_PREVIOUS",
             FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel != ES3_1);
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"GPUSKIN_MORPH_BLEND",
             ((param_1->MaterialParameters)._padding_ & 0x800000002U) != 0);
  return;
}

// ModifyCompilationEnvironment @ 147d1afe0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TGPUSkinVertexFactory<0>::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  EShaderPlatform EVar1;
  EVertexFactoryFlags EVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar5 = UseGPUScene((FStaticShaderPlatform)param_1->Platform,
                      (FGenericStaticFeatureLevel)
                      FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel);
  pTVar4 = CVarGPUSkinLimit2BoneInfluences.Ref;
  EVar2 = param_1->VertexFactoryType->Flags;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    lVar7 = 4;
    if (!bVar6) goto LAB_147d1b084;
  }
  lVar7 = 0;
LAB_147d1b084:
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"GPUSKIN_LIMIT_2BONE_INFLUENCES",
             (uint)(*(int *)((longlong)pTVar4->ShadowedValue + lVar7) != 0));
  FShaderCompilerEnvironment::SetDefine(param_2,L"GPUSKIN_UNLIMITED_BONE_INFLUENCE",0);
  FShaderCompilerEnvironment::SetDefine(param_2,L"GPU_SKINNED_MESH_FACTORY",1);
  if (((EVar2 & SupportsPrimitiveIdStream) == None) || (!bVar5)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  FShaderCompilerEnvironment::SetDefine(param_2,L"VF_SUPPORTS_PRIMITIVE_SCENE_DATA",bVar5);
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"GPUSKIN_MORPH_USE_PREVIOUS",
             FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel != ES3_1);
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"GPUSKIN_MORPH_BLEND",
             ((param_1->MaterialParameters)._padding_ & 0x800000002U) != 0);
  return;
}

// ReleaseRHI @ 147d211c0

void __thiscall TGPUSkinVertexFactory<1>::ReleaseRHI(TGPUSkinVertexFactory<1> *this)

{
  FRHIResource *this_00;
  
  FVertexFactory::ReleaseRHI((FVertexFactory *)this);
  this_00 = *(FRHIResource **)&this->field_0x1a0;
  if (this_00 != (FRHIResource *)0x0) {
    *(undefined8 *)&this->field_0x1a0 = 0;
    FRHIResource::Release(this_00);
  }
  FGPUBaseSkinVertexFactory::FShaderDataType::ReleaseBoneData((FShaderDataType *)&this->field_0x140)
  ;
  return;
}

// ReleaseRHI @ 147d21210

void __thiscall TGPUSkinVertexFactory<0>::ReleaseRHI(TGPUSkinVertexFactory<0> *this)

{
  FRHIResource *this_00;
  
  FVertexFactory::ReleaseRHI((FVertexFactory *)this);
  this_00 = *(FRHIResource **)&this->field_0x1a0;
  if (this_00 != (FRHIResource *)0x0) {
    *(undefined8 *)&this->field_0x1a0 = 0;
    FRHIResource::Release(this_00);
  }
  FGPUBaseSkinVertexFactory::FShaderDataType::ReleaseBoneData((FShaderDataType *)&this->field_0x140)
  ;
  return;
}

// ShouldCompilePermutation @ 147d2d400

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TGPUSkinVertexFactory<1>::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:_static_bool___cdecl_TGPUSkinVertexFactory<1>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_bool___cdecl_TGPUSkinVertexFactory<1>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_TGPUSkinVertexFactory<1>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_bool___cdecl_TGPUSkinVertexFactory<1>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                          ::__l2::UBICVar.CVarName,L"r.GPUSkin.UnlimitedBoneInfluences");
      `public:_static_bool___cdecl_TGPUSkinVertexFactory<1>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
      ::__l2::UBICVar.CVar = (IConsoleVariable *)0x0;
      atexit(`TGPUSkinVertexFactory<1>::ShouldCompilePermutation'::__l2::
             _dynamic_atexit_destructor_for__UBICVar__);
      _Init_thread_footer(&`public:_static_bool___cdecl_TGPUSkinVertexFactory<1>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar4 = FShaderPlatformCachedIniValue<int>::Get
                    (&`public:_static_bool___cdecl_TGPUSkinVertexFactory<1>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                      ::__l2::UBICVar,param_1->Platform);
  if (*piVar5 < `public:_static_bool___cdecl_TGPUSkinVertexFactory<1>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_bool___cdecl_TGPUSkinVertexFactory<1>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_static_bool___cdecl_TGPUSkinVertexFactory<1>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      ::FString::FString(&`public:_static_bool___cdecl_TGPUSkinVertexFactory<1>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                          ::__l2::UseDeformerForUBICVar.CVarName,
                         L"r.GPUSkin.AlwaysUseDeformerForUnlimitedBoneInfluences");
      `public:_static_bool___cdecl_TGPUSkinVertexFactory<1>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
      ::__l2::UseDeformerForUBICVar.CVar = (IConsoleVariable *)0x0;
      atexit(`TGPUSkinVertexFactory<1>::ShouldCompilePermutation'::__l2::
             _dynamic_atexit_destructor_for__UseDeformerForUBICVar__);
      _Init_thread_footer(&`public:_static_bool___cdecl_TGPUSkinVertexFactory<1>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  bVar2 = FShaderPlatformCachedIniValue<bool>::Get
                    (&`public:_static_bool___cdecl_TGPUSkinVertexFactory<1>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                      ::__l2::UseDeformerForUBICVar,param_1->Platform);
  if ((iVar4 == 0) || (bVar2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  bVar3 = ShouldWeCompileGPUSkinVFShaders
                    (param_1->Platform,
                     *(Type *)((longlong)&(param_1->MaterialParameters)._padding_ + 4));
  if ((bVar3) &&
     (((uVar1 = (param_1->MaterialParameters)._padding_, (uVar1 & 0xc00000000) != 0 && (bVar2)) ||
      ((uVar1 & 2) != 0)))) {
    return true;
  }
  return false;
}

// ShouldCompilePermutation @ 147d2d580

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TGPUSkinVertexFactory<0>::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:_static_bool___cdecl_TGPUSkinVertexFactory<0>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_bool___cdecl_TGPUSkinVertexFactory<0>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_TGPUSkinVertexFactory<0>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_bool___cdecl_TGPUSkinVertexFactory<0>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                          ::__l2::UBICVar.CVarName,L"r.GPUSkin.UnlimitedBoneInfluences");
      `public:_static_bool___cdecl_TGPUSkinVertexFactory<0>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
      ::__l2::UBICVar.CVar = (IConsoleVariable *)0x0;
      atexit(`TGPUSkinVertexFactory<0>::ShouldCompilePermutation'::__l2::
             _dynamic_atexit_destructor_for__UBICVar__);
      _Init_thread_footer(&`public:_static_bool___cdecl_TGPUSkinVertexFactory<0>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FShaderPlatformCachedIniValue<int>::Get
            (&`public:_static_bool___cdecl_TGPUSkinVertexFactory<0>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
              ::__l2::UBICVar,param_1->Platform);
  if (*piVar2 < `public:_static_bool___cdecl_TGPUSkinVertexFactory<0>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_bool___cdecl_TGPUSkinVertexFactory<0>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_static_bool___cdecl_TGPUSkinVertexFactory<0>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      ::FString::FString(&`public:_static_bool___cdecl_TGPUSkinVertexFactory<0>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                          ::__l2::UseDeformerForUBICVar.CVarName,
                         L"r.GPUSkin.AlwaysUseDeformerForUnlimitedBoneInfluences");
      `public:_static_bool___cdecl_TGPUSkinVertexFactory<0>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
      ::__l2::UseDeformerForUBICVar.CVar = (IConsoleVariable *)0x0;
      atexit(`TGPUSkinVertexFactory<0>::ShouldCompilePermutation'::__l2::
             _dynamic_atexit_destructor_for__UseDeformerForUBICVar__);
      _Init_thread_footer(&`public:_static_bool___cdecl_TGPUSkinVertexFactory<0>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  FShaderPlatformCachedIniValue<bool>::Get
            (&`public:_static_bool___cdecl_TGPUSkinVertexFactory<0>::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters_const&___ptr64)'
              ::__l2::UseDeformerForUBICVar,param_1->Platform);
  bVar1 = ShouldWeCompileGPUSkinVFShaders
                    (param_1->Platform,
                     *(Type *)((longlong)&(param_1->MaterialParameters)._padding_ + 4));
  if ((bVar1) && (((param_1->MaterialParameters)._padding_ & 0xc00000002U) != 0)) {
    return true;
  }
  return false;
}


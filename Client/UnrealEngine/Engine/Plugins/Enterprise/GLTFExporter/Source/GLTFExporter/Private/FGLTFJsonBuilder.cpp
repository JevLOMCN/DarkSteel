// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 25

// FGLTFJsonBuilder @ 14e5d14b0

FGLTFJsonBuilder * __thiscall
FGLTFJsonBuilder::FGLTFJsonBuilder
          (FGLTFJsonBuilder *this,FString *param_1,UGLTFExportOptions *param_2)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  void *_Src;
  UClass *this_00;
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  FGLTFBuilder::FGLTFBuilder((FGLTFBuilder *)this,param_1,param_2);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->DefaultScene = &(this->JsonRoot).DefaultScene;
  FGLTFJsonRoot::FGLTFJsonRoot(&this->JsonRoot);
  ::FString::FString(&local_18,L"Unreal Engine 5.7.1");
  pFVar1 = &(this->JsonRoot).Asset.Generator;
  if (pFVar1 != &local_18) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->JsonRoot).Asset.Generator.Data.ArrayNum = local_18.Data.ArrayNum;
    (this->JsonRoot).Asset.Generator.Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (param_2->bIncludeCopyrightNotice != false) {
    this_00 = Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar4 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    local_28.Data = (FScriptContainerElement *)0x0;
    iVar2 = *(int *)(pUVar4 + 2);
    _Src = *(void **)&pUVar4[1].field_0x20;
    local_20 = CONCAT44(local_20._4_4_,iVar2);
    if (iVar2 == 0) {
      local_20 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar2,0,&local_28,iVar2,(int *)((longlong)&local_20 + 4));
      memcpy(local_28.Data,_Src,(longlong)iVar2 * 2);
    }
    pFVar1 = &(this->JsonRoot).Asset.Copyright;
    if (pFVar1 != (FString *)&local_28) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_28.Data;
      (this->JsonRoot).Asset.Copyright.Data.ArrayNum = (int)local_20;
      local_28.Data = (FScriptContainerElement *)0x0;
      (this->JsonRoot).Asset.Copyright.Data.ArrayMax = local_20._4_4_;
      local_20 = 0;
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return this;
}

// AddAccessor @ 14e5dccd0

FGLTFJsonAccessor * __thiscall FGLTFJsonBuilder::AddAccessor(FGLTFJsonBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGLTFJsonAccessor *pFVar6;
  TArray<TUniquePtr<FGLTFJsonAccessor,TDefaultDelete<FGLTFJsonAccessor>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FGLTFJsonAccessor *local_18 [2];
  
  pFVar6 = ::operator_new(200);
  if (pFVar6 != (FGLTFJsonAccessor *)0x0) {
    *(int *)&pFVar6->_padding_ = (this->JsonRoot).Accessors.Array.ArrayNum;
    pFVar6->Type = None;
    pFVar6->ComponentType = None;
    pFVar6->_padding_ = (longlong)&___7FGLTFJsonAccessor__6B_;
    (pFVar6->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Name).Data.ArrayNum = 0;
    (pFVar6->Name).Data.ArrayMax = 0;
    pFVar6->BufferView = (FGLTFJsonBufferView *)0x0;
    pFVar6->ByteOffset = 0;
    pFVar6->Count = 0;
    pFVar6->bNormalized = false;
    pFVar6->MinMaxLength = 0;
    pFVar6->Min[0] = 0.0;
    pFVar6->Min[1] = 0.0;
    pFVar6->Min[2] = 0.0;
    pFVar6->Min[3] = 0.0;
    pFVar6->Min[4] = 0.0;
    pFVar6->Min[5] = 0.0;
    pFVar6->Min[6] = 0.0;
    pFVar6->Min[7] = 0.0;
    pFVar6->Min[8] = 0.0;
    pFVar6->Min[9] = 0.0;
    pFVar6->Min[10] = 0.0;
    pFVar6->Min[0xb] = 0.0;
    pFVar6->Min[0xc] = 0.0;
    pFVar6->Min[0xd] = 0.0;
    pFVar6->Min[0xe] = 0.0;
    pFVar6->Min[0xf] = 0.0;
    pFVar6->Max[0] = 0.0;
    pFVar6->Max[1] = 0.0;
    pFVar6->Max[2] = 0.0;
    pFVar6->Max[3] = 0.0;
    pFVar6->Max[4] = 0.0;
    pFVar6->Max[5] = 0.0;
    pFVar6->Max[6] = 0.0;
    pFVar6->Max[7] = 0.0;
    pFVar6->Max[8] = 0.0;
    pFVar6->Max[9] = 0.0;
    pFVar6->Max[10] = 0.0;
    pFVar6->Max[0xb] = 0.0;
    pFVar6->Max[0xc] = 0.0;
    pFVar6->Max[0xd] = 0.0;
    pFVar6->Max[0xe] = 0.0;
    pFVar6->Max[0xf] = 0.0;
  }
  pTVar7 = &(this->JsonRoot).Accessors.Array;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  local_18[0] = pFVar6;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(this->JsonRoot).Accessors.Array.ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FGLTFJsonAccessor *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->JsonRoot).Accessors.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).Accessors.Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  (this->JsonRoot).Accessors.Array.ArrayNum = iVar5 + 1;
  *(FGLTFJsonAccessor **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
  return pFVar6;
}

// AddAnimation @ 14e5dce20

FGLTFJsonAnimation * __thiscall FGLTFJsonBuilder::AddAnimation(FGLTFJsonBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGLTFJsonAnimation *pFVar6;
  TArray<TUniquePtr<FGLTFJsonAnimation,TDefaultDelete<FGLTFJsonAnimation>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FGLTFJsonAnimation *local_18 [2];
  
  pFVar6 = ::operator_new(0x48);
  if (pFVar6 != (FGLTFJsonAnimation *)0x0) {
    *(int *)&pFVar6->_padding_ = (this->JsonRoot).Animations.Array.ArrayNum;
    pFVar6->_padding_ = (longlong)&___7FGLTFJsonAnimation__6B_;
    (pFVar6->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Name).Data.ArrayNum = 0;
    (pFVar6->Name).Data.ArrayMax = 0;
    (pFVar6->Channels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Channels).ArrayNum = 0;
    (pFVar6->Channels).ArrayMax = 0;
    (pFVar6->Samplers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Samplers).Array.ArrayNum = 0;
    (pFVar6->Samplers).Array.ArrayMax = 0;
    (pFVar6->Samplers)._padding_ =
         (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonAnimationSampler__X__6B_;
  }
  pTVar7 = &(this->JsonRoot).Animations.Array;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  local_18[0] = pFVar6;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(this->JsonRoot).Animations.Array.ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FGLTFJsonAnimation *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->JsonRoot).Animations.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).Animations.Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  (this->JsonRoot).Animations.Array.ArrayNum = iVar5 + 1;
  *(FGLTFJsonAnimation **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
  return pFVar6;
}

// AddBuffer @ 14e5dcf40

FGLTFJsonBuffer * __thiscall FGLTFJsonBuilder::AddBuffer(FGLTFJsonBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGLTFJsonBuffer *pFVar6;
  TArray<TUniquePtr<FGLTFJsonBuffer,TDefaultDelete<FGLTFJsonBuffer>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FGLTFJsonBuffer *local_18 [2];
  
  pFVar6 = ::operator_new(0x38);
  if (pFVar6 != (FGLTFJsonBuffer *)0x0) {
    *(int *)&pFVar6->_padding_ = (this->JsonRoot).Buffers.Array.ArrayNum;
    pFVar6->_padding_ = (longlong)&___7FGLTFJsonBuffer__6B_;
    (pFVar6->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Name).Data.ArrayNum = 0;
    (pFVar6->Name).Data.ArrayMax = 0;
    (pFVar6->URI).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->URI).Data.ArrayNum = 0;
    (pFVar6->URI).Data.ArrayMax = 0;
    pFVar6->ByteLength = 0;
  }
  pTVar7 = &(this->JsonRoot).Buffers.Array;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  local_18[0] = pFVar6;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(this->JsonRoot).Buffers.Array.ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FGLTFJsonBuffer *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->JsonRoot).Buffers.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).Buffers.Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  (this->JsonRoot).Buffers.Array.ArrayNum = iVar5 + 1;
  *(FGLTFJsonBuffer **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
  return pFVar6;
}

// AddBufferView @ 14e5dd350

FGLTFJsonBufferView * __thiscall FGLTFJsonBuilder::AddBufferView(FGLTFJsonBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGLTFJsonBufferView *pFVar6;
  TArray<TUniquePtr<FGLTFJsonBufferView,TDefaultDelete<FGLTFJsonBufferView>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FGLTFJsonBufferView *local_18 [2];
  
  pFVar6 = ::operator_new(0x40);
  if (pFVar6 != (FGLTFJsonBufferView *)0x0) {
    *(int *)&pFVar6->_padding_ = (this->JsonRoot).BufferViews.Array.ArrayNum;
    pFVar6->_padding_ = (longlong)&___7FGLTFJsonBufferView__6B_;
    (pFVar6->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Name).Data.ArrayNum = 0;
    (pFVar6->Name).Data.ArrayMax = 0;
    pFVar6->Buffer = (FGLTFJsonBuffer *)0x0;
    pFVar6->ByteLength = 0;
    pFVar6->ByteOffset = 0;
    pFVar6->ByteStride = 0;
    pFVar6->Target = None;
  }
  pTVar7 = &(this->JsonRoot).BufferViews.Array;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  local_18[0] = pFVar6;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(this->JsonRoot).BufferViews.Array.ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FGLTFJsonBufferView *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->JsonRoot).BufferViews.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).BufferViews.Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  (this->JsonRoot).BufferViews.Array.ArrayNum = iVar5 + 1;
  *(FGLTFJsonBufferView **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
  return pFVar6;
}

// AddCamera @ 14e5dd460

FGLTFJsonCamera * __thiscall FGLTFJsonBuilder::AddCamera(FGLTFJsonBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGLTFJsonCamera *pFVar6;
  TArray<TUniquePtr<FGLTFJsonCamera,TDefaultDelete<FGLTFJsonCamera>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FGLTFJsonCamera *local_18 [2];
  
  pFVar6 = ::operator_new(0x58);
  if (pFVar6 != (FGLTFJsonCamera *)0x0) {
    *(int *)&pFVar6->_padding_ = (this->JsonRoot).Cameras.Array.ArrayNum;
    pFVar6->_padding_ = (longlong)&___7FGLTFJsonCamera__6B_;
    (pFVar6->Orthographic)._padding_ = (longlong)&___7FGLTFJsonOrthographic__6B_;
    (pFVar6->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Name).Data.ArrayNum = 0;
    (pFVar6->Name).Data.ArrayMax = 0;
    (pFVar6->Orthographic).XMag = 0.0;
    (pFVar6->Orthographic).YMag = 0.0;
    (pFVar6->Orthographic).ZFar = 0.0;
    (pFVar6->Orthographic).ZNear = 0.0;
    (pFVar6->Perspective).AspectRatio = 0.0;
    (pFVar6->Perspective).YFov = 0.0;
    (pFVar6->Perspective).ZFar = 0.0;
    (pFVar6->Perspective).ZNear = 0.0;
    pFVar6->Type = None;
    (pFVar6->Perspective)._padding_ = (longlong)&___7FGLTFJsonPerspective__6B_;
  }
  pTVar7 = &(this->JsonRoot).Cameras.Array;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  local_18[0] = pFVar6;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(this->JsonRoot).Cameras.Array.ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FGLTFJsonCamera *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->JsonRoot).Cameras.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).Cameras.Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  (this->JsonRoot).Cameras.Array.ArrayNum = iVar5 + 1;
  *(FGLTFJsonCamera **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
  return pFVar6;
}

// AddExtension @ 14e5dd590

void __thiscall
FGLTFJsonBuilder::AddExtension(FGLTFJsonBuilder *this,EGLTFJsonExtension param_1,bool param_2)

{
  EGLTFJsonExtension local_res10 [2];
  EGLTFJsonExtension local_res18 [4];
  
  local_res10[0] = param_1;
  TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>::
  Emplace<enum_EGLTFJsonExtension_const_&>
            (&(this->JsonRoot).Extensions,local_res18,(bool *)local_res10);
  if (param_2) {
    TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>::
    Emplace<enum_EGLTFJsonExtension_const_&>
              (&(this->JsonRoot).Extensions.Required,local_res18,(bool *)local_res10);
  }
  return;
}

// AddImage @ 14e5dd7b0

FGLTFJsonImage * __thiscall FGLTFJsonBuilder::AddImage(FGLTFJsonBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGLTFJsonImage *pFVar6;
  TArray<TUniquePtr<FGLTFJsonImage,TDefaultDelete<FGLTFJsonImage>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FGLTFJsonImage *local_18 [2];
  
  pFVar6 = ::operator_new(0x40);
  if (pFVar6 != (FGLTFJsonImage *)0x0) {
    *(int *)&pFVar6->_padding_ = (this->JsonRoot).Images.Array.ArrayNum;
    pFVar6->_padding_ = (longlong)&___7FGLTFJsonImage__6B_;
    (pFVar6->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Name).Data.ArrayNum = 0;
    (pFVar6->Name).Data.ArrayMax = 0;
    (pFVar6->URI).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->URI).Data.ArrayNum = 0;
    (pFVar6->URI).Data.ArrayMax = 0;
    pFVar6->BufferView = (FGLTFJsonBufferView *)0x0;
    pFVar6->MimeType = None;
  }
  pTVar7 = &(this->JsonRoot).Images.Array;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  local_18[0] = pFVar6;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(this->JsonRoot).Images.Array.ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FGLTFJsonImage *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->JsonRoot).Images.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).Images.Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  (this->JsonRoot).Images.Array.ArrayNum = iVar5 + 1;
  *(FGLTFJsonImage **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
  return pFVar6;
}

// AddLight @ 14e5dd8c0

FGLTFJsonLight * __thiscall FGLTFJsonBuilder::AddLight(FGLTFJsonBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGLTFJsonLight *pFVar6;
  FGLTFJsonLight *pFVar7;
  TArray<TUniquePtr<FGLTFJsonLight,TDefaultDelete<FGLTFJsonLight>_>,TSizedDefaultAllocator<32>_>
  *pTVar8;
  FGLTFJsonLight *local_18 [2];
  
  pFVar6 = ::operator_new(0x58);
  pFVar7 = (FGLTFJsonLight *)0x0;
  if (pFVar6 != (FGLTFJsonLight *)0x0) {
    *(int *)&pFVar6->_padding_ = (this->JsonRoot).Lights.Array.ArrayNum;
    pFVar6->_padding_ = (longlong)&___7FGLTFJsonLight__6B_;
    (pFVar6->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Name).Data.ArrayNum = 0;
    (pFVar6->Name).Data.ArrayMax = 0;
    pFVar6->Type = None;
    *(undefined8 *)&(pFVar6->Color).field_0x8 = FGLTFJsonColor3::White._8_8_;
    *(undefined4 *)&(pFVar6->Color).field_0x10 = FGLTFJsonColor3::White._16_4_;
    *(undefined ***)&pFVar6->Color = &___7FGLTFJsonColor3__6B_;
    (pFVar6->Spot)._padding_ = (longlong)&___7FGLTFJsonSpotLight__6B_;
    pFVar6->Intensity = 1.0;
    pFVar6->Range = 0.0;
    (pFVar6->Spot).InnerConeAngle = 0.0;
    (pFVar6->Spot).OuterConeAngle = 1.5707964;
    pFVar7 = pFVar6;
  }
  pTVar8 = &(this->JsonRoot).Lights.Array;
  pFVar2 = (pTVar8->AllocatorInstance).Data;
  local_18[0] = pFVar7;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(this->JsonRoot).Lights.Array.ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FGLTFJsonLight *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (this->JsonRoot).Lights.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).Lights.Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar8->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar8->AllocatorInstance).Data;
  (this->JsonRoot).Lights.Array.ArrayNum = iVar5 + 1;
  *(FGLTFJsonLight **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
  return pFVar7;
}

// AddLightIES @ 14e5dda00

FGLTFJsonLightIES * __thiscall FGLTFJsonBuilder::AddLightIES(FGLTFJsonBuilder *this)

{
  int *piVar1;
  TArray<TUniquePtr<FGLTFJsonLightIES,TDefaultDelete<FGLTFJsonLightIES>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGLTFJsonLightIES *pFVar7;
  FGLTFJsonLightIES *pFVar8;
  FGLTFJsonLightIES *local_18 [2];
  
  pFVar7 = ::operator_new(0x48);
  pFVar8 = (FGLTFJsonLightIES *)0x0;
  if (pFVar7 != (FGLTFJsonLightIES *)0x0) {
    *(int *)&pFVar7->_padding_ = (this->JsonRoot).LightIESs.Array.ArrayNum;
    (pFVar7->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar7->_padding_ = (longlong)&___7FGLTFJsonLightIES__6B_;
    (pFVar7->Name).Data.ArrayNum = 0;
    (pFVar7->Name).Data.ArrayMax = 0;
    (pFVar7->URI).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->URI).Data.ArrayNum = 0;
    (pFVar7->URI).Data.ArrayMax = 0;
    ::FString::FString(&pFVar7->MimeType,L"application/x-ies-lm-63");
    pFVar7->BufferView = (FGLTFJsonBufferView *)0x0;
    pFVar8 = pFVar7;
  }
  pTVar2 = &(this->JsonRoot).LightIESs.Array;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_18[0] = pFVar8;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar3 + (longlong)(this->JsonRoot).LightIESs.Array.ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FGLTFJsonLightIES *)(*pcVar4)();
    return pFVar8;
  }
  iVar6 = (this->JsonRoot).LightIESs.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).LightIESs.Array.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  (this->JsonRoot).LightIESs.Array.ArrayNum = iVar6 + 1;
  *(FGLTFJsonLightIES **)(pFVar3 + (longlong)iVar6 * 8) = local_18[0];
  return pFVar8;
}

// AddLightIESInstance @ 14e5ddb20

FGLTFJsonLightIESInstance * __thiscall FGLTFJsonBuilder::AddLightIESInstance(FGLTFJsonBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGLTFJsonLightIESInstance *pFVar6;
  TArray<TUniquePtr<FGLTFJsonLightIESInstance,TDefaultDelete<FGLTFJsonLightIESInstance>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FGLTFJsonLightIESInstance *local_18 [2];
  
  pFVar6 = ::operator_new(0x20);
  if (pFVar6 == (FGLTFJsonLightIESInstance *)0x0) {
    pFVar6 = (FGLTFJsonLightIESInstance *)0x0;
  }
  else {
    *(int *)&pFVar6->_padding_ = (this->JsonRoot).LightIESInstances.Array.ArrayNum;
    pFVar6->_padding_ = (longlong)&___7FGLTFJsonLightIESInstance__6B_;
    pFVar6->Multiplier = 1.0;
    pFVar6->LightIES = (FGLTFJsonLightIES *)0x0;
  }
  pTVar7 = &(this->JsonRoot).LightIESInstances.Array;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  local_18[0] = pFVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2 + (longlong)(this->JsonRoot).LightIESInstances.Array.ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FGLTFJsonLightIESInstance *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->JsonRoot).LightIESInstances.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).LightIESInstances.Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  (this->JsonRoot).LightIESInstances.Array.ArrayNum = iVar5 + 1;
  *(FGLTFJsonLightIESInstance **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
  return pFVar6;
}

// AddLightMap @ 14e5ddc20

FGLTFJsonLightMap * __thiscall FGLTFJsonBuilder::AddLightMap(FGLTFJsonBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FGLTFJsonLightMap *pFVar8;
  FGLTFJsonLightMap *pFVar9;
  TArray<TUniquePtr<FGLTFJsonLightMap,TDefaultDelete<FGLTFJsonLightMap>_>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  FGLTFJsonLightMap *local_18 [2];
  
  pFVar8 = ::operator_new(0xb0);
  pFVar9 = (FGLTFJsonLightMap *)0x0;
  if (pFVar8 != (FGLTFJsonLightMap *)0x0) {
    *(int *)&pFVar8->_padding_ = (this->JsonRoot).LightMaps.Array.ArrayNum;
    pFVar8->_padding_ = (longlong)&___7FGLTFJsonLightMap__6B_;
    (pFVar8->Texture)._padding_ = (longlong)&___7FGLTFJsonTextureInfo__6B_;
    (pFVar8->Texture).Transform._padding_ = (longlong)&___7FGLTFJsonTextureTransform__6B_;
    (pFVar8->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->Name).Data.ArrayNum = 0;
    (pFVar8->Name).Data.ArrayMax = 0;
    (pFVar8->Texture).Index = (FGLTFJsonTexture *)0x0;
    (pFVar8->Texture).TexCoord = 0;
    *(undefined8 *)&(pFVar8->Texture).Transform.Offset.field_0x8 = FGLTFJsonVector2::Zero._8_8_;
    *(undefined ***)&(pFVar8->Texture).Transform.Offset = &___7FGLTFJsonVector2__6B_;
    *(undefined8 *)&(pFVar8->Texture).Transform.Scale.field_0x8 = FGLTFJsonVector2::One._8_8_;
    *(undefined ***)&(pFVar8->Texture).Transform.Scale = &___7FGLTFJsonVector2__6B_;
    (pFVar8->Texture).Transform.Rotation = 0.0;
    uVar5 = FGLTFJsonVector4::One._16_8_;
    uVar4 = FGLTFJsonVector4::One._8_8_;
    *(undefined ***)&pFVar8->LightMapScale = &___7FGLTFJsonVector4__6B_;
    *(undefined8 *)&(pFVar8->LightMapScale).field_0x8 = uVar4;
    *(undefined8 *)&(pFVar8->LightMapScale).field_0x10 = uVar5;
    uVar5 = FGLTFJsonVector4::Zero._16_8_;
    uVar4 = FGLTFJsonVector4::Zero._8_8_;
    *(undefined ***)&pFVar8->LightMapAdd = &___7FGLTFJsonVector4__6B_;
    *(undefined8 *)&(pFVar8->LightMapAdd).field_0x8 = uVar4;
    *(undefined8 *)&(pFVar8->LightMapAdd).field_0x10 = uVar5;
    *(undefined4 *)&(pFVar8->CoordinateScaleBias).field_0x8 = 0x3f800000;
    *(undefined8 *)&(pFVar8->CoordinateScaleBias).field_0xc = 0x3f800000;
    *(undefined4 *)&(pFVar8->CoordinateScaleBias).field_0x14 = 0;
    *(undefined ***)&pFVar8->CoordinateScaleBias = &___7FGLTFJsonVector4__6B_;
    pFVar9 = pFVar8;
  }
  pTVar10 = &(this->JsonRoot).LightMaps.Array;
  pFVar2 = (pTVar10->AllocatorInstance).Data;
  local_18[0] = pFVar9;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(this->JsonRoot).LightMaps.Array.ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FGLTFJsonLightMap *)(*pcVar3)();
    return pFVar9;
  }
  iVar7 = (this->JsonRoot).LightMaps.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).LightMaps.Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar10->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar10->AllocatorInstance).Data;
  (this->JsonRoot).LightMaps.Array.ArrayNum = iVar7 + 1;
  *(FGLTFJsonLightMap **)(pFVar2 + (longlong)iVar7 * 8) = local_18[0];
  return pFVar9;
}

// AddMaterial @ 14e5dddb0

FGLTFJsonMaterial * __thiscall FGLTFJsonBuilder::AddMaterial(FGLTFJsonBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGLTFJsonMaterial *pFVar6;
  TArray<TUniquePtr<FGLTFJsonMaterial,TDefaultDelete<FGLTFJsonMaterial>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FGLTFJsonMaterial *local_18 [2];
  
  pFVar6 = ::operator_new(0x638);
  if (pFVar6 == (FGLTFJsonMaterial *)0x0) {
    pFVar6 = (FGLTFJsonMaterial *)0x0;
  }
  else {
    pFVar6 = FGLTFJsonMaterial::FGLTFJsonMaterial(pFVar6,(this->JsonRoot).Materials.Array.ArrayNum);
  }
  pTVar7 = &(this->JsonRoot).Materials.Array;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  local_18[0] = pFVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2 + (longlong)(this->JsonRoot).Materials.Array.ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FGLTFJsonMaterial *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->JsonRoot).Materials.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).Materials.Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  (this->JsonRoot).Materials.Array.ArrayNum = iVar5 + 1;
  *(FGLTFJsonMaterial **)((pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
  return pFVar6;
}

// AddMaterialVariant @ 14e5ddea0

FGLTFJsonMaterialVariant * __thiscall FGLTFJsonBuilder::AddMaterialVariant(FGLTFJsonBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGLTFJsonMaterialVariant *pFVar6;
  TArray<TUniquePtr<FGLTFJsonMaterialVariant,TDefaultDelete<FGLTFJsonMaterialVariant>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FGLTFJsonMaterialVariant *local_18 [2];
  
  pFVar6 = ::operator_new(0x20);
  if (pFVar6 != (FGLTFJsonMaterialVariant *)0x0) {
    *(int *)&pFVar6->_padding_ = (this->JsonRoot).MaterialVariants.Array.ArrayNum;
    pFVar6->_padding_ = (longlong)&___7FGLTFJsonMaterialVariant__6B_;
    (pFVar6->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Name).Data.ArrayNum = 0;
    (pFVar6->Name).Data.ArrayMax = 0;
  }
  pTVar7 = &(this->JsonRoot).MaterialVariants.Array;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  local_18[0] = pFVar6;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(this->JsonRoot).MaterialVariants.Array.ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FGLTFJsonMaterialVariant *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->JsonRoot).MaterialVariants.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).MaterialVariants.Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  (this->JsonRoot).MaterialVariants.Array.ArrayNum = iVar5 + 1;
  *(FGLTFJsonMaterialVariant **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
  return pFVar6;
}

// AddMesh @ 14e5ddfa0

FGLTFJsonMesh * __thiscall FGLTFJsonBuilder::AddMesh(FGLTFJsonBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGLTFJsonMesh *pFVar6;
  TArray<TUniquePtr<FGLTFJsonMesh,TDefaultDelete<FGLTFJsonMesh>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FGLTFJsonMesh *local_18 [2];
  
  pFVar6 = ::operator_new(0x40);
  if (pFVar6 != (FGLTFJsonMesh *)0x0) {
    *(int *)&pFVar6->_padding_ = (this->JsonRoot).Meshes.Array.ArrayNum;
    pFVar6->_padding_ = (longlong)&___7FGLTFJsonMesh__6B_;
    (pFVar6->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Name).Data.ArrayNum = 0;
    (pFVar6->Name).Data.ArrayMax = 0;
    (pFVar6->Primitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Primitives).ArrayNum = 0;
    (pFVar6->Primitives).ArrayMax = 0;
    (pFVar6->TargetNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->TargetNames).ArrayNum = 0;
    (pFVar6->TargetNames).ArrayMax = 0;
  }
  pTVar7 = &(this->JsonRoot).Meshes.Array;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  local_18[0] = pFVar6;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(this->JsonRoot).Meshes.Array.ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FGLTFJsonMesh *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->JsonRoot).Meshes.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).Meshes.Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  (this->JsonRoot).Meshes.Array.ArrayNum = iVar5 + 1;
  *(FGLTFJsonMesh **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
  return pFVar6;
}

// AddNode @ 14e5de0b0

FGLTFJsonNode * __thiscall FGLTFJsonBuilder::AddNode(FGLTFJsonBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TGLTFQuaternion<float> TVar4;
  bool bVar5;
  int iVar6;
  FGLTFJsonNode *pFVar7;
  TArray<TUniquePtr<FGLTFJsonNode,TDefaultDelete<FGLTFJsonNode>_>,TSizedDefaultAllocator<32>_>
  *pTVar8;
  FGLTFJsonNode *local_18 [2];
  
  pFVar7 = ::operator_new(0xa8);
  if (pFVar7 != (FGLTFJsonNode *)0x0) {
    iVar6 = (this->JsonRoot).Nodes.Array.ArrayNum;
    pFVar7->_padding_ = FGLTFJsonVector3::Zero._8_8_;
    *(undefined4 *)&pFVar7->_padding_ = FGLTFJsonVector3::Zero._16_4_;
    pFVar7->_padding_ = (longlong)&___7FGLTFJsonVector3__6B_;
    TVar4 = FGLTFJsonQuaternion::Identity;
    pFVar7->_padding_ = (longlong)&___7FGLTFJsonQuaternion__6B_;
    *(TGLTFQuaternion<float>_u_0 *)&pFVar7->_padding_ =
         (TGLTFQuaternion<float>_u_0_s_0)TVar4.field0_0x0;
    pFVar7->_padding_ = FGLTFJsonVector3::One._8_8_;
    *(undefined4 *)&pFVar7->_padding_ = FGLTFJsonVector3::One._16_4_;
    pFVar7->_padding_ = (longlong)&___7FGLTFJsonVector3__6B_;
    pFVar7->_padding_ = (longlong)&___7FGLTFJsonNode__6B_;
    (pFVar7->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Name).Data.ArrayNum = 0;
    (pFVar7->Name).Data.ArrayMax = 0;
    pFVar7->Camera = (FGLTFJsonCamera *)0x0;
    pFVar7->Skin = (FGLTFJsonSkin *)0x0;
    pFVar7->Mesh = (FGLTFJsonMesh *)0x0;
    pFVar7->Light = (FGLTFJsonLight *)0x0;
    pFVar7->LightMap = (FGLTFJsonLightMap *)0x0;
    pFVar7->LightIESInstance = (FGLTFJsonLightIESInstance *)0x0;
    (pFVar7->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Children).ArrayNum = 0;
    (pFVar7->Children).ArrayMax = 0;
    *(int *)&pFVar7->_padding_ = iVar6;
  }
  pTVar8 = &(this->JsonRoot).Nodes.Array;
  pFVar2 = (pTVar8->AllocatorInstance).Data;
  local_18[0] = pFVar7;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(this->JsonRoot).Nodes.Array.ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FGLTFJsonNode *)(*pcVar3)();
    return pFVar7;
  }
  iVar6 = (this->JsonRoot).Nodes.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).Nodes.Array.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar8->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar8->AllocatorInstance).Data;
  (this->JsonRoot).Nodes.Array.ArrayNum = iVar6 + 1;
  *(FGLTFJsonNode **)(pFVar2 + (longlong)iVar6 * 8) = local_18[0];
  return pFVar7;
}

// AddSampler @ 14e5dfba0

FGLTFJsonSampler * __thiscall FGLTFJsonBuilder::AddSampler(FGLTFJsonBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGLTFJsonSampler *pFVar6;
  TArray<TUniquePtr<FGLTFJsonSampler,TDefaultDelete<FGLTFJsonSampler>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FGLTFJsonSampler *local_18 [2];
  
  pFVar6 = ::operator_new(0x30);
  if (pFVar6 != (FGLTFJsonSampler *)0x0) {
    *(int *)&pFVar6->_padding_ = (this->JsonRoot).Samplers.Array.ArrayNum;
    pFVar6->_padding_ = (longlong)&___7FGLTFJsonSampler__6B_;
    (pFVar6->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Name).Data.ArrayNum = 0;
    (pFVar6->Name).Data.ArrayMax = 0;
    pFVar6->MinFilter = None;
    pFVar6->MagFilter = None;
    pFVar6->WrapS = Repeat;
    pFVar6->WrapT = Repeat;
  }
  pTVar7 = &(this->JsonRoot).Samplers.Array;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  local_18[0] = pFVar6;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(this->JsonRoot).Samplers.Array.ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FGLTFJsonSampler *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->JsonRoot).Samplers.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).Samplers.Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  (this->JsonRoot).Samplers.Array.ArrayNum = iVar5 + 1;
  *(FGLTFJsonSampler **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
  return pFVar6;
}

// AddScene @ 14e5dfcb0

FGLTFJsonScene * __thiscall FGLTFJsonBuilder::AddScene(FGLTFJsonBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGLTFJsonScene *pFVar6;
  TArray<TUniquePtr<FGLTFJsonScene,TDefaultDelete<FGLTFJsonScene>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FGLTFJsonScene *local_18 [2];
  
  pFVar6 = ::operator_new(0x30);
  if (pFVar6 != (FGLTFJsonScene *)0x0) {
    *(int *)&pFVar6->_padding_ = (this->JsonRoot).Scenes.Array.ArrayNum;
    pFVar6->_padding_ = (longlong)&___7FGLTFJsonScene__6B_;
    (pFVar6->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Name).Data.ArrayNum = 0;
    (pFVar6->Name).Data.ArrayMax = 0;
    (pFVar6->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Nodes).ArrayNum = 0;
    (pFVar6->Nodes).ArrayMax = 0;
  }
  pTVar7 = &(this->JsonRoot).Scenes.Array;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  local_18[0] = pFVar6;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(this->JsonRoot).Scenes.Array.ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FGLTFJsonScene *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->JsonRoot).Scenes.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).Scenes.Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  (this->JsonRoot).Scenes.Array.ArrayNum = iVar5 + 1;
  *(FGLTFJsonScene **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
  return pFVar6;
}

// AddSkin @ 14e5dfdc0

FGLTFJsonSkin * __thiscall FGLTFJsonBuilder::AddSkin(FGLTFJsonBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGLTFJsonSkin *pFVar6;
  TArray<TUniquePtr<FGLTFJsonSkin,TDefaultDelete<FGLTFJsonSkin>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FGLTFJsonSkin *local_18 [2];
  
  pFVar6 = ::operator_new(0x40);
  if (pFVar6 != (FGLTFJsonSkin *)0x0) {
    *(int *)&pFVar6->_padding_ = (this->JsonRoot).Skins.Array.ArrayNum;
    pFVar6->_padding_ = (longlong)&___7FGLTFJsonSkin__6B_;
    (pFVar6->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Name).Data.ArrayNum = 0;
    (pFVar6->Name).Data.ArrayMax = 0;
    pFVar6->InverseBindMatrices = (FGLTFJsonAccessor *)0x0;
    pFVar6->Skeleton = (FGLTFJsonNode *)0x0;
    (pFVar6->Joints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Joints).ArrayNum = 0;
    (pFVar6->Joints).ArrayMax = 0;
  }
  pTVar7 = &(this->JsonRoot).Skins.Array;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  local_18[0] = pFVar6;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(this->JsonRoot).Skins.Array.ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FGLTFJsonSkin *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->JsonRoot).Skins.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).Skins.Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  (this->JsonRoot).Skins.Array.ArrayNum = iVar5 + 1;
  *(FGLTFJsonSkin **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
  return pFVar6;
}

// AddTexture @ 14e5dfed0

FGLTFJsonTexture * __thiscall FGLTFJsonBuilder::AddTexture(FGLTFJsonBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGLTFJsonTexture *pFVar6;
  TArray<TUniquePtr<FGLTFJsonTexture,TDefaultDelete<FGLTFJsonTexture>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FGLTFJsonTexture *local_18 [2];
  
  pFVar6 = ::operator_new(0x30);
  if (pFVar6 != (FGLTFJsonTexture *)0x0) {
    *(int *)&pFVar6->_padding_ = (this->JsonRoot).Textures.Array.ArrayNum;
    pFVar6->_padding_ = (longlong)&___7FGLTFJsonTexture__6B_;
    (pFVar6->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Name).Data.ArrayNum = 0;
    (pFVar6->Name).Data.ArrayMax = 0;
    pFVar6->Sampler = (FGLTFJsonSampler *)0x0;
    pFVar6->Source = (FGLTFJsonImage *)0x0;
  }
  pTVar7 = &(this->JsonRoot).Textures.Array;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  local_18[0] = pFVar6;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(this->JsonRoot).Textures.Array.ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FGLTFJsonTexture *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->JsonRoot).Textures.Array.ArrayNum;
  piVar1 = &(this->JsonRoot).Textures.Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  (this->JsonRoot).Textures.Array.ArrayNum = iVar5 + 1;
  *(FGLTFJsonTexture **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
  return pFVar6;
}

// GetCopyrightString @ 14e5f5c50

FString * __cdecl FGLTFJsonBuilder::GetCopyrightString(FString *__return_storage_ptr__)

{
  UClass *this;
  
  this = Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  ::FString::FString(__return_storage_ptr__,
                     (FString *)&(this->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x20);
  return __return_storage_ptr__;
}

// GetGeneratorString @ 14e5f6420

FString * __cdecl FGLTFJsonBuilder::GetGeneratorString(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Unreal Engine 5.7.1");
  return __return_storage_ptr__;
}

// GetRoot @ 14e5fdd40

FGLTFJsonRoot * __thiscall FGLTFJsonBuilder::GetRoot(FGLTFJsonBuilder *this)

{
  return &this->JsonRoot;
}

// ValidateAndFixGLTFJson @ 14e6159b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FGLTFJsonBuilder::ValidateAndFixGLTFJson(FGLTFJsonBuilder *this)

{
  TArray<TUniquePtr<FGLTFJsonMesh,TDefaultDelete<FGLTFJsonMesh>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ForElementType<FSetElementId> FVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  undefined1 auStackY_e8 [32];
  undefined1 local_b7;
  undefined1 local_b6;
  FIdentityFunctor local_b5;
  int local_b4;
  TArray<int,TSizedDefaultAllocator<32>_> local_b0;
  longlong local_a0;
  int local_98 [4];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar20 = 0;
  bVar8 = false;
  local_88.Elements._0_8_ = 0;
  iVar11 = (this->JsonRoot).Meshes.Array.ArrayNum;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_b4 = 0;
  if (0 < iVar11) {
    local_a0 = 0;
    do {
      lVar17 = local_a0;
      iVar9 = local_b4;
      uVar13 = 0;
      if ((int)uVar20 < iVar11) {
        uVar13 = ~uVar20 >> 0x1f;
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
      lVar17 = *(longlong *)((this->JsonRoot).Meshes.Array.AllocatorInstance.Data + lVar17);
      iVar11 = *(int *)(lVar17 + 0x28);
      lVar14 = *(longlong *)(lVar17 + 0x20);
      lVar16 = (longlong)iVar11 * 0x98 + lVar14;
      while( true ) {
        if (*(int *)(lVar17 + 0x28) != iVar11) {
          local_b7 = 0;
          `TCheckedPointerIterator<FGLTFJsonPrimitive_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_b7);
        }
        if (lVar14 == lVar16) break;
        if (((((((*(longlong *)(lVar14 + 0x10) != 0) &&
                (*(int *)(*(longlong *)(lVar14 + 0x10) + 0x30) != 0)) ||
               ((*(longlong *)(lVar14 + 0x18) != 0 &&
                (*(int *)(*(longlong *)(lVar14 + 0x18) + 0x30) != 0)))) ||
              ((*(longlong *)(lVar14 + 0x20) != 0 &&
               (*(int *)(*(longlong *)(lVar14 + 0x20) + 0x30) != 0)))) ||
             ((*(longlong *)(lVar14 + 0x28) != 0 &&
              (*(int *)(*(longlong *)(lVar14 + 0x28) + 0x30) != 0)))) ||
            (((*(int *)(lVar14 + 0x38) != 0 || (*(int *)(lVar14 + 0x48) != 0)) ||
             (*(int *)(lVar14 + 0x58) != 0)))) && (*(longlong *)(lVar14 + 0x60) != 0))
        goto LAB_14e615b58;
        lVar14 = lVar14 + 0x98;
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_88,local_98,(bool *)&local_b4);
      bVar8 = true;
LAB_14e615b58:
      local_b4 = iVar9 + 1;
      iVar11 = (this->JsonRoot).Meshes.Array.ArrayNum;
      local_a0 = local_a0 + 8;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar11);
    if (bVar8) {
      uVar20 = (this->JsonRoot).Nodes.Array.ArrayNum;
      uVar10 = (ulonglong)uVar20;
      uVar15 = 0;
      if (uVar20 != 0) {
        do {
          uVar13 = (uint)uVar15;
          uVar18 = ~uVar13 >> 0x1f;
          uVar20 = 0;
          if ((int)uVar13 < (int)uVar10) {
            uVar20 = uVar18;
          }
          if ((uVar20 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar17 = (longlong)(int)uVar13;
          if (*(longlong *)
               (*(longlong *)((this->JsonRoot).Nodes.Array.AllocatorInstance.Data + lVar17 * 8) +
               0x78) != 0) {
            uVar20 = 0;
            if ((int)uVar13 < (this->JsonRoot).Nodes.Array.ArrayNum) {
              uVar20 = uVar18;
            }
            if ((uVar20 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar20 = *(uint *)(*(longlong *)
                                (*(longlong *)
                                  ((this->JsonRoot).Nodes.Array.AllocatorInstance.Data + lVar17 * 8)
                                + 0x78) + 8);
            if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
              FVar12 = (ForElementType<FSetElementId>)&local_88.Hash;
              if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar12 = local_88.Hash.SecondaryData;
              }
              for (iVar11 = *(int *)((longlong)FVar12 +
                                    (ulonglong)(local_88.HashSize - 1U & uVar20) * 4); iVar11 != -1;
                  iVar11 = *(int *)(local_88.Elements._0_8_ + 4 + (longlong)iVar11 * 0xc)) {
                if (*(uint *)(local_88.Elements._0_8_ + (longlong)iVar11 * 0xc) == uVar20) {
                  uVar20 = 0;
                  if ((int)uVar13 < (this->JsonRoot).Nodes.Array.ArrayNum) {
                    uVar20 = uVar18;
                  }
                  if ((uVar20 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  *(undefined8 *)
                   (*(longlong *)((this->JsonRoot).Nodes.Array.AllocatorInstance.Data + lVar17 * 8)
                   + 0x78) = 0;
                  break;
                }
              }
            }
          }
          uVar10 = (ulonglong)(this->JsonRoot).Nodes.Array.ArrayNum;
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar10);
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_88,&local_b0);
      AlgoImpl::
      IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FGLTFJsonBuilder::ValidateAndFixGLTFJson_::__l10::<lambda_1>_>_>
                ((int *)local_b0.AllocatorInstance.Data,local_b0.ArrayNum,local_b5,
                 (<lambda_1> *)&local_b5);
      iVar11 = local_b0.ArrayNum;
      pTVar1 = &(this->JsonRoot).Meshes.Array;
      pFVar2 = local_b0.AllocatorInstance.Data + (longlong)local_b0.ArrayNum * 4;
      FVar19.Data = local_b0.AllocatorInstance.Data;
      while( true ) {
        if (local_b0.ArrayNum != iVar11) {
          local_b6 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_b6);
        }
        if (FVar19.Data == pFVar2) break;
        uVar20 = *(uint *)FVar19.Data;
        uVar13 = 0;
        if ((int)uVar20 < (this->JsonRoot).Meshes.Array.ArrayNum) {
          uVar13 = ~uVar20 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        puVar5 = *(undefined8 **)(pFVar4 + (longlong)(int)uVar20 * 8);
        pFVar4 = pFVar4 + (longlong)(int)uVar20 * 8;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        iVar9 = (this->JsonRoot).Meshes.Array.ArrayNum + ~uVar20;
        if (iVar9 != 0) {
          memmove(pFVar4,pFVar4 + 8,(longlong)iVar9 << 3);
        }
        piVar3 = &(this->JsonRoot).Meshes.Array.ArrayNum;
        *piVar3 = *piVar3 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar1->AllocatorInstance,(this->JsonRoot).Meshes.Array.ArrayNum,
                   &(this->JsonRoot).Meshes.Array.ArrayMax);
        FVar19.Data = FVar19.Data + 4;
      }
      uVar10 = 0;
      if ((this->JsonRoot).Meshes.Array.ArrayNum != 0) {
        do {
          uVar13 = (uint)uVar10;
          uVar20 = 0;
          if ((int)uVar13 < (this->JsonRoot).Meshes.Array.ArrayNum) {
            uVar20 = ~uVar13 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(uint *)(*(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar13 * 8) + 8)
               = uVar13;
          uVar10 = uVar10 + 1;
        } while (uVar10 < (ulonglong)(longlong)(this->JsonRoot).Meshes.Array.ArrayNum);
      }
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
    }
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return;
}

// WriteJsonArchive @ 14e619bd0

bool __thiscall FGLTFJsonBuilder::WriteJsonArchive(FGLTFJsonBuilder *this,FArchive *param_1)

{
  FGLTFJsonExtensions *pFVar1;
  TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *pTVar2;
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *pTVar3;
  float fVar4;
  TRawPtrProxy<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>_> local_res8;
  TSharedRef<IGLTFJsonWriter,1> local_38 [2];
  
  ValidateAndFixGLTFJson(this);
  fVar4 = __real_38d1b717;
  if (*(char *)(this->_padding_ + 0x2d) == '\0') {
    fVar4 = 0.0;
  }
  pFVar1 = &(this->JsonRoot).Extensions;
  if ((char)this->_padding_ == '\0') {
    pTVar2 = ::operator_new(0x38);
    local_res8.Object = (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *)0x0;
    if (pTVar2 != (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *)0x0) {
      *(undefined4 *)&pTVar2->_padding_ = 0;
      pTVar2->_padding_ = (longlong)pFVar1;
      pTVar2->_padding_ =
           (longlong)&___7__TGLTFJsonWriterImpl__QUTGLTFPrettyJsonPrintPolicyUTF8____6B_;
      (pTVar2->CurrentIdentifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar2->CurrentIdentifier).Data.ArrayNum = 0;
      (pTVar2->CurrentIdentifier).Data.ArrayMax = 0;
      pTVar3 = ::operator_new(0x28);
      if (pTVar3 != (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *)0x0) {
        pTVar3->Stream = param_1;
        pTVar3->_padding_ = (longlong)&___7__TJsonWriter__QUTGLTFPrettyJsonPrintPolicyUTF8____6B_;
        (pTVar3->Stack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar3->Stack).ArrayNum = 0;
        (pTVar3->Stack).ArrayMax = 0;
        pTVar3->PreviousTokenWritten = None;
        pTVar3->IndentLevel = 0;
        local_res8.Object = pTVar3;
      }
      TSharedRef<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,1>::
      TSharedRef<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,1><TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>_>
                ((TSharedRef<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,1> *)
                 &pTVar2->JsonWriter,&local_res8);
      goto LAB_14e619cac;
    }
  }
  else {
    pTVar2 = ::operator_new(0x38);
    if (pTVar2 != (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *)0x0) {
      pTVar2 = TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::
               TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>(pTVar2,param_1,pFVar1)
      ;
      goto LAB_14e619cac;
    }
  }
  pTVar2 = (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *)0x0;
LAB_14e619cac:
  local_res8.Object = (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *)pTVar2;
  TSharedRef<IGLTFJsonWriter,1>::TSharedRef<IGLTFJsonWriter,1><IGLTFJsonWriter>
            (local_38,(TRawPtrProxy<IGLTFJsonWriter> *)&local_res8);
  (local_38[0].Object)->DefaultTolerance = fVar4;
  (**(code **)((this->JsonRoot)._padding_ + 8))(&this->JsonRoot,local_38[0].Object);
  (**(code **)((local_38[0].Object)->_padding_ + 8))(local_38[0].Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].SharedReferenceCount.ReferenceController);
  return true;
}


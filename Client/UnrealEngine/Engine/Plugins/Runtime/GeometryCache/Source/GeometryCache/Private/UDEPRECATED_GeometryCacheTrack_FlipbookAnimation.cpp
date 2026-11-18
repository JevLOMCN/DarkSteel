// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 12

// StaticClass @ 14ca00450

UClass * __cdecl UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheTrack_FlipbookAnimation",
               &Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation.
                InnerSingleton,StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_FlipbookAnimation
               ,0x80,8,CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_GeometryCacheTrack_FlipbookAnimation>,
               InternalVTableHelperCtorCaller<UDEPRECATED_GeometryCacheTrack_FlipbookAnimation>,
               local_res8,UGeometryCacheTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation.InnerSingleton;
}

// UDEPRECATED_GeometryCacheTrack_FlipbookAnimation @ 14ca074a0

UDEPRECATED_GeometryCacheTrack_FlipbookAnimation * __thiscall
UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::UDEPRECATED_GeometryCacheTrack_FlipbookAnimation
          (UDEPRECATED_GeometryCacheTrack_FlipbookAnimation *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDEPRECATED_GeometryCacheTrack_FlipbookAnimation__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MeshSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshSamples).ArrayNum = 0;
  (this->MeshSamples).ArrayMax = 0;
  (this->MeshSampleTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshSampleTimes).ArrayNum = 0;
  (this->MeshSampleTimes).ArrayMax = 0;
  return this;
}

// UDEPRECATED_GeometryCacheTrack_FlipbookAnimation @ 14ca074f0

UDEPRECATED_GeometryCacheTrack_FlipbookAnimation * __thiscall
UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::UDEPRECATED_GeometryCacheTrack_FlipbookAnimation
          (UDEPRECATED_GeometryCacheTrack_FlipbookAnimation *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDEPRECATED_GeometryCacheTrack_FlipbookAnimation__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->MeshSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshSamples).ArrayNum = 0;
  (this->MeshSamples).ArrayMax = 0;
  (this->MeshSampleTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshSampleTimes).ArrayNum = 0;
  (this->MeshSampleTimes).ArrayMax = 0;
  this->NumMeshSamples = 0;
  return this;
}

// ~UDEPRECATED_GeometryCacheTrack_FlipbookAnimation @ 14ca09410

void __thiscall
UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::~UDEPRECATED_GeometryCacheTrack_FlipbookAnimation
          (UDEPRECATED_GeometryCacheTrack_FlipbookAnimation *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDEPRECATED_GeometryCacheTrack_FlipbookAnimation__6B_;
  this->NumMeshSamples = 0;
  DestructItems<FGeometryCacheMeshData,int>
            ((FGeometryCacheMeshData *)(this->MeshSamples).AllocatorInstance.Data,
             (this->MeshSamples).ArrayNum);
  piVar1 = &(this->MeshSamples).ArrayMax;
  (this->MeshSamples).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd8,8,0,&(this->MeshSamples).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->MeshSampleTimes).ArrayMax;
  (this->MeshSampleTimes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->MeshSampleTimes).AllocatorInstance,0,piVar1);
  }
  pFVar2 = (this->MeshSampleTimes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FGeometryCacheMeshData,int>
            ((FGeometryCacheMeshData *)(this->MeshSamples).AllocatorInstance.Data,
             (this->MeshSamples).ArrayNum);
  pFVar2 = (this->MeshSamples).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UGeometryCacheTrack::~UGeometryCacheTrack((UGeometryCacheTrack *)this);
  return;
}

// AddMeshSample @ 14ca0df70

void __thiscall
UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::AddMeshSample
          (UDEPRECATED_GeometryCacheTrack_FlipbookAnimation *this,FGeometryCacheMeshData *param_1,
          float param_2)

{
  int *piVar1;
  FGeometryCacheMeshData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  float local_res18 [2];
  
  pFVar2 = (FGeometryCacheMeshData *)(this->MeshSamples).AllocatorInstance.Data;
  local_res18[0] = param_2;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->MeshSamples).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->MeshSamples).ArrayNum;
  piVar1 = &(this->MeshSamples).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8d8,&(this->MeshSamples).AllocatorInstance,piVar1);
  }
  (this->MeshSamples).ArrayNum = iVar6 + 1;
  FGeometryCacheMeshData::FGeometryCacheMeshData
            ((FGeometryCacheMeshData *)
             ((this->MeshSamples).AllocatorInstance.Data + (longlong)iVar6 * 0xd8),param_1);
  pFVar3 = (this->MeshSampleTimes).AllocatorInstance.Data;
  if (pFVar3 <= (FScriptContainerElement *)local_res18) {
    if ((FScriptContainerElement *)local_res18 <
        pFVar3 + (longlong)(this->MeshSampleTimes).ArrayMax * 4) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar6 = (this->MeshSampleTimes).ArrayNum;
  piVar1 = &(this->MeshSampleTimes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->MeshSampleTimes).AllocatorInstance,piVar1);
  }
  (this->MeshSampleTimes).ArrayNum = iVar6 + 1;
  *(float *)((this->MeshSampleTimes).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_res18[0];
  this->NumMeshSamples = this->NumMeshSamples + 1;
  iVar6 = (param_1->BatchesInfo).ArrayNum;
  if ((int)this->_padding_ < iVar6) {
    *(int *)&this->_padding_ = iVar6;
  }
  return;
}

// BeginDestroy @ 14ca0e330

void __thiscall
UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::BeginDestroy
          (UDEPRECATED_GeometryCacheTrack_FlipbookAnimation *this)

{
  int *piVar1;
  
  UObject::BeginDestroy((UObject *)this);
  this->NumMeshSamples = 0;
  DestructItems<FGeometryCacheMeshData,int>
            ((FGeometryCacheMeshData *)(this->MeshSamples).AllocatorInstance.Data,
             (this->MeshSamples).ArrayNum);
  piVar1 = &(this->MeshSamples).ArrayMax;
  (this->MeshSamples).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd8,8,0,&(this->MeshSamples).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->MeshSampleTimes).ArrayMax;
  (this->MeshSampleTimes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->MeshSampleTimes).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetMaxSampleTime @ 14ca1e010

float __thiscall
UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::GetMaxSampleTime
          (UDEPRECATED_GeometryCacheTrack_FlipbookAnimation *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = UGeometryCacheTrack::GetMaxSampleTime((UGeometryCacheTrack *)this);
  iVar1 = (this->MeshSampleTimes).ArrayNum;
  fVar6 = fVar5;
  if (0 < iVar1) {
    uVar4 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar4 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar6 = (float)(*pcVar2)();
        return fVar6;
      }
    }
    fVar6 = *(float *)((this->MeshSampleTimes).AllocatorInstance.Data +
                      (longlong)(this->MeshSampleTimes).ArrayNum * 4 + -4);
    if (fVar6 <= fVar5) {
      fVar6 = fVar5;
    }
  }
  return fVar6;
}

// GetPrivateStaticClass @ 14ca1e800

UClass * __cdecl UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheTrack_FlipbookAnimation",
               &Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation.
                InnerSingleton,StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_FlipbookAnimation
               ,0x80,8,CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_GeometryCacheTrack_FlipbookAnimation>,
               InternalVTableHelperCtorCaller<UDEPRECATED_GeometryCacheTrack_FlipbookAnimation>,
               local_res8,UGeometryCacheTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation.InnerSingleton;
}

// GetResourceSizeEx @ 14ca1f170

void __thiscall
UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::GetResourceSizeEx
          (UDEPRECATED_GeometryCacheTrack_FlipbookAnimation *this,FResourceSizeEx *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(int)this->_padding_ << 7);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(int)this->_padding_ << 2);
  uVar5 = 0;
  if (0 < (this->MeshSamples).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->MeshSamples).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->MeshSamples).AllocatorInstance.Data;
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)*(int *)(pFVar1 + lVar6 + 8) * 0xc);
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)*(int *)(pFVar1 + lVar6 + 0x18) << 3)
      ;
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)*(int *)(pFVar1 + lVar6 + 0x28) << 2)
      ;
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)*(int *)(pFVar1 + lVar6 + 0x38) << 2)
      ;
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)*(int *)(pFVar1 + lVar6 + 0x48) << 2)
      ;
      FResourceSizeEx::AddUnknownMemoryBytes
                (param_1,(longlong)*(int *)(pFVar1 + lVar6 + 0x68) * 0xc);
      FResourceSizeEx::AddUnknownMemoryBytes
                (param_1,(longlong)*(int *)(pFVar1 + lVar6 + 0x78) * 0xc);
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x10);
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x10);
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x10);
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x10);
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x10);
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x10);
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x1c);
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)*(int *)(pFVar1 + lVar6 + 0xa8) << 2)
      ;
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)*(int *)(pFVar1 + lVar6 + 0x58) << 2)
      ;
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x10);
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,9);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0xd8;
    } while ((int)uVar5 < (this->MeshSamples).ArrayNum);
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x10);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->MeshSampleTimes).ArrayNum << 2);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x10);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,4);
  return;
}

// StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_FlipbookAnimation @ 14ca2b920

void __cdecl
UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::
StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_FlipbookAnimation(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr =
       Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateMeshData @ 14ca2e030

bool __thiscall
UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::UpdateMeshData
          (UDEPRECATED_GeometryCacheTrack_FlipbookAnimation *this,float param_1,bool param_2,
          int *param_3,FGeometryCacheMeshData **param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = UGeometryCacheTrack::FindSampleIndexFromTime
                    ((UGeometryCacheTrack *)this,&this->MeshSampleTimes,param_1,param_2);
  if (uVar4 == *param_3) {
    return false;
  }
  uVar5 = 0;
  if ((int)uVar4 < (this->MeshSamples).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  *param_4 = (FGeometryCacheMeshData *)
             ((this->MeshSamples).AllocatorInstance.Data + (longlong)(int)uVar4 * 0xd8);
  *param_3 = uVar4;
  return true;
}

// execAddMeshSample @ 14ca31510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::execAddMeshSample
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryCacheMeshData *pFVar2;
  undefined1 auStack_138 [32];
  float local_118 [4];
  FGeometryCacheMeshData local_108;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_108.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Positions.ArrayNum = 0;
  local_108.Positions.ArrayMax = 0;
  local_108.TextureCoordinates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.TextureCoordinates.ArrayNum = 0;
  local_108.TextureCoordinates.ArrayMax = 0;
  local_108.TangentsX.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.TangentsX.ArrayNum = 0;
  local_108.TangentsX.ArrayMax = 0;
  local_108.TangentsZ.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.TangentsZ.ArrayNum = 0;
  local_108.TangentsZ.ArrayMax = 0;
  local_108.Colors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Colors.ArrayNum = 0;
  local_108.Colors.ArrayMax = 0;
  local_108.ImportedVertexNumbers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ImportedVertexNumbers.ArrayNum = 0;
  local_108.ImportedVertexNumbers.ArrayMax = 0;
  local_108.MotionVectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.MotionVectors.ArrayNum = 0;
  local_108.MotionVectors.ArrayMax = 0;
  local_108.BatchesInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.BatchesInfo.ArrayNum = 0;
  local_108.BatchesInfo.ArrayMax = 0;
  local_108.BoundingBox.Min.field0_0x0._0_8_ = 0;
  local_108.BoundingBox._8_8_ = 0;
  local_108.BoundingBox.Max.field0_0x0._4_8_ = 0;
  local_108.BoundingBox.IsValid = '\0';
  local_108.BoundingBox.Pad[0] = '\0';
  local_108.BoundingBox.Pad[1] = '\0';
  local_108.BoundingBox.Pad[2] = '\0';
  local_108.Indices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Indices.ArrayNum = 0;
  local_108.Indices.ArrayMax = 0;
  local_108.VertexInfo.bHasTangentX = false;
  local_108.VertexInfo.bHasTangentZ = false;
  local_108.VertexInfo.bHasUV0 = false;
  local_108.VertexInfo.bHasColor0 = false;
  local_108.VertexInfo.bHasMotionVectors = false;
  local_108.VertexInfo.bHasImportedVertexNumbers = false;
  local_108.VertexInfo.bConstantUV0 = false;
  local_108.VertexInfo.bConstantColor0 = false;
  local_108.VertexInfo.bConstantIndices = false;
  local_108.TempBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.TempBytes.ArrayNum = 0;
  local_108.TempBytes.ArrayMax = 0;
  local_108.Hash = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_118[0] = 0.0;
  pFVar2 = &local_108;
  if ((FGeometryCacheMeshData *)param_2->MostRecentPropertyAddress != (FGeometryCacheMeshData *)0x0)
  {
    pFVar2 = (FGeometryCacheMeshData *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddMeshSample((UDEPRECATED_GeometryCacheTrack_FlipbookAnimation *)param_1,pFVar2,local_118[0]);
  if (local_108.TempBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.TempBytes.AllocatorInstance.Data);
  }
  if (local_108.Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Indices.AllocatorInstance.Data);
  }
  if (local_108.BatchesInfo.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.BatchesInfo.AllocatorInstance.Data);
  }
  if (local_108.MotionVectors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.MotionVectors.AllocatorInstance.Data);
  }
  if (local_108.ImportedVertexNumbers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ImportedVertexNumbers.AllocatorInstance.Data);
  }
  if (local_108.Colors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Colors.AllocatorInstance.Data);
  }
  if (local_108.TangentsZ.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.TangentsZ.AllocatorInstance.Data);
  }
  if (local_108.TangentsX.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.TangentsX.AllocatorInstance.Data);
  }
  if (local_108.TextureCoordinates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.TextureCoordinates.AllocatorInstance.Data);
  }
  if (local_108.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Positions.AllocatorInstance.Data);
  }
  return;
}


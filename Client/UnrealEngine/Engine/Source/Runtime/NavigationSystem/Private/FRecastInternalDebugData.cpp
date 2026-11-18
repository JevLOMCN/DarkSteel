// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 11

// FRecastInternalDebugData @ 146dd7270

FRecastInternalDebugData * __thiscall
FRecastInternalDebugData::FRecastInternalDebugData
          (FRecastInternalDebugData *this,FRecastInternalDebugData *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  this->_padding_ = (longlong)&___7FRecastInternalDebugData__6B_;
  pTVar1 = &this->TriangleIndices;
  this->CurrentPrim = param_1->CurrentPrim;
  this->FirstVertexIndex = param_1->FirstVertexIndex;
  piVar2 = &(this->TriangleIndices).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->TriangleIndices).ArrayNum;
  pFVar7 = (param_1->TriangleIndices).AllocatorInstance.Data;
  (this->TriangleIndices).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar6,0,&pTVar1->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 2);
  }
  pTVar3 = &this->TriangleVertices;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TriangleVertices).ArrayMax;
  iVar6 = (param_1->TriangleVertices).ArrayNum;
  pFVar7 = (param_1->TriangleVertices).AllocatorInstance.Data;
  (this->TriangleVertices).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x18);
  }
  pTVar4 = &this->TriangleColors;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TriangleColors).ArrayMax;
  iVar6 = (param_1->TriangleColors).ArrayNum;
  pFVar7 = (param_1->TriangleColors).AllocatorInstance.Data;
  (this->TriangleColors).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 2);
  }
  pTVar3 = &this->LineVertices;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->LineVertices).ArrayMax;
  iVar6 = (param_1->LineVertices).ArrayNum;
  pFVar7 = (param_1->LineVertices).AllocatorInstance.Data;
  (this->LineVertices).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x18);
  }
  pTVar4 = &this->LineColors;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->LineColors).ArrayMax;
  iVar6 = (param_1->LineColors).ArrayNum;
  pFVar7 = (param_1->LineColors).AllocatorInstance.Data;
  (this->LineColors).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 2);
  }
  pTVar3 = &this->PointVertices;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PointVertices).ArrayMax;
  iVar6 = (param_1->PointVertices).ArrayNum;
  pFVar7 = (param_1->PointVertices).AllocatorInstance.Data;
  (this->PointVertices).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x18);
  }
  pTVar4 = &this->PointColors;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PointColors).ArrayMax;
  iVar6 = (param_1->PointColors).ArrayNum;
  pFVar7 = (param_1->PointColors).AllocatorInstance.Data;
  (this->PointColors).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 2);
  }
  pTVar3 = &this->LabelVertices;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->LabelVertices).ArrayMax;
  iVar6 = (param_1->LabelVertices).ArrayNum;
  pFVar7 = (param_1->LabelVertices).AllocatorInstance.Data;
  (this->LabelVertices).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x18);
  }
  pTVar5 = &this->Labels;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Labels).ArrayMax;
  iVar6 = (param_1->Labels).ArrayNum;
  pFVar7 = (param_1->Labels).AllocatorInstance.Data;
  (this->Labels).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar2);
    ConstructItems<FString,FString,int>((pTVar5->AllocatorInstance).Data,(FString *)pFVar7,iVar6);
  }
  this->BuildTime = param_1->BuildTime;
  this->BuildCompressedLayerTime = param_1->BuildCompressedLayerTime;
  this->BuildNavigationDataTime = param_1->BuildNavigationDataTime;
  this->BuildLinkTime = param_1->BuildLinkTime;
  this->TriangleCount = param_1->TriangleCount;
  this->Resolution = param_1->Resolution;
  return this;
}

// ~FRecastInternalDebugData @ 146dd9e70

void __thiscall FRecastInternalDebugData::~FRecastInternalDebugData(FRecastInternalDebugData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRecastInternalDebugData__6B_;
  DestructItems<FString,int>
            ((FString *)(this->Labels).AllocatorInstance.Data,(this->Labels).ArrayNum);
  pFVar1 = (this->Labels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LabelVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PointColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PointVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LineColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LineVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TriangleColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TriangleVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TriangleIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  duDebugDraw::~duDebugDraw((duDebugDraw *)this);
  return;
}

// begin @ 146e2fa70

void __thiscall
FRecastInternalDebugData::begin
          (FRecastInternalDebugData *this,duDebugDrawPrimitives param_1,float param_2)

{
  this->FirstVertexIndex = (this->TriangleVertices).ArrayNum;
  this->CurrentPrim = param_1;
  return;
}

// depthMask @ 146e2fa80

void __thiscall FRecastInternalDebugData::depthMask(FRecastInternalDebugData *this,bool param_1)

{
  return;
}

// texture @ 146e2fd80

void __thiscall FRecastInternalDebugData::texture(FRecastInternalDebugData *this,bool param_1)

{
  return;
}

// vertex @ 146e2fd90

void __thiscall
FRecastInternalDebugData::vertex
          (FRecastInternalDebugData *this,double param_1,double param_2,double param_3,uint param_4)

{
  (**(code **)(this->_padding_ + 0x28))();
  return;
}

// vertex @ 146e2fdc0

void __thiscall
FRecastInternalDebugData::vertex
          (FRecastInternalDebugData *this,double *param_1,uint param_2,double *param_3)

{
  (**(code **)(this->_padding_ + 0x28))
            (*(undefined4 *)param_3,*param_1,param_1[1],param_1[2],param_2,*(undefined4 *)param_3,
             *(undefined4 *)(param_3 + 1));
  return;
}

// vertex @ 146e2fe00

void __thiscall
FRecastInternalDebugData::vertex(FRecastInternalDebugData *this,double *param_1,uint param_2)

{
  (**(code **)(this->_padding_ + 0x28))(0,*param_1,param_1[1],param_1[2],param_2,0,0);
  return;
}

// end @ 146e76520

void __thiscall FRecastInternalDebugData::end(FRecastInternalDebugData *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30 [2];
  
  if (this->CurrentPrim == DU_DRAW_QUADS) {
    iVar4 = (this->TriangleVertices).ArrayNum;
    iVar6 = this->FirstVertexIndex;
    if (iVar6 < iVar4) {
      iVar7 = iVar6 + 3;
      do {
        if ((iVar4 <= iVar7) &&
           (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_8611053135172992972>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavMesh\\RecastInternalDebugData.cpp"
                               ,0x34,"i + 3 < TriangleVertices.Num()"), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->TriangleIndices).AllocatorInstance.Data;
        local_48 = iVar6;
        if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 <
             pFVar1 + (longlong)(this->TriangleIndices).ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = (this->TriangleIndices).ArrayNum;
        if (iVar4 == (this->TriangleIndices).ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->TriangleIndices).AllocatorInstance,
                             &(this->TriangleIndices).ArrayMax);
        }
        iVar5 = iVar7 + -2;
        (this->TriangleIndices).ArrayNum = iVar4 + 1;
        *(int *)((this->TriangleIndices).AllocatorInstance.Data + (longlong)iVar4 * 4) = local_48;
        pFVar1 = (this->TriangleIndices).AllocatorInstance.Data;
        local_44 = iVar5;
        if (((pFVar1 <= (FScriptContainerElement *)&local_44) &&
            ((FScriptContainerElement *)&local_44 <
             pFVar1 + (longlong)(this->TriangleIndices).ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = (this->TriangleIndices).ArrayNum;
        if (iVar4 == (this->TriangleIndices).ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->TriangleIndices).AllocatorInstance,
                             &(this->TriangleIndices).ArrayMax);
        }
        (this->TriangleIndices).ArrayNum = iVar4 + 1;
        *(int *)((this->TriangleIndices).AllocatorInstance.Data + (longlong)iVar4 * 4) = local_44;
        pFVar1 = (this->TriangleIndices).AllocatorInstance.Data;
        local_40 = iVar7;
        if (((pFVar1 <= (FScriptContainerElement *)&local_40) &&
            ((FScriptContainerElement *)&local_40 <
             pFVar1 + (longlong)(this->TriangleIndices).ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = (this->TriangleIndices).ArrayNum;
        if (iVar4 == (this->TriangleIndices).ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->TriangleIndices).AllocatorInstance,
                             &(this->TriangleIndices).ArrayMax);
        }
        (this->TriangleIndices).ArrayNum = iVar4 + 1;
        *(int *)((this->TriangleIndices).AllocatorInstance.Data + (longlong)iVar4 * 4) = local_40;
        pFVar1 = (this->TriangleIndices).AllocatorInstance.Data;
        local_3c = iVar7;
        if (((pFVar1 <= (FScriptContainerElement *)&local_3c) &&
            ((FScriptContainerElement *)&local_3c <
             pFVar1 + (longlong)(this->TriangleIndices).ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = (this->TriangleIndices).ArrayNum;
        if (iVar4 == (this->TriangleIndices).ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->TriangleIndices).AllocatorInstance,
                             &(this->TriangleIndices).ArrayMax);
        }
        (this->TriangleIndices).ArrayNum = iVar4 + 1;
        *(int *)((this->TriangleIndices).AllocatorInstance.Data + (longlong)iVar4 * 4) = local_3c;
        pFVar1 = (this->TriangleIndices).AllocatorInstance.Data;
        local_38 = iVar5;
        if (((pFVar1 <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 <
             pFVar1 + (longlong)(this->TriangleIndices).ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = (this->TriangleIndices).ArrayNum;
        if (iVar4 == (this->TriangleIndices).ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->TriangleIndices).AllocatorInstance,
                             &(this->TriangleIndices).ArrayMax);
        }
        (this->TriangleIndices).ArrayNum = iVar4 + 1;
        *(int *)((this->TriangleIndices).AllocatorInstance.Data + (longlong)iVar4 * 4) = local_38;
        local_34 = iVar7 + -1;
        pFVar1 = (this->TriangleIndices).AllocatorInstance.Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_34) &&
            ((FScriptContainerElement *)&local_34 <
             pFVar1 + (longlong)(this->TriangleIndices).ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = (this->TriangleIndices).ArrayNum;
        if (iVar4 == (this->TriangleIndices).ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->TriangleIndices).AllocatorInstance,
                             &(this->TriangleIndices).ArrayMax);
        }
        iVar6 = iVar6 + 4;
        (this->TriangleIndices).ArrayNum = iVar4 + 1;
        iVar7 = iVar7 + 4;
        *(int *)((this->TriangleIndices).AllocatorInstance.Data + (longlong)iVar4 * 4) = local_34;
        iVar4 = (this->TriangleVertices).ArrayNum;
      } while (iVar6 < iVar4);
    }
  }
  else if ((this->CurrentPrim == DU_DRAW_TRIS) &&
          (iVar4 = this->FirstVertexIndex, iVar4 < (this->TriangleVertices).ArrayNum)) {
    do {
      pFVar1 = (this->TriangleIndices).AllocatorInstance.Data;
      local_30[0] = iVar4;
      if ((pFVar1 <= (FScriptContainerElement *)local_30) &&
         (((FScriptContainerElement *)local_30 <
           pFVar1 + (longlong)(this->TriangleIndices).ArrayMax * 4 &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)))) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = (this->TriangleIndices).ArrayNum;
      if (iVar6 == (this->TriangleIndices).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->TriangleIndices).AllocatorInstance,
                           &(this->TriangleIndices).ArrayMax);
      }
      iVar4 = iVar4 + 1;
      (this->TriangleIndices).ArrayNum = iVar6 + 1;
      *(int *)((this->TriangleIndices).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_30[0];
    } while (iVar4 < (this->TriangleVertices).ArrayNum);
    return;
  }
  return;
}

// text @ 146e77140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRecastInternalDebugData::text
          (FRecastInternalDebugData *this,double param_1,double param_2,double param_3,char *param_4
          )

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  TVector<double>_u_0 *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TVector<double>_u_0 *pTVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  TVector<double>_u_0 *local_98;
  TVector<double>_u_0 *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  TVector<double>_u_0 local_68;
  FString local_50;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_40 = param_1;
  local_38 = param_2;
  local_30 = param_3;
  Recast2UnrealPoint((TVector<double> *)&local_68._s_0,&local_40);
  pTVar2 = &this->LabelVertices;
  pTVar5 = (TVector<double>_u_0 *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar5 <= &local_68) &&
     (lVar11 = (longlong)(this->LabelVertices).ArrayMax, &local_68 < pTVar5 + lVar11)) {
    local_80 = (longlong)(this->LabelVertices).ArrayNum;
    local_78 = 0x18;
    local_98 = &local_68;
    local_90 = pTVar5;
    local_88 = lVar11;
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
  iVar9 = (this->LabelVertices).ArrayNum;
  piVar1 = &(this->LabelVertices).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->LabelVertices).ArrayNum = iVar9 + 1;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  pTVar3 = &this->Labels;
  pFVar4 = pFVar6 + (longlong)iVar9 * 0x18;
  *(double *)pFVar4 = local_68._s_0.X;
  *(double *)(pFVar4 + 8) = local_68._s_0.Y;
  *(double *)(pFVar6 + (longlong)iVar9 * 0x18 + 0x10) = local_68._s_0.Z;
  pTVar10 = (TVector<double>_u_0 *)::FString::FString(&local_50,param_4);
  pTVar5 = (TVector<double>_u_0 *)(pTVar3->AllocatorInstance).Data;
  if ((pTVar5 <= pTVar10) &&
     (lVar11 = (longlong)(this->Labels).ArrayMax,
     pTVar10 < (TVector<double>_u_0 *)((longlong)pTVar5 + lVar11 * 0x10))) {
    local_80 = (longlong)(this->Labels).ArrayNum;
    local_78 = 0x10;
    local_98 = pTVar10;
    local_90 = pTVar5;
    local_88 = lVar11;
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
  iVar9 = (this->Labels).ArrayNum;
  piVar1 = &(this->Labels).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar3->AllocatorInstance,piVar1);
  }
  lVar11 = (longlong)iVar9;
  (this->Labels).ArrayNum = iVar9 + 1;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar11 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar4 + lVar11 * 0x10) =
       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(pTVar10->_s_0).X)->AllocatorInstance).Data
  ;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(pTVar10->_s_0).X)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  *(int *)(pFVar4 + lVar11 * 0x10 + 8) = *(int *)((longlong)pTVar10 + 8);
  *(int *)(pFVar4 + lVar11 * 0x10 + 0xc) = *(int *)((longlong)pTVar10 + 0xc);
  *(undefined8 *)((longlong)pTVar10 + 8) = 0;
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// vertex @ 146e77330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRecastInternalDebugData::vertex
          (FRecastInternalDebugData *this,double param_1,double param_2,double param_3,uint param_4,
          double param_5,double param_6)

{
  int *piVar1;
  duDebugDrawPrimitives dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  FScriptContainerElement *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_58 [2];
  TVector<double> local_50;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  Recast2UnrealPoint((TVector<double> *)(local_58 + 2),&local_38);
  Recast2UnrealColor((uint)local_58);
  dVar2 = this->CurrentPrim;
  if (dVar2 == DU_DRAW_POINTS) {
    pFVar7 = (this->PointVertices).AllocatorInstance.Data;
    if ((pFVar7 <= (FScriptContainerElement *)(local_58 + 2)) &&
       (lVar8 = (longlong)(this->PointVertices).ArrayMax,
       (FScriptContainerElement *)(local_58 + 2) < pFVar7 + lVar8 * 0x18)) {
      local_70 = (longlong)(this->PointVertices).ArrayNum;
      local_68 = 0x18;
      local_88 = local_58 + 2;
      local_80 = pFVar7;
      local_78 = lVar8;
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
    iVar6 = (this->PointVertices).ArrayNum;
    piVar1 = &(this->PointVertices).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->PointVertices).AllocatorInstance,piVar1);
    }
    (this->PointVertices).ArrayNum = iVar6 + 1;
    pFVar3 = (this->PointVertices).AllocatorInstance.Data;
    pFVar7 = pFVar3 + (longlong)iVar6 * 0x18;
    *(double *)pFVar7 = local_50.field0_0x0._s_0.X;
    *(double *)(pFVar7 + 8) = local_50.field0_0x0._s_0.Y;
    *(double *)(pFVar3 + (longlong)iVar6 * 0x18 + 0x10) = local_50.field0_0x0._s_0.Z;
    pFVar7 = (this->PointColors).AllocatorInstance.Data;
    if ((pFVar7 <= (FScriptContainerElement *)local_58) &&
       (lVar8 = (longlong)(this->PointColors).ArrayMax,
       (FScriptContainerElement *)local_58 < pFVar7 + lVar8 * 4)) {
      local_70 = (longlong)(this->PointColors).ArrayNum;
      local_68 = 4;
      local_88 = local_58;
      local_80 = pFVar7;
      local_78 = lVar8;
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
    iVar6 = (this->PointColors).ArrayNum;
    piVar1 = &(this->PointColors).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->PointColors).AllocatorInstance,piVar1);
    }
    (this->PointColors).ArrayNum = iVar6 + 1;
    pFVar7 = (this->PointColors).AllocatorInstance.Data;
  }
  else if (dVar2 == DU_DRAW_LINES) {
    pFVar7 = (this->LineVertices).AllocatorInstance.Data;
    if ((pFVar7 <= (FScriptContainerElement *)(local_58 + 2)) &&
       (lVar8 = (longlong)(this->LineVertices).ArrayMax,
       (FScriptContainerElement *)(local_58 + 2) < pFVar7 + lVar8 * 0x18)) {
      local_70 = (longlong)(this->LineVertices).ArrayNum;
      local_68 = 0x18;
      local_88 = local_58 + 2;
      local_80 = pFVar7;
      local_78 = lVar8;
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
    iVar6 = (this->LineVertices).ArrayNum;
    piVar1 = &(this->LineVertices).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->LineVertices).AllocatorInstance,piVar1);
    }
    (this->LineVertices).ArrayNum = iVar6 + 1;
    pFVar3 = (this->LineVertices).AllocatorInstance.Data;
    pFVar7 = pFVar3 + (longlong)iVar6 * 0x18;
    *(double *)pFVar7 = local_50.field0_0x0._s_0.X;
    *(double *)(pFVar7 + 8) = local_50.field0_0x0._s_0.Y;
    *(double *)(pFVar3 + (longlong)iVar6 * 0x18 + 0x10) = local_50.field0_0x0._s_0.Z;
    pFVar7 = (this->LineColors).AllocatorInstance.Data;
    if ((pFVar7 <= (FScriptContainerElement *)local_58) &&
       (lVar8 = (longlong)(this->LineColors).ArrayMax,
       (FScriptContainerElement *)local_58 < pFVar7 + lVar8 * 4)) {
      local_70 = (longlong)(this->LineColors).ArrayNum;
      local_68 = 4;
      local_88 = local_58;
      local_80 = pFVar7;
      local_78 = lVar8;
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
    iVar6 = (this->LineColors).ArrayNum;
    piVar1 = &(this->LineColors).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->LineColors).AllocatorInstance,piVar1);
    }
    (this->LineColors).ArrayNum = iVar6 + 1;
    pFVar7 = (this->LineColors).AllocatorInstance.Data;
  }
  else {
    if ((dVar2 != DU_DRAW_TRIS) && (dVar2 != DU_DRAW_QUADS)) {
      return;
    }
    pFVar7 = (this->TriangleVertices).AllocatorInstance.Data;
    if ((pFVar7 <= (FScriptContainerElement *)(local_58 + 2)) &&
       (lVar8 = (longlong)(this->TriangleVertices).ArrayMax,
       (FScriptContainerElement *)(local_58 + 2) < pFVar7 + lVar8 * 0x18)) {
      local_70 = (longlong)(this->TriangleVertices).ArrayNum;
      local_68 = 0x18;
      local_88 = local_58 + 2;
      local_80 = pFVar7;
      local_78 = lVar8;
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
    iVar6 = (this->TriangleVertices).ArrayNum;
    piVar1 = &(this->TriangleVertices).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->TriangleVertices).AllocatorInstance,piVar1);
    }
    (this->TriangleVertices).ArrayNum = iVar6 + 1;
    pFVar3 = (this->TriangleVertices).AllocatorInstance.Data;
    pFVar7 = pFVar3 + (longlong)iVar6 * 0x18;
    *(double *)pFVar7 = local_50.field0_0x0._s_0.X;
    *(double *)(pFVar7 + 8) = local_50.field0_0x0._s_0.Y;
    *(double *)(pFVar3 + (longlong)iVar6 * 0x18 + 0x10) = local_50.field0_0x0._s_0.Z;
    pFVar7 = (this->TriangleColors).AllocatorInstance.Data;
    if ((pFVar7 <= (FScriptContainerElement *)local_58) &&
       (lVar8 = (longlong)(this->TriangleColors).ArrayMax,
       (FScriptContainerElement *)local_58 < pFVar7 + lVar8 * 4)) {
      local_70 = (longlong)(this->TriangleColors).ArrayNum;
      local_68 = 4;
      local_88 = local_58;
      local_80 = pFVar7;
      local_78 = lVar8;
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
    iVar6 = (this->TriangleColors).ArrayNum;
    piVar1 = &(this->TriangleColors).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->TriangleColors).AllocatorInstance,piVar1);
    }
    (this->TriangleColors).ArrayNum = iVar6 + 1;
    pFVar7 = (this->TriangleColors).AllocatorInstance.Data;
  }
  *(undefined4 *)(pFVar7 + (longlong)iVar6 * 4) = local_58[0];
  return;
}


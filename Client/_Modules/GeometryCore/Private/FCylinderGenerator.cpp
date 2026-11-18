// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// Generate @ 1435961f0

FMeshShapeGenerator * __thiscall
UE::Geometry::FCylinderGenerator::Generate(FCylinderGenerator *this)

{
  FScriptContainerElement *pFVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FMeshShapeGenerator *pFVar7;
  float fVar8;
  float local_78;
  float local_74;
  float local_70 [2];
  ForAnyElementType local_68;
  undefined8 local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  TArrayView<int,int> local_48;
  TArrayView<float,int> local_38;
  TArrayView<float,int> local_28 [2];
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    iVar5 = (int)this->_padding_;
    iVar6 = 3;
    if (3 < iVar5) {
      iVar6 = iVar5;
    }
    *(int *)&this->_padding_ = iVar6;
  }
  iVar6 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  iVar5 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,&local_58,(int *)((longlong)&local_50 + 4));
  local_78 = 0.0;
  local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
  *(float *)(local_58.Data + (longlong)iVar5 * 4) = this->Radius[0];
  if (((local_68.Data <= (FScriptContainerElement *)&local_78) &&
      ((FScriptContainerElement *)&local_78 < local_68.Data + (longlong)local_60._4_4_ * 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMeshShapeGenerator *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (int)local_60;
  if ((int)local_60 == local_60._4_4_) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_68,(int *)((longlong)&local_60 + 4));
  }
  local_60 = CONCAT44(local_60._4_4_,iVar5 + 1);
  pFVar1 = (FScriptContainerElement *)(this->Radius + 1);
  *(float *)(local_68.Data + (longlong)iVar5 * 4) = local_78;
  iVar5 = this->LengthSamples;
  if (0 < iVar5) {
    do {
      iVar6 = iVar6 + 1;
      fVar8 = (float)iVar6 / (float)(iVar5 + 1);
      local_74 = (*(float *)pFVar1 - this->Radius[0]) * fVar8 + this->Radius[0];
      if (((local_58.Data <= (FScriptContainerElement *)&local_74) &&
          ((FScriptContainerElement *)&local_74 < local_58.Data + (longlong)local_50._4_4_ * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMeshShapeGenerator *)(*pcVar3)();
        return pFVar7;
      }
      iVar5 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
      *(float *)(local_58.Data + (longlong)iVar5 * 4) = local_74;
      local_70[0] = fVar8 * this->Height;
      if (((local_68.Data <= (FScriptContainerElement *)local_70) &&
          ((FScriptContainerElement *)local_70 < local_68.Data + (longlong)local_60._4_4_ * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMeshShapeGenerator *)(*pcVar3)();
        return pFVar7;
      }
      iVar5 = (int)local_60;
      if ((int)local_60 == local_60._4_4_) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_68,(int *)((longlong)&local_60 + 4));
      }
      local_60 = CONCAT44(local_60._4_4_,iVar5 + 1);
      *(float *)(local_68.Data + (longlong)iVar5 * 4) = local_70[0];
      iVar5 = this->LengthSamples;
    } while (iVar6 < iVar5);
  }
  if (((local_58.Data <= pFVar1) && (pFVar1 < local_58.Data + (longlong)local_50._4_4_ * 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMeshShapeGenerator *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (int)local_50;
  if ((int)local_50 == local_50._4_4_) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_58,(int *)((longlong)&local_50 + 4));
  }
  local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
  pfVar2 = &this->Height;
  *(float *)(local_58.Data + (longlong)iVar5 * 4) = *(float *)pFVar1;
  if (((local_68.Data <= pfVar2) && (pfVar2 < local_68.Data + (longlong)local_60._4_4_ * 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMeshShapeGenerator *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (int)local_60;
  if ((int)local_60 == local_60._4_4_) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_68,(int *)((longlong)&local_60 + 4));
  }
  iVar6 = iVar5 + 1;
  local_48.DataPtr = (int *)0x0;
  local_60 = CONCAT44(local_60._4_4_,iVar6);
  local_48.ArrayNum = 0;
  *(float *)(local_68.Data + (longlong)iVar5 * 4) = *pfVar2;
  local_38.DataPtr = (float *)local_68.Data;
  if ((iVar6 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMeshShapeGenerator *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (int)local_50;
  local_28[0].DataPtr = (float *)local_58.Data;
  local_38.ArrayNum = iVar6;
  if (((int)local_50 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMeshShapeGenerator *)(*pcVar3)();
    return pFVar7;
  }
  local_28[0].ArrayNum = iVar5;
  FVerticalCylinderGeneratorBase::GenerateVerticalCircleSweep
            ((FVerticalCylinderGeneratorBase *)this,local_28,&local_38,&local_48);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return (FMeshShapeGenerator *)this;
}


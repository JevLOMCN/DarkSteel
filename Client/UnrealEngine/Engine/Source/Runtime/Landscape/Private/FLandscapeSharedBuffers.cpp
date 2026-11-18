// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 7

// CreateGrassIndexBuffer<unsigned_short> @ 145f6d320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLandscapeSharedBuffers::CreateGrassIndexBuffer<unsigned_short>
          (FLandscapeSharedBuffers *this,FRHICommandListBase *param_1,FName *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ForElementType<int> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<int> FVar7;
  FRawStaticIndexBuffer16or32<unsigned_short> *this_00;
  ForElementType<int> FVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_res8;
  short local_78 [2];
  uint local_74;
  int local_70;
  longlong local_68;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_60 [2];
  
  local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60[0].ArrayMax = 0;
  iVar12 = this->SubsectionSizeVerts * this->SubsectionSizeVerts * 4;
  uVar6 = ((int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >> 0x1f) + -1 +
          iVar12 / 3 + (iVar12 >> 0x1f)) * this->NumSubsections * this->NumSubsections;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  local_60[0].ArrayNum = 0;
  if (uVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar6,&local_60[0].AllocatorInstance,0,&local_60[0].ArrayMax);
  }
  iVar12 = 1;
  if (this->SubsectionSizeVerts != 0) {
    iVar12 = this->SubsectionSizeVerts;
  }
  local_res8 = 0;
  uVar2 = (ulonglong)(iVar12 - 1) * 2 + 1;
  local_68 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> local_68 == 0; local_68 = local_68 + -1) {
    }
  }
  local_70 = (int)local_68;
  if (0 < local_70) {
    do {
      piVar11 = &(this->GrassIndexMipOffsets).ArrayMax;
      FVar8 = (ForElementType<int>)&this->GrassIndexMipOffsets;
      FVar3 = (this->GrassIndexMipOffsets).AllocatorInstance.SecondaryData;
      local_74 = local_60[0].ArrayNum;
      FVar7 = FVar8;
      if (FVar3 != (ForElementType<int>)0x0) {
        FVar7 = FVar3;
      }
      if ((ulonglong)FVar7 <= &local_74) {
        FVar7 = FVar8;
        if (FVar3 != (ForElementType<int>)0x0) {
          FVar7 = FVar3;
        }
        if ((&local_74 < (uint *)((longlong)FVar7 + (longlong)*piVar11 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar12 = (this->GrassIndexMipOffsets).ArrayNum;
      if (iVar12 == *piVar11) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,(ForElementType<int> *)FVar8,piVar11);
      }
      (this->GrassIndexMipOffsets).ArrayNum = iVar12 + 1;
      FVar3 = (this->GrassIndexMipOffsets).AllocatorInstance.SecondaryData;
      if (FVar3 != (ForElementType<int>)0x0) {
        FVar8 = FVar3;
      }
      iVar15 = 0;
      iVar14 = 0;
      *(uint *)((longlong)FVar8 + (longlong)iVar12 * 4) = local_74;
      iVar12 = this->NumSubsections;
      iVar10 = this->SubsectionSizeVerts >> ((byte)local_res8 & 0x1f);
      if (0 < iVar12) {
        do {
          iVar13 = 0;
          if (0 < iVar12) {
            do {
              iVar12 = 0;
              if (0 < iVar10) {
                do {
                  iVar9 = 0;
                  do {
                    local_78[0] = (short)this->SubsectionSizeVerts * (short)iVar12 + (short)iVar15 +
                                  (short)iVar9;
                    if (((local_60[0].AllocatorInstance.Data <= (FScriptContainerElement *)local_78)
                        && ((FScriptContainerElement *)local_78 <
                            local_60[0].AllocatorInstance.Data + (longlong)local_60[0].ArrayMax * 2)
                        ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar5)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if (local_60[0].ArrayNum == local_60[0].ArrayMax) {
                      local_60[0].ArrayNum =
                           UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x202,&local_60[0].AllocatorInstance,&local_60[0].ArrayMax);
                    }
                    uVar1 = local_60[0].ArrayNum + 1;
                    iVar9 = iVar9 + 1;
                    *(short *)(local_60[0].AllocatorInstance.Data +
                              (longlong)local_60[0].ArrayNum * 2) = local_78[0];
                    local_60[0].ArrayNum = uVar1;
                  } while (iVar9 < iVar10);
                  iVar12 = iVar12 + 1;
                } while (iVar12 < iVar10);
              }
              iVar13 = iVar13 + 1;
              iVar15 = iVar15 + this->SubsectionSizeVerts * this->SubsectionSizeVerts;
              iVar12 = this->NumSubsections;
            } while (iVar13 < iVar12);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar12);
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < (int)local_68);
  }
  if ((local_60[0].ArrayNum != uVar6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewIndices.Num() == ExpectedNumIndices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                         ,0xd6c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = ::operator_new(0x58);
  if (this_00 == (FRawStaticIndexBuffer16or32<unsigned_short> *)0x0) {
    this_00 = (FRawStaticIndexBuffer16or32<unsigned_short> *)0x0;
  }
  else {
    FIndexBuffer::FIndexBuffer((FIndexBuffer *)this_00);
    this_00->_padding_ = (longlong)&___7__FRawStaticIndexBuffer16or32_G__6B_;
    (this_00->Indices)._padding_ = (longlong)&___7__TResourceArray_G_0A___6B_;
    this_00->_padding_ = 0;
    (this_00->Indices)._padding_ = 0;
    (this_00->Indices)._padding_ = 0;
    (this_00->Indices).bNeedsCPUAccess = false;
    this_00->CachedNumIndices = 0;
  }
  pcVar4 = *(code **)(this_00->_padding_ + 0x98);
  if (pcVar4 == FRawStaticIndexBuffer16or32<unsigned_short>::AssignNewBuffer) {
    FRawStaticIndexBuffer16or32<unsigned_short>::AssignNewBuffer(this_00,local_60);
  }
  else {
    (*pcVar4)();
  }
  this_00->_padding_ = (longlong)*param_2;
  (**(code **)(this_00->_padding_ + 0x18))(this_00,param_1);
  this->GrassIndexBuffer = (FIndexBuffer *)this_00;
  if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].AllocatorInstance.Data);
  }
  return;
}

// CreateGrassIndexBuffer<unsigned_int> @ 145f6d740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLandscapeSharedBuffers::CreateGrassIndexBuffer<unsigned_int>
          (FLandscapeSharedBuffers *this,FRHICommandListBase *param_1,FName *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ForElementType<int> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<int> FVar7;
  FRawStaticIndexBuffer16or32<unsigned_int> *this_00;
  ForElementType<int> FVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_res8;
  uint local_78;
  int local_74;
  int local_70;
  longlong local_68;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_60 [2];
  
  local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60[0].ArrayMax = 0;
  iVar12 = this->SubsectionSizeVerts * this->SubsectionSizeVerts * 4;
  uVar6 = ((int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >> 0x1f) + -1 +
          iVar12 / 3 + (iVar12 >> 0x1f)) * this->NumSubsections * this->NumSubsections;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  local_60[0].ArrayNum = 0;
  if (uVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar6,&local_60[0].AllocatorInstance,0,&local_60[0].ArrayMax);
  }
  iVar12 = 1;
  if (this->SubsectionSizeVerts != 0) {
    iVar12 = this->SubsectionSizeVerts;
  }
  local_res8 = 0;
  uVar2 = (ulonglong)(iVar12 - 1) * 2 + 1;
  local_68 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> local_68 == 0; local_68 = local_68 + -1) {
    }
  }
  local_70 = (int)local_68;
  if (0 < local_70) {
    do {
      piVar11 = &(this->GrassIndexMipOffsets).ArrayMax;
      FVar8 = (ForElementType<int>)&this->GrassIndexMipOffsets;
      FVar3 = (this->GrassIndexMipOffsets).AllocatorInstance.SecondaryData;
      local_78 = local_60[0].ArrayNum;
      FVar7 = FVar8;
      if (FVar3 != (ForElementType<int>)0x0) {
        FVar7 = FVar3;
      }
      if ((ulonglong)FVar7 <= &local_78) {
        FVar7 = FVar8;
        if (FVar3 != (ForElementType<int>)0x0) {
          FVar7 = FVar3;
        }
        if ((&local_78 < (uint *)((longlong)FVar7 + (longlong)*piVar11 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar12 = (this->GrassIndexMipOffsets).ArrayNum;
      if (iVar12 == *piVar11) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,(ForElementType<int> *)FVar8,piVar11);
      }
      (this->GrassIndexMipOffsets).ArrayNum = iVar12 + 1;
      FVar3 = (this->GrassIndexMipOffsets).AllocatorInstance.SecondaryData;
      if (FVar3 != (ForElementType<int>)0x0) {
        FVar8 = FVar3;
      }
      iVar15 = 0;
      iVar14 = 0;
      *(uint *)((longlong)FVar8 + (longlong)iVar12 * 4) = local_78;
      iVar12 = this->NumSubsections;
      iVar10 = this->SubsectionSizeVerts >> ((byte)local_res8 & 0x1f);
      if (0 < iVar12) {
        do {
          iVar13 = 0;
          if (0 < iVar12) {
            do {
              iVar12 = 0;
              if (0 < iVar10) {
                do {
                  iVar9 = 0;
                  do {
                    local_74 = iVar12 * this->SubsectionSizeVerts + iVar9 + iVar15;
                    if (((local_60[0].AllocatorInstance.Data <= (FScriptContainerElement *)&local_74
                         ) && ((FScriptContainerElement *)&local_74 <
                               local_60[0].AllocatorInstance.Data +
                               (longlong)local_60[0].ArrayMax * 4)) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar5)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if (local_60[0].ArrayNum == local_60[0].ArrayMax) {
                      local_60[0].ArrayNum =
                           UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_60[0].AllocatorInstance,&local_60[0].ArrayMax);
                    }
                    uVar1 = local_60[0].ArrayNum + 1;
                    iVar9 = iVar9 + 1;
                    *(int *)(local_60[0].AllocatorInstance.Data + (longlong)local_60[0].ArrayNum * 4
                            ) = local_74;
                    local_60[0].ArrayNum = uVar1;
                  } while (iVar9 < iVar10);
                  iVar12 = iVar12 + 1;
                } while (iVar12 < iVar10);
              }
              iVar13 = iVar13 + 1;
              iVar15 = iVar15 + this->SubsectionSizeVerts * this->SubsectionSizeVerts;
              iVar12 = this->NumSubsections;
            } while (iVar13 < iVar12);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar12);
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < (int)local_68);
  }
  if ((local_60[0].ArrayNum != uVar6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewIndices.Num() == ExpectedNumIndices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                         ,0xd6c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = ::operator_new(0x58);
  if (this_00 == (FRawStaticIndexBuffer16or32<unsigned_int> *)0x0) {
    this_00 = (FRawStaticIndexBuffer16or32<unsigned_int> *)0x0;
  }
  else {
    FIndexBuffer::FIndexBuffer((FIndexBuffer *)this_00);
    this_00->_padding_ = (longlong)&___7__FRawStaticIndexBuffer16or32_I__6B_;
    (this_00->Indices)._padding_ = (longlong)&___7__TResourceArray_I_0A___6B_;
    this_00->_padding_ = 0;
    (this_00->Indices)._padding_ = 0;
    (this_00->Indices)._padding_ = 0;
    (this_00->Indices).bNeedsCPUAccess = false;
    this_00->CachedNumIndices = 0;
  }
  pcVar4 = *(code **)(this_00->_padding_ + 0x98);
  if (pcVar4 == FRawStaticIndexBuffer16or32<unsigned_int>::AssignNewBuffer) {
    FRawStaticIndexBuffer16or32<unsigned_int>::AssignNewBuffer(this_00,local_60);
  }
  else {
    (*pcVar4)();
  }
  this_00->_padding_ = (longlong)*param_2;
  (**(code **)(this_00->_padding_ + 0x18))(this_00,param_1);
  this->GrassIndexBuffer = (FIndexBuffer *)this_00;
  if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].AllocatorInstance.Data);
  }
  return;
}

// CreateIndexBuffers<unsigned_short> @ 145f6db50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLandscapeSharedBuffers::CreateIndexBuffers<unsigned_short>
          (FLandscapeSharedBuffers *this,FRHICommandListBase *param_1,FName *param_2)

{
  int iVar1;
  uint *puVar2;
  FLandscapeIndexRanges *pFVar3;
  code *pcVar4;
  byte bVar5;
  short sVar6;
  bool bVar7;
  int iVar8;
  FIndexBuffer *pFVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  FLandscapeIndexRanges *pFVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ushort local_c8 [2];
  ushort local_c4 [2];
  ForAnyElementType local_c0;
  undefined8 local_b8;
  short local_b0 [2];
  short local_ac [2];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  ushort local_98 [2];
  ushort local_94 [2];
  short local_90 [2];
  short local_8c [2];
  int local_88;
  int local_84;
  uint local_80;
  longlong local_78;
  ForAnyElementType local_70;
  int local_68 [2];
  longlong local_60;
  longlong local_58;
  FLandscapeIndexRanges *local_50;
  
  iVar15 = this->SubsectionSizeVerts * this->NumSubsections;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68[0] = 0;
  local_68[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar15 * iVar15,&local_70,local_68,local_68 + 1);
  memset(local_70.Data,0xff,(longlong)this->NumVertices * 2);
  uVar12 = this->NumIndexBuffers - 1;
  if (-1 < (int)uVar12) {
    lVar14 = (longlong)(int)uVar12;
    do {
      iVar15 = (this->SubsectionSizeVerts >> ((byte)uVar12 & 0x1f)) + -1;
      local_c0.Data = (FScriptContainerElement *)0x0;
      local_b8 = 0;
      local_80 = this->NumSubsections * this->NumSubsections * iVar15 * iVar15 * 6;
      local_78 = lVar14;
      if ((int)local_80 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_80);
      }
      if (local_80 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_80,&local_c0,0,(int *)((longlong)&local_b8 + 4));
      }
      pFVar16 = this->IndexRanges;
      pFVar3 = pFVar16 + lVar14;
      pFVar3->MinIndexFull = 0x7fffffff;
      pFVar3->MaxIndexFull = 0;
      local_84 = 0;
      iVar17 = 0;
      local_58 = 0;
      pFVar16 = pFVar16 + lVar14;
      iVar13 = this->NumSubsections;
      local_50 = pFVar16;
      if (iVar13 < 1) {
LAB_145f6e1eb:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MinIndexFull <= (uint32)((INDEX_TYPE)(~(INDEX_TYPE)0))",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                           ,0xd14,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        do {
          local_88 = 0;
          if (0 < iVar13) {
            lVar10 = (local_58 + lVar14 * 10) * 4;
            do {
              pFVar3 = this->IndexRanges;
              iVar13 = 0;
              *(undefined4 *)((longlong)pFVar3->MaxIndex[0] + lVar10) = 0;
              *(undefined4 *)((longlong)pFVar3->MinIndex[0] + lVar10) = 0x7fffffff;
              puVar2 = (uint *)((longlong)pFVar3->MinIndex[0] + lVar10);
              local_60 = lVar10;
              if (0 < iVar15) {
                do {
                  iVar11 = 0;
                  do {
                    sVar6 = (short)this->SubsectionSizeVerts;
                    local_c8[0] = sVar6 * (short)iVar13 + (short)iVar11 + (short)iVar17;
                    local_98[0] = local_c8[0] + 1;
                    local_94[0] = sVar6 * ((short)iVar13 + 1) + (short)iVar11 + (short)iVar17;
                    local_c4[0] = local_94[0] + 1;
                    if (((local_c0.Data <= (FScriptContainerElement *)local_c8) &&
                        ((FScriptContainerElement *)local_c8 <
                         local_c0.Data + (longlong)local_b8._4_4_ * 2)) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    iVar8 = (uint)local_b8;
                    if ((uint)local_b8 == local_b8._4_4_) {
                      iVar8 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x202,&local_c0,(int *)((longlong)&local_b8 + 4));
                    }
                    iVar1 = iVar8 + 1;
                    *(ushort *)(local_c0.Data + (longlong)iVar8 * 2) = local_c8[0];
                    local_b8._0_4_ = iVar1;
                    if (((local_c0.Data <= (FScriptContainerElement *)local_c4) &&
                        ((FScriptContainerElement *)local_c4 <
                         local_c0.Data + (longlong)local_b8._4_4_ * 2)) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if ((uint)local_b8 == local_b8._4_4_) {
                      local_b8._0_4_ =
                           UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x202,&local_c0,(int *)((longlong)&local_b8 + 4));
                    }
                    iVar8 = (uint)local_b8 + 1;
                    *(ushort *)(local_c0.Data + (longlong)(int)(uint)local_b8 * 2) = local_c4[0];
                    local_b8._0_4_ = iVar8;
                    if (((local_c0.Data <= (FScriptContainerElement *)local_98) &&
                        ((FScriptContainerElement *)local_98 <
                         local_c0.Data + (longlong)local_b8._4_4_ * 2)) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if ((uint)local_b8 == local_b8._4_4_) {
                      local_b8._0_4_ =
                           UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x202,&local_c0,(int *)((longlong)&local_b8 + 4));
                    }
                    iVar8 = (uint)local_b8 + 1;
                    *(ushort *)(local_c0.Data + (longlong)(int)(uint)local_b8 * 2) = local_98[0];
                    local_b8._0_4_ = iVar8;
                    if (((local_c0.Data <= (FScriptContainerElement *)local_c8) &&
                        ((FScriptContainerElement *)local_c8 <
                         local_c0.Data + (longlong)local_b8._4_4_ * 2)) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if ((uint)local_b8 == local_b8._4_4_) {
                      local_b8._0_4_ =
                           UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x202,&local_c0,(int *)((longlong)&local_b8 + 4));
                    }
                    iVar8 = (uint)local_b8 + 1;
                    *(ushort *)(local_c0.Data + (longlong)(int)(uint)local_b8 * 2) = local_c8[0];
                    local_b8._0_4_ = iVar8;
                    if (((local_c0.Data <= (FScriptContainerElement *)local_94) &&
                        ((FScriptContainerElement *)local_94 <
                         local_c0.Data + (longlong)local_b8._4_4_ * 2)) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if ((uint)local_b8 == local_b8._4_4_) {
                      local_b8._0_4_ =
                           UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x202,&local_c0,(int *)((longlong)&local_b8 + 4));
                    }
                    iVar8 = (uint)local_b8 + 1;
                    *(ushort *)(local_c0.Data + (longlong)(int)(uint)local_b8 * 2) = local_94[0];
                    local_b8._0_4_ = iVar8;
                    if (((local_c0.Data <= (FScriptContainerElement *)local_c4) &&
                        ((FScriptContainerElement *)local_c4 <
                         local_c0.Data + (longlong)local_b8._4_4_ * 2)) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    iVar8 = (uint)local_b8;
                    if ((uint)local_b8 == local_b8._4_4_) {
                      iVar8 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x202,&local_c0,(int *)((longlong)&local_b8 + 4));
                    }
                    local_b8 = CONCAT44(local_b8._4_4_,iVar8 + 1);
                    *(ushort *)(local_c0.Data + (longlong)iVar8 * 2) = local_c4[0];
                    uVar18 = (uint)local_c8[0];
                    if ((int)(uint)local_c8[0] < *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10)) {
                      uVar18 = *(uint *)((longlong)pFVar3->MaxIndex[0] + lVar10);
                    }
                    *(uint *)((longlong)pFVar3->MaxIndex[0] + lVar10) = uVar18;
                    uVar18 = (uint)local_c8[0];
                    if ((int)*puVar2 < (int)(uint)local_c8[0]) {
                      uVar18 = *puVar2;
                    }
                    *puVar2 = uVar18;
                    uVar18 = (uint)local_98[0];
                    if ((int)(uint)local_98[0] < *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10)) {
                      uVar18 = *(uint *)((longlong)pFVar3->MaxIndex[0] + lVar10);
                    }
                    *(uint *)((longlong)pFVar3->MaxIndex[0] + lVar10) = uVar18;
                    uVar18 = (uint)local_98[0];
                    if ((int)*puVar2 < (int)(uint)local_98[0]) {
                      uVar18 = *puVar2;
                    }
                    *puVar2 = uVar18;
                    uVar18 = (uint)local_c4[0];
                    if ((int)(uint)local_c4[0] < *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10)) {
                      uVar18 = *(uint *)((longlong)pFVar3->MaxIndex[0] + lVar10);
                    }
                    *(uint *)((longlong)pFVar3->MaxIndex[0] + lVar10) = uVar18;
                    uVar18 = (uint)local_c4[0];
                    if ((int)*puVar2 < (int)(uint)local_c4[0]) {
                      uVar18 = *puVar2;
                    }
                    *puVar2 = uVar18;
                    uVar18 = (uint)local_94[0];
                    if ((int)(uint)local_94[0] < *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10)) {
                      uVar18 = *(uint *)((longlong)pFVar3->MaxIndex[0] + lVar10);
                    }
                    *(uint *)((longlong)pFVar3->MaxIndex[0] + lVar10) = uVar18;
                    uVar18 = (uint)local_94[0];
                    if ((int)*puVar2 < (int)(uint)local_94[0]) {
                      uVar18 = *puVar2;
                    }
                    iVar11 = iVar11 + 1;
                    *puVar2 = uVar18;
                  } while (iVar11 < iVar15);
                  iVar13 = iVar13 + 1;
                  pFVar16 = local_50;
                } while (iVar13 < iVar15);
              }
              iVar13 = *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10);
              if (iVar13 < pFVar16->MaxIndexFull) {
                iVar13 = pFVar16->MaxIndexFull;
              }
              pFVar16->MaxIndexFull = iVar13;
              uVar18 = *puVar2;
              if (pFVar16->MinIndexFull < (int)*puVar2) {
                uVar18 = pFVar16->MinIndexFull;
              }
              local_88 = local_88 + 1;
              pFVar16->MinIndexFull = uVar18;
              lVar10 = local_60 + 8;
              iVar17 = iVar17 + this->SubsectionSizeVerts * this->SubsectionSizeVerts;
              iVar13 = this->NumSubsections;
              lVar14 = local_78;
              local_60 = lVar10;
            } while (local_88 < iVar13);
          }
          local_84 = local_84 + 1;
          local_58 = local_58 + 1;
        } while (local_84 < iVar13);
        if (0xffff < (uint)pFVar16->MinIndexFull) goto LAB_145f6e1eb;
      }
      if (((uint)local_b8 != local_80) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewIndices.Num() == ExpectedNumIndices",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                             ,0xd15,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = this->IndexBuffers[lVar14];
      if (pFVar9 == (FIndexBuffer *)0x0) {
        pFVar9 = ::operator_new(0x58);
        if (pFVar9 == (FIndexBuffer *)0x0) {
          pFVar9 = (FIndexBuffer *)0x0;
        }
        else {
          FIndexBuffer::FIndexBuffer(pFVar9);
          pFVar9[1]._padding_ = 0;
          pFVar9->_padding_ = (longlong)&___7__FRawStaticIndexBuffer16or32_G__6B_;
          pFVar9[1]._padding_ = (longlong)&___7__TResourceArray_G_0A___6B_;
          pFVar9[1]._padding_ = 0;
          pFVar9[1]._padding_ = 0;
          *(undefined1 *)&pFVar9[1].IndexBufferRHI.Reference = 0;
          *(undefined4 *)&pFVar9[2]._padding_ = 0;
        }
      }
      (**(code **)(pFVar9->_padding_ + 0x98))(pFVar9,&local_c0);
      pFVar9->_padding_ = (longlong)*param_2;
      (**(code **)(pFVar9->_padding_ + 0x18))(pFVar9);
      this->IndexBuffers[lVar14] = pFVar9;
      bVar7 = IsRayTracingEnabled();
      if (bVar7) {
        uVar18 = (uint)this->SubsectionSizeVerts / (uint)this->NumRayTracingSections;
        iVar15 = 0;
        local_a8.Data = (FScriptContainerElement *)0x0;
        local_a0 = 0;
        iVar13 = 0;
        bVar5 = (byte)uVar12 & 0x1f;
        uVar19 = uVar18 >> bVar5;
        sVar6 = (short)uVar19 + 1;
        if (0 < (int)(uVar18 >> bVar5)) {
          do {
            iVar17 = 0;
            do {
              local_b0[0] = (short)iVar17 + sVar6 * (short)iVar13;
              local_8c[0] = (short)iVar17 + ((short)iVar13 + 1) * sVar6;
              local_90[0] = local_b0[0] + 1;
              local_ac[0] = local_8c[0] + 1;
              if ((local_a8.Data <= (FScriptContainerElement *)local_b0) &&
                 ((FScriptContainerElement *)local_b0 < local_a8.Data + (longlong)local_a0._4_4_ * 2
                 )) {
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar7) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar15 = (int)local_a0;
              }
              if (iVar15 == local_a0._4_4_) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x202,&local_a8,(int *)((longlong)&local_a0 + 4));
              }
              iVar11 = iVar15 + 1;
              *(short *)(local_a8.Data + (longlong)iVar15 * 2) = local_b0[0];
              local_a0._0_4_ = iVar11;
              if (((local_a8.Data <= (FScriptContainerElement *)local_ac) &&
                  ((FScriptContainerElement *)local_ac <
                   local_a8.Data + (longlong)local_a0._4_4_ * 2)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((int)local_a0 == local_a0._4_4_) {
                local_a0._0_4_ =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,&local_a8,(int *)((longlong)&local_a0 + 4));
              }
              iVar15 = (int)local_a0 + 1;
              *(short *)(local_a8.Data + (longlong)(int)local_a0 * 2) = local_ac[0];
              local_a0._0_4_ = iVar15;
              if (((local_a8.Data <= (FScriptContainerElement *)local_90) &&
                  ((FScriptContainerElement *)local_90 <
                   local_a8.Data + (longlong)local_a0._4_4_ * 2)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((int)local_a0 == local_a0._4_4_) {
                local_a0._0_4_ =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,&local_a8,(int *)((longlong)&local_a0 + 4));
              }
              iVar15 = (int)local_a0 + 1;
              *(short *)(local_a8.Data + (longlong)(int)local_a0 * 2) = local_90[0];
              local_a0._0_4_ = iVar15;
              if (((local_a8.Data <= (FScriptContainerElement *)local_b0) &&
                  ((FScriptContainerElement *)local_b0 <
                   local_a8.Data + (longlong)local_a0._4_4_ * 2)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((int)local_a0 == local_a0._4_4_) {
                local_a0._0_4_ =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,&local_a8,(int *)((longlong)&local_a0 + 4));
              }
              iVar15 = (int)local_a0 + 1;
              *(short *)(local_a8.Data + (longlong)(int)local_a0 * 2) = local_b0[0];
              local_a0._0_4_ = iVar15;
              if (((local_a8.Data <= (FScriptContainerElement *)local_8c) &&
                  ((FScriptContainerElement *)local_8c <
                   local_a8.Data + (longlong)local_a0._4_4_ * 2)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((int)local_a0 == local_a0._4_4_) {
                local_a0._0_4_ =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,&local_a8,(int *)((longlong)&local_a0 + 4));
              }
              iVar15 = (int)local_a0 + 1;
              *(short *)(local_a8.Data + (longlong)(int)local_a0 * 2) = local_8c[0];
              local_a0._0_4_ = iVar15;
              if (((local_a8.Data <= (FScriptContainerElement *)local_ac) &&
                  ((FScriptContainerElement *)local_ac <
                   local_a8.Data + (longlong)local_a0._4_4_ * 2)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar11 = (int)local_a0;
              if ((int)local_a0 == local_a0._4_4_) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x202,&local_a8,(int *)((longlong)&local_a0 + 4));
              }
              iVar15 = iVar11 + 1;
              iVar17 = iVar17 + 1;
              local_a0 = CONCAT44(local_a0._4_4_,iVar15);
              *(short *)(local_a8.Data + (longlong)iVar11 * 2) = local_ac[0];
            } while (iVar17 < (int)uVar19);
            iVar13 = iVar13 + 1;
            lVar14 = local_78;
          } while (iVar13 < (int)uVar19);
        }
        pFVar9 = ::operator_new(0x58);
        if (pFVar9 == (FIndexBuffer *)0x0) {
          pFVar9 = (FIndexBuffer *)(ulonglong)(0 >> bVar5);
        }
        else {
          FIndexBuffer::FIndexBuffer(pFVar9);
          uVar18 = 0 >> bVar5;
          uVar20 = (ulonglong)uVar18;
          pFVar9->_padding_ = (longlong)&___7__FRawStaticIndexBuffer16or32_G__6B_;
          pFVar9[1]._padding_ = (longlong)&___7__TResourceArray_G_0A___6B_;
          pFVar9[1]._padding_ = uVar20;
          pFVar9[1]._padding_ = uVar20;
          pFVar9[1]._padding_ = uVar20;
          *(char *)&pFVar9[1].IndexBufferRHI.Reference = (char)uVar18;
          *(uint *)&pFVar9[2]._padding_ = uVar18;
        }
        (**(code **)(pFVar9->_padding_ + 0x98))(pFVar9,&local_a8);
        (**(code **)(pFVar9->_padding_ + 0x18))(pFVar9,param_1);
        uVar18 = 0 >> bVar5;
        if ((int)uVar12 < (this->ZeroOffsetIndexBuffers).ArrayNum) {
          uVar18 = ~uVar12 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(FIndexBuffer **)((this->ZeroOffsetIndexBuffers).AllocatorInstance.Data + lVar14 * 8) =
             pFVar9;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data);
        }
      }
      if (local_c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data);
      }
      uVar12 = uVar12 - 1;
      lVar14 = lVar14 + -1;
      local_78 = lVar14;
    } while (-1 < (int)uVar12);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return;
}

// CreateIndexBuffers<unsigned_int> @ 145f6e850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLandscapeSharedBuffers::CreateIndexBuffers<unsigned_int>
          (FLandscapeSharedBuffers *this,FRHICommandListBase *param_1,FName *param_2)

{
  int iVar1;
  int *piVar2;
  FLandscapeIndexRanges *pFVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FIndexBuffer *pFVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  FLandscapeIndexRanges *pFVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  uint local_80;
  longlong local_78;
  ForAnyElementType local_70;
  int local_68 [2];
  longlong local_60;
  longlong local_58;
  FLandscapeIndexRanges *local_50;
  
  local_70.Data = (FScriptContainerElement *)0x0;
  iVar15 = this->SubsectionSizeVerts * this->NumSubsections;
  local_68[0] = 0;
  local_68[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar15 * iVar15,&local_70,local_68,local_68 + 1);
  memset(local_70.Data,0xff,(longlong)this->NumVertices << 2);
  uVar12 = this->NumIndexBuffers - 1;
  if (-1 < (int)uVar12) {
    lVar19 = (longlong)(int)uVar12;
    do {
      iVar15 = (this->SubsectionSizeVerts >> ((byte)uVar12 & 0x1f)) + -1;
      local_c8.Data = (FScriptContainerElement *)0x0;
      local_c0 = 0;
      local_80 = this->NumSubsections * this->NumSubsections * iVar15 * iVar15 * 6;
      local_78 = lVar19;
      if ((int)local_80 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_80);
      }
      if (local_80 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_80,&local_c8,0,(int *)((longlong)&local_c0 + 4));
      }
      pFVar16 = this->IndexRanges;
      pFVar3 = pFVar16 + lVar19;
      pFVar3->MinIndexFull = 0x7fffffff;
      pFVar3->MaxIndexFull = 0;
      local_84 = 0;
      iVar13 = 0;
      local_58 = 0;
      pFVar16 = pFVar16 + lVar19;
      iVar20 = this->NumSubsections;
      local_50 = pFVar16;
      if (0 < iVar20) {
        do {
          local_88 = 0;
          if (0 < iVar20) {
            lVar10 = (local_58 + lVar19 * 10) * 4;
            do {
              pFVar3 = this->IndexRanges;
              iVar20 = 0;
              *(undefined4 *)((longlong)pFVar3->MaxIndex[0] + lVar10) = 0;
              *(undefined4 *)((longlong)pFVar3->MinIndex[0] + lVar10) = 0x7fffffff;
              piVar2 = (int *)((longlong)pFVar3->MinIndex[0] + lVar10);
              local_60 = lVar10;
              if (0 < iVar15) {
                do {
                  iVar11 = 0;
                  iVar18 = iVar20 + 1;
                  do {
                    local_a8 = this->SubsectionSizeVerts * iVar20 + iVar11 + iVar13;
                    local_94 = this->SubsectionSizeVerts * iVar18 + iVar11 + iVar13;
                    local_98 = local_a8 + 1;
                    local_a4 = local_94 + 1;
                    if (((local_c8.Data <= (FScriptContainerElement *)&local_a8) &&
                        ((FScriptContainerElement *)&local_a8 <
                         local_c8.Data + (longlong)local_c0._4_4_ * 4)) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    iVar7 = (uint)local_c0;
                    if ((uint)local_c0 == local_c0._4_4_) {
                      iVar7 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&local_c8,(int *)((longlong)&local_c0 + 4));
                    }
                    iVar1 = iVar7 + 1;
                    *(int *)(local_c8.Data + (longlong)iVar7 * 4) = local_a8;
                    local_c0._0_4_ = iVar1;
                    if (((local_c8.Data <= (FScriptContainerElement *)&local_a4) &&
                        ((FScriptContainerElement *)&local_a4 <
                         local_c8.Data + (longlong)local_c0._4_4_ * 4)) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if ((uint)local_c0 == local_c0._4_4_) {
                      local_c0._0_4_ =
                           UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_c8,(int *)((longlong)&local_c0 + 4));
                    }
                    iVar7 = (uint)local_c0 + 1;
                    *(int *)(local_c8.Data + (longlong)(int)(uint)local_c0 * 4) = local_a4;
                    local_c0._0_4_ = iVar7;
                    if (((local_c8.Data <= (FScriptContainerElement *)&local_98) &&
                        ((FScriptContainerElement *)&local_98 <
                         local_c8.Data + (longlong)local_c0._4_4_ * 4)) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if ((uint)local_c0 == local_c0._4_4_) {
                      local_c0._0_4_ =
                           UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_c8,(int *)((longlong)&local_c0 + 4));
                    }
                    iVar7 = (uint)local_c0 + 1;
                    *(int *)(local_c8.Data + (longlong)(int)(uint)local_c0 * 4) = local_98;
                    local_c0._0_4_ = iVar7;
                    if (((local_c8.Data <= (FScriptContainerElement *)&local_a8) &&
                        ((FScriptContainerElement *)&local_a8 <
                         local_c8.Data + (longlong)local_c0._4_4_ * 4)) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if ((uint)local_c0 == local_c0._4_4_) {
                      local_c0._0_4_ =
                           UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_c8,(int *)((longlong)&local_c0 + 4));
                    }
                    iVar7 = (uint)local_c0 + 1;
                    *(int *)(local_c8.Data + (longlong)(int)(uint)local_c0 * 4) = local_a8;
                    local_c0._0_4_ = iVar7;
                    if (((local_c8.Data <= (FScriptContainerElement *)&local_94) &&
                        ((FScriptContainerElement *)&local_94 <
                         local_c8.Data + (longlong)local_c0._4_4_ * 4)) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if ((uint)local_c0 == local_c0._4_4_) {
                      local_c0._0_4_ =
                           UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_c8,(int *)((longlong)&local_c0 + 4));
                    }
                    iVar7 = (uint)local_c0 + 1;
                    *(int *)(local_c8.Data + (longlong)(int)(uint)local_c0 * 4) = local_94;
                    local_c0._0_4_ = iVar7;
                    if (((local_c8.Data <= (FScriptContainerElement *)&local_a4) &&
                        ((FScriptContainerElement *)&local_a4 <
                         local_c8.Data + (longlong)local_c0._4_4_ * 4)) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    iVar7 = (uint)local_c0;
                    if ((uint)local_c0 == local_c0._4_4_) {
                      iVar7 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&local_c8,(int *)((longlong)&local_c0 + 4));
                    }
                    local_c0 = CONCAT44(local_c0._4_4_,iVar7 + 1);
                    *(int *)(local_c8.Data + (longlong)iVar7 * 4) = local_a4;
                    iVar7 = local_a8;
                    if (local_a8 < *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10)) {
                      iVar7 = *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10);
                    }
                    *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10) = iVar7;
                    iVar7 = local_a8;
                    if (*piVar2 < local_a8) {
                      iVar7 = *piVar2;
                    }
                    *piVar2 = iVar7;
                    iVar7 = local_98;
                    if (local_98 < *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10)) {
                      iVar7 = *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10);
                    }
                    *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10) = iVar7;
                    iVar7 = local_98;
                    if (*piVar2 < local_98) {
                      iVar7 = *piVar2;
                    }
                    *piVar2 = iVar7;
                    iVar7 = local_a4;
                    if (local_a4 < *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10)) {
                      iVar7 = *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10);
                    }
                    *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10) = iVar7;
                    iVar7 = local_a4;
                    if (*piVar2 < local_a4) {
                      iVar7 = *piVar2;
                    }
                    *piVar2 = iVar7;
                    iVar7 = local_94;
                    if (local_94 < *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10)) {
                      iVar7 = *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10);
                    }
                    *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10) = iVar7;
                    iVar7 = local_94;
                    if (*piVar2 < local_94) {
                      iVar7 = *piVar2;
                    }
                    iVar11 = iVar11 + 1;
                    *piVar2 = iVar7;
                  } while (iVar11 < iVar15);
                  pFVar16 = local_50;
                  iVar20 = iVar18;
                } while (iVar18 < iVar15);
              }
              iVar20 = *(int *)((longlong)pFVar3->MaxIndex[0] + lVar10);
              if (iVar20 < pFVar16->MaxIndexFull) {
                iVar20 = pFVar16->MaxIndexFull;
              }
              pFVar16->MaxIndexFull = iVar20;
              iVar20 = *piVar2;
              if (pFVar16->MinIndexFull < *piVar2) {
                iVar20 = pFVar16->MinIndexFull;
              }
              local_88 = local_88 + 1;
              pFVar16->MinIndexFull = iVar20;
              lVar10 = local_60 + 8;
              iVar13 = iVar13 + this->SubsectionSizeVerts * this->SubsectionSizeVerts;
              iVar20 = this->NumSubsections;
              lVar19 = local_78;
              local_60 = lVar10;
            } while (local_88 < iVar20);
          }
          local_84 = local_84 + 1;
          local_58 = local_58 + 1;
        } while (local_84 < iVar20);
      }
      if (((uint)local_c0 != local_80) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewIndices.Num() == ExpectedNumIndices",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                             ,0xd15,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = this->IndexBuffers[lVar19];
      if (pFVar9 == (FIndexBuffer *)0x0) {
        pFVar9 = ::operator_new(0x58);
        if (pFVar9 == (FIndexBuffer *)0x0) {
          pFVar9 = (FIndexBuffer *)0x0;
        }
        else {
          FIndexBuffer::FIndexBuffer(pFVar9);
          pFVar9->_padding_ = (longlong)&___7__FRawStaticIndexBuffer16or32_I__6B_;
          pFVar9[1]._padding_ = 0;
          pFVar9[1]._padding_ = 0;
          pFVar9[1]._padding_ = 0;
          pFVar9[1]._padding_ = (longlong)&___7__TResourceArray_I_0A___6B_;
          *(undefined1 *)&pFVar9[1].IndexBufferRHI.Reference = 0;
          *(undefined4 *)&pFVar9[2]._padding_ = 0;
        }
      }
      (**(code **)(pFVar9->_padding_ + 0x98))(pFVar9,&local_c8);
      pFVar9->_padding_ = (longlong)*param_2;
      (**(code **)(pFVar9->_padding_ + 0x18))(pFVar9);
      this->IndexBuffers[lVar19] = pFVar9;
      bVar6 = IsRayTracingEnabled();
      if (bVar6) {
        uVar8 = (uint)this->SubsectionSizeVerts / (uint)this->NumRayTracingSections;
        iVar15 = 0;
        bVar5 = (byte)uVar12 & 0x1f;
        uVar17 = uVar8 >> bVar5;
        local_b8.Data = (FScriptContainerElement *)0x0;
        local_b0 = 0;
        if (0 < (int)(uVar8 >> bVar5)) {
          iVar13 = uVar17 + 2;
          iVar20 = iVar15;
          do {
            iVar18 = -(uVar17 + 1);
            uVar14 = (ulonglong)uVar17;
            iVar11 = iVar13;
            do {
              local_a0 = iVar18 + -1 + iVar11;
              local_90 = iVar18 + iVar11;
              local_8c = iVar11 + -1;
              local_9c = iVar11;
              if ((local_b8.Data <= (FScriptContainerElement *)&local_a0) &&
                 ((FScriptContainerElement *)&local_a0 <
                  local_b8.Data + (longlong)local_b0._4_4_ * 4)) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar6) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar15 = (int)local_b0;
              }
              if (iVar15 == local_b0._4_4_) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_b8,(int *)((longlong)&local_b0 + 4));
              }
              iVar7 = iVar15 + 1;
              *(int *)(local_b8.Data + (longlong)iVar15 * 4) = local_a0;
              local_b0._0_4_ = iVar7;
              if (((local_b8.Data <= (FScriptContainerElement *)&local_9c) &&
                  ((FScriptContainerElement *)&local_9c <
                   local_b8.Data + (longlong)local_b0._4_4_ * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((int)local_b0 == local_b0._4_4_) {
                local_b0._0_4_ =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_b8,(int *)((longlong)&local_b0 + 4));
              }
              iVar15 = (int)local_b0 + 1;
              *(int *)(local_b8.Data + (longlong)(int)local_b0 * 4) = local_9c;
              local_b0._0_4_ = iVar15;
              if (((local_b8.Data <= (FScriptContainerElement *)&local_90) &&
                  ((FScriptContainerElement *)&local_90 <
                   local_b8.Data + (longlong)local_b0._4_4_ * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((int)local_b0 == local_b0._4_4_) {
                local_b0._0_4_ =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_b8,(int *)((longlong)&local_b0 + 4));
              }
              iVar15 = (int)local_b0 + 1;
              *(int *)(local_b8.Data + (longlong)(int)local_b0 * 4) = local_90;
              local_b0._0_4_ = iVar15;
              if (((local_b8.Data <= (FScriptContainerElement *)&local_a0) &&
                  ((FScriptContainerElement *)&local_a0 <
                   local_b8.Data + (longlong)local_b0._4_4_ * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((int)local_b0 == local_b0._4_4_) {
                local_b0._0_4_ =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_b8,(int *)((longlong)&local_b0 + 4));
              }
              iVar15 = (int)local_b0 + 1;
              *(int *)(local_b8.Data + (longlong)(int)local_b0 * 4) = local_a0;
              local_b0._0_4_ = iVar15;
              if (((local_b8.Data <= (FScriptContainerElement *)&local_8c) &&
                  ((FScriptContainerElement *)&local_8c <
                   local_b8.Data + (longlong)local_b0._4_4_ * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((int)local_b0 == local_b0._4_4_) {
                local_b0._0_4_ =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_b8,(int *)((longlong)&local_b0 + 4));
              }
              iVar15 = (int)local_b0 + 1;
              *(int *)(local_b8.Data + (longlong)(int)local_b0 * 4) = local_8c;
              local_b0._0_4_ = iVar15;
              if (((local_b8.Data <= (FScriptContainerElement *)&local_9c) &&
                  ((FScriptContainerElement *)&local_9c <
                   local_b8.Data + (longlong)local_b0._4_4_ * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar7 = (int)local_b0;
              if ((int)local_b0 == local_b0._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_b8,(int *)((longlong)&local_b0 + 4));
              }
              iVar15 = iVar7 + 1;
              iVar11 = iVar11 + 1;
              local_b0 = CONCAT44(local_b0._4_4_,iVar15);
              *(int *)(local_b8.Data + (longlong)iVar7 * 4) = local_9c;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
            iVar20 = iVar20 + 1;
            iVar13 = iVar13 + uVar17 + 1;
            lVar19 = local_78;
          } while (iVar20 < (int)uVar17);
        }
        pFVar9 = ::operator_new(0x58);
        if (pFVar9 == (FIndexBuffer *)0x0) {
          pFVar9 = (FIndexBuffer *)0x0;
        }
        else {
          FIndexBuffer::FIndexBuffer(pFVar9);
          pFVar9->_padding_ = (longlong)&___7__FRawStaticIndexBuffer16or32_I__6B_;
          pFVar9[1]._padding_ = (longlong)&___7__TResourceArray_I_0A___6B_;
          pFVar9[1]._padding_ = 0;
          pFVar9[1]._padding_ = 0;
          pFVar9[1]._padding_ = 0;
          *(undefined1 *)&pFVar9[1].IndexBufferRHI.Reference = 0;
          *(undefined4 *)&pFVar9[2]._padding_ = 0;
        }
        (**(code **)(pFVar9->_padding_ + 0x98))(pFVar9,&local_b8);
        (**(code **)(pFVar9->_padding_ + 0x18))(pFVar9,param_1);
        uVar8 = 0;
        if ((int)uVar12 < (this->ZeroOffsetIndexBuffers).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(FIndexBuffer **)((this->ZeroOffsetIndexBuffers).AllocatorInstance.Data + lVar19 * 8) =
             pFVar9;
        if (local_b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data);
        }
      }
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      uVar12 = uVar12 - 1;
      lVar19 = lVar19 + -1;
      local_78 = lVar19;
    } while (-1 < (int)uVar12);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return;
}

// FLandscapeSharedBuffers @ 145f7adb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FLandscapeSharedBuffers * __thiscall
FLandscapeSharedBuffers::FLandscapeSharedBuffers
          (FLandscapeSharedBuffers *this,FRHICommandListBase *param_1,int param_2,int param_3,
          int param_4,int param_5,Type param_6,FName *param_7)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  FLandscapeVertexBuffer *this_00;
  ulong64 uVar12;
  FIndexBuffer **_Dst;
  FLandscapeIndexRanges *_Dst_00;
  FLandscapeSharedBuffers *pFVar13;
  FName FVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FLandscapeVertexBuffer *pFVar17;
  longlong lVar18;
  int iVar19;
  FRenderResource *this_01;
  float fVar20;
  
  this->SharedBuffersKey = param_2;
  pFVar17 = (FLandscapeVertexBuffer *)0x0;
  this->_padding_ = (longlong)&___7FLandscapeSharedBuffers__6B_;
  iVar19 = param_3 + 1;
  *(undefined4 *)&this->_padding_ = 0;
  this->SubsectionSizeVerts = iVar19;
  iVar9 = 1;
  if (iVar19 != 0) {
    iVar9 = iVar19;
  }
  this->VertexBuffer = (FLandscapeVertexBuffer *)0x0;
  this->VertexFactory = (FLandscapeVertexFactory *)0x0;
  this->FixedGridVertexFactory = (FLandscapeVertexFactory *)0x0;
  this->TileMesh = (FRenderResource *)0x0;
  this->TileVertexFactory = (FLandscapeVertexFactory *)0x0;
  uVar2 = (ulonglong)(iVar9 - 1) * 2 + 1;
  this->TileDataBuffer = (FVertexBuffer *)0x0;
  lVar18 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  this->NumIndexBuffers = (int)lVar18;
  this->NumSubsections = param_4;
  (this->LandscapeFixedGridUniformShaderParameters).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LandscapeFixedGridUniformShaderParameters).ArrayNum = 0;
  (this->LandscapeFixedGridUniformShaderParameters).ArrayMax = 0;
  this->NumRayTracingSections = param_5;
  this->bUse32BitIndices = false;
  (this->GrassIndexMipOffsets).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  piVar1 = &(this->ZeroOffsetIndexBuffers).ArrayNum;
  this->GrassIndexBuffer = (FIndexBuffer *)0x0;
  (this->GrassIndexMipOffsets).ArrayNum = 0;
  (this->GrassIndexMipOffsets).ArrayMax = 8;
  *piVar1 = 0;
  (this->ZeroOffsetIndexBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar11 = &(this->ZeroOffsetIndexBuffers).ArrayMax;
  *piVar11 = 0;
  this->NumVertices =
       this->NumSubsections * this->NumSubsections * this->SubsectionSizeVerts *
       this->SubsectionSizeVerts;
  this_00 = ::operator_new(0x38);
  if (this_00 != (FLandscapeVertexBuffer *)0x0) {
    iVar9 = this->NumSubsections;
    iVar19 = this->SubsectionSizeVerts;
    iVar3 = this->NumVertices;
    FVertexBuffer::FVertexBuffer((FVertexBuffer *)this_00);
    this_00->FeatureLevel = param_6;
    this_00->_padding_ = (longlong)&___7FLandscapeVertexBuffer__6B_;
    this_00->NumVertices = iVar3;
    this_00->SubsectionSizeVerts = iVar19;
    this_00->NumSubsections = iVar9;
    this_00->_padding_ = (longlong)*param_7;
    FRenderResource::InitResource((FRenderResource *)this_00,param_1);
    pFVar17 = this_00;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (longlong)this->NumIndexBuffers;
  uVar12 = SUB168(ZEXT816(8) * auVar5,0);
  this->VertexBuffer = pFVar17;
  if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
    uVar12 = 0xffffffffffffffff;
  }
  _Dst = operator_new__(uVar12);
  this->IndexBuffers = _Dst;
  memset(_Dst,0,(longlong)this->NumIndexBuffers << 3);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (longlong)this->NumIndexBuffers;
  uVar12 = SUB168(ZEXT816(0x28) * auVar6,0);
  if (SUB168(ZEXT816(0x28) * auVar6,8) != 0) {
    uVar12 = 0xffffffffffffffff;
  }
  _Dst_00 = operator_new__(uVar12);
  if (_Dst_00 == (FLandscapeIndexRanges *)0x0) {
    _Dst_00 = (FLandscapeIndexRanges *)0x0;
  }
  else {
    memset(_Dst_00,0,uVar12);
  }
  this->IndexRanges = _Dst_00;
  bVar8 = IsRayTracingEnabled();
  if (bVar8) {
    iVar9 = this->NumIndexBuffers;
    iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar9,&(this->ZeroOffsetIndexBuffers).AllocatorInstance,piVar1,piVar11);
    memset((this->ZeroOffsetIndexBuffers).AllocatorInstance.Data + (longlong)iVar19 * 8,0,
           (longlong)iVar9 << 3);
  }
  if (this->NumVertices < 0x10000) {
    CreateIndexBuffers<unsigned_short>(this,param_1,param_7);
    if ((GGrassMapUseRuntimeGeneration != 0) ||
       (GGrassMapAlwaysBuildRuntimeGenerationResources != 0)) {
      CreateGrassIndexBuffer<unsigned_short>(this,param_1,param_7);
    }
  }
  else {
    this->bUse32BitIndices = true;
    CreateIndexBuffers<unsigned_int>(this,param_1,param_7);
    if ((GGrassMapUseRuntimeGeneration != 0) ||
       (GGrassMapAlwaysBuildRuntimeGenerationResources != 0)) {
      CreateGrassIndexBuffer<unsigned_int>(this,param_1,param_7);
    }
  }
  iVar9 = 1;
  if (this->SubsectionSizeVerts != 0) {
    iVar9 = this->SubsectionSizeVerts;
  }
  uVar2 = (ulonglong)(iVar9 - 1) * 2 + 1;
  lVar18 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  iVar19 = (int)lVar18;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,iVar19,
                     &(this->LandscapeFixedGridUniformShaderParameters).AllocatorInstance,
                     &(this->LandscapeFixedGridUniformShaderParameters).ArrayNum,
                     &(this->LandscapeFixedGridUniformShaderParameters).ArrayMax);
  DefaultConstructItems<TUniformBuffer<FLandscapeFixedGridUniformShaderParameters>,int>
            ((this->LandscapeFixedGridUniformShaderParameters).AllocatorInstance.Data +
             (longlong)iVar9 * 0x38,iVar19);
  fVar7 = __real_3f800000;
  uVar16 = 0;
  if (0 < iVar19) {
    lVar18 = 0;
    do {
      fVar20 = (float)((this->SubsectionSizeVerts >> ((byte)uVar16 & 0x1f)) + -1);
      uVar10 = 0;
      if ((int)uVar16 < (this->LandscapeFixedGridUniformShaderParameters).ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FLandscapeSharedBuffers *)(*pcVar4)();
        return pFVar13;
      }
      this_01 = (FRenderResource *)
                ((this->LandscapeFixedGridUniformShaderParameters).AllocatorInstance.Data + lVar18);
      FVar14 = this_01[1].ResourceName;
      if (FVar14 == (FName)0x0) {
        FVar14 = (FName)FMemory::Malloc(0x10,0x10);
        this_01[1].ResourceName = FVar14;
      }
      *(float *)FVar14 = (float)(int)uVar16;
      *(undefined4 *)((longlong)FVar14 + 4) = 0;
      *(float *)((longlong)FVar14 + 8) = fVar20;
      *(float *)((longlong)FVar14 + 0xc) = fVar7 / fVar20;
      FRenderResource::UpdateRHI(this_01,param_1);
      uVar10 = 0;
      if ((int)uVar16 < (this->LandscapeFixedGridUniformShaderParameters).ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FLandscapeSharedBuffers *)(*pcVar4)();
        return pFVar13;
      }
      pFVar15 = (this->LandscapeFixedGridUniformShaderParameters).AllocatorInstance.Data + lVar18;
      (**(code **)(*(longlong *)pFVar15 + 0x18))(pFVar15,param_1);
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 0x38;
    } while ((int)uVar16 < iVar19);
  }
  return this;
}

// FLandscapeSharedBuffers @ 145f7b210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FLandscapeSharedBuffers * __thiscall
FLandscapeSharedBuffers::FLandscapeSharedBuffers
          (FLandscapeSharedBuffers *this,FRHICommandListBase *param_1,int param_2,int param_3,
          int param_4,Type param_5,FName *param_6)

{
  FLandscapeSharedBuffers(this,param_1,param_2,param_3,param_4,1,param_5,param_6);
  this->_padding_ = (longlong)&___7FLandscapeSharedBuffers__6B_;
  return this;
}

// ~FLandscapeSharedBuffers @ 145f7de50

void __thiscall FLandscapeSharedBuffers::~FLandscapeSharedBuffers(FLandscapeSharedBuffers *this)

{
  FLandscapeVertexBuffer *this_00;
  undefined8 *puVar1;
  longlong *plVar2;
  FIndexBuffer *pFVar3;
  FLandscapeVertexFactory *pFVar4;
  FRenderResource *pFVar5;
  FVertexBuffer *pFVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<int> FVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  uint local_res8 [2];
  
  local_res8[0] = this->SharedBuffersKey;
  this->_padding_ = (longlong)&___7FLandscapeSharedBuffers__6B_;
  if (FLandscapeComponentSceneProxy::SharedBuffersMap._8_4_ !=
      FLandscapeComponentSceneProxy::SharedBuffersMap._52_4_) {
    TSet<TTuple<unsigned_int,FLandscapeSharedBuffers_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeSharedBuffers_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_int>
              ((TSet<TTuple<unsigned_int,FLandscapeSharedBuffers_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeSharedBuffers_*,0>,FDefaultSetAllocator>
                *)&FLandscapeComponentSceneProxy::SharedBuffersMap,local_res8[0],local_res8);
  }
  this_00 = this->VertexBuffer;
  if (this_00 != (FLandscapeVertexBuffer *)0x0) {
    this_00->_padding_ = (longlong)&___7FLandscapeVertexBuffer__6B_;
    FRenderResource::ReleaseResource((FRenderResource *)this_00);
    FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this_00);
    ::operator_delete(this_00,0x38);
  }
  uVar13 = 0;
  uVar12 = uVar13;
  uVar15 = uVar13;
  if (0 < this->NumIndexBuffers) {
    do {
      (**(code **)(**(longlong **)(uVar15 + (longlong)this->IndexBuffers) + 0x20))();
      puVar1 = *(undefined8 **)(uVar15 + (longlong)this->IndexBuffers);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar15 = uVar15 + 8;
    } while ((int)uVar11 < this->NumIndexBuffers);
  }
  operator_delete__(this->IndexBuffers);
  operator_delete__(this->IndexRanges);
  bVar10 = IsRayTracingEnabled();
  if ((bVar10) && (0 < (this->ZeroOffsetIndexBuffers).ArrayNum)) {
    do {
      if (((this->ZeroOffsetIndexBuffers).ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar16 = (this->ZeroOffsetIndexBuffers).ArrayNum;
      plVar2 = *(longlong **)
                ((this->ZeroOffsetIndexBuffers).AllocatorInstance.Data + (longlong)iVar16 * 8 + -8);
      iVar16 = iVar16 + -1;
      (this->ZeroOffsetIndexBuffers).ArrayNum = iVar16;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(this->ZeroOffsetIndexBuffers).AllocatorInstance,iVar16,
                 &(this->ZeroOffsetIndexBuffers).ArrayMax);
      (**(code **)(*plVar2 + 0x20))(plVar2);
      (**(code **)*plVar2)(plVar2,1);
    } while (0 < (this->ZeroOffsetIndexBuffers).ArrayNum);
  }
  uVar12 = uVar13;
  if (0 < (this->LandscapeFixedGridUniformShaderParameters).ArrayNum) {
    do {
      uVar14 = (uint)uVar12;
      uVar11 = 0;
      if ((int)uVar14 < (this->LandscapeFixedGridUniformShaderParameters).ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      (**(code **)(*(longlong *)
                    ((this->LandscapeFixedGridUniformShaderParameters).AllocatorInstance.Data +
                    uVar13) + 0x20))();
      uVar13 = uVar13 + 0x38;
      uVar12 = (ulonglong)(uVar14 + 1);
    } while ((int)(uVar14 + 1) < (this->LandscapeFixedGridUniformShaderParameters).ArrayNum);
  }
  if (this->GrassIndexBuffer != (FIndexBuffer *)0x0) {
    (**(code **)(this->GrassIndexBuffer->_padding_ + 0x20))();
    pFVar3 = this->GrassIndexBuffer;
    if (pFVar3 != (FIndexBuffer *)0x0) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar4 = this->FixedGridVertexFactory;
  if (pFVar4 != (FLandscapeVertexFactory *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  pFVar4 = this->VertexFactory;
  if (pFVar4 != (FLandscapeVertexFactory *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  pFVar5 = this->TileMesh;
  if (pFVar5 != (FRenderResource *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  pFVar6 = this->TileDataBuffer;
  if (pFVar6 != (FVertexBuffer *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  pFVar4 = this->TileVertexFactory;
  if (pFVar4 != (FLandscapeVertexFactory *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  pFVar7 = (this->ZeroOffsetIndexBuffers).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  FVar8 = (this->GrassIndexMipOffsets).AllocatorInstance.SecondaryData;
  if (FVar8 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  DestructItems<TUniformBuffer<FLandscapeFixedGridUniformShaderParameters>,int>
            ((TUniformBuffer<FLandscapeFixedGridUniformShaderParameters> *)
             (this->LandscapeFixedGridUniformShaderParameters).AllocatorInstance.Data,
             (this->LandscapeFixedGridUniformShaderParameters).ArrayNum);
  pFVar7 = (this->LandscapeFixedGridUniformShaderParameters).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if (((int)this->_padding_ != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!NumRefs",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                          ,0xff,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  return;
}


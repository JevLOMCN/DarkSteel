// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 2

// ContainsTiles @ 14ea45d40

bool __thiscall
FImgMediaMipTiles::ContainsTiles
          (FImgMediaMipTiles *this,int param_1,FImgMediaTileSelection *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  FImgMediaTileSelection *this_00;
  undefined1 *puVar4;
  
  if (this == (FImgMediaMipTiles *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (*(int *)&(this->MipTiles).field_0x8 != *(int *)&(this->MipTiles).field_0x34) {
    puVar4 = *(undefined1 **)&(this->MipTiles).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->MipTiles).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->MipTiles).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar2 * 0x50 + *(longlong *)&this->MipTiles);
        if (*piVar3 == param_1) {
          this_00 = (FImgMediaTileSelection *)(piVar3 + 2);
          if (piVar3 == (int *)0x0) {
            this_00 = (FImgMediaTileSelection *)0x0;
          }
          if (this_00 != (FImgMediaTileSelection *)0x0) {
            bVar1 = FImgMediaTileSelection::Contains(this_00,param_2);
            goto LAB_14ea45dad;
          }
          break;
        }
        iVar2 = piVar3[0x12];
      } while (iVar2 != -1);
    }
  }
  bVar1 = false;
LAB_14ea45dad:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return bVar1;
}

// Include @ 14ea50950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FImgMediaMipTiles::Include(FImgMediaMipTiles *this,int param_1,FImgMediaTileSelection *param_2)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  FImgMediaTileSelection *pFVar7;
  undefined1 auStackY_88 [32];
  <lambda_1> local_58 [8];
  uint local_50 [2];
  TBitArray<FDefaultBitArrayAllocator> local_48;
  TIntPoint<int>_u_0 local_28;
  
  local_28 = (TIntPoint<int>_u_0)(__security_cookie.value ^ (ulonglong)auStackY_88);
  local_50[0] = param_1;
  if (this == (FImgMediaMipTiles *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (*(int *)&(this->MipTiles).field_0x8 != *(int *)&(this->MipTiles).field_0x34) {
    puVar6 = *(undefined1 **)&(this->MipTiles).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->MipTiles).field_0x38;
    }
    uVar4 = *(uint *)(puVar6 + (ulonglong)(*(int *)&(this->MipTiles).field_0x48 - 1U & local_50[0])
                               * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar4 * 0x50 + *(longlong *)&this->MipTiles);
        if (*puVar5 == local_50[0]) {
          pFVar7 = (FImgMediaTileSelection *)(puVar5 + 2);
          if (puVar5 == (uint *)0x0) {
            pFVar7 = (FImgMediaTileSelection *)0x0;
          }
          if (pFVar7 != (FImgMediaTileSelection *)0x0) {
            if (((pFVar7->Tiles).NumBits != (param_2->Tiles).NumBits) &&
               (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_2330921284600332182>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Assets\\ImgMediaMipMapInfo.cpp"
                                   ,0x6a,"Tiles.Num() == Other.Tiles.Num()"), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((pFVar7 == param_2) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("&A != &B",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x52d,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_48.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
            local_48.NumBits = 0;
            local_48.MaxBits = 0x80;
            UE::Core::Private::
            BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                      (&pFVar7->Tiles,&param_2->Tiles,&local_48,MaxSize,local_58);
            if (pFVar7 != (FImgMediaTileSelection *)&local_48) {
              if (local_48.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
                *(undefined8 *)(pFVar7->Tiles).AllocatorInstance.InlineData =
                     local_48.AllocatorInstance.InlineData._0_8_;
                *(undefined8 *)((pFVar7->Tiles).AllocatorInstance.InlineData + 8) =
                     local_48.AllocatorInstance.InlineData._8_8_;
              }
              FVar1 = (pFVar7->Tiles).AllocatorInstance.SecondaryData;
              if (FVar1 != (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)FVar1);
              }
              (pFVar7->Tiles).AllocatorInstance.SecondaryData =
                   local_48.AllocatorInstance.SecondaryData;
              (pFVar7->Tiles).NumBits = local_48.NumBits;
              (pFVar7->Tiles).MaxBits = local_48.MaxBits;
              local_48.NumBits = 0;
              local_48.MaxBits = 0;
              local_48.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
            }
            if (local_48.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_48.AllocatorInstance.SecondaryData);
            }
            goto LAB_14ea509eb;
          }
          break;
        }
        uVar4 = puVar5[0x12];
      } while (uVar4 != 0xffffffff);
    }
  }
  TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
  ::Emplace<int_const_&,FImgMediaTileSelection_const_&>
            ((TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
              *)&this->MipTiles,(int *)local_50,param_2);
LAB_14ea509eb:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}


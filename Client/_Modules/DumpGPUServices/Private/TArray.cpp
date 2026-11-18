// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DumpGPUServices
// Functions: 2

// Remove @ 14e2c0b00

int __thiscall
TArray<TSharedPtr<IHttpRequest,1>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Remove
          (TArray<TSharedPtr<IHttpRequest,1>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,TSharedPtr<IHttpRequest,1> *param_1)

{
  ForElementType<TSharedPtr<IHttpRequest,1>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<TSharedPtr<IHttpRequest,1>_> FVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<TSharedPtr<IHttpRequest,1>_>)this;
  if (FVar1 != (ForElementType<TSharedPtr<IHttpRequest,1>_>)0x0) {
    FVar5 = FVar1;
  }
  if ((ulonglong)FVar5 <= param_1) {
    FVar5 = (ForElementType<TSharedPtr<IHttpRequest,1>_>)this;
    if (FVar1 != (ForElementType<TSharedPtr<IHttpRequest,1>_>)0x0) {
      FVar5 = FVar1;
    }
    if ((param_1 < (TSharedPtr<IHttpRequest,1> *)((longlong)this->ArrayMax * 0x10 + (longlong)FVar5)
        ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar6 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<TSharedPtr<IHttpRequest,1>_>)this;
  if (FVar1 != (ForElementType<TSharedPtr<IHttpRequest,1>_>)0x0) {
    FVar5 = FVar1;
  }
  iVar12 = 0;
  bVar3 = *(IHttpRequest **)FVar5 != param_1->Object;
  lVar8 = 0;
  iVar10 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar11 = iVar10 + 1;
    if (lVar8 < lVar6) {
      plVar7 = (longlong *)(lVar8 * 0x10 + (longlong)FVar5);
      do {
        if (bVar3 != ((IHttpRequest *)*plVar7 != param_1->Object)) break;
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 1;
        plVar7 = plVar7 + 2;
      } while (lVar8 < lVar6);
    }
    iVar9 = iVar11 - iVar10;
    if (bVar3 == false) {
      DestructItems<TSharedPtr<IHttpRequest,1>,int>
                ((TSharedPtr<IHttpRequest,1> *)((longlong)iVar10 * 0x10 + (longlong)FVar5),iVar9);
    }
    else {
      if (iVar12 != iVar10) {
        memmove((longlong *)((longlong)iVar12 * 0x10 + (longlong)FVar5),
                (longlong *)((longlong)iVar10 * 0x10 + (longlong)FVar5),(longlong)iVar9 << 4);
      }
      iVar12 = iVar12 + iVar9;
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar10 = iVar11;
    if (lVar6 <= lVar8) {
      this->ArrayNum = iVar12;
      return iVar4 - iVar12;
    }
  } while( true );
}

// SetNum @ 14e2c0e00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDumpGPUHTTPUpload_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FDumpGPUHTTPUpload_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<FDumpGPUHTTPUpload_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<FDumpGPUHTTPUpload_*> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FDumpGPUHTTPUpload_*>_>
                      (8,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<FDumpGPUHTTPUpload_*>)0x0) {
      this = (TArray<FDumpGPUHTTPUpload_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 8),0,(longlong)(param_1 - iVar6) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<FDumpGPUHTTPUpload_*>)this;
        if (FVar2 != (ForElementType<FDumpGPUHTTPUpload_*>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 8);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 8),(longlong)iVar6 << 3);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FDumpGPUHTTPUpload_*>_>
                    (8,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}


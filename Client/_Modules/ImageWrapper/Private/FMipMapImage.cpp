// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 1

// AddMipImage @ 14267daf0

void __thiscall
FMipMapImage::AddMipImage
          (FMipMapImage *this,TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1,int param_2
          ,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  long64 lVar7;
  int local_28;
  int iStack_24;
  long64 lStack_20;
  longlong local_18;
  
  lStack_20 = (this->RawData).ArrayNum;
  local_28 = param_2;
  iStack_24 = param_3;
  lVar7 = ERawImageFormat::GetBytesPerPixel(this->Format);
  local_18 = lVar7 * (param_2 * param_3);
  pFVar2 = (this->SubImages).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)(this->SubImages).ArrayMax * 0x18))
  {
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
  iVar6 = (this->SubImages).ArrayNum;
  piVar1 = &(this->SubImages).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->SubImages).AllocatorInstance,piVar1);
  }
  (this->SubImages).ArrayNum = iVar6 + 1;
  pFVar3 = (this->SubImages).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x18;
  *(ulonglong *)pFVar2 = CONCAT44(iStack_24,local_28);
  *(long64 *)(pFVar2 + 8) = lStack_20;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0x18 + 0x10) = local_18;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::
  Append<unsigned_char,TSizedDefaultAllocator<64>_>(&this->RawData,param_1);
  return;
}


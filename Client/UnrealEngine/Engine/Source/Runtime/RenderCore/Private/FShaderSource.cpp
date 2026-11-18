// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 7

// FShaderSource @ 145e42c70

FShaderSource * __thiscall FShaderSource::FShaderSource(FShaderSource *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->Source).ArrayNum;
  piVar2 = &(this->Source).ArrayMax;
  *piVar1 = 0;
  piVar3 = &(this->SourceCompressed).ArrayMax;
  (this->Source).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceCompressed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceCompressed).ArrayNum = 0;
  *piVar2 = 0;
  *piVar3 = 0;
  this->DecompressedCharCount = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0xf,(ForAnyElementType *)this,piVar1,piVar2);
  pFVar4 = (this->Source).AllocatorInstance.Data;
  *(undefined8 *)pFVar4 = 0;
  *(undefined4 *)(pFVar4 + 8) = 0;
  *(undefined2 *)(pFVar4 + 0xc) = 0;
  pFVar4[0xe] = (FScriptContainerElement)0x0;
  (this->SourceCompressed).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->SourceCompressed).AllocatorInstance,0,piVar3);
  }
  this->DecompressedCharCount = 0;
  return this;
}

// FShaderSource @ 145e82e60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FShaderSource * __thiscall
FShaderSource::FShaderSource(FShaderSource *this,TStringView<char> *param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  char *_Src;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  
  uVar2 = *(undefined8 *)&param_1->Size;
  piVar1 = &(this->SourceCompressed).ArrayMax;
  (this->Source).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Source).ArrayNum = 0;
  (this->Source).ArrayMax = 0;
  iVar3 = (int)uVar2;
  iVar5 = param_2 + iVar3;
  (this->SourceCompressed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceCompressed).ArrayNum = 0;
  *piVar1 = 0;
  this->DecompressedCharCount = 0;
  TArray<char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->Source,iVar5 + 0xf,Default);
  pFVar4 = (this->Source).AllocatorInstance.Data + iVar5;
  *(undefined8 *)pFVar4 = 0;
  *(undefined4 *)(pFVar4 + 8) = 0;
  *(undefined2 *)(pFVar4 + 0xc) = 0;
  pFVar4[0xe] = (FScriptContainerElement)0x0;
  (this->SourceCompressed).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->SourceCompressed).AllocatorInstance,0,piVar1);
  }
  _Src = param_1->DataPtr;
  pFVar4 = (this->Source).AllocatorInstance.Data;
  this->DecompressedCharCount = 0;
  memcpy(pFVar4,_Src,(longlong)iVar3);
  return this;
}

// operator= @ 145e85fc0

FShaderSource * __thiscall FShaderSource::operator=(FShaderSource *this,FShaderSource *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    pFVar3 = (this->Source).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->Source).AllocatorInstance.Data = (param_1->Source).AllocatorInstance.Data;
    (param_1->Source).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Source).ArrayNum = (param_1->Source).ArrayNum;
    (this->Source).ArrayMax = (param_1->Source).ArrayMax;
    (param_1->Source).ArrayNum = 0;
    (param_1->Source).ArrayMax = 0;
  }
  pTVar1 = &param_1->SourceCompressed;
  pTVar2 = &this->SourceCompressed;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SourceCompressed).ArrayNum = (param_1->SourceCompressed).ArrayNum;
    (this->SourceCompressed).ArrayMax = (param_1->SourceCompressed).ArrayMax;
    (param_1->SourceCompressed).ArrayNum = 0;
    (param_1->SourceCompressed).ArrayMax = 0;
  }
  this->DecompressedCharCount = param_1->DecompressedCharCount;
  return this;
}

// operator= @ 145e86070

FShaderSource * __thiscall FShaderSource::operator=(FShaderSource *this,FAnsiString *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->SourceCompressed).ArrayMax;
  (this->SourceCompressed).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->SourceCompressed).AllocatorInstance,0,piVar1);
  }
  this->DecompressedCharCount = 0;
  piVar1 = &(param_1->Data).ArrayMax;
  piVar2 = &(param_1->Data).ArrayNum;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0xe,(ForAnyElementType *)param_1,piVar2,piVar1);
  pFVar4 = (param_1->Data).AllocatorInstance.Data + iVar3;
  *(undefined8 *)pFVar4 = 0;
  *(undefined4 *)(pFVar4 + 8) = 0;
  *(undefined2 *)(pFVar4 + 0xc) = 0;
  if (this != (FShaderSource *)param_1) {
    pFVar4 = (this->Source).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (this->Source).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Source).ArrayNum = *piVar2;
    (this->Source).ArrayMax = *piVar1;
    *piVar2 = 0;
    *piVar1 = 0;
  }
  return this;
}

// Compress @ 145e92690

void __thiscall FShaderSource::Compress(FShaderSource *this)

{
  int *piVar1;
  code *pcVar2;
  ECompressor EVar3;
  ECompressionLevel EVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  
  EVar3 = (ECompressor)GShaderSourceCompressionMethod;
  if ((ECompressor)GShaderSourceCompressionMethod != NotSet) {
    if ((this->DecompressedCharCount != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsCompressed()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderSource.cpp"
                           ,0x38,L"FShaderSource is already compressed"), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar4 = (ECompressionLevel)GShaderSourceCompressionLevel;
    iVar8 = (this->Source).ArrayNum;
    this->DecompressedCharCount = iVar8;
    uVar9 = FOodleDataCompression::CompressedBufferSizeNeeded((longlong)iVar8);
    iVar8 = (this->SourceCompressed).ArrayNum;
    piVar1 = &(this->SourceCompressed).ArrayNum;
    uVar6 = (uint)uVar9;
    if (iVar8 < (int)uVar6) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar6 - iVar8,&(this->SourceCompressed).AllocatorInstance,piVar1,
                 &(this->SourceCompressed).ArrayMax);
    }
    else {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar9 & 0xffffffff);
      }
      if ((int)uVar6 < iVar8) {
        uVar11 = iVar8 - uVar6;
        if (((int)(uVar11 | uVar6) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar11 != 0) {
          pFVar10 = (this->SourceCompressed).AllocatorInstance.Data + (int)uVar6;
          iVar8 = (*piVar1 - uVar6) - uVar11;
          if (iVar8 != 0) {
            memmove(pFVar10,pFVar10 + (int)uVar11,(longlong)iVar8);
          }
          *piVar1 = *piVar1 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&(this->SourceCompressed).AllocatorInstance,*piVar1,
                     &(this->SourceCompressed).ArrayMax);
        }
      }
    }
    uVar9 = FOodleDataCompression::Compress
                      ((this->SourceCompressed).AllocatorInstance.Data,(longlong)(int)uVar6,
                       (this->Source).AllocatorInstance.Data,(longlong)this->DecompressedCharCount,
                       EVar3,EVar4,false,0);
    iVar8 = *piVar1;
    uVar6 = (uint)uVar9;
    if (iVar8 < (int)uVar6) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,uVar6 - iVar8,&(this->SourceCompressed).AllocatorInstance,piVar1,
                         &(this->SourceCompressed).ArrayMax);
      memset((this->SourceCompressed).AllocatorInstance.Data + iVar7,0,
             (longlong)(int)(uVar6 - iVar8));
    }
    else {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar9 & 0xffffffff);
      }
      if ((int)uVar6 < iVar8) {
        uVar11 = iVar8 - uVar6;
        if (((int)(uVar11 | uVar6) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar11 != 0) {
          pFVar10 = (this->SourceCompressed).AllocatorInstance.Data + (int)uVar6;
          iVar8 = (*piVar1 - uVar11) - uVar6;
          if (iVar8 != 0) {
            memmove(pFVar10,pFVar10 + (int)uVar11,(longlong)iVar8);
          }
          *piVar1 = *piVar1 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&(this->SourceCompressed).AllocatorInstance,*piVar1,
                     &(this->SourceCompressed).ArrayMax);
        }
      }
    }
    (this->Source).ArrayNum = 0;
    if ((this->Source).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)this,0,&(this->Source).ArrayMax);
    }
  }
  return;
}

// Decompress @ 145e94460

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FShaderSource::Decompress(FShaderSource *this)

{
  if (this->DecompressedCharCount != 0) {
    TArray<char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Source,this->DecompressedCharCount,Default);
    FOodleDataCompression::Decompress
              ((this->Source).AllocatorInstance.Data,(longlong)this->DecompressedCharCount,
               (this->SourceCompressed).AllocatorInstance.Data,
               (longlong)(this->SourceCompressed).ArrayNum);
    (this->SourceCompressed).ArrayNum = 0;
    if ((this->SourceCompressed).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->SourceCompressed).AllocatorInstance,0,
                 &(this->SourceCompressed).ArrayMax);
    }
    this->DecompressedCharCount = 0;
  }
  return;
}

// Set @ 145eb47a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FShaderSource::Set(FShaderSource *this,TStringView<char> *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *_Src;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  iVar2 = param_1->Size;
  iVar4 = iVar2 + param_2;
  TArray<char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->Source,iVar4 + 0xf,Default);
  pFVar3 = (this->Source).AllocatorInstance.Data + iVar4;
  *(undefined8 *)pFVar3 = 0;
  *(undefined4 *)(pFVar3 + 8) = 0;
  *(undefined2 *)(pFVar3 + 0xc) = 0;
  pFVar3[0xe] = (FScriptContainerElement)0x0;
  piVar1 = &(this->SourceCompressed).ArrayMax;
  (this->SourceCompressed).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->SourceCompressed).AllocatorInstance,0,piVar1);
  }
  _Src = param_1->DataPtr;
  pFVar3 = (this->Source).AllocatorInstance.Data;
  this->DecompressedCharCount = 0;
  memcpy(pFVar3,_Src,(longlong)iVar2);
  return;
}


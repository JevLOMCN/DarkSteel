// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// CompressImage @ 148b2b8c0

bool __thiscall
FPNGThumbnailCompressor::CompressImage
          (FPNGThumbnailCompressor *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,int param_3,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  longlong *plVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  FName *pFVar9;
  FModuleManager *this_01;
  IModuleInterface *pIVar10;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar11;
  int *in_stack_ffffffffffffff90;
  int *piVar12;
  longlong *local_58;
  TReferenceControllerBase<1> *local_50;
  void *local_48 [4];
  
  this_00 = param_4;
  piVar12 = &param_4->ArrayMax;
  bVar8 = false;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_4->AllocatorInstance,0,piVar12);
    in_stack_ffffffffffffff90 = piVar12;
  }
  if (0 < param_1->ArrayNum) {
    pFVar9 = ::FName::FName((FName *)&param_4,"ImageWrapper");
    FVar2 = *pFVar9;
    this_01 = FModuleManager::Get();
    pIVar10 = FModuleManager::LoadModuleChecked(this_01,FVar2);
    (**(code **)((longlong)*pIVar10 + 0x58))(pIVar10,&local_58,0,0);
    if (local_58 != (longlong *)0x0) {
      if ((local_58 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      plVar4 = local_58;
      pcVar3 = *(code **)(*local_58 + 8);
      iVar1 = param_1->ArrayNum;
      if ((iVar1 < 1) &&
         (in_stack_ffffffffffffff90 = (int *)(longlong)iVar1,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      cVar7 = (*pcVar3)(plVar4,(param_1->AllocatorInstance).Data,(int *)(longlong)iVar1,param_2,
                        param_3,(ulonglong)in_stack_ffffffffffffff90 & 0xffffffffffffff00,8,0);
      if (cVar7 != '\0') {
        if ((local_58 == (longlong *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pTVar11 = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)
                  (**(code **)(*local_58 + 0x20))(local_58,local_48,0);
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<TSizedDefaultAllocator<64>_>
                  (this_00,pTVar11);
        if (local_48[0] != (void *)0x0) {
          FMemory::Free(local_48[0]);
        }
        bVar8 = true;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  }
  return bVar8;
}

// DecompressImage @ 148b31cb0

bool __thiscall
FPNGThumbnailCompressor::DecompressImage
          (FPNGThumbnailCompressor *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,int param_3,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  IImageWrapper *pIVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  FName *pFVar10;
  FModuleManager *this_00;
  IModuleInterface *pIVar11;
  longlong lVar12;
  IImageWrapper *local_38;
  TReferenceControllerBase<1> *local_30;
  
  pTVar4 = param_4;
  bVar9 = false;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  if (0 < param_1->ArrayNum) {
    pFVar10 = ::FName::FName((FName *)&param_4,"ImageWrapper");
    FVar2 = *pFVar10;
    this_00 = FModuleManager::Get();
    pIVar11 = FModuleManager::LoadModuleChecked(this_00,FVar2);
    (**(code **)((longlong)*pIVar11 + 0x58))(pIVar11,&local_38,0,0);
    if (local_38 != (IImageWrapper *)0x0) {
      if ((local_38 == (IImageWrapper *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pIVar5 = local_38;
      pcVar3 = *(code **)local_38->_padding_;
      iVar1 = param_1->ArrayNum;
      if ((iVar1 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      cVar8 = (*pcVar3)(pIVar5,(param_1->AllocatorInstance).Data,(longlong)iVar1);
      if (cVar8 != '\0') {
        if ((local_38 == (IImageWrapper *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        lVar12 = (**(code **)(local_38->_padding_ + 0x40))();
        if ((lVar12 != param_2) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ImageWrapper->GetWidth() == InWidth",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                               ,0x55c,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        if ((local_38 == (IImageWrapper *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        lVar12 = (**(code **)(local_38->_padding_ + 0x48))();
        if ((lVar12 != param_3) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ImageWrapper->GetHeight() == InHeight",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                               ,0x55d,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        if ((local_38 == (IImageWrapper *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        bVar6 = IImageWrapper::GetRaw(local_38,RGBA,8,pTVar4);
        bVar9 = false;
        if (bVar6) {
          bVar9 = true;
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  return bVar9;
}

// GetThumbnailCompressorName @ 148b43230

FName __thiscall FPNGThumbnailCompressor::GetThumbnailCompressorName(FPNGThumbnailCompressor *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FName___cdecl_FPNGThumbnailCompressor::GetThumbnailCompressorName(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FName___cdecl_FPNGThumbnailCompressor::GetThumbnailCompressorName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FName___cdecl_FPNGThumbnailCompressor::GetThumbnailCompressorName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_class_FName___cdecl_FPNGThumbnailCompressor::GetThumbnailCompressorName(void)const___ptr64'
                      ::__l2::CompressorName,L"PNG");
      _Init_thread_footer(&`public:_virtual_class_FName___cdecl_FPNGThumbnailCompressor::GetThumbnailCompressorName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_virtual_class_FName___cdecl_FPNGThumbnailCompressor::GetThumbnailCompressorName(void)const___ptr64'
       ::__l2::CompressorName;
  return in_RDX;
}

// IsLosslessCompression @ 148b640d0

bool __thiscall FPNGThumbnailCompressor::IsLosslessCompression(FPNGThumbnailCompressor *this)

{
  return true;
}


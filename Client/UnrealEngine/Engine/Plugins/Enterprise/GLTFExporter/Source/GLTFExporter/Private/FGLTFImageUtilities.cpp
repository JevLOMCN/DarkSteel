// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 7

// CompressToFormat @ 14e5e3ad0

bool __cdecl
FGLTFImageUtilities::CompressToFormat
          (FColor *param_1,TIntPoint<int> param_2,EImageFormat param_3,int param_4,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_5)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FName *pFVar7;
  FModuleManager *this;
  IModuleInterface *pIVar8;
  FName local_48;
  longlong *local_40;
  TReferenceControllerBase<1> *local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_30;
  
  FModuleManager::Get();
  pFVar7 = ::FName::FName(&local_48,L"ImageWrapper");
  FVar1 = *pFVar7;
  this = FModuleManager::Get();
  pIVar8 = FModuleManager::LoadModuleChecked(this,FVar1);
  (**(code **)((longlong)*pIVar8 + 0x58))(pIVar8,&local_40,param_3,0);
  if (local_40 != (longlong *)0x0) {
    if ((local_40 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    cVar6 = (**(code **)(*local_40 + 8))
                      (local_40,param_1,
                       (longlong)(param_2.field0_0x0._4_4_ * param_2.field0_0x0._0_4_) << 2,
                       (ulonglong)param_2.field0_0x0 & 0xffffffff,param_2.field0_0x0._4_4_,1,8,0);
    if (cVar6 != '\0') {
      if ((local_40 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      (**(code **)(*local_40 + 0x20))(local_40,&local_30,param_4);
      if (param_5 != &local_30) {
        pFVar2 = (param_5->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (param_5->AllocatorInstance).Data = local_30.AllocatorInstance.Data;
        param_5->ArrayNum = local_30.ArrayNum;
        param_5->ArrayMax = local_30.ArrayMax;
        local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_30.ArrayNum = 0;
        local_30.ArrayMax = 0;
      }
      if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
      return true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return false;
}

// CompressToFormat @ 14e5e3cb0

bool __cdecl
FGLTFImageUtilities::CompressToFormat
          (void *param_1,long64 param_2,int param_3,int param_4,ERGBFormat param_5,int param_6,
          EImageFormat param_7,int param_8,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_9)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FName *pFVar7;
  FModuleManager *this;
  IModuleInterface *pIVar8;
  FName local_48;
  longlong *local_40;
  TReferenceControllerBase<1> *local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_30;
  
  FModuleManager::Get();
  pFVar7 = ::FName::FName(&local_48,L"ImageWrapper");
  FVar1 = *pFVar7;
  this = FModuleManager::Get();
  pIVar8 = FModuleManager::LoadModuleChecked(this,FVar1);
  (**(code **)((longlong)*pIVar8 + 0x58))(pIVar8,&local_40,param_7,0);
  if (local_40 != (longlong *)0x0) {
    if ((local_40 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    cVar6 = (**(code **)(*local_40 + 8))(local_40,param_1,param_2,param_3,param_4,param_5,param_6,0)
    ;
    if (cVar6 != '\0') {
      if ((local_40 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      (**(code **)(*local_40 + 0x20))(local_40,&local_30,param_8);
      if (param_9 != &local_30) {
        pFVar2 = (param_9->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (param_9->AllocatorInstance).Data = local_30.AllocatorInstance.Data;
        param_9->ArrayNum = local_30.ArrayNum;
        param_9->ArrayMax = local_30.ArrayMax;
        local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_30.ArrayNum = 0;
        local_30.ArrayMax = 0;
      }
      if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.AllocatorInstance.Data);
      }
      bVar4 = true;
      goto LAB_14e5e3e43;
    }
  }
  bVar4 = false;
LAB_14e5e3e43:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return bVar4;
}

// CompressToJPEG @ 14e5e3e70

bool __cdecl
FGLTFImageUtilities::CompressToJPEG
          (FColor *param_1,TIntPoint<int> param_2,int param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_4)

{
  bool bVar1;
  
  bVar1 = CompressToFormat(param_1,param_2,JPEG,param_3,param_4);
  return bVar1;
}

// CompressToPNG @ 14e5e3e90

bool __cdecl
FGLTFImageUtilities::CompressToPNG
          (FColor *param_1,TIntPoint<int> param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_3)

{
  bool bVar1;
  
  bVar1 = CompressToFormat(param_1,param_2,PNG,0,param_3);
  return bVar1;
}

// GetFileExtension @ 14e5f6220

wchar_t * __cdecl FGLTFImageUtilities::GetFileExtension(EGLTFJsonMimeType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == PNG) {
    return L".png";
  }
  if (param_1 != JPEG) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Converters\\GLTFImageUtilities.cpp"
                       ,0xf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"";
  }
  return L".jpg";
}

// GetUniqueFilename @ 14e5ff6d0

FString * __cdecl
FGLTFImageUtilities::GetUniqueFilename
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::ConcatFF(__return_storage_ptr__,param_1,param_2);
  iVar4 = (__return_storage_ptr__->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    iVar4 = iVar4 + -1;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (param_3,uVar2,__return_storage_ptr__);
  if (iVar4 != -1) {
    iVar4 = 1;
    do {
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_48,iVar4);
      iVar3 = (param_1->Data).ArrayNum;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      uVar2 = iVar3 + 1 + (uint)(iVar3 == 0);
      local_58.Data.ArrayNum = iVar3;
      if ((int)uVar2 < iVar3) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar2,0,(ForAnyElementType *)&local_58,iVar3,&local_58.Data.ArrayMax);
      if (iVar3 != 0) {
        memcpy(local_58.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar3 * 2);
      }
      ::FString::AppendChar(&local_58,L'_');
      ::FString::ConcatFF(&local_38,&local_58,&local_48);
      ::FString::ConcatFF(&local_68,&local_38,param_2);
      if (__return_storage_ptr__ != &local_68) {
        pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data
        ;
        (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      iVar3 = (__return_storage_ptr__->Data).ArrayNum;
      iVar4 = iVar4 + 1;
      if (iVar3 == 0) {
        pwVar5 = L"";
        iVar3 = 0;
      }
      else {
        pwVar5 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
        iVar3 = iVar3 + -1;
      }
      uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
      iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>(param_3,uVar2,__return_storage_ptr__);
    } while (iVar3 != -1);
  }
  return __return_storage_ptr__;
}

// NoAlphaNeeded @ 14e602380

bool __cdecl FGLTFImageUtilities::NoAlphaNeeded(FColor *param_1,TIntPoint<int> param_2)

{
  int iVar1;
  uchar *puVar2;
  longlong lVar3;
  
  iVar1 = param_2.field0_0x0._4_4_ * param_2.field0_0x0._0_4_;
  lVar3 = 0;
  if (0 < iVar1) {
    puVar2 = &(param_1->field0_0x0)._s_0.A;
    do {
      if (*puVar2 != 0xff) {
        return false;
      }
      lVar3 = lVar3 + 1;
      puVar2 = puVar2 + 4;
    } while (lVar3 < iVar1);
  }
  return true;
}


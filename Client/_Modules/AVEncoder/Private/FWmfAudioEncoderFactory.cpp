// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 5

// FWmfAudioEncoderFactory @ 148d00e10

FWmfAudioEncoderFactory * __thiscall
AVEncoder::FWmfAudioEncoderFactory::FWmfAudioEncoderFactory(FWmfAudioEncoderFactory *this)

{
  *this = (FWmfAudioEncoderFactory)&___7FWmfAudioEncoderFactory_AVEncoder__6B_;
  return this;
}

// ~FWmfAudioEncoderFactory @ 148d01f60

void __thiscall
AVEncoder::FWmfAudioEncoderFactory::~FWmfAudioEncoderFactory(FWmfAudioEncoderFactory *this)

{
  *this = (FWmfAudioEncoderFactory)&___7FAudioEncoderFactory_AVEncoder__6B_;
  return;
}

// CreateEncoder @ 148d07260

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<AVEncoder::FAudioEncoder,TDefaultDelete<AVEncoder::FAudioEncoder>_> __thiscall
AVEncoder::FWmfAudioEncoderFactory::CreateEncoder(FWmfAudioEncoderFactory *this,FString *param_1)

{
  int iVar1;
  FWmfAudioEncoder *pFVar2;
  wchar_t *pwVar3;
  undefined8 *in_R8;
  
  if (*(int *)(in_R8 + 1) == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)*in_R8;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,"aac");
  if (iVar1 == 0) {
    pFVar2 = ::operator_new(0xe8);
    if (pFVar2 != (FWmfAudioEncoder *)0x0) {
      pFVar2 = FWmfAudioEncoder::FWmfAudioEncoder(pFVar2,AAC);
      goto LAB_148d072e0;
    }
  }
  else if (1 < (byte)LogAVEncoder._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
  }
  pFVar2 = (FWmfAudioEncoder *)0x0;
LAB_148d072e0:
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)pFVar2;
  return (TUniquePtr<AVEncoder::FAudioEncoder,TDefaultDelete<AVEncoder::FAudioEncoder>_>)
         (FAudioEncoder *)param_1;
}

// GetName @ 148d0b8b0

wchar_t * __thiscall AVEncoder::FWmfAudioEncoderFactory::GetName(FWmfAudioEncoderFactory *this)

{
  return L"wmf";
}

// GetSupportedCodecs @ 148d0bc60

/* WARNING: Removing unreachable block (ram,0x000148d0bd53) */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
AVEncoder::FWmfAudioEncoderFactory::GetSupportedCodecs
          (FWmfAudioEncoderFactory *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  FString local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_18,L"aac");
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 <
       pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_18.Data.ArrayMax;
  return __return_storage_ptr__;
}


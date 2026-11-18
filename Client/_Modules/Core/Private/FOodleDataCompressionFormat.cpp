// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// ~FOodleDataCompressionFormat @ 141589f40

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void __thiscall
FOodleDataCompressionFormat::~FOodleDataCompressionFormat(FOodleDataCompressionFormat *this)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  return;
}

// Compress @ 1415b1090

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOodleDataCompressionFormat::Compress
          (FOodleDataCompressionFormat *this,void *param_1,long64 *param_2,void *param_3,
          long64 param_4,ulong64 param_5,ECompressionFlags param_6)

{
  long64 lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  ECompressor EVar6;
  ECompressionLevel EVar7;
  longlong lVar8;
  longlong local_res8;
  
  lVar1 = *param_2;
  cVar3 = (**(code **)(this->_padding_ + 0x68))(this,&local_res8,param_4,param_5);
  if (cVar3 == '\0') {
    return false;
  }
  if ((lVar1 < local_res8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompressedBufferSize >= CheckCompressedBufferSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\OodleDataCompressionFormat.cpp"
                         ,0xd8,L"The compressed buffer size (%ld) must be larger than %ld"), bVar4))
  {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((param_6 >> 8 & 1) != 0) {
    if (this->OodleLZCompressFuncPtr ==
        (_func___cdecl_long64_OodleLZ_Compressor_void_ptr_long64_void_ptr_OodleLZ_CompressionLevel_OodleLZ_CompressOptions_ptr_void_ptr_void_ptr
         *)0x0) {
      lVar8 = OodleLZ_Compress(this->Compressor,param_3,param_4,param_1,this->CompressionLevel,
                               (OodleLZ_CompressOptions *)&this->CompressionOptions,(void *)0x0,
                               (void *)0x0,(void *)0x0,0);
    }
    else {
      lVar8 = (*this->OodleLZCompressFuncPtr)
                        (this->Compressor,param_3,param_4,param_1,this->CompressionLevel,
                         (OodleLZ_CompressOptions *)0x0,(void *)0x0,(void *)0x0);
    }
    goto joined_r0x0001415b1214;
  }
  if (param_6 == COMPRESS_NoFlags) {
LAB_1415b11e8:
    EVar6 = Kraken;
    EVar7 = Fast;
  }
  else if (param_6 == COMPRESS_BiasMemory) {
    EVar6 = Kraken;
    EVar7 = Normal;
  }
  else if (param_6 == COMPRESS_BiasSpeed) {
    EVar6 = Mermaid;
    EVar7 = HyperFast2;
  }
  else {
    if (param_6 != COMPRESS_ForPackaging) {
      if (1 < (byte)OodleDataCompression._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
      }
      goto LAB_1415b11e8;
    }
    EVar6 = Kraken;
    EVar7 = Optimal2;
  }
  lVar8 = FOodleDataCompression::Compress(param_1,lVar1,param_3,param_4,EVar6,EVar7,false,0);
joined_r0x0001415b1214:
  if (lVar8 < 1) {
    *param_2 = -1;
    return false;
  }
  *param_2 = lVar8;
  return true;
}

// DoesOwnWorthDecompressingCheck @ 1415be5d0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

bool __thiscall
FOodleDataCompressionFormat::DoesOwnWorthDecompressingCheck(FOodleDataCompressionFormat *this)

{
  return true;
}

// GetCompressedBufferSize @ 1415c51a0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

bool __thiscall
FOodleDataCompressionFormat::GetCompressedBufferSize
          (FOodleDataCompressionFormat *this,long64 *param_1,long64 param_2,ulong64 param_3)

{
  long64 lVar1;
  
  lVar1 = OodleLZ_GetCompressedBufferSizeNeeded(this->Compressor,param_2);
  if (this->OodleLZCompressFuncPtr !=
      (_func___cdecl_long64_OodleLZ_Compressor_void_ptr_long64_void_ptr_OodleLZ_CompressionLevel_OodleLZ_CompressOptions_ptr_void_ptr_void_ptr
       *)0x0) {
    lVar1 = lVar1 + ((longlong)
                     (param_2 + 0x3ffff + (ulonglong)((uint)(param_2 + 0x3ffff >> 0x3f) & 0x3ffff))
                    >> 0x12) * 0x112;
  }
  *param_1 = lVar1;
  return true;
}

// GetCompressionFormatName @ 1415c52d0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

FName __thiscall
FOodleDataCompressionFormat::GetCompressionFormatName(FOodleDataCompressionFormat *this)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  FName in_RDX;
  undefined1 local_res10 [24];
  
  FVar1 = FNameEntryId::FromValidEName((EName)local_res10);
  *(undefined4 *)in_RDX = *(undefined4 *)CONCAT44(extraout_var,FVar1.Value);
  *(undefined4 *)((longlong)in_RDX + 4) = 0;
  return in_RDX;
}

// GetCompressorString @ 1415c53c0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

FString * __thiscall
FOodleDataCompressionFormat::GetCompressorString
          (FOodleDataCompressionFormat *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  OodleLZ_Compressor OVar3;
  wchar_t *pwVar4;
  ulong64 uVar5;
  
  OVar3 = this->Compressor;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  if (OVar3 == OodleLZ_Compressor_Kraken) {
    if (u_Kraken[0] == L'\0') {
      return __return_storage_ptr__;
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,7,(ForAnyElementType *)__return_storage_ptr__,0,piVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,7,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pwVar4 = L"Kraken";
  }
  else {
    if (OVar3 == OodleLZ_Compressor_Mermaid) {
      if (u_Mermaid[0] == L'\0') {
        return __return_storage_ptr__;
      }
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,8,(ForAnyElementType *)__return_storage_ptr__,0,piVar2);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,8,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
      uVar5 = 0x10;
      pwVar4 = L"Mermaid";
      goto LAB_1415c5611;
    }
    if (OVar3 != OodleLZ_Compressor_Selkie) {
      if (OVar3 == OodleLZ_Compressor_Hydra) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,6,(ForAnyElementType *)__return_storage_ptr__,0,piVar2);
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,6,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
        uVar5 = 0xc;
        pwVar4 = L"Hydra";
      }
      else if (OVar3 == OodleLZ_Compressor_Leviathan) {
        if (u_Leviathan[0] == L'\0') {
          return __return_storage_ptr__;
        }
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,10,(ForAnyElementType *)__return_storage_ptr__,0,piVar2);
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,10,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
        uVar5 = 0x14;
        pwVar4 = L"Leviathan";
      }
      else {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,8,(ForAnyElementType *)__return_storage_ptr__,0,piVar2);
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,8,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
        uVar5 = 0x10;
        pwVar4 = L"Unknown";
      }
      goto LAB_1415c5611;
    }
    if (u_Selkie[0] == L'\0') {
      return __return_storage_ptr__;
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,7,(ForAnyElementType *)__return_storage_ptr__,0,piVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,7,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    pwVar4 = L"Selkie";
  }
  uVar5 = 0xe;
LAB_1415c5611:
  FGenericPlatformString::Memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,pwVar4,uVar5)
  ;
  return __return_storage_ptr__;
}

// GetDDCKeySuffix @ 1415c5780

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

FString * __thiscall
FOodleDataCompressionFormat::GetDDCKeySuffix
          (FOodleDataCompressionFormat *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  ForAnyElementType FVar2;
  ulong64 uVar3;
  ForAnyElementType local_38;
  int local_30 [2];
  FString local_28;
  
  switch(this->CompressionLevel) {
  case OodleLZ_CompressionLevel_None:
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,5,&local_38,0,local_30 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,5,&local_38,local_30,local_30 + 1);
    uVar3 = 10;
    pwVar1 = L"None";
    break;
  case OodleLZ_CompressionLevel_SuperFast:
    FVar2.Data = (FScriptContainerElement *)0x0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    if (u_SuperFast[0] == L'\0') goto LAB_1415c5e88;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,10,&local_38,0,local_30 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,10,&local_38,local_30,local_30 + 1);
    uVar3 = 0x14;
    pwVar1 = L"SuperFast";
    break;
  case OodleLZ_CompressionLevel_VeryFast:
    FVar2.Data = (FScriptContainerElement *)0x0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    if (u_VeryFast[0] == L'\0') goto LAB_1415c5e88;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,9,&local_38,0,local_30 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,9,&local_38,local_30,local_30 + 1);
    uVar3 = 0x12;
    pwVar1 = L"VeryFast";
    break;
  case OodleLZ_CompressionLevel_Fast:
    FVar2.Data = (FScriptContainerElement *)0x0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    if (u_Fast[0] == L'\0') goto LAB_1415c5e88;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,5,&local_38,0,local_30 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,5,&local_38,local_30,local_30 + 1);
    uVar3 = 10;
    pwVar1 = L"Fast";
    break;
  case OodleLZ_CompressionLevel_Normal:
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,7,&local_38,0,local_30 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,7,&local_38,local_30,local_30 + 1);
    uVar3 = 0xe;
    pwVar1 = L"Normal";
    break;
  case OodleLZ_CompressionLevel_Optimal1:
    FVar2.Data = (FScriptContainerElement *)0x0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    if (u_Optimal1[0] == L'\0') goto LAB_1415c5e88;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,9,&local_38,0,local_30 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,9,&local_38,local_30,local_30 + 1);
    uVar3 = 0x12;
    pwVar1 = L"Optimal1";
    break;
  case OodleLZ_CompressionLevel_Optimal:
    FVar2.Data = (FScriptContainerElement *)0x0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    if (u_Optimal2[0] == L'\0') goto LAB_1415c5e88;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,9,&local_38,0,local_30 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,9,&local_38,local_30,local_30 + 1);
    uVar3 = 0x12;
    pwVar1 = L"Optimal2";
    break;
  case OodleLZ_CompressionLevel_Optimal3:
    FVar2.Data = (FScriptContainerElement *)0x0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    if (u_Optimal3[0] == L'\0') goto LAB_1415c5e88;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,9,&local_38,0,local_30 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,9,&local_38,local_30,local_30 + 1);
    uVar3 = 0x12;
    pwVar1 = L"Optimal3";
    break;
  case OodleLZ_CompressionLevel_Optimal4:
    FVar2.Data = (FScriptContainerElement *)0x0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    if (u_Optimal4[0] == L'\0') goto LAB_1415c5e88;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,9,&local_38,0,local_30 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,9,&local_38,local_30,local_30 + 1);
    uVar3 = 0x12;
    pwVar1 = L"Optimal4";
    break;
  case OodleLZ_CompressionLevel_Max:
    FVar2.Data = (FScriptContainerElement *)0x0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    if (u_Optimal5[0] == L'\0') goto LAB_1415c5e88;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,9,&local_38,0,local_30 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,9,&local_38,local_30,local_30 + 1);
    uVar3 = 0x12;
    pwVar1 = L"Optimal5";
    break;
  case OodleLZ_CompressionLevel_HyperFast4:
    FVar2.Data = (FScriptContainerElement *)0x0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    if (u_HyperFast4[0] == L'\0') goto LAB_1415c5e88;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0xb,&local_38,0,local_30 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0xb,&local_38,local_30,local_30 + 1);
    uVar3 = 0x16;
    pwVar1 = L"HyperFast4";
    break;
  case OodleLZ_CompressionLevel_HyperFast3:
    FVar2.Data = (FScriptContainerElement *)0x0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    if (u_HyperFast3[0] == L'\0') goto LAB_1415c5e88;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0xb,&local_38,0,local_30 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0xb,&local_38,local_30,local_30 + 1);
    uVar3 = 0x16;
    pwVar1 = L"HyperFast3";
    break;
  case OodleLZ_CompressionLevel_HyperFast2:
    FVar2.Data = (FScriptContainerElement *)0x0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    if (u_HyperFast2[0] == L'\0') goto LAB_1415c5e88;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0xb,&local_38,0,local_30 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0xb,&local_38,local_30,local_30 + 1);
    uVar3 = 0x16;
    pwVar1 = L"HyperFast2";
    break;
  case OodleLZ_CompressionLevel_HyperFast:
    FVar2.Data = (FScriptContainerElement *)0x0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    if (u_HyperFast1[0] == L'\0') goto LAB_1415c5e88;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0xb,&local_38,0,local_30 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0xb,&local_38,local_30,local_30 + 1);
    uVar3 = 0x16;
    pwVar1 = L"HyperFast1";
    break;
  default:
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,8,&local_38,0,local_30 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,8,&local_38,local_30,local_30 + 1);
    uVar3 = 0x10;
    pwVar1 = L"Unknown";
  }
  FVar2.Data = local_38.Data;
  FGenericPlatformString::Memcpy(local_38.Data,pwVar1,uVar3);
LAB_1415c5e88:
  GetCompressorString(this,&local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"C_%s_CL_%s_%s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return __return_storage_ptr__;
}

// GetVersion @ 1415c8360

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

uint __thiscall FOodleDataCompressionFormat::GetVersion(FOodleDataCompressionFormat *this)

{
  return 0x51b2;
}

// OodleAlloc @ 1415d5f40

void * __cdecl FOodleDataCompressionFormat::OodleAlloc(long64 param_1,int param_2)

{
  void *pvVar1;
  long64 lStack_18;
  int iStack_10;
  
  lStack_18 = param_1;
  iStack_10 = param_2;
  pvVar1 = `FMemory_MallocInline'::__l2::<lambda_1>::operator()(&lStack_18);
  return pvVar1;
}

// OodleFree @ 1415d68c0

void __cdecl FOodleDataCompressionFormat::OodleFree(void *param_1)

{
  FLowLevelMemTracker *this;
  
  if (param_1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,param_1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,param_1);
  }
  return;
}

// Uncompress @ 141606a20

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

bool __thiscall
FOodleDataCompressionFormat::Uncompress
          (FOodleDataCompressionFormat *this,void *param_1,long64 param_2,void *param_3,
          long64 param_4,ulong64 param_5)

{
  bool bVar1;
  
  bVar1 = FOodleDataCompression::Decompress(param_1,param_2,param_3,param_4);
  return bVar1;
}


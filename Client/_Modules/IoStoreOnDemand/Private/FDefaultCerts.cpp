// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// FDefaultCerts @ 1445a25a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FDefaultCerts * __thiscall
`UE::IoStore::LoadDefaultHttpCertificates'::__l2::FDefaultCerts::FDefaultCerts
          (void *this,bool *param_1)

{
  int *piVar1;
  int iVar2;
  IFileManager *pIVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  ulong64 uVar6;
  FIoStatusBuilder *pFVar7;
  ForAnyElementType FVar8;
  undefined1 auStackY_2d8 [32];
  bool local_2a8 [16];
  TMemoryView<void_const_> local_298;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_288;
  FCertRoots local_278;
  FIoStatus local_270;
  FIoStatusBuilder local_258;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  FIoStatus::FIoStatus(this);
  *param_1 = true;
  FIoStatus::operator=(this,&FIoStatus::Ok);
  local_2a8[0] = false;
  if (GConfig != (FConfigCacheIni *)0x0) {
    FConfigCacheIni::GetBool
              (GConfig,L"/Script/Engine.NetworkSettings",L"n.VerifyPeer",local_2a8,&GEngineIni);
  }
  pIVar3 = IFileManager::Get();
  pTVar4 = &FPaths::EngineContentDir((FString *)&local_298)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_288,pTVar4,0x24 - (uint)(pTVar4->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_288,L"Certificates/ThirdParty/cacert.pem",0x22);
  if (local_298.Data != (wchar_t *)0x0) {
    FMemory::Free(local_298.Data);
  }
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_288.ArrayNum != 0) {
    FVar8.Data = local_288.AllocatorInstance.Data;
  }
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,FVar8.Data,0);
  if (plVar5 == (longlong *)0x0) {
    if (local_2a8[0] != false) {
      pFVar7 = FIoStatusBuilder::FIoStatusBuilder(&local_258,FileNotOpen);
      local_298.Size._0_4_ = 0x22;
      local_298.Data = L"Failed to open certificates file \'";
      pFVar7 = FIoStatusBuilder::operator<<(pFVar7,(TStringView<wchar_t> *)&local_298);
      local_298.Size._0_4_ = local_288.ArrayNum + -1;
      if (local_288.ArrayNum == 0) {
        local_298.Size._0_4_ = 0;
      }
      local_298.Data = local_288.AllocatorInstance.Data;
      pFVar7 = FIoStatusBuilder::operator<<(pFVar7,(TStringView<wchar_t> *)&local_298);
      local_298.Size = CONCAT44(local_298.Size._4_4_,1);
      local_298.Data = L"\'";
      pFVar7 = FIoStatusBuilder::operator<<(pFVar7,(TStringView<wchar_t> *)&local_298);
      FIoStatusBuilder::operator_FIoStatus(pFVar7,&local_270);
      FIoStatus::operator=(this,&local_270);
      FIoStatus::~FIoStatus(&local_270);
      FIoStatusBuilder::~FIoStatusBuilder(&local_258);
    }
  }
  else {
    uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5);
    FIoBuffer::FIoBuffer((FIoBuffer *)&local_270,uVar6);
    (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)local_270.ErrorMessage.Chars,uVar6);
    local_298.Data = *(void **)local_270.ErrorMessage.Chars;
    local_298.Size =
         (ulong64)CONCAT14(*(uchar *)(local_270.ErrorMessage.Chars + 0xc),
                           *(uint *)(local_270.ErrorMessage.Chars + 4));
    UE::IoStore::HTTP::FCertRoots::FCertRoots(&local_278,&local_298);
    UE::IoStore::HTTP::FCertRoots::Num(&local_278);
    UE::IoStore::HTTP::FCertRoots::SetDefault(&local_278);
    if (3 < (byte)LogIoStoreOnDemand._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    UE::IoStore::HTTP::FCertRoots::~FCertRoots(&local_278);
    if ((BufCore *)local_270.ErrorMessage.Chars != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_270.ErrorMessage.Chars);
      LOCK();
      piVar1 = (int *)(local_270.ErrorMessage.Chars + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_270.ErrorMessage.Chars);
        ::operator_delete(local_270.ErrorMessage.Chars,0x20);
      }
    }
    (**(code **)*plVar5)(plVar5,1);
  }
  if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.AllocatorInstance.Data);
  }
  return this;
}


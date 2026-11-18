// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// DoWork @ 141934e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncSHAVerify::DoWork(FAsyncSHAVerify *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  FString *pFVar6;
  longlong *plVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  FString local_58;
  FString local_48;
  FString local_38;
  uint local_28;
  
  if (4 < (byte)LogSHA._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSHA);
  }
  iVar5 = (this->Pathname).Data.ArrayNum;
  iVar11 = 0;
  iVar3 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar3 = iVar11;
  }
  if (0 < iVar3) {
    if (iVar5 == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(this->Pathname).Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_58,pwVar9);
    pFVar6 = FPaths::GetCleanFilename(&local_38,&local_58);
    pFVar6 = ::FString::ToLower(pFVar6,&local_48);
    iVar5 = (pFVar6->Data).ArrayNum;
    if (iVar5 == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      iVar11 = iVar5 + -1;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar9);
    iVar5 = TSet<TTuple<FString,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FString,unsigned_char_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FString,unsigned_char_*,0>,FDefaultSetAllocator>
                        *)&FSHA1::FullFileSHAHashMap,uVar4,pFVar6);
    plVar7 = (longlong *)0x0;
    if (iVar5 != -1) {
      plVar7 = (longlong *)((longlong)iVar5 * 0x20 + FSHA1::FullFileSHAHashMap._0_8_);
    }
    plVar10 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (plVar10 == (longlong *)0x0) {
      bVar12 = false;
      goto LAB_141934f9a;
    }
    if (this->Hash != (uchar *)0x0) {
      puVar1 = (undefined8 *)*plVar10;
      uVar2 = puVar1[1];
      *(undefined8 *)this->Hash = *puVar1;
      *(undefined8 *)(this->Hash + 8) = uVar2;
      *(undefined4 *)(this->Hash + 0x10) = *(undefined4 *)(puVar1 + 2);
    }
  }
  FSHA1::HashBuffer(this->Buffer,this->BufferSize,(uchar *)&local_38);
  lVar8 = *(longlong *)this->Hash - (longlong)local_38.Data.AllocatorInstance.Data;
  if ((lVar8 == 0) && (lVar8 = *(longlong *)(this->Hash + 8) - local_38.Data._8_8_, lVar8 == 0)) {
    lVar8 = (ulonglong)*(uint *)(this->Hash + 0x10) - (ulonglong)local_28;
  }
  bVar12 = lVar8 != 0;
LAB_141934f9a:
  if (this->bShouldDeleteBuffer != false) {
    FMemory::Free(this->Buffer);
  }
  if ((bVar12) && (4 < (byte)LogSHA._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSHA);
  }
  return;
}


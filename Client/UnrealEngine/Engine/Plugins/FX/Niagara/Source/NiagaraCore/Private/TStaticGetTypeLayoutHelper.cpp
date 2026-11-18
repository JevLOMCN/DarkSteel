// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraCore
// Functions: 7

// CallAppendHash @ 148dcb030

uint __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
::CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,8,param_3);
  return uVar1;
}

// CallDestroy @ 148dcb050

void __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
::CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  return;
}

// CallGetTargetAlignment @ 148dcb070

uint __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
::CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallToString @ 148dcb090

void __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
::CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
              FMemoryToStringContext *param_4)

{
  uint uVar1;
  FFieldLayoutDesc *pFVar2;
  FTypeLayoutDesc *pFVar3;
  int iVar4;
  
  TStringBuilderBase<wchar_t>::AppendfImpl(param_4->String,L"%s\n");
  param_4->Indent = param_4->Indent + 1;
  for (pFVar2 = param_2->Fields; pFVar2 != (FFieldLayoutDesc *)0x0; pFVar2 = pFVar2->Next) {
    if (((pFVar2->Flags & WithEditorOnly) == None) || ((param_3->Flags & 8) != 0)) {
      uVar1 = pFVar2->Offset;
      iVar4 = 0;
      pFVar3 = pFVar2->Type;
      if (0 < param_4->Indent) {
        do {
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_4->String,L"    ",4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_4->Indent);
      }
      TStringBuilderBase<wchar_t>::AppendfImpl(param_4->String,L"%s: ");
      if (pFVar2->BitFieldSize == '\0') {
        (*pFVar3->ToStringFunc)
                  ((void *)((ulonglong)uVar1 + (longlong)param_1),pFVar3,param_3,param_4);
      }
      else {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_4->String,L"(BITFIELD)\n",0xb);
      }
    }
  }
  param_4->Indent = param_4->Indent + -1;
  return;
}

// CallUnfrozenCopy @ 148dcb0a0

uint __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
::CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                  void *param_4)

{
  UNiagaraDataInterfaceBase *pUVar1;
  
  pUVar1 = TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>::Get
                     (param_2,param_1->PrevPointerTable);
  *(UNiagaraDataInterfaceBase **)param_4 = pUVar1;
  return 8;
}

// CallWriteMemoryImage @ 148dcb0d0

void __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPointerTableBase *pFVar4;
  UNiagaraDataInterfaceBase *pUVar5;
  ulonglong *puVar6;
  ulonglong local_18 [2];
  
  pFVar4 = FMemoryImageWriter::TryGetPrevPointerTable(param_1);
  pUVar5 = TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>::Get
                     (param_2,pFVar4);
  if (pUVar5 == (UNiagaraDataInterfaceBase *)0x0) {
    local_18[1] = 0;
    puVar6 = local_18 + 1;
  }
  else {
    pFVar4 = FMemoryImageWriter::GetPointerTable(param_1);
    uVar3 = (**(code **)((longlong)*pFVar4 + 8))(pFVar4,param_3,pUVar5);
    if (uVar3 == 0xffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index != (uint32)INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x49e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    puVar6 = local_18;
    local_18[0] = (ulonglong)uVar3 * 2 | 1;
  }
  FMemoryImageWriter::WriteBytes(param_1,puVar6,8);
  return;
}

// Do @ 148dcb1b0

FTypeLayoutDesc * __cdecl
TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
::Do(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 3;
    ::TypeBuffer[0x58] = '\b';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_TIndexedPtr<UNi;
    ::TypeBuffer._32_8_ = CallWriteMemoryImage;
    ::TypeBuffer._40_8_ = CallUnfrozenCopy;
    ::TypeBuffer._48_8_ = CallAppendHash;
    ::TypeBuffer._56_8_ = CallGetTargetAlignment;
    ::TypeBuffer._64_8_ = CallToString;
    ::TypeBuffer._24_8_ = CallDestroy;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = '\b';
    ::TypeBuffer[0x5d] = '\0';
    ::TypeBuffer[0x5e] = '\0';
    ::TypeBuffer[0x5f] = '\0';
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}


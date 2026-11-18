// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 3

// Decode<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_> @ 141da2d10

bool __cdecl
rapidjson::UTF16<wchar_t>::
Decode<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
          (EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream> *param_1,
          uint *param_2)

{
  MemoryStream *pMVar1;
  char *pcVar2;
  wchar_t wVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  
  pMVar1 = param_1->is_;
  wVar3 = param_1->current_;
  pcVar2 = pMVar1->src_;
  if (pcVar2 == pMVar1->end_) {
    cVar6 = '\0';
    cVar5 = '\0';
  }
  else {
    cVar6 = *pcVar2;
    pcVar4 = pcVar2 + 1;
    pMVar1->src_ = pcVar4;
    if (pcVar4 == pMVar1->end_) {
      cVar5 = '\0';
    }
    else {
      cVar5 = *pcVar4;
      pMVar1->src_ = pcVar2 + 2;
    }
  }
  param_1->current_ = CONCAT11(cVar5,cVar6);
  if ((ushort)(wVar3 + L'⠀') < 0x800) {
    if ((ushort)wVar3 < 0xdc00) {
      *param_2 = ((ushort)wVar3 & 0x3ff) << 10;
      wVar3 = EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>::Take(param_1)
      ;
      *param_2 = ((ushort)wVar3 & 0x3ff | *param_2) + 0x10000;
      return (ushort)(wVar3 + L'␀') < 0x400;
    }
    return false;
  }
  *param_2 = (uint)(ushort)wVar3;
  return true;
}

// Encode<rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>_> @ 141da6a40

void __cdecl
rapidjson::UTF16<wchar_t>::
Encode<rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>_>
          (GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_> *param_1,uint param_2)

{
  wchar_t **ppwVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_2 < 0x10000) {
    if (param_2 - 0xd800 < 0x800) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("codepoint < 0xD800 || codepoint > 0xDFFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\encodings.h"
                         ,0x117,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_1->dst_ == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("dst_ != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\stream.h"
                         ,199,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    if (0x10ffff < param_2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("codepoint <= 0x10FFFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\encodings.h"
                         ,0x11b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_1->dst_ == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("dst_ != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\stream.h"
                         ,199,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *param_1->dst_ = (ushort)(param_2 - 0x10000 >> 10) | 0xd800;
    ppwVar1 = &param_1->dst_;
    *ppwVar1 = *ppwVar1 + 1;
    if (*ppwVar1 == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("dst_ != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\stream.h"
                         ,199,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    param_2 = (uint)((ushort)(param_2 - 0x10000) & 0x3ff | 0xdc00);
  }
  *param_1->dst_ = (wchar_t)param_2;
  param_1->dst_ = param_1->dst_ + 1;
  return;
}

// Encode<rapidjson::GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::StackStream<wchar_t>_> @ 141da6b90

void __cdecl
rapidjson::UTF16<wchar_t>::
Encode<rapidjson::GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::StackStream<wchar_t>_>
          (StackStream<wchar_t> *param_1,uint param_2)

{
  Stack<rapidjson::CrtAllocator> *pSVar1;
  ushort *puVar2;
  code *pcVar3;
  bool bVar4;
  char *pcVar5;
  
  if (param_2 < 0x10000) {
    if (param_2 - 0xd800 < 0x800) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("codepoint < 0xD800 || codepoint > 0xDFFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\encodings.h"
                         ,0x117,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar1 = param_1->stack_;
    if ((longlong)pSVar1->stackEnd_ - (longlong)pSVar1->stackTop_ < 2) {
      internal::Stack<rapidjson::CrtAllocator>::Expand<wchar_t>(pSVar1,1);
    }
    if (pSVar1->stackTop_ == (char *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("stackTop_",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                         ,0x82,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((longlong)pSVar1->stackEnd_ - (longlong)pSVar1->stackTop_ < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                         ,0x83,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pcVar5 = pSVar1->stackTop_;
    pSVar1->stackTop_ = pcVar5 + 2;
  }
  else {
    if (0x10ffff < param_2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("codepoint <= 0x10FFFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\encodings.h"
                         ,0x11b,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar1 = param_1->stack_;
    if ((longlong)pSVar1->stackEnd_ - (longlong)pSVar1->stackTop_ < 2) {
      internal::Stack<rapidjson::CrtAllocator>::Expand<wchar_t>(pSVar1,1);
    }
    if (pSVar1->stackTop_ == (char *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("stackTop_",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                         ,0x82,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((longlong)pSVar1->stackEnd_ - (longlong)pSVar1->stackTop_ < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                         ,0x83,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar2 = (ushort *)pSVar1->stackTop_;
    pSVar1->stackTop_ = (char *)(puVar2 + 1);
    *puVar2 = (ushort)(param_2 - 0x10000 >> 10) | 0xd800;
    param_1->length_ = param_1->length_ + 1;
    pSVar1 = param_1->stack_;
    if ((longlong)pSVar1->stackEnd_ - (longlong)pSVar1->stackTop_ < 2) {
      internal::Stack<rapidjson::CrtAllocator>::Expand<wchar_t>(pSVar1,1);
    }
    if (pSVar1->stackTop_ == (char *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("stackTop_",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                         ,0x82,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((longlong)pSVar1->stackEnd_ - (longlong)pSVar1->stackTop_ < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                         ,0x83,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pcVar5 = pSVar1->stackTop_;
    pSVar1->stackTop_ = pcVar5 + 2;
    param_2 = (uint)((ushort)(param_2 - 0x10000) & 0x3ff | 0xdc00);
  }
  *(short *)pcVar5 = (short)param_2;
  param_1->length_ = param_1->length_ + 1;
  return;
}


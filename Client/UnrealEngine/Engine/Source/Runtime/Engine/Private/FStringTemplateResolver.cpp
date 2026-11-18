// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FStringTemplateResolver @ 147fa5610

FStringTemplateResolver * __thiscall
FStringTemplateResolver::FStringTemplateResolver
          (FStringTemplateResolver *this,FStringTemplate *param_1,uint param_2)

{
  this->Template = param_1;
  this->ChunkIndex = 0;
  this->NamedParameters =
       (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *
       )0x0;
  (this->ResolvedString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolvedString).Data.ArrayNum = 0;
  (this->ResolvedString).Data.ArrayMax = 0;
  ::FString::Reserve(&this->ResolvedString,param_2);
  return this;
}

// Advance @ 147fb3310

void __thiscall
FStringTemplateResolver::Advance(FStringTemplateResolver *this,TStringView<wchar_t> *param_1)

{
  TStringView<wchar_t> *pTVar1;
  int iVar2;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  FStringTemplate *pFVar9;
  int iVar10;
  
  pFVar9 = this->Template;
  uVar6 = this->ChunkIndex;
  if ((int)uVar6 < (pFVar9->Chunks).ArrayNum) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (pFVar9->Chunks).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (pFVar9->Chunks).AllocatorInstance.Data;
      pTVar1 = (TStringView<wchar_t> *)(pFVar8 + (longlong)(int)uVar6 * 0x18);
      if (pFVar8[(longlong)(int)uVar6 * 0x18 + 0x10] == (FScriptContainerElement)0x0) {
        iVar10 = (int)*(undefined8 *)&pTVar1->Size;
        pFVar8 = (FScriptContainerElement *)pTVar1->DataPtr;
LAB_147fb33f7:
        ::FString::AppendChars(&this->ResolvedString,(wchar_t *)pFVar8,iVar10);
      }
      else {
        if (pTVar1->Size < 1) {
          ::FString::AppendChars
                    (&this->ResolvedString,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
          this->ChunkIndex = this->ChunkIndex + 1;
          return;
        }
        this_00 = this->NamedParameters;
        if (this_00 !=
            (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
             *)0x0) {
          uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>
                            ((int)*(undefined8 *)&pTVar1->Size,pTVar1->DataPtr);
          pFVar7 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   ::FindByHash<TStringView<wchar_t>_>
                             ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                               *)this_00,uVar6,pTVar1);
          if (pFVar7 != (FString *)0x0) {
            iVar2 = (pFVar7->Data).ArrayNum;
            pFVar8 = (pFVar7->Data).AllocatorInstance.Data;
            iVar10 = iVar2 + -1;
            if (iVar2 == 0) {
              iVar10 = 0;
            }
            goto LAB_147fb33f7;
          }
        }
      }
      uVar6 = this->ChunkIndex + 1;
      this->ChunkIndex = uVar6;
      pFVar9 = this->Template;
    } while ((int)uVar6 < (pFVar9->Chunks).ArrayNum);
  }
  return;
}

// Finalize @ 147fcb690

FString * __thiscall
FStringTemplateResolver::Finalize
          (FStringTemplateResolver *this,FString *__return_storage_ptr__,uint param_1)

{
  TStringView<wchar_t> *pTVar1;
  int iVar2;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  FStringTemplate *pFVar9;
  int iVar10;
  
  pFVar9 = this->Template;
  uVar6 = this->ChunkIndex;
  if ((int)uVar6 < (pFVar9->Chunks).ArrayNum) {
    do {
      if ((int)uVar6 < (pFVar9->Chunks).ArrayNum) {
        do {
          uVar5 = 0;
          if ((int)uVar6 < (pFVar9->Chunks).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FString *)(*pcVar3)();
            return pFVar7;
          }
          pFVar8 = (pFVar9->Chunks).AllocatorInstance.Data;
          pTVar1 = (TStringView<wchar_t> *)(pFVar8 + (longlong)(int)uVar6 * 0x18);
          if (pFVar8[(longlong)(int)uVar6 * 0x18 + 0x10] == (FScriptContainerElement)0x0) {
            pFVar8 = (FScriptContainerElement *)pTVar1->DataPtr;
            iVar10 = (int)*(undefined8 *)&pTVar1->Size;
LAB_147fcb786:
            ::FString::AppendChars(&this->ResolvedString,(wchar_t *)pFVar8,iVar10);
          }
          else {
            if (pTVar1->Size < 1) {
              ::FString::AppendChars(&this->ResolvedString,L"",0);
              this->ChunkIndex = this->ChunkIndex + 1;
              uVar6 = this->ChunkIndex;
              break;
            }
            this_00 = this->NamedParameters;
            if (this_00 !=
                (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                 *)0x0) {
              uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>
                                ((int)*(undefined8 *)&pTVar1->Size,pTVar1->DataPtr);
              pFVar7 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                       ::FindByHash<TStringView<wchar_t>_>
                                 ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                                   *)this_00,uVar6,pTVar1);
              if (pFVar7 != (FString *)0x0) {
                iVar2 = (pFVar7->Data).ArrayNum;
                pFVar8 = (pFVar7->Data).AllocatorInstance.Data;
                iVar10 = iVar2 + -1;
                if (iVar2 == 0) {
                  iVar10 = 0;
                }
                goto LAB_147fcb786;
              }
            }
          }
          uVar6 = this->ChunkIndex + 1;
          this->ChunkIndex = uVar6;
          pFVar9 = this->Template;
        } while ((int)uVar6 < (pFVar9->Chunks).ArrayNum);
      }
      pFVar9 = this->Template;
    } while ((int)uVar6 < (pFVar9->Chunks).ArrayNum);
  }
  this->ChunkIndex = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data =
       (this->ResolvedString).Data.AllocatorInstance.Data;
  (this->ResolvedString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->ResolvedString).Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->ResolvedString).Data.ArrayMax;
  (this->ResolvedString).Data.ArrayNum = 0;
  (this->ResolvedString).Data.ArrayMax = 0;
  return __return_storage_ptr__;
}


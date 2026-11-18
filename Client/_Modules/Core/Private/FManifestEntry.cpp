// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FindContext @ 1416ee640

/* WARNING: Type propagation algorithm not settling */

FManifestContext * __thiscall
FManifestEntry::FindContext
          (FManifestEntry *this,FLocKey *param_1,TSharedPtr<FLocMetadataObject,1> *param_2)

{
  int iVar1;
  FLocMetadataObject *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FManifestContext *pFVar5;
  wchar_t *_Str1;
  wchar_t *_Str2;
  FManifestContext *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Contexts).ArrayNum;
  pFVar5 = (FManifestContext *)(this->Contexts).AllocatorInstance.Data;
  pFVar6 = pFVar5 + iVar1;
  do {
    if ((this->Contexts).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FManifestContext_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar6) {
      return (FManifestContext *)0x0;
    }
    if ((pFVar5->Key).Hash == param_1->Hash) {
      if ((param_1->Str).Data.ArrayNum == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
      }
      if ((pFVar5->Key).Str.Data.ArrayNum == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = (wchar_t *)(pFVar5->Key).Str.Data.AllocatorInstance.Data;
      }
      iVar4 = wcscmp(_Str1,_Str2);
      if (iVar4 == 0) {
        this_00 = (pFVar5->KeyMetadataObj).Object;
        if ((this_00 != (FLocMetadataObject *)0x0) == (param_2->Object != (FLocMetadataObject *)0x0)
           ) {
          if (this_00 == (FLocMetadataObject *)0x0) {
            return pFVar5;
          }
          if ((param_2->Object == (FLocMetadataObject *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FManifestContext *)(*pcVar2)();
            return pFVar5;
          }
          bVar3 = FLocMetadataObject::operator==(this_00,param_2->Object);
          if (bVar3) {
            return pFVar5;
          }
        }
      }
    }
    pFVar5 = pFVar5 + 1;
  } while( true );
}

// FindContextByKey @ 1416ee750

/* WARNING: Type propagation algorithm not settling */

FManifestContext * __thiscall
FManifestEntry::FindContextByKey(FManifestEntry *this,FLocKey *param_1)

{
  int iVar1;
  int iVar2;
  wchar_t *_Str1;
  wchar_t *_Str2;
  FManifestContext *pFVar3;
  FManifestContext *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Contexts).ArrayNum;
  pFVar3 = (FManifestContext *)(this->Contexts).AllocatorInstance.Data;
  pFVar4 = pFVar3 + iVar1;
  do {
    if ((this->Contexts).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FManifestContext_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) {
      return (FManifestContext *)0x0;
    }
    if ((pFVar3->Key).Hash == param_1->Hash) {
      if ((param_1->Str).Data.ArrayNum == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
      }
      if ((pFVar3->Key).Str.Data.ArrayNum == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = (wchar_t *)(pFVar3->Key).Str.Data.AllocatorInstance.Data;
      }
      iVar2 = wcscmp(_Str1,_Str2);
      if (iVar2 == 0) {
        return pFVar3;
      }
    }
    pFVar3 = pFVar3 + 1;
  } while( true );
}

// MergeContextPlatformInfo @ 141704bd0

void __thiscall
FManifestEntry::MergeContextPlatformInfo(FManifestEntry *this,FManifestContext *param_1)

{
  int iVar1;
  FLocMetadataObject *this_00;
  FLocMetadataObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  wchar_t *_Str1;
  wchar_t *_Str2;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Contexts).ArrayNum;
  pFVar6 = (this->Contexts).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x58;
  do {
    if ((this->Contexts).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FManifestContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar7) {
      return;
    }
    if (*(uint *)(pFVar6 + 0x10) == (param_1->Key).Hash) {
      if ((param_1->Key).Str.Data.ArrayNum == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = (wchar_t *)(param_1->Key).Str.Data.AllocatorInstance.Data;
      }
      if (*(int *)(pFVar6 + 8) == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = *(wchar_t **)pFVar6;
      }
      iVar5 = wcscmp(_Str1,_Str2);
      if (iVar5 == 0) {
        this_00 = *(FLocMetadataObject **)(pFVar6 + 0x48);
        pFVar2 = (param_1->KeyMetadataObj).Object;
        if ((this_00 != (FLocMetadataObject *)0x0) == (pFVar2 != (FLocMetadataObject *)0x0)) {
          if (this_00 != (FLocMetadataObject *)0x0) {
            if (pFVar2 == (FLocMetadataObject *)0x0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L"");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            bVar4 = FLocMetadataObject::operator==(this_00,(param_1->KeyMetadataObj).Object);
            if (!bVar4) goto LAB_141704cf2;
          }
          if ((*(FName *)(pFVar6 + 0x28) != (FName)0x0) &&
             (*(FName *)(pFVar6 + 0x28) != param_1->PlatformName)) {
            *(undefined8 *)(pFVar6 + 0x28) = 0;
            ::FString::Reset((FString *)(pFVar6 + 0x18),0);
          }
          if ((param_1->PlatformName == (FName)0x0) && (*(int *)(pFVar6 + 0x20) < 2)) {
            ::FString::operator=((FString *)(pFVar6 + 0x18),&param_1->SourceLocation);
          }
        }
      }
    }
LAB_141704cf2:
    pFVar6 = pFVar6 + 0x58;
  } while( true );
}


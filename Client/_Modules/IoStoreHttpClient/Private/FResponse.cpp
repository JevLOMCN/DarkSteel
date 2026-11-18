// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 9

// GetContentLength @ 144573840

long64 __thiscall UE::IoStore::HTTP::FResponse::GetContentLength(FResponse *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  FTransactRef *pFVar4;
  long64 lVar5;
  
  pFVar4 = FActivity::GetTransaction((FActivity *)this);
  uVar1 = pFVar4->Self;
  if ((uVar1 & 1) != 0) {
    return *(long64 *)((uVar1 ^ 1) + 0x30);
  }
  if (*(short *)(uVar1 + 0x122) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offsets.Headers > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                       ,0x14e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      lVar5 = (*pcVar2)();
      return lVar5;
    }
  }
  return *(long64 *)(uVar1 + 0x118);
}

// GetContentType @ 1445739f0

EMimeType __thiscall UE::IoStore::HTTP::FResponse::GetContentType(FResponse *this)

{
  int iVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  FTransactRef *pFVar5;
  longlong *plVar6;
  int iVar7;
  uchar *puVar8;
  longlong lVar9;
  TStringView<char8_t> local_88;
  uchar *local_78;
  int iStack_70;
  code *local_68 [2];
  longlong local_58 [3];
  longlong *local_40;
  uchar **local_38;
  char *pcStack_30;
  longlong lStack_28;
  
  local_78 = (uchar *)0x0;
  local_88.DataPtr = "Content-Type";
  local_38 = &local_78;
  local_88.Size = 0xc;
  iStack_70 = 0;
  pcStack_30 = "Content-Type";
  local_68[0] = (code *)0x0;
  lStack_28 = CONCAT44(local_88._12_4_,0xc);
  local_40 = FMemory::Malloc(0x20,8);
  *local_40 = (longlong)
              &Core::Private::Function::
               TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_40[1] = (longlong)local_38;
  local_40[2] = (longlong)pcStack_30;
  local_40[3] = CONCAT44(local_88._12_4_,0xc);
  if (local_40 + 1 != (longlong *)0x0) {
    local_68[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::IoStore::HTTP::FResponse::GetHeader'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
                  ::Call;
  }
  pFVar5 = FActivity::GetTransaction((FActivity *)this);
  FTransaction::ReadHeaders<TFunction<bool___cdecl(TStringView<char>,TStringView<char>)>_&>
            ((FTransaction *)pFVar5->Self,
             (TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    plVar6 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar6 = local_40;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  iVar7 = iStack_70;
  puVar8 = local_78;
  local_88.DataPtr = local_78;
  local_88.Size = iStack_70;
  iVar3 = String::FindFirstChar(&local_88,';',CaseSensitive);
  puVar2 = local_88.DataPtr;
  iVar4 = local_88.Size;
  if (iVar3 != -1) {
    iVar4 = 0;
    if (iVar3 < 0) {
      iVar4 = iVar3;
    }
    iVar1 = iVar3 - iVar4;
    if (iVar7 < iVar3 - iVar4) {
      iVar1 = iVar7;
    }
    iVar3 = iVar7 - iVar1;
    if (iVar4 + 0x7fffffff < iVar7 - iVar1) {
      iVar3 = iVar4 + 0x7fffffff;
    }
    puVar8 = puVar8 + iVar1;
    iVar7 = 0;
    if (0 < iVar3) {
      iVar7 = iVar3;
    }
    puVar2 = puVar8;
    iVar4 = iVar7;
    if (iVar7 != 0) {
      lVar9 = (longlong)iVar7;
      do {
        iVar3 = isspace((uint)puVar8[lVar9 + -1]);
        iVar4 = iVar7;
        if (iVar3 == 0) break;
        iVar7 = iVar7 + -1;
        lVar9 = lVar9 + -1;
        iVar4 = iVar7;
      } while (lVar9 != 0);
    }
  }
  local_88.Size = iVar4;
  local_88.DataPtr = puVar2;
  if (iVar7 != 0) {
    iVar4 = FGenericPlatformStricmp::Strnicmp((char *)puVar8,"text/html",(longlong)iVar7);
    if ((iVar4 == 0) && ("text/html"[iVar7] == '\0')) {
      return Text;
    }
    if (iVar7 != 0) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        ((char *)puVar8,"application/octet-stream",(longlong)iVar7);
      if ((iVar4 == 0) && ("application/octet-stream"[iVar7] == '\0')) {
        return Binary;
      }
      if (iVar7 != 0) {
        iVar4 = FGenericPlatformStricmp::Strnicmp((char *)puVar8,"application/json",(longlong)iVar7)
        ;
        if ((iVar4 == 0) && ("application/json"[iVar7] == '\0')) {
          return Json;
        }
        if (iVar7 != 0) {
          iVar4 = FGenericPlatformStricmp::Strnicmp
                            ((char *)puVar8,"application/xml",(longlong)iVar7);
          if ((iVar4 == 0) && ("application/xml"[iVar7] == '\0')) {
            return Xml;
          }
          if (iVar7 != 0) {
            iVar4 = FGenericPlatformStricmp::Strnicmp
                              ((char *)puVar8,"application/x-ue-cb",(longlong)iVar7);
            if ((iVar4 == 0) && ("application/x-ue-cb"[iVar7] == '\0')) {
              return CbObject;
            }
            if (iVar7 != 0) {
              iVar4 = FGenericPlatformStricmp::Strnicmp
                                ((char *)puVar8,"application/x-ue-pkg",(longlong)iVar7);
              if ((iVar4 == 0) && ("application/x-ue-pkg"[iVar7] == '\0')) {
                return CbPackage;
              }
              if (iVar7 != 0) {
                iVar4 = FGenericPlatformStricmp::Strnicmp
                                  ((char *)puVar8,"application/x-ue-comp",(longlong)iVar7);
                if ((iVar4 == 0) && ("application/x-ue-comp"[iVar7] == '\0')) {
                  return CompressedBuffer;
                }
              }
            }
          }
        }
      }
    }
  }
  return Unknown;
}

// GetContentType @ 144573ce0

void __thiscall
UE::IoStore::HTTP::FResponse::GetContentType(FResponse *this,TStringView<char> *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  FTransactRef *pFVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  TStringView<char8_t> local_98;
  undefined8 local_88;
  int iStack_80;
  undefined4 uStack_7c;
  code *local_78 [2];
  longlong local_68 [3];
  longlong *local_50;
  undefined8 *local_48;
  char *pcStack_40;
  longlong lStack_38;
  
  local_98.Size = 0xc;
  uVar3 = local_98._8_8_;
  local_98.DataPtr = "Content-Type";
  local_88 = 0;
  local_48 = &local_88;
  iStack_80 = 0;
  local_78[0] = (code *)0x0;
  pcStack_40 = "Content-Type";
  lStack_38 = local_98._8_8_;
  local_50 = FMemory::Malloc(0x20,8);
  *local_50 = (longlong)
              &Core::Private::Function::
               TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_50[1] = (longlong)local_48;
  local_50[2] = (longlong)pcStack_40;
  local_50[3] = uVar3;
  if (local_50 + 1 != (longlong *)0x0) {
    local_78[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::IoStore::HTTP::FResponse::GetHeader'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
                  ::Call;
  }
  pFVar5 = FActivity::GetTransaction((FActivity *)this);
  FTransaction::ReadHeaders<TFunction<bool___cdecl(TStringView<char>,TStringView<char>)>_&>
            ((FTransaction *)pFVar5->Self,
             (TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    plVar7 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar7 = local_50;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *(undefined4 *)&param_1->DataPtr = (undefined4)local_88;
  *(undefined4 *)((longlong)&param_1->DataPtr + 4) = local_88._4_4_;
  param_1->Size = iStack_80;
  *(undefined4 *)&param_1->field_0xc = uStack_7c;
  local_98.DataPtr = (uchar *)param_1->DataPtr;
  local_98.Size = iStack_80;
  iVar4 = String::FindFirstChar(&local_98,';',CaseSensitive);
  if (iVar4 != -1) {
    iVar8 = param_1->Size;
    iVar6 = 0;
    if (iVar4 < 0) {
      iVar6 = iVar4;
    }
    iVar2 = iVar4 - iVar6;
    if (iVar8 < iVar4 - iVar6) {
      iVar2 = iVar8;
    }
    iVar4 = iVar8 - iVar2;
    if (iVar6 + 0x7fffffff < iVar8 - iVar2) {
      iVar4 = iVar6 + 0x7fffffff;
    }
    pcVar1 = param_1->DataPtr;
    iVar8 = 0;
    if (0 < iVar4) {
      iVar8 = iVar4;
    }
    if (iVar8 != 0) {
      lVar9 = (longlong)iVar8;
      do {
        iVar4 = isspace((uint)(byte)(pcVar1 + iVar2)[lVar9 + -1]);
        if (iVar4 == 0) break;
        iVar8 = iVar8 + -1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    param_1->DataPtr = pcVar1 + iVar2;
    param_1->Size = iVar8;
    *(undefined4 *)&param_1->field_0xc = local_98._12_4_;
  }
  return;
}

// GetHeader @ 144574040

TStringView<char> * __thiscall
UE::IoStore::HTTP::FResponse::GetHeader
          (FResponse *this,TStringView<char> *__return_storage_ptr__,TStringView<char> *param_1)

{
  FTransactRef *pFVar1;
  longlong *plVar2;
  code *local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  TStringView<char> *local_28;
  char *pcStack_20;
  undefined8 uStack_18;
  
  pcStack_20 = param_1->DataPtr;
  uStack_18 = *(undefined8 *)&param_1->Size;
  __return_storage_ptr__->DataPtr = (char *)0x0;
  __return_storage_ptr__->Size = 0;
  local_58[0] = (code *)0x0;
  local_28 = __return_storage_ptr__;
  local_30 = FMemory::Malloc(0x20,8);
  local_30[1] = (longlong)local_28;
  local_30[2] = (longlong)pcStack_20;
  *local_30 = (longlong)
              &Core::Private::Function::
               TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_30[3] = *(longlong *)&param_1->Size;
  if (local_30 != (longlong *)&DAT_fffffffffffffff8) {
    local_58[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::IoStore::HTTP::FResponse::GetHeader'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
                  ::Call;
  }
  pFVar1 = FActivity::GetTransaction((FActivity *)this);
  FTransaction::ReadHeaders<TFunction<bool___cdecl(TStringView<char>,TStringView<char>)>_&>
            ((FTransaction *)pFVar1->Self,
             (TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)local_58);
  if (local_58[0] != (code *)0x0) {
    plVar2 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar2 = local_30;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetStatus @ 144574860

EStatusCodeClass __thiscall UE::IoStore::HTTP::FResponse::GetStatus(FResponse *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  EStatusCodeClass EVar4;
  FTransactRef *pFVar5;
  uint uVar6;
  
  pFVar5 = FActivity::GetTransaction((FActivity *)this);
  uVar1 = pFVar5->Self;
  if ((uVar1 & 1) == 0) {
    if (*(ushort *)(uVar1 + 0x128) < 100) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StatusCode >= 100",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                         ,0x13f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
    }
    uVar6 = (uint)*(ushort *)(uVar1 + 0x128);
  }
  else {
    uVar6 = *(uint *)((uVar1 ^ 1) + 0x38);
  }
  if (uVar6 < 200) {
    return Informational;
  }
  if (uVar6 < 300) {
    return Successful;
  }
  if (uVar6 < 400) {
    return Redirection;
  }
  if (uVar6 < 500) {
    return ClientError;
  }
  return (599 < uVar6) + ServerError;
}

// GetStatusCode @ 144574920

uint __thiscall UE::IoStore::HTTP::FResponse::GetStatusCode(FResponse *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTransactRef *pFVar5;
  
  pFVar5 = FActivity::GetTransaction((FActivity *)this);
  uVar1 = pFVar5->Self;
  if ((uVar1 & 1) != 0) {
    return *(uint *)((uVar1 ^ 1) + 0x38);
  }
  if (*(ushort *)(uVar1 + 0x128) < 100) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StatusCode >= 100",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                       ,0x13f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return (uint)*(ushort *)(uVar1 + 0x128);
}

// GetStatusMessage @ 144574a00

TStringView<char> * __thiscall
UE::IoStore::HTTP::FResponse::GetStatusMessage
          (FResponse *this,TStringView<char> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FTransactRef *pFVar4;
  TStringView<char> *pTVar5;
  char *pcVar6;
  int iVar7;
  
  pFVar4 = FActivity::GetTransaction((FActivity *)this);
  plVar1 = (longlong *)pFVar4->Self;
  if (((ulonglong)plVar1 & 1) == 0) {
    if (*(char *)((longlong)plVar1 + 0x121) == '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offsets.Message > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                         ,0x146,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TStringView<char> *)(*pcVar2)();
        return pTVar5;
      }
    }
    iVar7 = (uint)*(ushort *)((longlong)plVar1 + 0x122) - (uint)*(byte *)((longlong)plVar1 + 0x121);
    pcVar6 = (char *)((longlong)*(short *)((longlong)plVar1 + 0x124) +
                      (ulonglong)*(byte *)((longlong)plVar1 + 0x121) + *plVar1);
  }
  else {
    iVar7 = 0;
    pcVar6 = "";
  }
  __return_storage_ptr__->DataPtr = pcVar6;
  __return_storage_ptr__->Size = iVar7;
  return __return_storage_ptr__;
}

// ReadHeaders @ 14457cc70

void __thiscall
UE::IoStore::HTTP::FResponse::ReadHeaders
          (FResponse *this,TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *param_1)

{
  FTransactRef *pFVar1;
  longlong *plVar2;
  
  pFVar1 = FActivity::GetTransaction((FActivity *)this);
  FTransaction::ReadHeaders<TFunction<bool___cdecl(TStringView<char>,TStringView<char>)>_&>
            ((FTransaction *)pFVar1->Self,param_1);
  if (*(longlong *)param_1 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x00014457cca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// SetDestination @ 144581870

void __thiscall UE::IoStore::HTTP::FResponse::SetDestination(FResponse *this,FIoBuffer *param_1)

{
  *(FIoBuffer **)(this + 0x38) = param_1;
  return;
}


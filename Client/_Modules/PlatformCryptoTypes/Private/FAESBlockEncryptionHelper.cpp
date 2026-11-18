// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlatformCryptoTypes
// Functions: 3

// FAESBlockEncryptionHelper @ 14ea10220

FAESBlockEncryptionHelper * __thiscall
FAESBlockEncryptionHelper::FAESBlockEncryptionHelper(FAESBlockEncryptionHelper *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FAESBlockEncryptionHelper *pFVar3;
  
  this->BlockSize = param_1;
  (this->LeftoverDataBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeftoverDataBuffer).ArrayNum = 0;
  (this->LeftoverDataBuffer).ArrayMax = 0;
  if (param_1 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBlockSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlatformCrypto\\Source\\PlatformCryptoTypes\\Private\\PlatformCryptoTypes.cpp"
                       ,0x17,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAESBlockEncryptionHelper *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// Finalize @ 14ea10270

EPlatformCryptoResult __thiscall
FAESBlockEncryptionHelper::Finalize
          (FAESBlockEncryptionHelper *this,
          TFunctionRef<EPlatformCryptoResult___cdecl(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char,int>,int_&)>
          *param_1,TArrayView<unsigned_char,int> *param_2,int *param_3)

{
  int *piVar1;
  EPlatformCryptoResult EVar2;
  TArrayView<unsigned_char_const_,int> *pTVar3;
  int local_res8 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<unsigned_char_const_,int> local_28;
  
  *param_3 = 0;
  if (0 < (this->LeftoverDataBuffer).ArrayNum) {
    local_res8[0] = 0;
    pTVar3 = TArrayView<unsigned_char_const_,int>::
             TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                       (&local_28,&this->LeftoverDataBuffer);
    local_48 = *(undefined4 *)&param_2->DataPtr;
    uStack_44 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iStack_40 = param_2->ArrayNum;
    uStack_3c = *(undefined4 *)&param_2->field_0xc;
    local_38 = *(undefined4 *)&pTVar3->DataPtr;
    uStack_34 = *(undefined4 *)((longlong)&pTVar3->DataPtr + 4);
    iStack_30 = pTVar3->ArrayNum;
    uStack_2c = *(undefined4 *)&pTVar3->field_0xc;
    EVar2 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_38,&local_48,local_res8);
    if (EVar2 != Success) {
      return EVar2;
    }
    piVar1 = &(this->LeftoverDataBuffer).ArrayMax;
    *param_3 = *param_3 + local_res8[0];
    (this->LeftoverDataBuffer).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  return Success;
}

// Update @ 14ea10360

EPlatformCryptoResult __thiscall
FAESBlockEncryptionHelper::Update
          (FAESBlockEncryptionHelper *this,TArrayView<unsigned_char_const_,int> *param_1,
          TFunctionRef<EPlatformCryptoResult___cdecl(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char,int>,int_&)>
          *param_2,TArrayView<unsigned_char,int> *param_3,int *param_4)

{
  code *pcVar1;
  int *piVar2;
  bool bVar3;
  EPlatformCryptoResult EVar4;
  int iVar5;
  int iVar6;
  TArrayView<unsigned_char_const_,int> *pTVar7;
  uint uVar8;
  int *piVar9;
  int local_res8 [2];
  uchar *local_f8;
  ulonglong uStack_f0;
  uchar *local_e8;
  undefined8 uStack_e0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_8c;
  uchar *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  uchar *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  TArrayView<unsigned_char_const_,int> local_48;
  
  piVar2 = param_4;
  piVar9 = &(this->LeftoverDataBuffer).ArrayNum;
  uStack_f0._0_4_ = param_1->ArrayNum;
  *param_4 = 0;
  iVar5 = *piVar9;
  if (this->BlockSize < (int)(iVar5 + (uint)uStack_f0)) {
    local_f8 = param_1->DataPtr;
    uStack_f0 = *(ulonglong *)&param_1->ArrayNum;
    local_e8 = param_3->DataPtr;
    uStack_e0 = *(undefined8 *)&param_3->ArrayNum;
    if (0 < iVar5) {
      iVar5 = this->BlockSize - iVar5;
      if (iVar5 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AmountToTake >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlatformCrypto\\Source\\PlatformCryptoTypes\\Private\\PlatformCryptoTypes.cpp"
                           ,0x2e,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          EVar4 = (*pcVar1)();
          return EVar4;
        }
      }
      else if (0 < iVar5) {
        if (local_f8 == (uchar *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            EVar4 = (*pcVar1)();
            return EVar4;
          }
        }
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar5,(ForAnyElementType *)this,piVar9,
                           &(this->LeftoverDataBuffer).ArrayMax);
        memcpy((this->LeftoverDataBuffer).AllocatorInstance.Data + iVar6,local_f8,(longlong)iVar5);
        local_f8 = local_f8 + iVar5;
        if ((int)((uint)uStack_f0 - iVar5) < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            EVar4 = (*pcVar1)();
            return EVar4;
          }
        }
        uStack_f0 = (ulonglong)((uint)uStack_f0 - iVar5);
      }
      piVar9 = &(this->LeftoverDataBuffer).ArrayMax;
      param_4._0_4_ = 0;
      pTVar7 = TArrayView<unsigned_char_const_,int>::
               TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                         (&local_48,&this->LeftoverDataBuffer);
      local_78 = *(undefined4 *)&pTVar7->DataPtr;
      uStack_74 = *(undefined4 *)((longlong)&pTVar7->DataPtr + 4);
      iStack_70 = pTVar7->ArrayNum;
      uStack_6c = *(undefined4 *)&pTVar7->field_0xc;
      local_88 = local_e8;
      uStack_80 = uStack_e0;
      EVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_78,&local_88,&param_4);
      if (EVar4 != Success) {
        return EVar4;
      }
      local_e8 = local_e8 + (int)param_4;
      iVar5 = (int)uStack_e0 - (int)param_4;
      if ((iVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        EVar4 = (*pcVar1)();
        return EVar4;
      }
      *piVar2 = *piVar2 + (int)param_4;
      uStack_e0 = CONCAT44(uStack_bc,iVar5);
      (this->LeftoverDataBuffer).ArrayNum = 0;
      if (*piVar9 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,(ForAnyElementType *)this,0,piVar9);
      }
    }
    iVar5 = this->BlockSize;
    uVar8 = (uint)uStack_f0;
    if (iVar5 < (int)(uint)uStack_f0) {
      do {
        if ((int)uStack_e0 < iVar5) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutDataBufferAvailable.Num() >= BlockSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlatformCrypto\\Source\\PlatformCryptoTypes\\Private\\PlatformCryptoTypes.cpp"
                             ,0x4d,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            EVar4 = (*pcVar1)();
            return EVar4;
          }
        }
        iVar5 = this->BlockSize;
        local_res8[0] = 0;
        if (iVar5 < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            EVar4 = (*pcVar1)();
            return EVar4;
          }
        }
        local_b8 = SUB84(local_f8,0);
        uStack_b4 = (undefined4)((ulonglong)local_f8 >> 0x20);
        local_68 = local_e8;
        uStack_60 = uStack_e0;
        local_58 = local_b8;
        uStack_54 = uStack_b4;
        iStack_50 = iVar5;
        EVar4 = (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,&local_58,&local_68,local_res8);
        if (EVar4 != Success) {
          return EVar4;
        }
        *piVar2 = *piVar2 + local_res8[0];
        local_f8 = local_f8 + local_res8[0];
        uVar8 = (uint)uStack_f0 - local_res8[0];
        if ((int)uVar8 < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            EVar4 = (*pcVar1)();
            return EVar4;
          }
        }
        uStack_f0 = (ulonglong)uVar8;
        local_e8 = local_e8 + local_res8[0];
        uStack_e0._0_4_ = (int)uStack_e0 - local_res8[0];
        if ((int)uStack_e0 < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            EVar4 = (*pcVar1)();
            return EVar4;
          }
        }
        uStack_e0 = CONCAT44(uStack_8c,(int)uStack_e0);
        iVar5 = this->BlockSize;
      } while (iVar5 < (int)uVar8);
    }
    uStack_f0._0_4_ = uVar8;
    if ((int)(uint)uStack_f0 < 1) {
      return Success;
    }
    if (local_f8 == (uchar *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        EVar4 = (*pcVar1)();
        return EVar4;
      }
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,(uint)uStack_f0,(ForAnyElementType *)this,
                       &(this->LeftoverDataBuffer).ArrayNum,&(this->LeftoverDataBuffer).ArrayMax);
  }
  else {
    local_f8 = param_1->DataPtr;
    if ((local_f8 == (uchar *)0x0) && ((uint)uStack_f0 != 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        EVar4 = (*pcVar1)();
        return EVar4;
      }
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,(uint)uStack_f0,(ForAnyElementType *)this,piVar9,
                       &(this->LeftoverDataBuffer).ArrayMax);
    if ((uint)uStack_f0 == 0) {
      return Success;
    }
  }
  memcpy((this->LeftoverDataBuffer).AllocatorInstance.Data + iVar5,local_f8,
         (longlong)(int)(uint)uStack_f0);
  return Success;
}


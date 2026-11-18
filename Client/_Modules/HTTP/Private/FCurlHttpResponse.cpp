// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 4

// FCurlHttpResponse @ 14314ca80

FCurlHttpResponse * __thiscall
FCurlHttpResponse::FCurlHttpResponse(FCurlHttpResponse *this,FCurlHttpRequest *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  FString *pFVar3;
  
  this->_padding_ = (longlong)&___7FHttpResponseCommon__6B_;
  pFVar3 = (FString *)(**(code **)param_1->_padding_)(param_1);
  ::FString::FString((FString *)&this->_padding_,pFVar3);
  pFVar3 = (FString *)(**(code **)(param_1->_padding_ + 8))(param_1);
  ::FString::FString((FString *)&this->_padding_,pFVar3);
  uVar2 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  *(undefined4 *)&this->_padding_ = uVar2;
  uVar1 = (**(code **)(param_1->_padding_ + 0x18))();
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = uVar1;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FCurlHttpResponse__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  this->ContentLength = 0;
  this->bSucceeded = 0;
  return this;
}

// GetAllHeaders @ 143161160

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FCurlHttpResponse::GetAllHeaders
          (FCurlHttpResponse *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  FString *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  longlong *local_res18;
  FString local_a8;
  longlong *local_98;
  int iStack_90;
  uint uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if ((char)this->_padding_ == '\0') {
    if (2 < (byte)LogHttp._0_1_) {
      (**(code **)this->_padding_)();
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      return __return_storage_ptr__;
    }
  }
  else {
    uVar13 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if (0 < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar13,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    iStack_90 = 0;
    iVar7 = (int)this->_padding_;
    plVar2 = &this->_padding_;
    local_res18 = &this->_padding_;
    uStack_8c = 1;
    iStack_7c = iStack_90;
    local_78 = iStack_90;
    if (iVar7 != 0) {
      plVar15 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar15 = plVar2;
      }
      uVar13 = (uint)*plVar15;
      iStack_90 = 0;
      local_78 = 0;
      while (uVar13 == 0) {
        lVar10 = (longlong)iStack_90;
        local_78 = local_78 + 0x20;
        iStack_90 = iStack_90 + 1;
        iStack_7c = iVar7;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1431612af;
        uVar13 = *(uint *)((longlong)plVar15 + lVar10 * 4 + 4);
      }
      uStack_8c = -uVar13 & uVar13;
      uVar3 = (ulonglong)uStack_8c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res10 = (int)lVar10;
      iStack_7c = local_78 + -1 + local_res10;
      if (iVar7 < iStack_7c) {
        iStack_7c = iVar7;
      }
    }
LAB_1431612af:
    iStack_70 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
    uVar13 = (uint)this->_padding_;
    uStack_80 = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
    uVar16 = uVar13 & 0xffffffe0;
    TStack_60.CurrentBitIndex = iStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar13 >> 5;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.BaseBitIndex = local_78;
    uStack_40 = CONCAT44(uStack_6c,iStack_70);
    local_98 = local_res18;
    local_88 = plVar2;
    iStack_74 = iStack_7c;
    local_68 = local_res18;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar2;
    if ((((int)uVar13 < 0) || (iVar7 < (int)uVar13)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar8;
    }
    plVar15 = local_res18;
    uVar4 = (uint)this->_padding_;
    if (uVar13 != uVar4) {
      plVar14 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar14 = plVar2;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)((longlong)plVar14 + (longlong)iVar12 * 4);
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar12;
        uVar16 = uVar16 + 0x20;
        iVar12 = iVar12 + 1;
        uVar13 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_1431613c0;
        uVar13 = *(uint *)((longlong)plVar14 + lVar10 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar13 = (int)lVar10 + -1 + uVar16;
      if ((int)uVar4 < (int)uVar13) {
        uVar13 = uVar4;
      }
    }
LAB_1431613c0:
    while( true ) {
      plVar14 = local_68;
      if ((int)local_68[1] - *(int *)((longlong)local_68 + 0x34) != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_60.CurrentBitIndex == uVar13) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar2)) &&
         (plVar14 == plVar15)) break;
      pFVar9 = (FString *)(*plVar14 + (longlong)TStack_60.CurrentBitIndex * 0x28);
      pFVar9 = FCurlHttpRequest::CombineHeaderKeyValue(&local_a8,pFVar9,pFVar9 + 1);
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar11 = 0;
      *(FScriptContainerElement **)pFVar11 = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar11 + 8) = (pFVar9->Data).ArrayNum;
      *(int *)(pFVar11 + 0xc) = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return __return_storage_ptr__;
}

// GetContentLength @ 143162030

ulong64 __thiscall FCurlHttpResponse::GetContentLength(FCurlHttpResponse *this)

{
  return this->ContentLength;
}

// GetContentType @ 1431621f0

FString * __thiscall
FCurlHttpResponse::GetContentType(FCurlHttpResponse *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  FString local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::FString(&local_18,L"Content-Type");
  (*pcVar1)(this,__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}


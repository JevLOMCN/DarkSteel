// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 8

// FIcoImageWrapper @ 142664c20

FIcoImageWrapper * __thiscall FIcoImageWrapper::FIcoImageWrapper(FIcoImageWrapper *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0xff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FIcoImageWrapper__6B_;
  (this->SubImageWrapper).Object = (FImageWrapperBase *)0x0;
  (this->SubImageWrapper).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// CanSetRawFormat @ 142682390

bool __thiscall
FIcoImageWrapper::CanSetRawFormat(FIcoImageWrapper *this,ERGBFormat param_1,int param_2)

{
  return false;
}

// Compress @ 142685b00

void __thiscall FIcoImageWrapper::Compress(FIcoImageWrapper *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\IcoImageWrapper.cpp"
                     ,0x55,L"ICO compression not supported");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetRaw @ 14268b7e0

bool __thiscall
FIcoImageWrapper::GetRaw
          (FIcoImageWrapper *this,ERGBFormat param_1,int param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_3)

{
  FImageWrapperBase *pFVar1;
  FScriptContainerElement *pFVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar3;
  
  ::FString::Empty((FString *)&this->_padding_);
  (**(code **)(this->_padding_ + 0x98))(this,param_1,param_2);
  if (((int)this->_padding_ < 2) &&
     (pFVar1 = (this->SubImageWrapper).Object, pFVar1 != (FImageWrapperBase *)0x0)) {
    pTVar3 = &pFVar1->RawData;
    if (param_3 != pTVar3) {
      pFVar2 = (param_3->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_3->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      param_3->ArrayNum = (pFVar1->RawData).ArrayNum;
      param_3->ArrayMax = (pFVar1->RawData).ArrayMax;
      (pFVar1->RawData).ArrayNum = 0;
      (pFVar1->RawData).ArrayMax = 0;
    }
    if (param_3->ArrayNum == 0) {
      return false;
    }
  }
  return (int)this->_padding_ < 2;
}

// GetSupportedRawFormat @ 14268bf00

Type __thiscall FIcoImageWrapper::GetSupportedRawFormat(FIcoImageWrapper *this,Type param_1)

{
  return BGRA8;
}

// LoadICOHeader @ 14268c3c0

bool __thiscall FIcoImageWrapper::LoadICOHeader(FIcoImageWrapper *this)

{
  ushort uVar1;
  short *psVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  FImageWrapperBase *pFVar11;
  FImageWrapperBase *pFVar12;
  FImageWrapperBase *pFVar13;
  FImageWrapperBase *pFVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  FImageWrapperBase *pFVar17;
  FImageWrapperBase *pFVar18;
  byte *pbVar19;
  uint local_res10;
  int local_res18;
  undefined8 local_78;
  FSharedReferencer<1> FStack_70;
  FImageWrapperBase *local_68;
  FSharedReferencer<1> FStack_60;
  FImageWrapperBase *local_58;
  FSharedReferencer<1> aFStack_50 [2];
  
  psVar2 = (short *)this->_padding_;
  uVar3 = this->_padding_;
  pFVar11 = ::operator_new(200);
  pFVar17 = (FImageWrapperBase *)0x0;
  pFVar18 = pFVar17;
  if (pFVar11 != (FImageWrapperBase *)0x0) {
    pFVar11->_padding_ = 0;
    (pFVar11->RawData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->RawData).ArrayNum = 0;
    (pFVar11->RawData).ArrayMax = 0;
    (pFVar11->CompressedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->CompressedData).ArrayNum = 0;
    (pFVar11->CompressedData).ArrayMax = 0;
    pFVar11->Format = Invalid;
    pFVar11->BitDepth = 0;
    pFVar11->Width = 0;
    pFVar11->Height = 0;
    (pFVar11->LastError).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->LastError).Data.ArrayNum = 0;
    (pFVar11->LastError).Data.ArrayMax = 0;
    pFVar11->_padding_ = (longlong)&___7FPngImageWrapper__6B_;
    pFVar11[1]._padding_ = 0;
    *(undefined4 *)&pFVar11[1]._padding_ = 0;
    *(undefined1 *)((longlong)&pFVar11[1]._padding_ + 4) = 0;
    pFVar11[1].RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11[1].RawData.ArrayNum = 0;
    pFVar11[1].CompressedData.ArrayNum = 0;
    *(undefined4 *)&pFVar11[1].CompressedData.ArrayMax = 0;
    *(undefined4 *)((longlong)&pFVar11[1].CompressedData.ArrayMax + 4) = 0x80;
    *(undefined4 *)&pFVar11[1].Format = 0xffffffff;
    pFVar11[1].BitDepth = 0;
    pFVar11[1].Height = 0;
    *(undefined4 *)&pFVar11[1].LastError.Data.AllocatorInstance.Data = 0;
    pFVar18 = pFVar11;
  }
  pFVar12 = ::operator_new(0x18);
  pFVar11 = pFVar17;
  if (pFVar12 != (FImageWrapperBase *)0x0) {
    *(undefined4 *)&pFVar12->_padding_ = 1;
    *(undefined4 *)((longlong)&pFVar12->_padding_ + 4) = 1;
    pFVar12->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFPngImageWrapper__U__DefaultDeleter_VFPngImageWrapper___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (pFVar12->RawData).AllocatorInstance.Data = (FScriptContainerElement *)pFVar18;
    pFVar11 = pFVar12;
  }
  pFVar13 = ::operator_new(0x70);
  pFVar12 = pFVar17;
  if (pFVar13 != (FImageWrapperBase *)0x0) {
    pFVar13->_padding_ = 0;
    (pFVar13->RawData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->RawData).ArrayNum = 0;
    (pFVar13->RawData).ArrayMax = 0;
    (pFVar13->CompressedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->CompressedData).ArrayNum = 0;
    (pFVar13->CompressedData).ArrayMax = 0;
    pFVar13->Format = Invalid;
    pFVar13->BitDepth = 0;
    pFVar13->Width = 0;
    pFVar13->Height = 0;
    (pFVar13->LastError).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->LastError).Data.ArrayNum = 0;
    (pFVar13->LastError).Data.ArrayMax = 0;
    pFVar13->_padding_ = (longlong)&___7FBmpImageWrapper__6B_;
    *(undefined2 *)&pFVar13[1]._padding_ = 0x100;
    pFVar12 = pFVar13;
  }
  pFVar14 = ::operator_new(0x18);
  pFVar13 = pFVar17;
  if (pFVar14 != (FImageWrapperBase *)0x0) {
    *(undefined4 *)&pFVar14->_padding_ = 1;
    *(undefined4 *)((longlong)&pFVar14->_padding_ + 4) = 1;
    pFVar14->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFBmpImageWrapper__U__DefaultDeleter_VFBmpImageWrapper___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (pFVar14->RawData).AllocatorInstance.Data = (FScriptContainerElement *)pFVar12;
    pFVar13 = pFVar14;
  }
  bVar8 = false;
  local_78 = 0;
  FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SubImageWrapper != (TSharedPtr<FImageWrapperBase,1> *)&local_78) {
    (this->SubImageWrapper).Object = (FImageWrapperBase *)0x0;
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SubImageWrapper).SharedReferenceCount,&FStack_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  if (uVar3 < 0x16) {
LAB_14268c9d4:
    pwVar16 = L"LoadICOHeader corrupt; insufficient data";
LAB_14268c9db:
    ::FString::operator=((FString *)&this->_padding_,pwVar16);
  }
  else {
    if ((*psVar2 != 0) || (psVar2[1] != 1)) goto LAB_14268c9ec;
    local_res10 = 0;
    pbVar19 = (byte *)(psVar2 + 3);
    uVar1 = psVar2[2];
    if (uVar1 == 0) {
      pwVar16 = L"LoadICOHeader corrupt; no entries";
      goto LAB_14268c9db;
    }
    if (uVar3 < (ulonglong)uVar1 * 0x10 + 6) goto LAB_14268c9d4;
    local_res18 = 0;
    bVar8 = false;
    if (uVar1 != 0) {
      do {
        uVar9 = 0x100;
        if (*pbVar19 != 0) {
          uVar9 = (uint)*pbVar19;
        }
        if ((*(short *)(pbVar19 + 6) == 0x20) && ((uint)pFVar17 < uVar9)) {
          if (uVar3 < (ulonglong)*(uint *)(pbVar19 + 0xc) + (ulonglong)*(uint *)(pbVar19 + 8))
          goto LAB_14268c9d4;
          if ((pFVar18 == (FImageWrapperBase *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          cVar7 = (**(code **)pFVar18->_padding_)
                            (pFVar18,(ulonglong)*(uint *)(pbVar19 + 0xc) + (longlong)psVar2,
                             *(undefined4 *)(pbVar19 + 8));
          if (cVar7 == '\0') {
            if ((pFVar12 == (FImageWrapperBase *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            cVar7 = (**(code **)pFVar12->_padding_)
                              (pFVar12,(ulonglong)*(uint *)(pbVar19 + 0xc) + (longlong)psVar2,
                               *(undefined4 *)(pbVar19 + 8));
            if (cVar7 == '\0') {
              pFVar17 = (FImageWrapperBase *)(ulonglong)local_res10;
              goto LAB_14268c943;
            }
            if ((pFVar12 == (FImageWrapperBase *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            lVar15 = (**(code **)(pFVar12->_padding_ + 0x40))(pFVar12);
            this->_padding_ = lVar15;
            if ((pFVar12 == (FImageWrapperBase *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            lVar15 = (**(code **)(pFVar12->_padding_ + 0x48))(pFVar12);
            this->_padding_ = lVar15;
            if ((pFVar12 == (FImageWrapperBase *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            uVar6 = (**(code **)(pFVar12->_padding_ + 0x58))(pFVar12);
            *(undefined1 *)&this->_padding_ = uVar6;
            if ((pFVar12 == (FImageWrapperBase *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            uVar10 = (**(code **)(pFVar12->_padding_ + 0x50))(pFVar12);
            this->bIsPng = false;
          }
          else {
            if ((pFVar18 == (FImageWrapperBase *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            lVar15 = (**(code **)(pFVar18->_padding_ + 0x40))(pFVar18);
            this->_padding_ = lVar15;
            if ((pFVar18 == (FImageWrapperBase *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            lVar15 = (**(code **)(pFVar18->_padding_ + 0x48))(pFVar18);
            this->_padding_ = lVar15;
            if ((pFVar18 == (FImageWrapperBase *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            uVar6 = (**(code **)(pFVar18->_padding_ + 0x58))(pFVar18);
            *(undefined1 *)&this->_padding_ = uVar6;
            if ((pFVar18 == (FImageWrapperBase *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            uVar10 = (**(code **)(pFVar18->_padding_ + 0x50))(pFVar18);
            this->bIsPng = true;
          }
          bVar8 = true;
          pFVar17 = (FImageWrapperBase *)(ulonglong)uVar9;
          *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar10;
          this->ImageOffset = *(uint *)(pbVar19 + 0xc);
          this->ImageSize = *(uint *)(pbVar19 + 8);
          local_res10 = uVar9;
        }
LAB_14268c943:
        local_res18 = local_res18 + 1;
        pbVar19 = pbVar19 + 0x10;
      } while (local_res18 < (int)(uint)(ushort)psVar2[2]);
      if (bVar8 != false) {
        if (this->bIsPng == false) {
          if (pFVar13 != (FImageWrapperBase *)0x0) {
            LOCK();
            *(int *)&pFVar13->_padding_ = (int)pFVar13->_padding_ + 1;
            UNLOCK();
          }
          local_58 = pFVar12;
          aFStack_50[0].ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
          if (&this->SubImageWrapper != (TSharedPtr<FImageWrapperBase,1> *)&local_58) {
            (this->SubImageWrapper).Object = pFVar12;
            local_58 = (FImageWrapperBase *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->SubImageWrapper).SharedReferenceCount,aFStack_50);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (aFStack_50[0].ReferenceController);
        }
        else {
          if (pFVar11 != (FImageWrapperBase *)0x0) {
            LOCK();
            *(int *)&pFVar11->_padding_ = (int)pFVar11->_padding_ + 1;
            UNLOCK();
          }
          local_68 = pFVar18;
          FStack_60.ReferenceController = (TReferenceControllerBase<1> *)pFVar11;
          if (&this->SubImageWrapper != (TSharedPtr<FImageWrapperBase,1> *)&local_68) {
            (this->SubImageWrapper).Object = pFVar18;
            local_68 = (FImageWrapperBase *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->SubImageWrapper).SharedReferenceCount,&FStack_60);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_60.ReferenceController);
        }
      }
      goto LAB_14268c9ec;
    }
  }
  bVar8 = false;
LAB_14268c9ec:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
  return bVar8;
}

// SetCompressed @ 14268e110

bool __thiscall FIcoImageWrapper::SetCompressed(FIcoImageWrapper *this,void *param_1,long64 param_2)

{
  bool bVar1;
  
  bVar1 = FImageWrapperBase::SetCompressed((FImageWrapperBase *)this,param_1,param_2);
  if (bVar1) {
    bVar1 = LoadICOHeader(this);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// Uncompress @ 142690320

void __thiscall FIcoImageWrapper::Uncompress(FIcoImageWrapper *this,ERGBFormat param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FImageWrapperBase *pFVar5;
  
  if (((this->ImageOffset != 0) && (this->ImageSize != 0)) &&
     ((this->SubImageWrapper).Object != (FImageWrapperBase *)0x0)) {
    pFVar5 = TSharedPtr<FImageWrapperBase,1>::operator->(&this->SubImageWrapper);
    (**(code **)(pFVar5->_padding_ + 0x98))(pFVar5,param_1,param_2);
    pFVar5 = TSharedPtr<FImageWrapperBase,1>::operator->(&this->SubImageWrapper);
    plVar1 = &this->_padding_;
    if ((FString *)plVar1 != &pFVar5->LastError) {
      iVar3 = (pFVar5->LastError).Data.ArrayNum;
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      _Src = (pFVar5->LastError).Data.AllocatorInstance.Data;
      iVar4 = *piVar2;
      *(int *)&this->_padding_ = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar3,iVar4,(ForAnyElementType *)plVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy((void *)*plVar1,_Src,(longlong)iVar3 * 2);
        }
      }
    }
  }
  return;
}


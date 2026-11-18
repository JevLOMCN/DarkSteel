// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// TokenizeString @ 141716010

void __thiscall
FICUCamelCaseBreakIterator::TokenizeString
          (FICUCamelCaseBreakIterator *this,
          TArray<FCamelCaseBreakIterator::FToken,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  ForElementType<FCamelCaseBreakIterator::FToken> FVar4;
  code *pcVar5;
  <unnamed_type_u_> <Var6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  undefined1 uVar11;
  ForElementType<FCamelCaseBreakIterator::FToken> FVar12;
  undefined4 local_res8;
  undefined4 local_res18;
  UCharCharacterIterator local_68;
  void *local_48;
  undefined8 local_40;
  <unnamed_type_u_> local_38;
  undefined8 uStack_30;
  
  uVar2 = *(uint *)&this->field_0x20;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<FCamelCaseBreakIterator::FToken>_>
              (8,4,uVar2,&param_1->AllocatorInstance,0,piVar1);
  }
  if (0 < *(int *)&this->field_0x20) {
    <Var6 = *(<unnamed_type_u_> *)&this->field_0x18;
    uVar7 = *(undefined8 *)&this->field_0x20;
    icu_64::UCharCharacterIterator::UCharCharacterIterator(&local_68);
    local_68._padding_ = (longlong)&___7FICUTextCharacterIterator_NativeUTF16__6B_;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_38 = <Var6;
    uStack_30 = uVar7;
    icu_64::UCharCharacterIterator::setText(&local_68,(ConstChar16Ptr)<Var6,(int)uVar7);
    (**(code **)(local_68._padding_ + 0xb8))(&local_68,0,0);
    iVar10 = icu_64::UCharCharacterIterator::current32(&local_68);
    if (iVar10 != 0xffff) {
      do {
        iVar10 = icu_64::UCharCharacterIterator::current32(&local_68);
        cVar8 = u_isULowercase_64(iVar10);
        if (cVar8 == '\0') {
          cVar8 = u_isUUppercase_64();
          if (cVar8 == '\0') {
            cVar8 = u_isdigit_64(iVar10);
            uVar11 = 4;
            if (cVar8 != '\0') {
              uVar11 = 2;
            }
          }
          else {
            uVar11 = 0;
          }
        }
        else {
          uVar11 = 1;
        }
        uVar3 = local_68._padding_._4_4_;
        iVar10 = param_1->ArrayNum;
        local_res8 = CONCAT31(local_res8._1_3_,uVar11);
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<FCamelCaseBreakIterator::FToken>_>
                             (0x408,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar10 + 1;
        FVar4 = (param_1->AllocatorInstance).SecondaryData;
        FVar12 = (ForElementType<FCamelCaseBreakIterator::FToken>)param_1;
        if (FVar4 != (ForElementType<FCamelCaseBreakIterator::FToken>)0x0) {
          FVar12 = FVar4;
        }
        *(ulonglong *)((longlong)FVar12 + (longlong)iVar10 * 8) = CONCAT44(uVar3,local_res8);
        icu_64::UCharCharacterIterator::next32PostInc(&local_68);
        iVar10 = icu_64::UCharCharacterIterator::current32(&local_68);
      } while (iVar10 != 0xffff);
    }
    local_68._padding_ = (longlong)&___7FICUTextCharacterIterator_NativeUTF16__6B_;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    icu_64::UCharCharacterIterator::~UCharCharacterIterator(&local_68);
  }
  uVar3 = *(undefined4 *)&this->field_0x20;
  iVar10 = param_1->ArrayNum;
  local_res18 = CONCAT31(local_res18._1_3_,3);
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<FCamelCaseBreakIterator::FToken>_>
                       (0x408,&param_1->AllocatorInstance,piVar1);
  }
  param_1->ArrayNum = iVar10 + 1;
  FVar4 = (param_1->AllocatorInstance).SecondaryData;
  FVar12 = (ForElementType<FCamelCaseBreakIterator::FToken>)param_1;
  if (FVar4 != (ForElementType<FCamelCaseBreakIterator::FToken>)0x0) {
    FVar12 = FVar4;
  }
  *(ulonglong *)((longlong)FVar12 + (longlong)iVar10 * 8) = CONCAT44(uVar3,local_res18);
  if ((param_1->ArrayNum == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutTokens.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCamelCaseBreakIterator.cpp"
                         ,0x37,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 2

// LogReferences @ 142cb02b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTypedElementReferences::LogReferences(FTypedElementReferences *this)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  size_t sVar6;
  longlong lVar7;
  TSparseArray<FTypedElementReference,FDefaultSparseArrayAllocator> *pTVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 auStackY_11e8 [32];
  undefined1 local_11b8 [8];
  int local_11b0;
  uint uStack_11ac;
  undefined1 *puStack_11a8;
  undefined4 local_11a0;
  int iStack_119c;
  int iStack_1198;
  undefined4 uStack_1194;
  TSparseArray<FTypedElementReference,FDefaultSparseArrayAllocator> *local_1190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1188;
  int local_1168;
  int local_1160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1158;
  char local_1038 [4096];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_11e8;
  if (this == (FTypedElementReferences *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ((1 < (byte)LogCore._0_1_) &&
     (UE::Logging::Private::BasicLog<2>
                (&`public:_void___cdecl_FTypedElementReferences::LogReferences(void)const___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogCore), 1 < (byte)LogCore._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_void___cdecl_FTypedElementReferences::LogReferences(void)const___ptr64'::
                __l21::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  iVar2 = *(int *)&(this->References).field_0x28;
  puVar1 = &(this->References).field_0x10;
  uStack_11ac = 1;
  local_11b0 = 0;
  iStack_119c = 0;
  iStack_1198 = 0;
  if (iVar2 != 0) {
    puVar13 = *(uint **)&(this->References).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    iStack_1198 = 0;
    local_11b0 = 0;
    while (uVar11 == 0) {
      iStack_1198 = iStack_1198 + 0x20;
      lVar7 = (longlong)local_11b0;
      local_11b0 = local_11b0 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_11b0) goto LAB_142cb03fc;
      uVar11 = puVar13[lVar7 + 1];
    }
    uStack_11ac = -uVar11 & uVar11;
    uVar9 = (ulonglong)uStack_11ac * 2 + 1;
    lVar7 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_1160 = (int)lVar7;
    iStack_119c = local_1160 + -1 + iStack_1198;
    if (iVar2 < iStack_119c) {
LAB_142cb03fc:
      iStack_119c = iVar2;
    }
  }
  local_11a0 = 0xffffffff;
  uVar11 = *(uint *)&(this->References).field_0x28;
  pTVar8 = &this->References;
  local_1168 = *(int *)&(this->References).field_0x8 - *(int *)&(this->References).field_0x34;
  local_1188._padding_ = CONCAT44(uStack_11ac,local_11b0);
  iVar10 = (int)uVar11 >> 5;
  local_1188.CurrentBitIndex = iStack_119c;
  local_1188.UnvisitedBitMask = 0xffffffff;
  local_1188._28_4_ = uStack_1194;
  local_1188.BaseBitIndex = iStack_1198;
  uVar14 = uVar11 & 0xffffffe0;
  puStack_11a8 = puVar1;
  local_1190 = pTVar8;
  local_1188.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar2 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->References).field_0x28;
  if (uVar11 != uVar3) {
    puVar12 = *(undefined1 **)&(this->References).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar7 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142cb04eb;
      uVar11 = *(uint *)(puVar12 + lVar7 * 4 + 4);
    }
    uVar9 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar11 = (int)lVar7 + -1 + uVar14;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_142cb04eb:
  while( true ) {
    if (*(int *)&pTVar8->field_0x8 - *(int *)&pTVar8->field_0x34 != local_1168) {
      `TSparseArray<FTypedElementReference,FDefaultSparseArrayAllocator>::TRangedForConstIterator::
      operator!='::__l2::<lambda_1>::operator()(local_11b8);
    }
    if (((local_1188.CurrentBitIndex == uVar11) &&
        (local_1188.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar8 == &this->References)) break;
    lVar7 = (longlong)local_1188.CurrentBitIndex * 0x108 + *(longlong *)pTVar8;
    if (1 < (byte)LogCore._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_void___cdecl_FTypedElementReferences::LogReferences(void)const___ptr64'::
                  __l43::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
    uVar9 = 1;
    if (1 < *(uint *)(lVar7 + 0x100)) {
      do {
        local_1038[0] = '\0';
        FGenericPlatformStackWalk::ProgramCounterToHumanReadableString
                  ((int)uVar9 + -1,*(ulong64 *)(lVar7 + uVar9 * 8),local_1038,0x1000,
                   (FGenericCrashContext *)0x0);
        if (1 < (byte)LogCore._0_1_) {
          local_1158._padding_ = 0;
          sVar6 = strlen(local_1038);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_1158,local_1038,(int)sVar6,Yes);
          UE::Logging::Private::BasicLog<2>
                    (&`public:_void___cdecl_FTypedElementReference::LogReference(void)const___ptr64'
                      ::__l5::LOG_Static,(FLogCategoryBase *)&LogCore);
          if ((void *)local_1158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_1158._padding_);
          }
        }
        uVar14 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar14;
      } while (uVar14 < *(uint *)(lVar7 + 0x100));
    }
    local_1188.UnvisitedBitMask = local_1188.UnvisitedBitMask & ~local_1188._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1188);
    pTVar8 = local_1190;
  }
  if (1 < (byte)LogCore._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_void___cdecl_FTypedElementReferences::LogReferences(void)const___ptr64'::
                __l61::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  if ((this->DestructionRequestCallstack).Ptr != (FTypedElementReference *)0x0) {
    if (1 < (byte)LogCore._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_void___cdecl_FTypedElementReferences::LogReferences(void)const___ptr64'::
                  __l82::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
    FTypedElementReference::LogReference((this->DestructionRequestCallstack).Ptr);
    if (1 < (byte)LogCore._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_void___cdecl_FTypedElementReferences::LogReferences(void)const___ptr64'::
                  __l100::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ReferenceTrackingEnabled @ 142cb4290

bool __cdecl FTypedElementReferences::ReferenceTrackingEnabled(void)

{
  return TypedElementReferences::GEnableReferenceTracking != 0;
}


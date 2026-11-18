// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 19

// operator()<int> @ 149a19f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
`FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<int>
          (void *this,int param_1)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  UPCGBasePointData *pUVar4;
  IPCGAttributeAccessor *this_00;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined4 in_register_00000014;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  undefined1 auStackY_e38 [32];
  int local_df0;
  int local_dec;
  TTypeCompatibleBytes<bool> *local_dd8;
  int local_dd0;
  int local_dcc;
  undefined8 local_dc8;
  ForElementType<bool> *local_dc0;
  TArray<int,TFixedAllocator<256>_> *local_db8;
  int iStack_db0;
  undefined4 uStack_dac;
  TArray<int,TFixedAllocator<256>_> *local_da8;
  int iStack_da0;
  undefined4 uStack_d9c;
  ForElementType<int> *local_d98;
  int iStack_d90;
  undefined4 uStack_d8c;
  TArrayView<int,int> local_d88;
  TArrayView<int,int> local_d78;
  TArrayView<int,int> local_d68;
  ForElementType<bool> local_d58;
  int local_c58 [4];
  ForElementType<int> local_c48;
  int local_848 [2];
  TArray<int,TFixedAllocator<256>_> local_840;
  TArray<int,TFixedAllocator<256>_> local_438;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_e38;
  iVar11 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))
                     ((longlong *)**(undefined8 **)((longlong)this + 0x20),
                      CONCAT44(in_register_00000014,param_1));
  if (iVar11 < 1) {
    return false;
  }
  local_848[0] = 0;
  local_840.ArrayNum = 0;
  local_438.ArrayNum = 0;
  local_c58[0] = 0;
  local_848[1] = 0x100;
  local_840.ArrayMax = 0x100;
  local_438.ArrayMax = 0x100;
  local_c58[1] = 0x100;
  iVar12 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<int>_>
                     (4,4,0x100,&local_c48,local_848,local_848 + 1);
  memset(local_c48.InlineData + iVar12,0,0x400);
  TArray<int,TFixedAllocator<256>_>::SetNum(&local_840,0x100,No);
  TArray<int,TFixedAllocator<256>_>::SetNum(&local_438,0x100,No);
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) == 0) &&
     (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) == 0)) {
    bVar10 = false;
    bVar7 = false;
  }
  else {
    bVar10 = true;
    bVar7 = true;
    if (local_c58[0] < 0x100) {
      UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
                (1,1,0x100 - local_c58[0],&local_d58,local_c58,local_c58 + 1);
    }
    else if (0x100 < local_c58[0]) {
      iVar12 = local_c58[0] + -0x100;
      if (iVar12 < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      else if (iVar12 == 0) goto LAB_149a1a163;
      iVar13 = (local_c58[0] - iVar12) + -0x100;
      if (iVar13 != 0) {
        memmove(local_c58,(void *)((longlong)local_c58 + (longlong)iVar12),(longlong)iVar13);
      }
      local_c58[0] = local_c58[0] - iVar12;
    }
  }
LAB_149a1a163:
  iVar12 = (int)(iVar11 + 0xff + (iVar11 + 0xff >> 0x1f & 0xffU)) >> 8;
  local_dec = 0;
  if (0 < iVar12) {
    local_df0 = 0;
    do {
      local_d98 = &local_c48;
      iVar13 = 0x100;
      if (iVar11 < 0x100) {
        iVar13 = iVar11;
      }
      iStack_d90 = iVar13;
      if ((iVar13 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      local_db8 = &local_840;
      iStack_db0 = iVar13;
      if ((iVar13 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      local_da8 = &local_438;
      iStack_da0 = iVar13;
      if ((iVar13 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (bVar10) {
        memset(&local_d58,0,(longlong)local_c58[0]);
        local_dc8 = *(undefined8 *)((longlong)this + 0x38);
        local_dc0 = &local_d58;
        local_dd0 = iVar13;
        local_dcc = local_df0;
        ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<int>'::__l11::
        <lambda_1>::operator()
                  (&local_dd0,*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18),
                   *(UPCGSpatialData **)(*(longlong *)((longlong)this + 8) + 0x20));
        pUVar4 = *(UPCGBasePointData **)(*(longlong *)((longlong)this + 0x10) + 0x18);
        if (*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18) != pUVar4) {
          ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<int>'::__l11
          ::<lambda_1>::operator()
                    (&local_dd0,pUVar4,
                     *(UPCGSpatialData **)(*(longlong *)((longlong)this + 0x10) + 0x20));
        }
      }
      else {
        local_dc8 = *(undefined8 *)((longlong)this + 0x38);
        local_dc0 = &local_d58;
        local_dd0 = iVar13;
        local_dcc = local_df0;
      }
      local_d88._12_4_ = uStack_d8c;
      local_d88.ArrayNum = iStack_d90;
      local_d88.DataPtr = (int *)local_d98;
      bVar8 = IPCGAttributeAccessor::GetRange<int>
                        ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18),
                         &local_d88,local_df0,
                         (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20),
                         StrictType);
      if (!bVar8) {
        return false;
      }
      local_d78._12_4_ = uStack_dac;
      local_d78.ArrayNum = iStack_db0;
      local_d78.DataPtr = (int *)local_db8;
      bVar8 = IPCGAttributeAccessor::GetRange<int>
                        ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_d78,
                         local_df0,
                         (IPCGAttributeAccessorKeys *)(*(undefined8 **)((longlong)this + 8))[1],
                         AllowBroadcastAndConstructible);
      if (!bVar8) {
        return false;
      }
      this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10);
      if (this_00 != (IPCGAttributeAccessor *)0x0) {
        local_d68._12_4_ = uStack_d9c;
        local_d68.ArrayNum = iStack_da0;
        local_d68.DataPtr = (int *)local_da8;
        bVar8 = IPCGAttributeAccessor::GetRange<int>
                          (this_00,&local_d68,local_df0,
                           (IPCGAttributeAccessorKeys *)(*(undefined8 **)((longlong)this + 0x10))[1]
                           ,AllowBroadcastAndConstructible);
        if (!bVar8) {
          return false;
        }
      }
      if ((iVar13 != 0) &&
         (((iVar16 = iVar13 + -1 + local_df0, iVar16 < 0 ||
           (*(int *)(*(longlong *)((longlong)this + 0x38) + 0x2020) <= iVar16)) &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Range == 0 || OperationData.FilterBitArray.IsValidIndex(StartIndex + Range - 1)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                              ,0x2e6,L""), bVar8)))) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      uVar22 = 0;
      if (0 < iVar13) {
        lVar21 = 0;
        local_dd8 = local_d58.InlineData;
        lVar20 = 0;
        iVar16 = local_df0;
        do {
          if (bVar7) {
            uVar18 = 0;
            if ((int)uVar22 < local_c58[0]) {
              uVar18 = ~uVar22 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (local_dd8->Pad[0] == '\0') goto LAB_149a1a4d8;
            lVar5 = *(longlong *)((longlong)this + 0x38);
            if (((iVar16 < 0) || (*(int *)(lVar5 + 0x2020) <= (int)(local_df0 + uVar22))) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            iVar17 = local_df0 + uVar22;
            lVar19 = lVar5 + 0x18;
            if (*(longlong *)(lVar5 + 0x2018) != 0) {
              lVar19 = *(longlong *)(lVar5 + 0x2018);
            }
            iVar14 = iVar17;
            if (iVar17 < 0) {
              iVar14 = iVar17 + 0x1f;
            }
            puVar1 = (uint *)(lVar19 + (longlong)(iVar14 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar17 & 0x1f);
          }
          else {
LAB_149a1a4d8:
            uVar18 = ~uVar22 >> 0x1f;
            cVar2 = **(char **)this;
            if (cVar2 == '\x06') {
              cVar2 = *(char *)**(undefined8 **)((longlong)this + 0x30);
              cVar3 = **(char **)((longlong)this + 0x28);
              uVar15 = 0;
              if ((int)uVar22 < local_438.ArrayNum) {
                uVar15 = uVar18;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              uVar15 = 0;
              if ((int)uVar22 < local_840.ArrayNum) {
                uVar15 = uVar18;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              uVar15 = 0;
              if ((int)uVar22 < local_848[0]) {
                uVar15 = uVar18;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              iVar17 = *(int *)(local_840.AllocatorInstance.InlineData[0].Pad + lVar20);
              iVar14 = *(int *)(local_c48.InlineData[0].Pad + lVar20);
              if (cVar3 == '\0') {
                bVar10 = iVar17 < iVar14;
              }
              else {
                bVar10 = iVar17 <= iVar14;
              }
              if (bVar10) {
                iVar17 = *(int *)local_438.AllocatorInstance.InlineData[lVar21].Pad;
                if (cVar2 == '\0') {
                  bVar10 = iVar14 < iVar17;
                }
                else {
                  bVar10 = iVar14 <= iVar17;
                }
                if (bVar10) {
                  bVar10 = true;
                  goto LAB_149a1a742;
                }
              }
LAB_149a1a6ec:
              bVar10 = false;
            }
            else {
              uVar15 = 0;
              if ((int)uVar22 < local_840.ArrayNum) {
                uVar15 = uVar18;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              uVar15 = 0;
              if ((int)uVar22 < local_848[0]) {
                uVar15 = uVar18;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              if (cVar2 == '\x04') {
                bVar10 = *(int *)(local_c48.InlineData[0].Pad + lVar20) ==
                         *(int *)local_840.AllocatorInstance.InlineData[lVar21].Pad;
              }
              else if (cVar2 == '\x05') {
                bVar10 = *(int *)(local_c48.InlineData[0].Pad + lVar20) !=
                         *(int *)local_840.AllocatorInstance.InlineData[lVar21].Pad;
              }
              else if (cVar2 == '\0') {
                bVar10 = *(int *)local_840.AllocatorInstance.InlineData[lVar21].Pad <
                         *(int *)(local_c48.InlineData[0].Pad + lVar20);
              }
              else if (cVar2 == '\x01') {
                bVar10 = *(int *)local_840.AllocatorInstance.InlineData[lVar21].Pad <=
                         *(int *)(local_c48.InlineData[0].Pad + lVar20);
              }
              else if (cVar2 == '\x02') {
                bVar10 = *(int *)(local_c48.InlineData[0].Pad + lVar20) <
                         *(int *)local_840.AllocatorInstance.InlineData[lVar21].Pad;
              }
              else {
                if (cVar2 != '\x03') goto LAB_149a1a6ec;
                bVar10 = *(int *)(local_c48.InlineData[0].Pad + lVar20) <=
                         *(int *)local_840.AllocatorInstance.InlineData[lVar21].Pad;
              }
            }
LAB_149a1a742:
            lVar5 = *(longlong *)((longlong)this + 0x38);
            iVar17 = local_df0 + uVar22;
            if (((iVar17 < 0) || (*(int *)(lVar5 + 0x2020) <= iVar17)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            lVar19 = lVar5 + 0x18;
            if (*(longlong *)(lVar5 + 0x2018) != 0) {
              lVar19 = *(longlong *)(lVar5 + 0x2018);
            }
            iVar14 = iVar17;
            if (iVar17 < 0) {
              iVar14 = iVar17 + 0x1f;
            }
            puVar1 = (uint *)(lVar19 + (longlong)(iVar14 >> 5) * 4);
            uVar18 = 1 << ((byte)iVar17 & 0x1f);
            if (bVar10) {
              *puVar1 = *puVar1 | uVar18;
            }
            else {
              *puVar1 = ~uVar18 & *puVar1;
            }
          }
          local_dd8 = local_dd8 + 1;
          uVar22 = uVar22 + 1;
          lVar21 = lVar21 + 1;
          lVar20 = lVar20 + 4;
          iVar16 = iVar16 + 1;
          bVar10 = bVar7;
        } while ((int)uVar22 < iVar13);
      }
      local_df0 = local_df0 + 0x100;
      local_dec = local_dec + 1;
      iVar11 = iVar11 + -0x100;
    } while (local_dec < iVar12);
  }
  return true;
}

// operator()<float> @ 149a1b800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
`FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<float>
          (void *this,float param_1)

{
  uint *puVar1;
  TTypeCompatibleBytes<float> *pTVar2;
  uchar *puVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  UPCGBasePointData *pUVar8;
  IPCGAttributeAccessor *this_00;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  float fVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  undefined1 uVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  uint uVar31;
  undefined4 in_XMM1_Db;
  double dVar32;
  undefined1 auStackY_e78 [32];
  int local_e30;
  int local_e2c;
  TTypeCompatibleBytes<bool> *local_e18;
  int local_e10;
  int local_e0c;
  undefined8 local_e08;
  ForElementType<bool> *local_e00;
  TArray<float,TFixedAllocator<256>_> *local_df8;
  int iStack_df0;
  undefined4 uStack_dec;
  TArray<float,TFixedAllocator<256>_> *local_de8;
  int iStack_de0;
  undefined4 uStack_ddc;
  ForElementType<float> *local_dd8;
  int iStack_dd0;
  undefined4 uStack_dcc;
  TArrayView<float,int> local_dc8;
  TArrayView<float,int> local_db8;
  TArrayView<float,int> local_da8;
  ForElementType<bool> local_d98;
  int local_c98 [4];
  ForElementType<float> local_c88;
  int local_888 [2];
  TArray<float,TFixedAllocator<256>_> local_880;
  TArray<float,TFixedAllocator<256>_> local_478;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_e78;
  iVar20 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))
                     ((longlong *)**(undefined8 **)((longlong)this + 0x20),
                      CONCAT44(in_XMM1_Db,param_1));
  if (iVar20 < 1) {
    return false;
  }
  local_888[0] = 0;
  local_880.ArrayNum = 0;
  local_478.ArrayNum = 0;
  local_c98[0] = 0;
  local_888[1] = 0x100;
  local_880.ArrayMax = 0x100;
  local_478.ArrayMax = 0x100;
  local_c98[1] = 0x100;
  iVar21 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<float>_>
                     (4,4,0x100,&local_c88,local_888,local_888 + 1);
  memset(local_c88.InlineData + iVar21,0,0x400);
  TArray<float,TFixedAllocator<256>_>::SetNum(&local_880,0x100,No);
  TArray<float,TFixedAllocator<256>_>::SetNum(&local_478,0x100,No);
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) == 0) &&
     (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) == 0)) {
    bVar19 = false;
    bVar11 = false;
  }
  else {
    bVar19 = true;
    bVar11 = true;
    if (local_c98[0] < 0x100) {
      UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
                (1,1,0x100 - local_c98[0],&local_d98,local_c98,local_c98 + 1);
    }
    else if (0x100 < local_c98[0]) {
      iVar21 = local_c98[0] + -0x100;
      if (iVar21 < 0) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar17) {
          pcVar10 = (code *)swi(3);
          uVar18 = (*pcVar10)();
          return (bool)uVar18;
        }
      }
      else if (iVar21 == 0) goto LAB_149a1ba03;
      iVar22 = (local_c98[0] - iVar21) + -0x100;
      if (iVar22 != 0) {
        memmove(local_c98,(void *)((longlong)local_c98 + (longlong)iVar21),(longlong)iVar22);
      }
      local_c98[0] = local_c98[0] - iVar21;
    }
  }
LAB_149a1ba03:
  uVar16 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar15 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar13 = __real_3e45798ee0000000;
  fVar12 = __real_322bcc77;
  iVar21 = (int)(iVar20 + 0xff + (iVar20 + 0xff >> 0x1f & 0xffU)) >> 8;
  local_e2c = 0;
  if (0 < iVar21) {
    local_e30 = 0;
    do {
      local_dd8 = &local_c88;
      iVar22 = 0x100;
      if (iVar20 < 0x100) {
        iVar22 = iVar20;
      }
      iStack_dd0 = iVar22;
      if ((iVar22 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        uVar18 = (*pcVar10)();
        return (bool)uVar18;
      }
      local_df8 = &local_880;
      iStack_df0 = iVar22;
      if ((iVar22 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        uVar18 = (*pcVar10)();
        return (bool)uVar18;
      }
      local_de8 = &local_478;
      iStack_de0 = iVar22;
      if ((iVar22 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        uVar18 = (*pcVar10)();
        return (bool)uVar18;
      }
      if (bVar19) {
        memset(&local_d98,0,(longlong)local_c98[0]);
        local_e08 = *(undefined8 *)((longlong)this + 0x38);
        local_e00 = &local_d98;
        local_e10 = iVar22;
        local_e0c = local_e30;
        ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<float>'::__l11
        ::<lambda_1>::operator()
                  (&local_e10,*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18),
                   *(UPCGSpatialData **)(*(longlong *)((longlong)this + 8) + 0x20));
        pUVar8 = *(UPCGBasePointData **)(*(longlong *)((longlong)this + 0x10) + 0x18);
        if (*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18) != pUVar8) {
          ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<float>'::
          __l11::<lambda_1>::operator()
                    (&local_e10,pUVar8,
                     *(UPCGSpatialData **)(*(longlong *)((longlong)this + 0x10) + 0x20));
        }
      }
      else {
        local_e08 = *(undefined8 *)((longlong)this + 0x38);
        local_e00 = &local_d98;
        local_e10 = iVar22;
        local_e0c = local_e30;
      }
      local_dc8._12_4_ = uStack_dcc;
      local_dc8.ArrayNum = iStack_dd0;
      local_dc8.DataPtr = (float *)local_dd8;
      bVar17 = IPCGAttributeAccessor::GetRange<float>
                         ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18),
                          &local_dc8,local_e30,
                          (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20),
                          StrictType);
      if (!bVar17) {
        return false;
      }
      local_db8._12_4_ = uStack_dec;
      local_db8.ArrayNum = iStack_df0;
      local_db8.DataPtr = (float *)local_df8;
      bVar17 = IPCGAttributeAccessor::GetRange<float>
                         ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_db8,
                          local_e30,
                          (IPCGAttributeAccessorKeys *)(*(undefined8 **)((longlong)this + 8))[1],
                          AllowBroadcastAndConstructible);
      if (!bVar17) {
        return false;
      }
      this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10);
      if (this_00 != (IPCGAttributeAccessor *)0x0) {
        local_da8._12_4_ = uStack_ddc;
        local_da8.ArrayNum = iStack_de0;
        local_da8.DataPtr = (float *)local_de8;
        bVar17 = IPCGAttributeAccessor::GetRange<float>
                           (this_00,&local_da8,local_e30,
                            (IPCGAttributeAccessorKeys *)
                            (*(undefined8 **)((longlong)this + 0x10))[1],
                            AllowBroadcastAndConstructible);
        if (!bVar17) {
          return false;
        }
      }
      if ((iVar22 != 0) &&
         (((iVar25 = iVar22 + -1 + local_e30, iVar25 < 0 ||
           (*(int *)(*(longlong *)((longlong)this + 0x38) + 0x2020) <= iVar25)) &&
          (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                              ("Range == 0 || OperationData.FilterBitArray.IsValidIndex(StartIndex + Range - 1)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                               ,0x2e6,L""), bVar17)))) {
        pcVar10 = (code *)swi(3);
        uVar18 = (*pcVar10)();
        return (bool)uVar18;
      }
      uVar31 = 0;
      if (0 < iVar22) {
        lVar30 = 0;
        local_e18 = local_d98.InlineData;
        lVar29 = 0;
        iVar25 = local_e30;
        do {
          if (bVar11) {
            uVar27 = 0;
            if ((int)uVar31 < local_c98[0]) {
              uVar27 = ~uVar31 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              uVar18 = (*pcVar10)();
              return (bool)uVar18;
            }
            if (local_e18->Pad[0] == '\0') goto LAB_149a1bdb6;
            lVar9 = *(longlong *)((longlong)this + 0x38);
            if (((iVar25 < 0) || (*(int *)(lVar9 + 0x2020) <= (int)(local_e30 + uVar31))) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar19)) {
              pcVar10 = (code *)swi(3);
              uVar18 = (*pcVar10)();
              return (bool)uVar18;
            }
            iVar26 = local_e30 + uVar31;
            lVar28 = lVar9 + 0x18;
            if (*(longlong *)(lVar9 + 0x2018) != 0) {
              lVar28 = *(longlong *)(lVar9 + 0x2018);
            }
            iVar23 = iVar26;
            if (iVar26 < 0) {
              iVar23 = iVar26 + 0x1f;
            }
            puVar1 = (uint *)(lVar28 + (longlong)(iVar23 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar26 & 0x1f);
          }
          else {
LAB_149a1bdb6:
            uVar27 = ~uVar31 >> 0x1f;
            cVar6 = **(char **)this;
            if (cVar6 == '\x06') {
              cVar6 = *(char *)**(undefined8 **)((longlong)this + 0x30);
              cVar7 = **(char **)((longlong)this + 0x28);
              uVar24 = 0;
              if ((int)uVar31 < local_478.ArrayNum) {
                uVar24 = uVar27;
              }
              if ((uVar24 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar10 = (code *)swi(3);
                uVar18 = (*pcVar10)();
                return (bool)uVar18;
              }
              uVar24 = 0;
              if ((int)uVar31 < local_880.ArrayNum) {
                uVar24 = uVar27;
              }
              if ((uVar24 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar10 = (code *)swi(3);
                uVar18 = (*pcVar10)();
                return (bool)uVar18;
              }
              uVar24 = 0;
              if ((int)uVar31 < local_888[0]) {
                uVar24 = uVar27;
              }
              if ((uVar24 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar10 = (code *)swi(3);
                uVar18 = (*pcVar10)();
                return (bool)uVar18;
              }
              fVar4 = *(float *)(local_880.AllocatorInstance.InlineData[0].Pad + lVar29);
              fVar5 = *(float *)(local_c88.InlineData[0].Pad + lVar29);
              if (cVar7 == '\0') {
                bVar19 = fVar4 < fVar5;
              }
              else {
                bVar19 = fVar4 <= fVar5;
              }
              if (bVar19) {
                fVar4 = *(float *)local_478.AllocatorInstance.InlineData[lVar30].Pad;
                if (cVar6 == '\0') {
                  bVar19 = fVar5 < fVar4;
                }
                else {
                  bVar19 = fVar5 <= fVar4;
                }
                if (bVar19) {
                  bVar19 = true;
                  goto LAB_149a1c054;
                }
              }
LAB_149a1bff1:
              bVar19 = false;
            }
            else {
              uVar24 = 0;
              if ((int)uVar31 < local_880.ArrayNum) {
                uVar24 = uVar27;
              }
              if ((uVar24 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar10 = (code *)swi(3);
                uVar18 = (*pcVar10)();
                return (bool)uVar18;
              }
              uVar24 = 0;
              if ((int)uVar31 < local_888[0]) {
                uVar24 = uVar27;
              }
              if ((uVar24 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar10 = (code *)swi(3);
                uVar18 = (*pcVar10)();
                return (bool)uVar18;
              }
              if (cVar6 == '\x04') {
                bVar19 = (float)((uint)(*(float *)(local_c88.InlineData[0].Pad + lVar29) -
                                       *(float *)local_880.AllocatorInstance.InlineData[lVar30].Pad)
                                & uVar14) <= fVar12;
              }
              else if (cVar6 == '\x05') {
                dVar32 = (double)(*(float *)(local_c88.InlineData[0].Pad + lVar29) -
                                 *(float *)local_880.AllocatorInstance.InlineData[lVar30].Pad);
                bVar19 = dVar13 < (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar16,
                                                   SUB84(dVar32,0) & uVar15);
              }
              else if (cVar6 == '\0') {
                bVar19 = *(float *)local_880.AllocatorInstance.InlineData[lVar30].Pad <
                         *(float *)(local_c88.InlineData[0].Pad + lVar29);
              }
              else if (cVar6 == '\x01') {
                fVar4 = *(float *)local_880.AllocatorInstance.InlineData[lVar30].Pad;
                puVar3 = local_c88.InlineData[0].Pad + lVar29;
                bVar19 = fVar4 < *(float *)puVar3 || fVar4 == *(float *)puVar3;
              }
              else if (cVar6 == '\x02') {
                bVar19 = *(float *)(local_c88.InlineData[0].Pad + lVar29) <
                         *(float *)local_880.AllocatorInstance.InlineData[lVar30].Pad;
              }
              else {
                if (cVar6 != '\x03') goto LAB_149a1bff1;
                fVar4 = *(float *)(local_c88.InlineData[0].Pad + lVar29);
                pTVar2 = local_880.AllocatorInstance.InlineData + lVar30;
                bVar19 = fVar4 < *(float *)pTVar2->Pad || fVar4 == *(float *)pTVar2->Pad;
              }
            }
LAB_149a1c054:
            lVar9 = *(longlong *)((longlong)this + 0x38);
            iVar26 = local_e30 + uVar31;
            if (((iVar26 < 0) || (*(int *)(lVar9 + 0x2020) <= iVar26)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar17)) {
              pcVar10 = (code *)swi(3);
              uVar18 = (*pcVar10)();
              return (bool)uVar18;
            }
            lVar28 = lVar9 + 0x18;
            if (*(longlong *)(lVar9 + 0x2018) != 0) {
              lVar28 = *(longlong *)(lVar9 + 0x2018);
            }
            iVar23 = iVar26;
            if (iVar26 < 0) {
              iVar23 = iVar26 + 0x1f;
            }
            uVar24 = 1 << ((byte)iVar26 & 0x1f);
            uVar27 = *(uint *)(lVar28 + (longlong)(iVar23 >> 5) * 4);
            if (bVar19) {
              uVar24 = uVar24 | uVar27;
            }
            else {
              uVar24 = ~uVar24 & uVar27;
            }
            *(uint *)(lVar28 + (longlong)(iVar23 >> 5) * 4) = uVar24;
          }
          local_e18 = local_e18 + 1;
          uVar31 = uVar31 + 1;
          lVar30 = lVar30 + 1;
          lVar29 = lVar29 + 4;
          iVar25 = iVar25 + 1;
          bVar19 = bVar11;
        } while ((int)uVar31 < iVar22);
      }
      local_e30 = local_e30 + 0x100;
      local_e2c = local_e2c + 1;
      iVar20 = iVar20 + -0x100;
    } while (local_e2c < iVar21);
  }
  return true;
}

// operator()<double> @ 149a1d3f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
`FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<double>
          (void *this,double param_1)

{
  uint *puVar1;
  TTypeCompatibleBytes<double> *pTVar2;
  uchar *puVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  char cVar7;
  UPCGBasePointData *pUVar8;
  IPCGAttributeAccessor *this_00;
  code *pcVar9;
  bool bVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined1 uVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  undefined1 auStackY_1a58 [32];
  int local_1a10;
  int local_1a0c;
  TTypeCompatibleBytes<bool> *local_19f8;
  int local_19f0;
  int local_19ec;
  undefined8 local_19e8;
  ForElementType<bool> *local_19e0;
  TArray<double,TFixedAllocator<256>_> *local_19d8;
  int iStack_19d0;
  undefined4 uStack_19cc;
  TArray<double,TFixedAllocator<256>_> *local_19c8;
  int iStack_19c0;
  undefined4 uStack_19bc;
  ForElementType<double> *local_19b8;
  int iStack_19b0;
  undefined4 uStack_19ac;
  TArrayView<double,int> local_19a8;
  TArrayView<double,int> local_1998;
  TArrayView<double,int> local_1988;
  ForElementType<bool> local_1978;
  int local_1878 [4];
  ForElementType<double> local_1868;
  int local_1068 [2];
  TArray<double,TFixedAllocator<256>_> local_1060;
  TArray<double,TFixedAllocator<256>_> local_858;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1a58;
  iVar17 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  if (iVar17 < 1) {
    return false;
  }
  local_1068[0] = 0;
  local_1060.ArrayNum = 0;
  local_858.ArrayNum = 0;
  local_1878[0] = 0;
  local_1068[1] = 0x100;
  local_1060.ArrayMax = 0x100;
  local_858.ArrayMax = 0x100;
  local_1878[1] = 0x100;
  iVar18 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<double>_>
                     (8,8,0x100,&local_1868,local_1068,local_1068 + 1);
  memset(local_1868.InlineData + iVar18,0,0x800);
  TArray<double,TFixedAllocator<256>_>::SetNum(&local_1060,0x100,No);
  TArray<double,TFixedAllocator<256>_>::SetNum(&local_858,0x100,No);
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) == 0) &&
     (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) == 0)) {
    bVar16 = false;
    bVar10 = false;
  }
  else {
    bVar16 = true;
    bVar10 = true;
    if (local_1878[0] < 0x100) {
      UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
                (1,1,0x100 - local_1878[0],&local_1978,local_1878,local_1878 + 1);
    }
    else if (0x100 < local_1878[0]) {
      iVar18 = local_1878[0] + -0x100;
      if (iVar18 < 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar14) {
          pcVar9 = (code *)swi(3);
          uVar15 = (*pcVar9)();
          return (bool)uVar15;
        }
      }
      else if (iVar18 == 0) goto LAB_149a1d5f9;
      iVar19 = (local_1878[0] - iVar18) + -0x100;
      if (iVar19 != 0) {
        memmove(local_1878,(void *)((longlong)local_1878 + (longlong)iVar18),(longlong)iVar19);
      }
      local_1878[0] = local_1878[0] - iVar18;
    }
  }
LAB_149a1d5f9:
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar11 = __real_3e45798ee2308c3a;
  iVar18 = (int)(iVar17 + 0xff + (iVar17 + 0xff >> 0x1f & 0xffU)) >> 8;
  local_1a0c = 0;
  if (0 < iVar18) {
    local_1a10 = 0;
    do {
      local_19b8 = &local_1868;
      iVar19 = 0x100;
      if (iVar17 < 0x100) {
        iVar19 = iVar17;
      }
      iStack_19b0 = iVar19;
      if ((iVar19 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      local_19d8 = &local_1060;
      iStack_19d0 = iVar19;
      if ((iVar19 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      local_19c8 = &local_858;
      iStack_19c0 = iVar19;
      if ((iVar19 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      if (bVar16) {
        memset(&local_1978,0,(longlong)local_1878[0]);
        local_19e8 = *(undefined8 *)((longlong)this + 0x38);
        local_19e0 = &local_1978;
        local_19f0 = iVar19;
        local_19ec = local_1a10;
        ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<double>'::
        __l11::<lambda_1>::operator()
                  (&local_19f0,*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18),
                   *(UPCGSpatialData **)(*(longlong *)((longlong)this + 8) + 0x20));
        pUVar8 = *(UPCGBasePointData **)(*(longlong *)((longlong)this + 0x10) + 0x18);
        if (*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18) != pUVar8) {
          ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<double>'::
          __l11::<lambda_1>::operator()
                    (&local_19f0,pUVar8,
                     *(UPCGSpatialData **)(*(longlong *)((longlong)this + 0x10) + 0x20));
        }
      }
      else {
        local_19e8 = *(undefined8 *)((longlong)this + 0x38);
        local_19e0 = &local_1978;
        local_19f0 = iVar19;
        local_19ec = local_1a10;
      }
      local_19a8._12_4_ = uStack_19ac;
      local_19a8.ArrayNum = iStack_19b0;
      local_19a8.DataPtr = (double *)local_19b8;
      bVar14 = IPCGAttributeAccessor::GetRange<double>
                         ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18),
                          &local_19a8,local_1a10,
                          (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20),
                          StrictType);
      if (!bVar14) {
        return false;
      }
      local_1998._12_4_ = uStack_19cc;
      local_1998.ArrayNum = iStack_19d0;
      local_1998.DataPtr = (double *)local_19d8;
      bVar14 = IPCGAttributeAccessor::GetRange<double>
                         ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_1998
                          ,local_1a10,
                          (IPCGAttributeAccessorKeys *)(*(undefined8 **)((longlong)this + 8))[1],
                          AllowBroadcastAndConstructible);
      if (!bVar14) {
        return false;
      }
      this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10);
      if (this_00 != (IPCGAttributeAccessor *)0x0) {
        local_1988._12_4_ = uStack_19bc;
        local_1988.ArrayNum = iStack_19c0;
        local_1988.DataPtr = (double *)local_19c8;
        bVar14 = IPCGAttributeAccessor::GetRange<double>
                           (this_00,&local_1988,local_1a10,
                            (IPCGAttributeAccessorKeys *)
                            (*(undefined8 **)((longlong)this + 0x10))[1],
                            AllowBroadcastAndConstructible);
        if (!bVar14) {
          return false;
        }
      }
      if ((iVar19 != 0) &&
         (((iVar22 = iVar19 + -1 + local_1a10, iVar22 < 0 ||
           (*(int *)(*(longlong *)((longlong)this + 0x38) + 0x2020) <= iVar22)) &&
          (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Range == 0 || OperationData.FilterBitArray.IsValidIndex(StartIndex + Range - 1)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                               ,0x2e6,L""), bVar14)))) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      uVar29 = 0;
      if (0 < iVar19) {
        lVar28 = 0;
        local_19f8 = local_1978.InlineData;
        lVar27 = 0;
        iVar22 = local_1a10;
        do {
          if (bVar10) {
            uVar25 = 0;
            if ((int)uVar29 < local_1878[0]) {
              uVar25 = ~uVar29 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar9 = (code *)swi(3);
              uVar15 = (*pcVar9)();
              return (bool)uVar15;
            }
            if (local_19f8->Pad[0] == '\0') goto LAB_149a1d986;
            lVar24 = *(longlong *)((longlong)this + 0x38);
            if (((iVar22 < 0) || (*(int *)(lVar24 + 0x2020) <= (int)(local_1a10 + uVar29))) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar16)) {
              pcVar9 = (code *)swi(3);
              uVar15 = (*pcVar9)();
              return (bool)uVar15;
            }
            iVar23 = local_1a10 + uVar29;
            lVar26 = lVar24 + 0x18;
            if (*(longlong *)(lVar24 + 0x2018) != 0) {
              lVar26 = *(longlong *)(lVar24 + 0x2018);
            }
            iVar20 = iVar23;
            if (iVar23 < 0) {
              iVar20 = iVar23 + 0x1f;
            }
            puVar1 = (uint *)(lVar26 + (longlong)(iVar20 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar23 & 0x1f);
          }
          else {
LAB_149a1d986:
            uVar25 = ~uVar29 >> 0x1f;
            cVar6 = **(char **)this;
            if (cVar6 == '\x06') {
              cVar6 = *(char *)**(undefined8 **)((longlong)this + 0x30);
              cVar7 = **(char **)((longlong)this + 0x28);
              uVar21 = 0;
              if ((int)uVar29 < local_858.ArrayNum) {
                uVar21 = uVar25;
              }
              if ((uVar21 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar9 = (code *)swi(3);
                uVar15 = (*pcVar9)();
                return (bool)uVar15;
              }
              uVar21 = 0;
              if ((int)uVar29 < local_1060.ArrayNum) {
                uVar21 = uVar25;
              }
              if ((uVar21 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar9 = (code *)swi(3);
                uVar15 = (*pcVar9)();
                return (bool)uVar15;
              }
              uVar21 = 0;
              if ((int)uVar29 < local_1068[0]) {
                uVar21 = uVar25;
              }
              if ((uVar21 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar9 = (code *)swi(3);
                uVar15 = (*pcVar9)();
                return (bool)uVar15;
              }
              dVar4 = *(double *)(local_1060.AllocatorInstance.InlineData[0].Pad + lVar27);
              dVar5 = *(double *)(local_1868.InlineData[0].Pad + lVar27);
              if (cVar7 == '\0') {
                bVar16 = dVar4 < dVar5;
              }
              else {
                bVar16 = dVar4 <= dVar5;
              }
              if (bVar16) {
                dVar4 = *(double *)local_858.AllocatorInstance.InlineData[lVar28].Pad;
                if (cVar6 == '\0') {
                  bVar16 = dVar5 < dVar4;
                }
                else {
                  bVar16 = dVar5 <= dVar4;
                }
                if (bVar16) {
                  bVar16 = true;
                  goto LAB_149a1dc28;
                }
              }
LAB_149a1dbc1:
              bVar16 = false;
            }
            else {
              uVar21 = 0;
              if ((int)uVar29 < local_1060.ArrayNum) {
                uVar21 = uVar25;
              }
              if ((uVar21 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar9 = (code *)swi(3);
                uVar15 = (*pcVar9)();
                return (bool)uVar15;
              }
              uVar21 = 0;
              if ((int)uVar29 < local_1068[0]) {
                uVar21 = uVar25;
              }
              if ((uVar21 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar9 = (code *)swi(3);
                uVar15 = (*pcVar9)();
                return (bool)uVar15;
              }
              if (cVar6 == '\x04') {
                dVar4 = *(double *)(local_1868.InlineData[0].Pad + lVar27) -
                        *(double *)local_1060.AllocatorInstance.InlineData[lVar28].Pad;
                uVar25 = SUB84(dVar4,0) & uVar12;
                uVar21 = (uint)((ulonglong)dVar4 >> 0x20) & uVar13;
                bVar16 = (double)CONCAT44(uVar21,uVar25) < dVar11 ||
                         (double)CONCAT44(uVar21,uVar25) == dVar11;
              }
              else if (cVar6 == '\x05') {
                dVar4 = *(double *)(local_1868.InlineData[0].Pad + lVar27) -
                        *(double *)local_1060.AllocatorInstance.InlineData[lVar28].Pad;
                uVar25 = SUB84(dVar4,0) & uVar12;
                uVar21 = (uint)((ulonglong)dVar4 >> 0x20) & uVar13;
                bVar16 = dVar11 <= (double)CONCAT44(uVar21,uVar25) &&
                         (double)CONCAT44(uVar21,uVar25) != dVar11;
              }
              else if (cVar6 == '\0') {
                bVar16 = *(double *)local_1060.AllocatorInstance.InlineData[lVar28].Pad <
                         *(double *)(local_1868.InlineData[0].Pad + lVar27);
              }
              else if (cVar6 == '\x01') {
                dVar4 = *(double *)local_1060.AllocatorInstance.InlineData[lVar28].Pad;
                puVar3 = local_1868.InlineData[0].Pad + lVar27;
                bVar16 = dVar4 < *(double *)puVar3 || dVar4 == *(double *)puVar3;
              }
              else if (cVar6 == '\x02') {
                bVar16 = *(double *)(local_1868.InlineData[0].Pad + lVar27) <
                         *(double *)local_1060.AllocatorInstance.InlineData[lVar28].Pad;
              }
              else {
                if (cVar6 != '\x03') goto LAB_149a1dbc1;
                dVar4 = *(double *)(local_1868.InlineData[0].Pad + lVar27);
                pTVar2 = local_1060.AllocatorInstance.InlineData + lVar28;
                bVar16 = dVar4 < *(double *)pTVar2->Pad || dVar4 == *(double *)pTVar2->Pad;
              }
            }
LAB_149a1dc28:
            lVar24 = *(longlong *)((longlong)this + 0x38);
            iVar23 = local_1a10 + uVar29;
            if (((iVar23 < 0) || (*(int *)(lVar24 + 0x2020) <= iVar23)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar14)) {
              pcVar9 = (code *)swi(3);
              uVar15 = (*pcVar9)();
              return (bool)uVar15;
            }
            lVar26 = lVar24 + 0x18;
            if (*(longlong *)(lVar24 + 0x2018) != 0) {
              lVar26 = *(longlong *)(lVar24 + 0x2018);
            }
            iVar20 = iVar23;
            if (iVar23 < 0) {
              iVar20 = iVar23 + 0x1f;
            }
            lVar24 = (longlong)(iVar20 >> 5);
            uVar21 = 1 << ((byte)iVar23 & 0x1f);
            uVar25 = *(uint *)(lVar26 + lVar24 * 4);
            if (bVar16) {
              *(uint *)(lVar26 + lVar24 * 4) = uVar25 | uVar21;
            }
            else {
              *(uint *)(lVar26 + lVar24 * 4) = ~uVar21 & uVar25;
            }
          }
          local_19f8 = local_19f8 + 1;
          uVar29 = uVar29 + 1;
          lVar28 = lVar28 + 1;
          lVar27 = lVar27 + 8;
          iVar22 = iVar22 + 1;
          bVar16 = bVar10;
        } while ((int)uVar29 < iVar19);
      }
      local_1a10 = local_1a10 + 0x100;
      local_1a0c = local_1a0c + 1;
      iVar17 = iVar17 + -0x100;
    } while (local_1a0c < iVar18);
  }
  return true;
}

// operator()<UE::Math::TQuat<double>_> @ 149a1ee70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
operator()<UE::Math::TQuat<double>_>(void *this,TQuat<double> *param_1)

{
  uint *puVar1;
  char cVar2;
  UPCGBasePointData *pUVar3;
  IPCGAttributeAccessor *this_00;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined1 uVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  undefined7 extraout_var;
  int iVar28;
  int iVar29;
  longlong lVar30;
  int iVar31;
  uint uVar32;
  longlong lVar33;
  TTypeCompatibleBytes<UE::Math::TQuat<double>_> *pTVar34;
  int iVar35;
  uint uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auStackY_62a8 [32];
  int local_6260;
  TTypeCompatibleBytes<UE::Math::TQuat<double>_> *local_6258;
  TTypeCompatibleBytes<bool> *local_6240;
  int local_6238;
  int local_6234;
  undefined8 local_6230;
  ForElementType<bool> *local_6228;
  TQuat<double> *local_6218;
  int iStack_6210;
  undefined4 uStack_620c;
  TQuat<double> *local_6208;
  int iStack_6200;
  undefined4 uStack_61fc;
  TQuat<double> *local_61f8;
  int iStack_61f0;
  undefined4 uStack_61ec;
  double local_61e8;
  double local_61e0;
  TArrayView<UE::Math::TQuat<double>,int> local_61d8;
  TArrayView<UE::Math::TQuat<double>,int> local_61c8;
  TArrayView<UE::Math::TQuat<double>,int> local_61b8;
  TTypeCompatibleBytes<bool> local_61a8 [256];
  int local_60a8 [4];
  ForElementType<UE::Math::TQuat<double>_> local_6098;
  int local_4098 [4];
  ForElementType<UE::Math::TQuat<double>_> local_4088;
  int local_2088 [4];
  ForElementType<UE::Math::TQuat<double>_> local_2078;
  int local_78 [4];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_62a8;
  iVar24 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  if (iVar24 < 1) {
    return false;
  }
  local_78[0] = 0;
  local_78[1] = 0x100;
  local_4098[0] = 0;
  local_4098[1] = 0x100;
  local_2088[0] = 0;
  local_2088[1] = 0x100;
  local_60a8[0] = 0;
  local_60a8[1] = 0x100;
  UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TQuat<double>_>_>
            (0x20,0x10,0x100,&local_2078,local_78,local_78 + 1);
  if (local_4098[0] < 0x100) {
    UE::Core::Private::
    ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TQuat<double>_>_>
              (0x20,0x10,0x100 - local_4098[0],&local_6098,local_4098,local_4098 + 1);
  }
  else if (0x100 < local_4098[0]) {
    iVar25 = local_4098[0] + -0x100;
    if (iVar25 < 0) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar23) {
        pcVar4 = (code *)swi(3);
        uVar22 = (*pcVar4)();
        return (bool)uVar22;
      }
    }
    else if (iVar25 == 0) goto LAB_149a1f029;
    iVar35 = (local_4098[0] - iVar25) + -0x100;
    if (iVar35 != 0) {
      memmove(local_4098,local_4098 + (longlong)iVar25 * 8,(longlong)iVar35 << 5);
    }
    local_4098[0] = local_4098[0] - iVar25;
  }
LAB_149a1f029:
  if (local_2088[0] < 0x100) {
    UE::Core::Private::
    ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TQuat<double>_>_>
              (0x20,0x10,0x100 - local_2088[0],&local_4088,local_2088,local_2088 + 1);
  }
  else if (0x100 < local_2088[0]) {
    iVar25 = local_2088[0] + -0x100;
    if (iVar25 < 0) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar23) {
        pcVar4 = (code *)swi(3);
        uVar22 = (*pcVar4)();
        return (bool)uVar22;
      }
    }
    else if (iVar25 == 0) goto LAB_149a1f10e;
    iVar35 = (local_2088[0] - iVar25) + -0x100;
    if (iVar35 != 0) {
      memmove(local_2088,local_2088 + (longlong)iVar25 * 8,(longlong)iVar35 << 5);
    }
    local_2088[0] = local_2088[0] - iVar25;
  }
LAB_149a1f10e:
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) == 0) &&
     (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) == 0)) {
    bVar23 = false;
    bVar16 = false;
  }
  else {
    bVar23 = true;
    bVar16 = true;
    if (local_60a8[0] < 0x100) {
      UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
                (1,1,0x100 - local_60a8[0],(ForElementType<bool> *)local_61a8,local_60a8,
                 local_60a8 + 1);
    }
    else if (0x100 < local_60a8[0]) {
      iVar25 = local_60a8[0] + -0x100;
      if (iVar25 < 0) {
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar21) {
          pcVar4 = (code *)swi(3);
          uVar22 = (*pcVar4)();
          return (bool)uVar22;
        }
      }
      else if (iVar25 == 0) goto LAB_149a1f20f;
      iVar35 = (local_60a8[0] - iVar25) + -0x100;
      if (iVar35 != 0) {
        memmove(local_60a8,(void *)((longlong)local_60a8 + (longlong)iVar25),(longlong)iVar35);
      }
      local_60a8[0] = local_60a8[0] - iVar25;
    }
  }
LAB_149a1f20f:
  uVar20 = _UNK_15061cc8c;
  uVar19 = _UNK_15061cc88;
  uVar18 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar17 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar15 = __real_3e45798ee2308c3a;
  iVar25 = (int)(iVar24 + 0xff + (iVar24 + 0xff >> 0x1f & 0xffU)) >> 8;
  local_6260 = 0;
  if (0 < iVar25) {
    iVar35 = 0;
    do {
      local_61f8 = (TQuat<double> *)&local_2078;
      iVar31 = 0x100;
      if (iVar24 < 0x100) {
        iVar31 = iVar24;
      }
      iStack_61f0 = iVar31;
      if ((iVar31 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar21)) {
        pcVar4 = (code *)swi(3);
        uVar22 = (*pcVar4)();
        return (bool)uVar22;
      }
      local_6218 = (TQuat<double> *)&local_6098;
      iStack_6210 = iVar31;
      if ((iVar31 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar21)) {
        pcVar4 = (code *)swi(3);
        uVar22 = (*pcVar4)();
        return (bool)uVar22;
      }
      local_6208 = (TQuat<double> *)&local_4088;
      iStack_6200 = iVar31;
      if ((iVar31 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar21)) {
        pcVar4 = (code *)swi(3);
        uVar22 = (*pcVar4)();
        return (bool)uVar22;
      }
      if (bVar23) {
        memset(local_61a8,0,(longlong)local_60a8[0]);
        local_6230 = *(undefined8 *)((longlong)this + 0x38);
        local_6238 = iVar31;
        local_6234 = iVar35;
        local_6228 = (ForElementType<bool> *)local_61a8;
        ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
        operator()<UE::Math::TQuat<double>_>'::__l11::<lambda_1>::operator()
                  (&local_6238,*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18),
                   *(UPCGSpatialData **)(*(longlong *)((longlong)this + 8) + 0x20));
        pUVar3 = *(UPCGBasePointData **)(*(longlong *)((longlong)this + 0x10) + 0x18);
        if (*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18) != pUVar3) {
          ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
          operator()<UE::Math::TQuat<double>_>'::__l11::<lambda_1>::operator()
                    (&local_6238,pUVar3,
                     *(UPCGSpatialData **)(*(longlong *)((longlong)this + 0x10) + 0x20));
        }
      }
      else {
        local_6230 = *(undefined8 *)((longlong)this + 0x38);
        local_6238 = iVar31;
        local_6234 = iVar35;
        local_6228 = (ForElementType<bool> *)local_61a8;
      }
      local_61d8._12_4_ = uStack_61ec;
      local_61d8.ArrayNum = iStack_61f0;
      local_61d8.DataPtr = local_61f8;
      bVar21 = IPCGAttributeAccessor::GetRange<UE::Math::TQuat<double>_>
                         ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18),
                          &local_61d8,iVar35,
                          (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20),
                          StrictType);
      if (!bVar21) {
        return false;
      }
      local_61c8._12_4_ = uStack_620c;
      local_61c8.ArrayNum = iStack_6210;
      local_61c8.DataPtr = local_6218;
      bVar21 = IPCGAttributeAccessor::GetRange<UE::Math::TQuat<double>_>
                         ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_61c8
                          ,iVar35,(IPCGAttributeAccessorKeys *)
                                  (*(undefined8 **)((longlong)this + 8))[1],
                          AllowBroadcastAndConstructible);
      if (!bVar21) {
        return false;
      }
      this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10);
      if (this_00 != (IPCGAttributeAccessor *)0x0) {
        local_61b8._12_4_ = uStack_61fc;
        local_61b8.ArrayNum = iStack_6200;
        local_61b8.DataPtr = local_6208;
        bVar21 = IPCGAttributeAccessor::GetRange<UE::Math::TQuat<double>_>
                           (this_00,&local_61b8,iVar35,
                            (IPCGAttributeAccessorKeys *)
                            (*(undefined8 **)((longlong)this + 0x10))[1],
                            AllowBroadcastAndConstructible);
        if (!bVar21) {
          return false;
        }
      }
      if ((iVar31 != 0) &&
         (((iVar28 = iVar35 + -1 + iVar31, iVar28 < 0 ||
           (*(int *)(*(longlong *)((longlong)this + 0x38) + 0x2020) <= iVar28)) &&
          (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("Range == 0 || OperationData.FilterBitArray.IsValidIndex(StartIndex + Range - 1)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                               ,0x2e6,L""), bVar21)))) {
        pcVar4 = (code *)swi(3);
        uVar22 = (*pcVar4)();
        return (bool)uVar22;
      }
      uVar36 = 0;
      if (0 < iVar31) {
        local_6258 = local_2078.InlineData;
        pTVar34 = local_6098.InlineData;
        iVar28 = iVar35;
        local_6240 = local_61a8;
        do {
          if (bVar16) {
            uVar32 = 0;
            if ((int)uVar36 < local_60a8[0]) {
              uVar32 = ~uVar36 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar4 = (code *)swi(3);
              uVar22 = (*pcVar4)();
              return (bool)uVar22;
            }
            if (((TTypeCompatibleBytes<bool> *)local_6240->Pad)->Pad[0] == '\0') goto LAB_149a1f5c7;
            lVar30 = *(longlong *)((longlong)this + 0x38);
            if (((iVar28 < 0) || (*(int *)(lVar30 + 0x2020) <= (int)(uVar36 + iVar35))) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar23)) {
              pcVar4 = (code *)swi(3);
              uVar22 = (*pcVar4)();
              return (bool)uVar22;
            }
            iVar29 = uVar36 + iVar35;
            lVar33 = lVar30 + 0x18;
            if (*(longlong *)(lVar30 + 0x2018) != 0) {
              lVar33 = *(longlong *)(lVar30 + 0x2018);
            }
            iVar26 = iVar29;
            if (iVar29 < 0) {
              iVar26 = iVar29 + 0x1f;
            }
            puVar1 = (uint *)(lVar33 + (longlong)(iVar26 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar29 & 0x1f);
          }
          else {
LAB_149a1f5c7:
            uVar32 = ~uVar36 >> 0x1f;
            cVar2 = **(char **)this;
            if (cVar2 == '\x06') {
              uVar27 = 0;
              if ((int)uVar36 < local_2088[0]) {
                uVar27 = uVar32;
              }
              if ((uVar27 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar4 = (code *)swi(3);
                uVar22 = (*pcVar4)();
                return (bool)uVar22;
              }
              uVar27 = 0;
              if ((int)uVar36 < local_4098[0]) {
                uVar27 = uVar32;
              }
              if ((uVar27 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar4 = (code *)swi(3);
                uVar22 = (*pcVar4)();
                return (bool)uVar22;
              }
              uVar27 = 0;
              if ((int)uVar36 < local_78[0]) {
                uVar27 = uVar32;
              }
              if ((uVar27 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar4 = (code *)swi(3);
                uVar22 = (*pcVar4)();
                return (bool)uVar22;
              }
LAB_149a1f6a4:
              bVar23 = false;
            }
            else {
              uVar27 = 0;
              if ((int)uVar36 < local_4098[0]) {
                uVar27 = uVar32;
              }
              if ((uVar27 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar4 = (code *)swi(3);
                uVar22 = (*pcVar4)();
                return (bool)uVar22;
              }
              uVar27 = 0;
              if ((int)uVar36 < local_78[0]) {
                uVar27 = uVar32;
              }
              iVar29 = local_78[0];
              if (uVar27 == 0) {
                iVar29 = 0x506106c8;
                bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                uVar27 = (uint)CONCAT71(extraout_var,bVar23);
                if (bVar23) {
                  pcVar4 = (code *)swi(3);
                  uVar22 = (*pcVar4)();
                  return (bool)uVar22;
                }
              }
              if (cVar2 != '\x04') {
                if (cVar2 == '\x05') {
                  dVar37 = *(double *)
                            (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)local_6258->Pad)->
                             Pad + 0x10);
                  dVar38 = *(double *)
                            (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)local_6258->Pad)->
                             Pad + 0x18);
                  dVar39 = *(double *)
                            ((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)local_6258->Pad)->Pad
                  ;
                  dVar40 = *(double *)
                            (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)local_6258->Pad)->
                             Pad + 8);
                  dVar13 = *(double *)
                            (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)pTVar34->Pad)->Pad +
                            0x10) + dVar37;
                  dVar14 = *(double *)
                            (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)pTVar34->Pad)->Pad +
                            0x18) + dVar38;
                  dVar37 = dVar37 - *(double *)
                                     (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)
                                      pTVar34->Pad)->Pad + 0x10);
                  dVar38 = dVar38 - *(double *)
                                     (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)
                                      pTVar34->Pad)->Pad + 0x18);
                  dVar41 = *(double *)
                            ((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)pTVar34->Pad)->Pad +
                           dVar39;
                  dVar42 = *(double *)
                            (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)pTVar34->Pad)->Pad +
                            8) + dVar40;
                  dVar39 = dVar39 - *(double *)
                                     ((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)pTVar34->Pad
                                     )->Pad;
                  dVar40 = dVar40 - *(double *)
                                     (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)
                                      pTVar34->Pad)->Pad + 8);
                  local_61e0 = dVar15;
                  lVar30 = -(ulonglong)
                            (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar20,
                                                       SUB84(dVar38,0) & uVar19));
                  auVar8._8_4_ = (int)lVar30;
                  auVar8._0_8_ = -(ulonglong)
                                  (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) &
                                                             uVar18,SUB84(dVar37,0) & uVar17));
                  auVar8._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
                  iVar29 = movmskpd(iVar29,auVar8);
                  lVar30 = -(ulonglong)
                            (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & uVar20,
                                                       SUB84(dVar40,0) & uVar19));
                  auVar9._8_4_ = (int)lVar30;
                  auVar9._0_8_ = -(ulonglong)
                                  (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) &
                                                             uVar18,SUB84(dVar39,0) & uVar17));
                  auVar9._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
                  uVar32 = movmskpd((int)local_6258,auVar9);
                  uVar27 = iVar29 << 2 | uVar32;
                  if (uVar27 != 0) {
                    lVar30 = -(ulonglong)
                              (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar20,
                                                         SUB84(dVar14,0) & uVar19));
                    auVar10._8_4_ = (int)lVar30;
                    auVar10._0_8_ =
                         -(ulonglong)
                          (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar18,
                                                     SUB84(dVar13,0) & uVar17));
                    auVar10._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
                    uVar27 = movmskpd(uVar27,auVar10);
                    lVar30 = -(ulonglong)
                              (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & uVar20,
                                                         SUB84(dVar42,0) & uVar19));
                    auVar12._8_4_ = (int)lVar30;
                    auVar12._0_8_ =
                         -(ulonglong)
                          (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar18,
                                                     SUB84(dVar41,0) & uVar17));
                    auVar12._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
                    iVar29 = movmskpd(uVar32,auVar12);
                    if ((uVar27 & 0x3fffffff) != 0 || iVar29 != 0) {
                      bVar23 = true;
                      goto LAB_149a1f6a7;
                    }
                  }
                }
                goto LAB_149a1f6a4;
              }
              dVar37 = *(double *)
                        (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)local_6258->Pad)->Pad +
                        0x10);
              dVar38 = *(double *)
                        (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)local_6258->Pad)->Pad +
                        0x18);
              dVar39 = *(double *)
                        ((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)local_6258->Pad)->Pad;
              dVar40 = *(double *)
                        (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)local_6258->Pad)->Pad +
                        8);
              dVar13 = *(double *)
                        (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)pTVar34->Pad)->Pad +
                        0x10) + dVar37;
              dVar14 = *(double *)
                        (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)pTVar34->Pad)->Pad +
                        0x18) + dVar38;
              dVar37 = dVar37 - *(double *)
                                 (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)pTVar34->Pad)->
                                  Pad + 0x10);
              dVar38 = dVar38 - *(double *)
                                 (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)pTVar34->Pad)->
                                  Pad + 0x18);
              dVar41 = *(double *)
                        ((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)pTVar34->Pad)->Pad +
                       dVar39;
              dVar42 = *(double *)
                        (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)pTVar34->Pad)->Pad + 8)
                       + dVar40;
              dVar39 = dVar39 - *(double *)
                                 ((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)pTVar34->Pad)->
                                 Pad;
              dVar40 = dVar40 - *(double *)
                                 (((TTypeCompatibleBytes<UE::Math::TQuat<double>_> *)pTVar34->Pad)->
                                  Pad + 8);
              lVar30 = -(ulonglong)
                        (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar20,
                                                   SUB84(dVar38,0) & uVar19));
              auVar5._8_4_ = (int)lVar30;
              auVar5._0_8_ = -(ulonglong)
                              (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar18,
                                                         SUB84(dVar37,0) & uVar17));
              auVar5._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
              iVar29 = movmskpd(iVar29,auVar5);
              lVar30 = -(ulonglong)
                        (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & uVar20,
                                                   SUB84(dVar40,0) & uVar19));
              auVar6._8_4_ = (int)lVar30;
              auVar6._0_8_ = -(ulonglong)
                              (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar18,
                                                         SUB84(dVar39,0) & uVar17));
              auVar6._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
              uVar32 = movmskpd(uVar27,auVar6);
              uVar27 = iVar29 << 2 | uVar32;
              local_61e8 = dVar15;
              if (uVar27 != 0) {
                lVar30 = -(ulonglong)
                          (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar20,
                                                     SUB84(dVar14,0) & uVar19));
                auVar7._8_4_ = (int)lVar30;
                auVar7._0_8_ = -(ulonglong)
                                (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                                           uVar18,SUB84(dVar13,0) & uVar17));
                auVar7._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
                uVar27 = movmskpd(uVar27,auVar7);
                lVar30 = -(ulonglong)
                          (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & uVar20,
                                                     SUB84(dVar42,0) & uVar19));
                auVar11._8_4_ = (int)lVar30;
                auVar11._0_8_ =
                     -(ulonglong)
                      (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar18,
                                                 SUB84(dVar41,0) & uVar17));
                auVar11._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
                iVar29 = movmskpd(uVar32,auVar11);
                if ((uVar27 & 0x3fffffff) != 0 || iVar29 != 0) goto LAB_149a1f6a4;
              }
              bVar23 = true;
            }
LAB_149a1f6a7:
            lVar30 = *(longlong *)((longlong)this + 0x38);
            iVar29 = uVar36 + iVar35;
            if (((iVar29 < 0) || (*(int *)(lVar30 + 0x2020) <= iVar29)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar21)) {
              pcVar4 = (code *)swi(3);
              uVar22 = (*pcVar4)();
              return (bool)uVar22;
            }
            lVar33 = lVar30 + 0x18;
            if (*(longlong *)(lVar30 + 0x2018) != 0) {
              lVar33 = *(longlong *)(lVar30 + 0x2018);
            }
            iVar26 = iVar29;
            if (iVar29 < 0) {
              iVar26 = iVar29 + 0x1f;
            }
            lVar30 = (longlong)(iVar26 >> 5);
            uVar27 = 1 << ((byte)iVar29 & 0x1f);
            uVar32 = *(uint *)(lVar33 + lVar30 * 4);
            if (bVar23) {
              *(uint *)(lVar33 + lVar30 * 4) = uVar32 | uVar27;
            }
            else {
              *(uint *)(lVar33 + lVar30 * 4) = ~uVar27 & uVar32;
            }
          }
          local_6240 = local_6240 + 1;
          pTVar34 = pTVar34 + 1;
          local_6258 = local_6258 + 1;
          uVar36 = uVar36 + 1;
          iVar28 = iVar28 + 1;
          bVar23 = bVar16;
        } while ((int)uVar36 < iVar31);
      }
      iVar24 = iVar24 + -0x100;
      local_6260 = local_6260 + 1;
      iVar35 = iVar35 + 0x100;
    } while (local_6260 < iVar25);
  }
  return true;
}

// operator()<UE::Math::TRotator<double>_> @ 149a20620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
operator()<UE::Math::TRotator<double>_>(void *this,TRotator<double> *param_1)

{
  uint *puVar1;
  char cVar2;
  UPCGBasePointData *pUVar3;
  IPCGAttributeAccessor *this_00;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  undefined1 uVar23;
  bool bVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  undefined7 extraout_var;
  int iVar30;
  int iVar31;
  uint uVar32;
  longlong lVar33;
  uint uVar34;
  TTypeCompatibleBytes<UE::Math::TRotator<double>_> *pTVar35;
  int iVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  longlong lVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 uVar68;
  double dVar69;
  double dVar72;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auStackY_4a98 [32];
  int local_4a50;
  TTypeCompatibleBytes<UE::Math::TRotator<double>_> *local_4a48;
  TTypeCompatibleBytes<bool> *local_4a30;
  int local_4a28;
  int local_4a24;
  undefined8 local_4a20;
  ForElementType<bool> *local_4a18;
  TRotator<double> *local_4a08;
  int iStack_4a00;
  undefined4 uStack_49fc;
  TRotator<double> *local_49f8;
  int iStack_49f0;
  undefined4 uStack_49ec;
  TRotator<double> *local_49e8;
  int iStack_49e0;
  undefined4 uStack_49dc;
  double local_49d8;
  double local_49d0;
  TArrayView<UE::Math::TRotator<double>,int> local_49c8;
  TArrayView<UE::Math::TRotator<double>,int> local_49b8;
  TArrayView<UE::Math::TRotator<double>,int> local_49a8;
  TTypeCompatibleBytes<bool> local_4998 [256];
  int local_4898 [4];
  ForElementType<UE::Math::TRotator<double>_> local_4888;
  int local_3088 [2];
  ForElementType<UE::Math::TRotator<double>_> local_3080;
  int local_1880 [2];
  ForElementType<UE::Math::TRotator<double>_> local_1878;
  int local_78 [2];
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_4a98;
  iVar25 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  if (iVar25 < 1) {
    return false;
  }
  local_78[0] = 0;
  local_78[1] = 0x100;
  local_3088[0] = 0;
  local_3088[1] = 0x100;
  local_1880[0] = 0;
  local_1880[1] = 0x100;
  local_4898[0] = 0;
  local_4898[1] = 0x100;
  UE::Core::Private::
  ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TRotator<double>_>_>
            (0x18,8,0x100,&local_1878,local_78,local_78 + 1);
  if (local_3088[0] < 0x100) {
    UE::Core::Private::
    ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TRotator<double>_>_>
              (0x18,8,0x100 - local_3088[0],&local_4888,local_3088,local_3088 + 1);
  }
  else if (0x100 < local_3088[0]) {
    iVar26 = local_3088[0] + -0x100;
    if (iVar26 < 0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar24) {
        pcVar4 = (code *)swi(3);
        uVar23 = (*pcVar4)();
        return (bool)uVar23;
      }
    }
    else if (iVar26 == 0) goto LAB_149a207dd;
    iVar36 = (local_3088[0] - iVar26) + -0x100;
    if (iVar36 != 0) {
      memmove(local_3088,local_3088 + (longlong)iVar26 * 6,(longlong)iVar36 * 0x18);
    }
    local_3088[0] = local_3088[0] - iVar26;
  }
LAB_149a207dd:
  if (local_1880[0] < 0x100) {
    UE::Core::Private::
    ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TRotator<double>_>_>
              (0x18,8,0x100 - local_1880[0],&local_3080,local_1880,local_1880 + 1);
  }
  else if (0x100 < local_1880[0]) {
    iVar26 = local_1880[0] + -0x100;
    if (iVar26 < 0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar24) {
        pcVar4 = (code *)swi(3);
        uVar23 = (*pcVar4)();
        return (bool)uVar23;
      }
    }
    else if (iVar26 == 0) goto LAB_149a208c6;
    iVar36 = (local_1880[0] - iVar26) + -0x100;
    if (iVar36 != 0) {
      memmove(local_1880,local_1880 + (longlong)iVar26 * 6,(longlong)iVar36 * 0x18);
    }
    local_1880[0] = local_1880[0] - iVar26;
  }
LAB_149a208c6:
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) == 0) &&
     (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) == 0)) {
    bVar24 = false;
    bVar17 = false;
  }
  else {
    bVar24 = true;
    bVar17 = true;
    if (local_4898[0] < 0x100) {
      UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
                (1,1,0x100 - local_4898[0],(ForElementType<bool> *)local_4998,local_4898,
                 local_4898 + 1);
    }
    else if (0x100 < local_4898[0]) {
      iVar26 = local_4898[0] + -0x100;
      if (iVar26 < 0) {
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar22) {
          pcVar4 = (code *)swi(3);
          uVar23 = (*pcVar4)();
          return (bool)uVar23;
        }
      }
      else if (iVar26 == 0) goto LAB_149a209c5;
      iVar36 = (local_4898[0] - iVar26) + -0x100;
      if (iVar36 != 0) {
        memmove(local_4898,(void *)((longlong)local_4898 + (longlong)iVar26),(longlong)iVar36);
      }
      local_4898[0] = local_4898[0] - iVar26;
    }
  }
LAB_149a209c5:
  uVar21 = _UNK_15061cc8c;
  uVar20 = _UNK_15061cc88;
  uVar19 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar16 = __real_3e45798ee2308c3a;
  iVar26 = (int)(iVar25 + 0xff + (iVar25 + 0xff >> 0x1f & 0xffU)) >> 8;
  local_4a50 = 0;
  if (0 < iVar26) {
    iVar36 = 0;
    do {
      local_49e8 = (TRotator<double> *)&local_1878;
      iVar31 = 0x100;
      if (iVar25 < 0x100) {
        iVar31 = iVar25;
      }
      iStack_49e0 = iVar31;
      if ((iVar31 < 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar22)) {
        pcVar4 = (code *)swi(3);
        uVar23 = (*pcVar4)();
        return (bool)uVar23;
      }
      local_4a08 = (TRotator<double> *)&local_4888;
      iStack_4a00 = iVar31;
      if ((iVar31 < 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar22)) {
        pcVar4 = (code *)swi(3);
        uVar23 = (*pcVar4)();
        return (bool)uVar23;
      }
      local_49f8 = (TRotator<double> *)&local_3080;
      iStack_49f0 = iVar31;
      if ((iVar31 < 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar22)) {
        pcVar4 = (code *)swi(3);
        uVar23 = (*pcVar4)();
        return (bool)uVar23;
      }
      if (bVar24) {
        memset(local_4998,0,(longlong)local_4898[0]);
        local_4a20 = *(undefined8 *)((longlong)this + 0x38);
        local_4a28 = iVar31;
        local_4a24 = iVar36;
        local_4a18 = (ForElementType<bool> *)local_4998;
        ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
        operator()<UE::Math::TRotator<double>_>'::__l11::<lambda_1>::operator()
                  (&local_4a28,*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18),
                   *(UPCGSpatialData **)(*(longlong *)((longlong)this + 8) + 0x20));
        pUVar3 = *(UPCGBasePointData **)(*(longlong *)((longlong)this + 0x10) + 0x18);
        if (*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18) != pUVar3) {
          ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
          operator()<UE::Math::TRotator<double>_>'::__l11::<lambda_1>::operator()
                    (&local_4a28,pUVar3,
                     *(UPCGSpatialData **)(*(longlong *)((longlong)this + 0x10) + 0x20));
        }
      }
      else {
        local_4a20 = *(undefined8 *)((longlong)this + 0x38);
        local_4a28 = iVar31;
        local_4a24 = iVar36;
        local_4a18 = (ForElementType<bool> *)local_4998;
      }
      local_49c8._12_4_ = uStack_49dc;
      local_49c8.ArrayNum = iStack_49e0;
      local_49c8.DataPtr = local_49e8;
      bVar24 = IPCGAttributeAccessor::GetRange<UE::Math::TRotator<double>_>
                         ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18),
                          &local_49c8,iVar36,
                          (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20),
                          StrictType);
      if (!bVar24) {
        return false;
      }
      local_49b8._12_4_ = uStack_49fc;
      local_49b8.ArrayNum = iStack_4a00;
      local_49b8.DataPtr = local_4a08;
      bVar24 = IPCGAttributeAccessor::GetRange<UE::Math::TRotator<double>_>
                         ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_49b8
                          ,iVar36,(IPCGAttributeAccessorKeys *)
                                  (*(undefined8 **)((longlong)this + 8))[1],
                          AllowBroadcastAndConstructible);
      if (!bVar24) {
        return false;
      }
      this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10);
      if (this_00 != (IPCGAttributeAccessor *)0x0) {
        local_49a8._12_4_ = uStack_49ec;
        local_49a8.ArrayNum = iStack_49f0;
        local_49a8.DataPtr = local_49f8;
        bVar24 = IPCGAttributeAccessor::GetRange<UE::Math::TRotator<double>_>
                           (this_00,&local_49a8,iVar36,
                            (IPCGAttributeAccessorKeys *)
                            (*(undefined8 **)((longlong)this + 0x10))[1],
                            AllowBroadcastAndConstructible);
        if (!bVar24) {
          return false;
        }
      }
      if ((iVar31 != 0) &&
         (((iVar30 = iVar31 + -1 + iVar36, iVar30 < 0 ||
           (*(int *)(*(longlong *)((longlong)this + 0x38) + 0x2020) <= iVar30)) &&
          (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                              ("Range == 0 || OperationData.FilterBitArray.IsValidIndex(StartIndex + Range - 1)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                               ,0x2e6,L""), bVar24)))) {
        pcVar4 = (code *)swi(3);
        uVar23 = (*pcVar4)();
        return (bool)uVar23;
      }
      uVar34 = 0;
      if (0 < iVar31) {
        pTVar35 = local_1878.InlineData;
        local_4a48 = local_4888.InlineData;
        iVar30 = iVar36;
        local_4a30 = local_4998;
        do {
          if (bVar17) {
            uVar32 = 0;
            if ((int)uVar34 < local_4898[0]) {
              uVar32 = ~uVar34 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar4 = (code *)swi(3);
              uVar23 = (*pcVar4)();
              return (bool)uVar23;
            }
            if (((TTypeCompatibleBytes<bool> *)local_4a30->Pad)->Pad[0] == '\0') goto LAB_149a20d84;
            lVar42 = *(longlong *)((longlong)this + 0x38);
            if (((iVar30 < 0) || (*(int *)(lVar42 + 0x2020) <= (int)(uVar34 + iVar36))) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar24)) {
              pcVar4 = (code *)swi(3);
              uVar23 = (*pcVar4)();
              return (bool)uVar23;
            }
            iVar29 = uVar34 + iVar36;
            lVar33 = lVar42 + 0x18;
            if (*(longlong *)(lVar42 + 0x2018) != 0) {
              lVar33 = *(longlong *)(lVar42 + 0x2018);
            }
            iVar27 = iVar29;
            if (iVar29 < 0) {
              iVar27 = iVar29 + 0x1f;
            }
            puVar1 = (uint *)(lVar33 + (longlong)(iVar27 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar29 & 0x1f);
          }
          else {
LAB_149a20d84:
            uVar32 = ~uVar34 >> 0x1f;
            cVar2 = **(char **)this;
            if (cVar2 == '\x06') {
              uVar28 = 0;
              if ((int)uVar34 < local_1880[0]) {
                uVar28 = uVar32;
              }
              if ((uVar28 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar4 = (code *)swi(3);
                uVar23 = (*pcVar4)();
                return (bool)uVar23;
              }
              uVar28 = 0;
              if ((int)uVar34 < local_3088[0]) {
                uVar28 = uVar32;
              }
              if ((uVar28 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar4 = (code *)swi(3);
                uVar23 = (*pcVar4)();
                return (bool)uVar23;
              }
              uVar28 = 0;
              if ((int)uVar34 < local_78[0]) {
                uVar28 = uVar32;
              }
              if ((uVar28 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar4 = (code *)swi(3);
                uVar23 = (*pcVar4)();
                return (bool)uVar23;
              }
LAB_149a20e5d:
              bVar24 = false;
            }
            else {
              uVar28 = 0;
              if ((int)uVar34 < local_3088[0]) {
                uVar28 = uVar32;
              }
              if ((uVar28 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar4 = (code *)swi(3);
                uVar23 = (*pcVar4)();
                return (bool)uVar23;
              }
              uVar28 = 0;
              if ((int)uVar34 < local_78[0]) {
                uVar28 = uVar32;
              }
              iVar29 = local_78[0];
              if (uVar28 == 0) {
                iVar29 = 0x506106c8;
                bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                uVar28 = (uint)CONCAT71(extraout_var,bVar24);
                if (bVar24) {
                  pcVar4 = (code *)swi(3);
                  uVar23 = (*pcVar4)();
                  return (bool)uVar23;
                }
              }
              uVar68 = (undefined4)((ulonglong)dVar16 >> 0x20);
              dVar15 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
              dVar13 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
              dVar14 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
              dVar12 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
              if (cVar2 == '\x04') {
                dVar69 = *(double *)
                          ((TTypeCompatibleBytes<UE::Math::TRotator<double>_> *)pTVar35->Pad)->Pad -
                         *(double *)
                          ((TTypeCompatibleBytes<UE::Math::TRotator<double>_> *)local_4a48->Pad)->
                          Pad;
                dVar72 = *(double *)
                          (((TTypeCompatibleBytes<UE::Math::TRotator<double>_> *)pTVar35->Pad)->Pad
                          + 8) - *(double *)
                                  (((TTypeCompatibleBytes<UE::Math::TRotator<double>_> *)
                                   local_4a48->Pad)->Pad + 8);
                dVar10 = *(double *)
                          (((TTypeCompatibleBytes<UE::Math::TRotator<double>_> *)pTVar35->Pad)->Pad
                          + 0x10) -
                         *(double *)
                          (((TTypeCompatibleBytes<UE::Math::TRotator<double>_> *)local_4a48->Pad)->
                           Pad + 0x10);
                auVar43._8_4_ = SUB84(dVar72,0);
                auVar43._0_8_ = dVar69;
                auVar43._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
                auVar44 = divpd(auVar43,(undefined1  [16])
                                        GlobalVectorConstants::Double360.XY.m128d_f64);
                auVar44 = roundpd(in_XMM1,auVar44,3);
                auVar58._0_8_ = auVar44._0_8_ * dVar14;
                auVar58._8_8_ = auVar44._8_8_ * dVar15;
                auVar45._8_8_ = 0;
                auVar45._0_8_ = dVar10;
                dVar69 = dVar69 - auVar58._0_8_;
                dVar72 = dVar72 - auVar58._8_8_;
                auVar44 = divpd(auVar45,(undefined1  [16])
                                        GlobalVectorConstants::Double360.ZW.m128d_f64);
                auVar44 = roundpd(auVar58,auVar44,3);
                auVar46._8_4_ = SUB84(dVar72,0);
                auVar46._0_8_ = dVar69;
                auVar46._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
                dVar10 = dVar10 - auVar44._0_8_ * dVar12;
                dVar11 = 0.0 - auVar44._8_8_ * dVar13;
                uVar37 = -(ulonglong)(0.0 <= dVar69);
                uVar39 = -(ulonglong)(0.0 <= dVar72);
                auVar59._0_8_ = uVar37 & (ulonglong)dVar69;
                auVar59._8_4_ = (undefined4)(uVar39 & (ulonglong)dVar72);
                auVar59._12_4_ = (undefined4)((uVar39 & (ulonglong)dVar72) >> 0x20);
                dVar72 = auVar46._8_8_ + dVar15;
                uVar38 = -(ulonglong)(0.0 <= dVar10);
                uVar40 = -(ulonglong)(0.0 <= dVar11);
                auVar73._0_4_ = ~(uint)uVar37 & SUB84(dVar69 + dVar14,0);
                auVar73._4_4_ =
                     ~(uint)(uVar37 >> 0x20) & (uint)((ulonglong)(dVar69 + dVar14) >> 0x20);
                auVar73._8_4_ = ~(uint)uVar39 & SUB84(dVar72,0);
                auVar73._12_4_ = ~(uint)(uVar39 >> 0x20) & (uint)((ulonglong)dVar72 >> 0x20);
                auVar73 = auVar73 | auVar59;
                auVar47._8_4_ = SUB84(dVar11,0);
                auVar47._0_8_ = dVar10;
                auVar47._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
                dVar72 = auVar47._8_8_ + dVar13;
                uVar39 = -(ulonglong)
                          (GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar73._0_8_);
                uVar41 = -(ulonglong)
                          (GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar73._8_8_);
                auVar70._0_4_ = ~(uint)uVar38 & SUB84(dVar10 + dVar12,0);
                auVar70._4_4_ =
                     ~(uint)(uVar38 >> 0x20) & (uint)((ulonglong)(dVar10 + dVar12) >> 0x20);
                auVar70._8_4_ = ~(uint)uVar40 & SUB84(dVar72,0);
                auVar70._12_4_ = ~(uint)(uVar40 >> 0x20) & (uint)((ulonglong)dVar72 >> 0x20);
                auVar5._8_4_ = (int)((ulonglong)dVar11 & uVar40);
                auVar5._0_8_ = (ulonglong)dVar10 & uVar38;
                auVar5._12_4_ = (int)(((ulonglong)dVar11 & uVar40) >> 0x20);
                auVar70 = auVar70 | auVar5;
                uVar38 = -(ulonglong)
                          (GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar70._0_8_);
                uVar40 = -(ulonglong)
                          (GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar70._8_8_);
                auVar60._0_8_ = uVar38 & (ulonglong)(auVar70._0_8_ - dVar12);
                uVar37 = uVar40 & (ulonglong)(auVar70._8_8_ - dVar13);
                auVar60._8_4_ = (undefined4)uVar37;
                auVar60._12_4_ = (undefined4)(uVar37 >> 0x20);
                auVar48._0_4_ = ~(uint)uVar38 & auVar70._0_4_;
                auVar48._4_4_ = ~(uint)(uVar38 >> 0x20) & auVar70._4_4_;
                auVar48._8_4_ = ~(uint)uVar40 & auVar70._8_4_;
                auVar48._12_4_ = ~(uint)(uVar40 >> 0x20) & auVar70._12_4_;
                auVar60 = auVar60 | auVar48;
                auVar49._8_4_ = SUB84(dVar16,0);
                auVar49._0_8_ = dVar16;
                auVar49._12_4_ = uVar68;
                auVar61._0_8_ = (double)CONCAT44(auVar60._4_4_ & uVar19,auVar60._0_4_ & uVar18);
                auVar61._8_4_ = auVar60._8_4_ & uVar20;
                auVar61._12_4_ = auVar60._12_4_ & uVar21;
                auVar50._8_8_ = -(ulonglong)(auVar49._8_8_ < auVar61._8_8_);
                auVar50._0_8_ = -(ulonglong)(dVar16 < auVar61._0_8_);
                uVar32 = movmskpd(iVar29,auVar50);
                auVar62._0_8_ = uVar39 & (ulonglong)(auVar73._0_8_ - dVar14);
                uVar37 = uVar41 & (ulonglong)(auVar73._8_8_ - dVar15);
                auVar62._8_4_ = (undefined4)uVar37;
                auVar62._12_4_ = (undefined4)(uVar37 >> 0x20);
                auVar8._4_4_ = ~(uint)(uVar39 >> 0x20) & auVar73._4_4_;
                auVar8._0_4_ = ~(uint)uVar39 & auVar73._0_4_;
                auVar8._8_4_ = ~(uint)uVar41 & auVar73._8_4_;
                auVar8._12_4_ = ~(uint)(uVar41 >> 0x20) & auVar73._12_4_;
                auVar62 = auVar62 | auVar8;
                in_XMM1._0_8_ = (double)CONCAT44(auVar62._4_4_ & uVar19,auVar62._0_4_ & uVar18);
                in_XMM1._8_4_ = auVar62._8_4_ & uVar20;
                in_XMM1._12_4_ = auVar62._12_4_ & uVar21;
                lVar42 = -(ulonglong)(dVar16 < in_XMM1._8_8_);
                auVar6._8_4_ = (int)lVar42;
                auVar6._0_8_ = -(ulonglong)(dVar16 < in_XMM1._0_8_);
                auVar6._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
                iVar29 = movmskpd(uVar28,auVar6);
                bVar24 = (uVar32 & 0x3fffffff) == 0 && iVar29 == 0;
                local_49d8 = dVar16;
              }
              else {
                if (cVar2 != '\x05') goto LAB_149a20e5d;
                dVar69 = *(double *)
                          ((TTypeCompatibleBytes<UE::Math::TRotator<double>_> *)pTVar35->Pad)->Pad -
                         *(double *)
                          ((TTypeCompatibleBytes<UE::Math::TRotator<double>_> *)local_4a48->Pad)->
                          Pad;
                dVar72 = *(double *)
                          (((TTypeCompatibleBytes<UE::Math::TRotator<double>_> *)pTVar35->Pad)->Pad
                          + 8) - *(double *)
                                  (((TTypeCompatibleBytes<UE::Math::TRotator<double>_> *)
                                   local_4a48->Pad)->Pad + 8);
                dVar10 = *(double *)
                          (((TTypeCompatibleBytes<UE::Math::TRotator<double>_> *)pTVar35->Pad)->Pad
                          + 0x10) -
                         *(double *)
                          (((TTypeCompatibleBytes<UE::Math::TRotator<double>_> *)local_4a48->Pad)->
                           Pad + 0x10);
                auVar51._8_4_ = SUB84(dVar72,0);
                auVar51._0_8_ = dVar69;
                auVar51._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
                auVar44 = divpd(auVar51,(undefined1  [16])
                                        GlobalVectorConstants::Double360.XY.m128d_f64);
                auVar44 = roundpd(in_XMM1,auVar44,3);
                auVar63._0_8_ = auVar44._0_8_ * dVar14;
                auVar63._8_8_ = auVar44._8_8_ * dVar15;
                auVar52._8_8_ = 0;
                auVar52._0_8_ = dVar10;
                dVar69 = dVar69 - auVar63._0_8_;
                dVar72 = dVar72 - auVar63._8_8_;
                auVar44 = divpd(auVar52,(undefined1  [16])
                                        GlobalVectorConstants::Double360.ZW.m128d_f64);
                auVar44 = roundpd(auVar63,auVar44,3);
                auVar53._8_4_ = SUB84(dVar72,0);
                auVar53._0_8_ = dVar69;
                auVar53._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
                dVar10 = dVar10 - auVar44._0_8_ * dVar12;
                dVar11 = 0.0 - auVar44._8_8_ * dVar13;
                uVar37 = -(ulonglong)(0.0 <= dVar69);
                uVar39 = -(ulonglong)(0.0 <= dVar72);
                auVar64._0_8_ = uVar37 & (ulonglong)dVar69;
                auVar64._8_4_ = (undefined4)(uVar39 & (ulonglong)dVar72);
                auVar64._12_4_ = (undefined4)((uVar39 & (ulonglong)dVar72) >> 0x20);
                dVar72 = auVar53._8_8_ + dVar15;
                uVar38 = -(ulonglong)(0.0 <= dVar10);
                uVar40 = -(ulonglong)(0.0 <= dVar11);
                auVar74._0_4_ = ~(uint)uVar37 & SUB84(dVar69 + dVar14,0);
                auVar74._4_4_ =
                     ~(uint)(uVar37 >> 0x20) & (uint)((ulonglong)(dVar69 + dVar14) >> 0x20);
                auVar74._8_4_ = ~(uint)uVar39 & SUB84(dVar72,0);
                auVar74._12_4_ = ~(uint)(uVar39 >> 0x20) & (uint)((ulonglong)dVar72 >> 0x20);
                auVar74 = auVar74 | auVar64;
                auVar54._8_4_ = SUB84(dVar11,0);
                auVar54._0_8_ = dVar10;
                auVar54._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
                dVar72 = auVar54._8_8_ + dVar13;
                uVar39 = -(ulonglong)
                          (GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar74._0_8_);
                uVar41 = -(ulonglong)
                          (GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar74._8_8_);
                auVar71._0_4_ = ~(uint)uVar38 & SUB84(dVar10 + dVar12,0);
                auVar71._4_4_ =
                     ~(uint)(uVar38 >> 0x20) & (uint)((ulonglong)(dVar10 + dVar12) >> 0x20);
                auVar71._8_4_ = ~(uint)uVar40 & SUB84(dVar72,0);
                auVar71._12_4_ = ~(uint)(uVar40 >> 0x20) & (uint)((ulonglong)dVar72 >> 0x20);
                auVar44._8_4_ = (int)((ulonglong)dVar11 & uVar40);
                auVar44._0_8_ = (ulonglong)dVar10 & uVar38;
                auVar44._12_4_ = (int)(((ulonglong)dVar11 & uVar40) >> 0x20);
                auVar71 = auVar71 | auVar44;
                uVar38 = -(ulonglong)
                          (GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar71._0_8_);
                uVar40 = -(ulonglong)
                          (GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar71._8_8_);
                auVar65._0_8_ = uVar38 & (ulonglong)(auVar71._0_8_ - dVar12);
                uVar37 = uVar40 & (ulonglong)(auVar71._8_8_ - dVar13);
                auVar65._8_4_ = (undefined4)uVar37;
                auVar65._12_4_ = (undefined4)(uVar37 >> 0x20);
                auVar55._0_4_ = ~(uint)uVar38 & auVar71._0_4_;
                auVar55._4_4_ = ~(uint)(uVar38 >> 0x20) & auVar71._4_4_;
                auVar55._8_4_ = ~(uint)uVar40 & auVar71._8_4_;
                auVar55._12_4_ = ~(uint)(uVar40 >> 0x20) & auVar71._12_4_;
                auVar65 = auVar65 | auVar55;
                auVar56._8_4_ = SUB84(dVar16,0);
                auVar56._0_8_ = dVar16;
                auVar56._12_4_ = uVar68;
                auVar66._0_8_ = (double)CONCAT44(auVar65._4_4_ & uVar19,auVar65._0_4_ & uVar18);
                auVar66._8_4_ = auVar65._8_4_ & uVar20;
                auVar66._12_4_ = auVar65._12_4_ & uVar21;
                auVar57._8_8_ = -(ulonglong)(auVar56._8_8_ < auVar66._8_8_);
                auVar57._0_8_ = -(ulonglong)(dVar16 < auVar66._0_8_);
                uVar32 = movmskpd(iVar29,auVar57);
                auVar67._0_8_ = uVar39 & (ulonglong)(auVar74._0_8_ - dVar14);
                uVar37 = uVar41 & (ulonglong)(auVar74._8_8_ - dVar15);
                auVar67._8_4_ = (undefined4)uVar37;
                auVar67._12_4_ = (undefined4)(uVar37 >> 0x20);
                auVar9._4_4_ = ~(uint)(uVar39 >> 0x20) & auVar74._4_4_;
                auVar9._0_4_ = ~(uint)uVar39 & auVar74._0_4_;
                auVar9._8_4_ = ~(uint)uVar41 & auVar74._8_4_;
                auVar9._12_4_ = ~(uint)(uVar41 >> 0x20) & auVar74._12_4_;
                auVar67 = auVar67 | auVar9;
                in_XMM1._0_8_ = (double)CONCAT44(auVar67._4_4_ & uVar19,auVar67._0_4_ & uVar18);
                in_XMM1._8_4_ = auVar67._8_4_ & uVar20;
                in_XMM1._12_4_ = auVar67._12_4_ & uVar21;
                lVar42 = -(ulonglong)(dVar16 < in_XMM1._8_8_);
                auVar7._8_4_ = (int)lVar42;
                auVar7._0_8_ = -(ulonglong)(dVar16 < in_XMM1._0_8_);
                auVar7._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
                iVar29 = movmskpd((int)local_4a48,auVar7);
                bVar24 = (uVar32 & 0x3fffffff) != 0 || iVar29 != 0;
                local_49d0 = dVar16;
              }
            }
            lVar42 = *(longlong *)((longlong)this + 0x38);
            iVar29 = uVar34 + iVar36;
            if (((iVar29 < 0) || (*(int *)(lVar42 + 0x2020) <= iVar29)) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar22)) {
              pcVar4 = (code *)swi(3);
              uVar23 = (*pcVar4)();
              return (bool)uVar23;
            }
            lVar33 = lVar42 + 0x18;
            if (*(longlong *)(lVar42 + 0x2018) != 0) {
              lVar33 = *(longlong *)(lVar42 + 0x2018);
            }
            iVar27 = iVar29;
            if (iVar29 < 0) {
              iVar27 = iVar29 + 0x1f;
            }
            uVar28 = 1 << ((byte)iVar29 & 0x1f);
            uVar32 = *(uint *)(lVar33 + (longlong)(iVar27 >> 5) * 4);
            if (bVar24) {
              uVar28 = uVar28 | uVar32;
            }
            else {
              uVar28 = ~uVar28 & uVar32;
            }
            *(uint *)(lVar33 + (longlong)(iVar27 >> 5) * 4) = uVar28;
          }
          local_4a30 = local_4a30 + 1;
          pTVar35 = pTVar35 + 1;
          local_4a48 = local_4a48 + 1;
          uVar34 = uVar34 + 1;
          iVar30 = iVar30 + 1;
        } while ((int)uVar34 < iVar31);
      }
      iVar25 = iVar25 + -0x100;
      local_4a50 = local_4a50 + 1;
      iVar36 = iVar36 + 0x100;
      bVar24 = bVar17;
    } while (local_4a50 < iVar26);
  }
  return true;
}

// operator()<UE::Math::TTransform<double>_> @ 149a22260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
`FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
operator()<UE::Math::TTransform<double>_>(void *this,TTransform<double> *param_1)

{
  uint *puVar1;
  char cVar2;
  UPCGBasePointData *pUVar3;
  IPCGAttributeAccessor *this_00;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  undefined1 auStackY_12268 [32];
  int iStack_12220;
  int iStack_1221c;
  TTypeCompatibleBytes<bool> *pTStack_12208;
  int iStack_12200;
  int iStack_121fc;
  undefined8 uStack_121f8;
  ForElementType<bool> *pFStack_121f0;
  TArray<UE::Math::TTransform<double>,TFixedAllocator<256>_> *pTStack_121e8;
  int iStack_121e0;
  undefined4 uStack_121dc;
  TArray<UE::Math::TTransform<double>,TFixedAllocator<256>_> *pTStack_121d8;
  int iStack_121d0;
  undefined4 uStack_121cc;
  TTransform<double> *pTStack_121c8;
  int iStack_121c0;
  undefined4 uStack_121bc;
  TArrayView<UE::Math::TTransform<double>,int> TStack_121b8;
  TArrayView<UE::Math::TTransform<double>,int> TStack_121a8;
  TArrayView<UE::Math::TTransform<double>,int> TStack_12198;
  ForElementType<bool> FStack_12188;
  int aiStack_12088 [4];
  ForElementType<UE::Math::TTransform<double>_> FStack_12078;
  int local_c078 [4];
  TArray<UE::Math::TTransform<double>,TFixedAllocator<256>_> local_c068;
  TArray<UE::Math::TTransform<double>,TFixedAllocator<256>_> local_6058;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_12268;
  iVar11 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  if (iVar11 < 1) {
    return false;
  }
  local_c078[0] = 0;
  local_c078[1] = 0x100;
  local_c068.ArrayNum = 0;
  local_c068.ArrayMax = 0x100;
  local_6058.ArrayNum = 0;
  local_6058.ArrayMax = 0x100;
  aiStack_12088[0] = 0;
  aiStack_12088[1] = 0x100;
  iVar12 = UE::Core::Private::
           ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TTransform<double>_>_>
                     (0x60,0x10,0x100,&FStack_12078,local_c078,local_c078 + 1);
  DefaultConstructItems<UE::Math::TTransform<double>,int>(FStack_12078.InlineData + iVar12,0x100);
  TArray<UE::Math::TTransform<double>,TFixedAllocator<256>_>::SetNum(&local_c068,0x100,No);
  TArray<UE::Math::TTransform<double>,TFixedAllocator<256>_>::SetNum(&local_6058,0x100,No);
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) == 0) &&
     (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) == 0)) {
    bVar10 = false;
    bVar6 = false;
    goto LAB_149a2247a;
  }
  bVar10 = true;
  bVar6 = true;
  if (aiStack_12088[0] < 0x100) {
    UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
              (1,1,0x100 - aiStack_12088[0],&FStack_12188,aiStack_12088,aiStack_12088 + 1);
    goto LAB_149a2247a;
  }
  if (aiStack_12088[0] < 0x101) goto LAB_149a2247a;
  iVar12 = aiStack_12088[0] + -0x100;
  if (iVar12 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x458,
                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                       );
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
LAB_149a22447:
    iVar13 = (aiStack_12088[0] - iVar12) + -0x100;
    if (iVar13 != 0) {
      memmove(aiStack_12088,(void *)((longlong)aiStack_12088 + (longlong)iVar12),(longlong)iVar13);
    }
    aiStack_12088[0] = aiStack_12088[0] - iVar12;
  }
  else if (iVar12 != 0) goto LAB_149a22447;
  bVar10 = true;
LAB_149a2247a:
  dVar7 = __real_3e45798ee2308c3a;
  iVar12 = (int)(iVar11 + 0xff + (iVar11 + 0xff >> 0x1f & 0xffU)) >> 8;
  iStack_1221c = 0;
  if (0 < iVar12) {
    iStack_12220 = 0;
    do {
      pTStack_121c8 = (TTransform<double> *)&FStack_12078;
      iVar13 = 0x100;
      if (iVar11 < 0x100) {
        iVar13 = iVar11;
      }
      iStack_121c0 = iVar13;
      if ((iVar13 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      pTStack_121e8 = &local_c068;
      iStack_121e0 = iVar13;
      if ((iVar13 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      pTStack_121d8 = &local_6058;
      iStack_121d0 = iVar13;
      if ((iVar13 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      if (bVar10) {
        memset(&FStack_12188,0,(longlong)aiStack_12088[0]);
        uStack_121f8 = *(undefined8 *)((longlong)this + 0x38);
        pFStack_121f0 = &FStack_12188;
        iStack_12200 = iVar13;
        iStack_121fc = iStack_12220;
        ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
        operator()<UE::Math::TTransform<double>_>'::__l11::<lambda_1>::operator()
                  (&iStack_12200,*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18),
                   *(UPCGSpatialData **)(*(longlong *)((longlong)this + 8) + 0x20));
        pUVar3 = *(UPCGBasePointData **)(*(longlong *)((longlong)this + 0x10) + 0x18);
        if (*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18) != pUVar3) {
          ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
          operator()<UE::Math::TTransform<double>_>'::__l11::<lambda_1>::operator()
                    (&iStack_12200,pUVar3,
                     *(UPCGSpatialData **)(*(longlong *)((longlong)this + 0x10) + 0x20));
        }
      }
      else {
        uStack_121f8 = *(undefined8 *)((longlong)this + 0x38);
        pFStack_121f0 = &FStack_12188;
        iStack_12200 = iVar13;
        iStack_121fc = iStack_12220;
      }
      TStack_121b8._12_4_ = uStack_121bc;
      TStack_121b8.ArrayNum = iStack_121c0;
      TStack_121b8.DataPtr = pTStack_121c8;
      bVar8 = IPCGAttributeAccessor::GetRange<UE::Math::TTransform<double>_>
                        ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18),
                         &TStack_121b8,iStack_12220,
                         (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20),
                         StrictType);
      if (!bVar8) {
        return false;
      }
      TStack_121a8._12_4_ = uStack_121dc;
      TStack_121a8.ArrayNum = iStack_121e0;
      TStack_121a8.DataPtr = (TTransform<double> *)pTStack_121e8;
      bVar8 = IPCGAttributeAccessor::GetRange<UE::Math::TTransform<double>_>
                        ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                         &TStack_121a8,iStack_12220,
                         (IPCGAttributeAccessorKeys *)(*(undefined8 **)((longlong)this + 8))[1],
                         AllowBroadcastAndConstructible);
      if (!bVar8) {
        return false;
      }
      this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10);
      if (this_00 != (IPCGAttributeAccessor *)0x0) {
        TStack_12198._12_4_ = uStack_121cc;
        TStack_12198.ArrayNum = iStack_121d0;
        TStack_12198.DataPtr = (TTransform<double> *)pTStack_121d8;
        bVar8 = IPCGAttributeAccessor::GetRange<UE::Math::TTransform<double>_>
                          (this_00,&TStack_12198,iStack_12220,
                           (IPCGAttributeAccessorKeys *)(*(undefined8 **)((longlong)this + 0x10))[1]
                           ,AllowBroadcastAndConstructible);
        if (!bVar8) {
          return false;
        }
      }
      if ((iVar13 != 0) &&
         (((iVar16 = iVar13 + -1 + iStack_12220, iVar16 < 0 ||
           (*(int *)(*(longlong *)((longlong)this + 0x38) + 0x2020) <= iVar16)) &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Range == 0 || OperationData.FilterBitArray.IsValidIndex(StartIndex + Range - 1)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                              ,0x2e6,L""), bVar8)))) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      uVar21 = 0;
      if (0 < iVar13) {
        pTStack_12208 = FStack_12188.InlineData;
        lVar20 = 0;
        iVar16 = iStack_12220;
        do {
          if (bVar6) {
            uVar17 = 0;
            if ((int)uVar21 < aiStack_12088[0]) {
              uVar17 = ~uVar21 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              uVar9 = (*pcVar5)();
              return (bool)uVar9;
            }
            if (pTStack_12208->Pad[0] == '\0') goto LAB_149a2281b;
            lVar4 = *(longlong *)((longlong)this + 0x38);
            if (((iVar16 < 0) || (*(int *)(lVar4 + 0x2020) <= (int)(iStack_12220 + uVar21))) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              uVar9 = (*pcVar5)();
              return (bool)uVar9;
            }
            iVar19 = iStack_12220 + uVar21;
            lVar18 = lVar4 + 0x18;
            if (*(longlong *)(lVar4 + 0x2018) != 0) {
              lVar18 = *(longlong *)(lVar4 + 0x2018);
            }
            iVar14 = iVar19;
            if (iVar19 < 0) {
              iVar14 = iVar19 + 0x1f;
            }
            puVar1 = (uint *)(lVar18 + (longlong)(iVar14 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar19 & 0x1f);
          }
          else {
LAB_149a2281b:
            uVar17 = ~uVar21 >> 0x1f;
            cVar2 = **(char **)this;
            if (cVar2 == '\x06') {
              uVar15 = 0;
              if ((int)uVar21 < local_6058.ArrayNum) {
                uVar15 = uVar17;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return (bool)uVar9;
              }
              uVar15 = 0;
              if ((int)uVar21 < local_c068.ArrayNum) {
                uVar15 = uVar17;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return (bool)uVar9;
              }
              uVar15 = 0;
              if ((int)uVar21 < local_c078[0]) {
                uVar15 = uVar17;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return (bool)uVar9;
              }
LAB_149a228f7:
              bVar10 = false;
            }
            else {
              uVar15 = 0;
              if ((int)uVar21 < local_c068.ArrayNum) {
                uVar15 = uVar17;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return (bool)uVar9;
              }
              uVar15 = 0;
              if ((int)uVar21 < local_c078[0]) {
                uVar15 = uVar17;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return (bool)uVar9;
              }
              if (cVar2 == '\x04') {
                bVar10 = PCG::Private::MetadataTraits<UE::Math::TTransform<double>_>::Equal
                                   ((TTransform<double> *)(FStack_12078.InlineData[0].Pad + lVar20),
                                    (TTransform<double> *)
                                    (local_c068.AllocatorInstance.InlineData[0].Pad + lVar20),dVar7)
                ;
              }
              else {
                if (cVar2 != '\x05') goto LAB_149a228f7;
                bVar10 = PCG::Private::MetadataTraits<UE::Math::TTransform<double>_>::Equal
                                   ((TTransform<double> *)(FStack_12078.InlineData[0].Pad + lVar20),
                                    (TTransform<double> *)
                                    (local_c068.AllocatorInstance.InlineData[0].Pad + lVar20),dVar7)
                ;
                bVar10 = !bVar10;
              }
            }
            lVar4 = *(longlong *)((longlong)this + 0x38);
            iVar19 = iStack_12220 + uVar21;
            if (((iVar19 < 0) || (*(int *)(lVar4 + 0x2020) <= iVar19)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              uVar9 = (*pcVar5)();
              return (bool)uVar9;
            }
            lVar18 = lVar4 + 0x18;
            if (*(longlong *)(lVar4 + 0x2018) != 0) {
              lVar18 = *(longlong *)(lVar4 + 0x2018);
            }
            iVar14 = iVar19;
            if (iVar19 < 0) {
              iVar14 = iVar19 + 0x1f;
            }
            uVar15 = 1 << ((byte)iVar19 & 0x1f);
            uVar17 = *(uint *)(lVar18 + (longlong)(iVar14 >> 5) * 4);
            if (bVar10 == false) {
              uVar15 = ~uVar15 & uVar17;
            }
            else {
              uVar15 = uVar15 | uVar17;
            }
            *(uint *)(lVar18 + (longlong)(iVar14 >> 5) * 4) = uVar15;
          }
          pTStack_12208 = pTStack_12208 + 1;
          uVar21 = uVar21 + 1;
          lVar20 = lVar20 + 0x60;
          iVar16 = iVar16 + 1;
          bVar10 = bVar6;
        } while ((int)uVar21 < iVar13);
      }
      iStack_12220 = iStack_12220 + 0x100;
      iStack_1221c = iStack_1221c + 1;
      iVar11 = iVar11 + -0x100;
    } while (iStack_1221c < iVar12);
  }
  return true;
}

// operator()<UE::Math::TVector2<double>_> @ 149a24020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
`FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
operator()<UE::Math::TVector2<double>_>(void *this,TVector2<double> *param_1)

{
  uint *puVar1;
  double dVar2;
  char cVar3;
  char cVar4;
  UPCGBasePointData *pUVar5;
  IPCGAttributeAccessor *this_00;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  undefined1 auStackY_3268 [32];
  int local_3218;
  longlong local_3200;
  int local_31f8;
  int local_31f4;
  undefined8 local_31f0;
  ForElementType<bool> *local_31e8;
  TVector2<double> *local_31d8;
  int iStack_31d0;
  undefined4 uStack_31cc;
  TVector2<double> *local_31c8;
  int iStack_31c0;
  undefined4 uStack_31bc;
  TVector2<double> *local_31b8;
  int iStack_31b0;
  undefined4 uStack_31ac;
  TArrayView<UE::Math::TVector2<double>,int> local_31a8;
  TArrayView<UE::Math::TVector2<double>,int> local_3198;
  TArrayView<UE::Math::TVector2<double>,int> local_3188;
  ForElementType<bool> local_3178;
  int local_3078 [4];
  undefined1 local_3068 [4096];
  int local_2068 [2];
  undefined1 local_2060 [4096];
  int local_1060 [2];
  undefined1 local_1058 [4096];
  int local_58 [2];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_3268;
  iVar15 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  if (iVar15 < 1) {
    return false;
  }
  local_1060[0] = 0;
  local_1060[1] = 0x100;
  local_2068[0] = 0;
  local_2068[1] = 0x100;
  local_58[0] = 0;
  local_58[1] = 0x100;
  local_3078[0] = 0;
  local_3078[1] = 0x100;
  UE::Core::Private::
  ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector2<double>_>_>
            (0x10,8,0x100,(ForElementType<UE::Math::TVector2<double>_> *)local_2060,local_1060,
             local_1060 + 1);
  if (local_2068[0] < 0x100) {
    UE::Core::Private::
    ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector2<double>_>_>
              (0x10,8,0x100 - local_2068[0],
               (ForElementType<UE::Math::TVector2<double>_> *)local_3068,local_2068,local_2068 + 1);
  }
  else if (0x100 < local_2068[0]) {
    iVar20 = local_2068[0] + -0x100;
    if (iVar20 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
    }
    else if (iVar20 == 0) goto LAB_149a241d8;
    iVar16 = (local_2068[0] - iVar20) + -0x100;
    if (iVar16 != 0) {
      memmove(local_2068,local_2068 + (longlong)iVar20 * 4,(longlong)iVar16 << 4);
    }
    local_2068[0] = local_2068[0] - iVar20;
  }
LAB_149a241d8:
  if (local_58[0] < 0x100) {
    UE::Core::Private::
    ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector2<double>_>_>
              (0x10,8,0x100 - local_58[0],(ForElementType<UE::Math::TVector2<double>_> *)local_1058,
               local_58,local_58 + 1);
  }
  else if (0x100 < local_58[0]) {
    iVar20 = local_58[0] + -0x100;
    if (iVar20 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
    }
    else if (iVar20 == 0) goto LAB_149a242bd;
    iVar16 = (local_58[0] - iVar20) + -0x100;
    if (iVar16 != 0) {
      memmove(local_58,local_58 + (longlong)iVar20 * 4,(longlong)iVar16 << 4);
    }
    local_58[0] = local_58[0] - iVar20;
  }
LAB_149a242bd:
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) == 0) &&
     (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) == 0)) {
    bVar14 = false;
    bVar8 = false;
  }
  else {
    bVar14 = true;
    bVar8 = true;
    if (local_3078[0] < 0x100) {
      UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
                (1,1,0x100 - local_3078[0],&local_3178,local_3078,local_3078 + 1);
    }
    else if (0x100 < local_3078[0]) {
      iVar20 = local_3078[0] + -0x100;
      if (iVar20 < 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar12) {
          pcVar7 = (code *)swi(3);
          uVar13 = (*pcVar7)();
          return (bool)uVar13;
        }
      }
      else if (iVar20 == 0) goto LAB_149a243c8;
      iVar16 = (local_3078[0] - iVar20) + -0x100;
      if (iVar16 != 0) {
        memmove(local_3078,(void *)((longlong)local_3078 + (longlong)iVar20),(longlong)iVar16);
      }
      local_3078[0] = local_3078[0] - iVar20;
    }
  }
LAB_149a243c8:
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar9 = __real_3e45798ee2308c3a;
  iVar20 = (int)((iVar15 + 0xff >> 0x1f & 0xffU) + iVar15 + 0xff) >> 8;
  local_3218 = 0;
  if (0 < iVar20) {
    do {
      iVar26 = local_3218 * 0x100;
      iVar17 = iVar15 + local_3218 * -0x100;
      iVar16 = 0x100;
      if (iVar17 < 0x100) {
        iVar16 = iVar17;
      }
      local_31b8 = (TVector2<double> *)local_2060;
      iStack_31b0 = iVar16;
      if ((iVar16 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
      local_31d8 = (TVector2<double> *)local_3068;
      iStack_31d0 = iVar16;
      if ((iVar16 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
      local_31c8 = (TVector2<double> *)local_1058;
      iStack_31c0 = iVar16;
      if ((iVar16 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
      if (bVar14) {
        memset(&local_3178,0,(longlong)local_3078[0]);
        local_31f0 = *(undefined8 *)((longlong)this + 0x38);
        local_31e8 = &local_3178;
        local_31f8 = iVar16;
        local_31f4 = iVar26;
        ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
        operator()<UE::Math::TVector2<double>_>'::__l11::<lambda_1>::operator()
                  (&local_31f8,*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18),
                   *(UPCGSpatialData **)(*(longlong *)((longlong)this + 8) + 0x20));
        pUVar5 = *(UPCGBasePointData **)(*(longlong *)((longlong)this + 0x10) + 0x18);
        if (*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18) != pUVar5) {
          ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
          operator()<UE::Math::TVector2<double>_>'::__l11::<lambda_1>::operator()
                    (&local_31f8,pUVar5,
                     *(UPCGSpatialData **)(*(longlong *)((longlong)this + 0x10) + 0x20));
        }
      }
      else {
        local_31f0 = *(undefined8 *)((longlong)this + 0x38);
        local_31e8 = &local_3178;
        local_31f8 = iVar16;
        local_31f4 = iVar26;
      }
      local_31a8._12_4_ = uStack_31ac;
      local_31a8.ArrayNum = iStack_31b0;
      local_31a8.DataPtr = local_31b8;
      bVar12 = IPCGAttributeAccessor::GetRange<UE::Math::TVector2<double>_>
                         ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18),
                          &local_31a8,iVar26,
                          (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20),
                          StrictType);
      if (!bVar12) {
        return false;
      }
      local_3198._12_4_ = uStack_31cc;
      local_3198.ArrayNum = iStack_31d0;
      local_3198.DataPtr = local_31d8;
      bVar12 = IPCGAttributeAccessor::GetRange<UE::Math::TVector2<double>_>
                         ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_3198
                          ,iVar26,(IPCGAttributeAccessorKeys *)
                                  (*(undefined8 **)((longlong)this + 8))[1],
                          AllowBroadcastAndConstructible);
      if (!bVar12) {
        return false;
      }
      this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10);
      if (this_00 != (IPCGAttributeAccessor *)0x0) {
        local_3188._12_4_ = uStack_31bc;
        local_3188.ArrayNum = iStack_31c0;
        local_3188.DataPtr = local_31c8;
        bVar12 = IPCGAttributeAccessor::GetRange<UE::Math::TVector2<double>_>
                           (this_00,&local_3188,iVar26,
                            (IPCGAttributeAccessorKeys *)
                            (*(undefined8 **)((longlong)this + 0x10))[1],
                            AllowBroadcastAndConstructible);
        if (!bVar12) {
          return false;
        }
      }
      if ((iVar16 != 0) &&
         (((iVar17 = iVar26 + -1 + iVar16, iVar17 < 0 ||
           (*(int *)(*(longlong *)((longlong)this + 0x38) + 0x2020) <= iVar17)) &&
          (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Range == 0 || OperationData.FilterBitArray.IsValidIndex(StartIndex + Range - 1)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                               ,0x2e6,L""), bVar12)))) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
      uVar24 = 0;
      lVar25 = 0;
      if (0 < iVar16) {
        local_3200 = 0;
        do {
          uVar23 = (uint)uVar24;
          if (bVar14) {
            uVar21 = 0;
            if ((int)uVar23 < local_3078[0]) {
              uVar21 = ~uVar23 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              uVar13 = (*pcVar7)();
              return (bool)uVar13;
            }
            if (local_3178.InlineData[lVar25].Pad[0] == '\0') goto LAB_149a24757;
            lVar6 = *(longlong *)((longlong)this + 0x38);
            iVar17 = uVar23 + iVar26;
            if (((iVar17 < 0) || (*(int *)(lVar6 + 0x2020) <= iVar17)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar14)) {
              pcVar7 = (code *)swi(3);
              uVar13 = (*pcVar7)();
              return (bool)uVar13;
            }
            lVar22 = lVar6 + 0x18;
            if (*(longlong *)(lVar6 + 0x2018) != 0) {
              lVar22 = *(longlong *)(lVar6 + 0x2018);
            }
            iVar18 = iVar17;
            if (iVar17 < 0) {
              iVar18 = iVar17 + 0x1f;
            }
            puVar1 = (uint *)(lVar22 + (longlong)(iVar18 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar17 & 0x1f);
          }
          else {
LAB_149a24757:
            uVar21 = ~uVar23 >> 0x1f;
            cVar3 = **(char **)this;
            if (cVar3 == '\x06') {
              cVar3 = *(char *)**(undefined8 **)((longlong)this + 0x30);
              cVar4 = **(char **)((longlong)this + 0x28);
              uVar19 = 0;
              if ((int)uVar23 < local_58[0]) {
                uVar19 = uVar21;
              }
              if ((uVar19 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                uVar13 = (*pcVar7)();
                return (bool)uVar13;
              }
              uVar19 = 0;
              if ((int)uVar23 < local_2068[0]) {
                uVar19 = uVar21;
              }
              if ((uVar19 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                uVar13 = (*pcVar7)();
                return (bool)uVar13;
              }
              uVar19 = 0;
              if ((int)uVar23 < local_1060[0]) {
                uVar19 = uVar21;
              }
              if ((uVar19 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                uVar13 = (*pcVar7)();
                return (bool)uVar13;
              }
              dVar2 = *(double *)(local_2060 + lVar25 * 0x10);
              if (cVar4 == '\0') {
                if ((dVar2 <= *(double *)(local_3068 + local_3200)) ||
                   (*(double *)(local_2060 + lVar25 * 0x10 + 8) <=
                    *(double *)(local_3068 + local_3200 + 8))) goto LAB_149a2488d;
LAB_149a248e9:
                bVar14 = true;
              }
              else {
                if ((*(double *)(local_3068 + local_3200) <= dVar2) &&
                   (*(double *)(local_3068 + local_3200 + 8) <
                    *(double *)(local_2060 + lVar25 * 0x10 + 8) ||
                    *(double *)(local_3068 + local_3200 + 8) ==
                    *(double *)(local_2060 + lVar25 * 0x10 + 8))) goto LAB_149a248e9;
LAB_149a2488d:
                bVar14 = false;
              }
              if (bVar14) {
                if (cVar3 == '\0') {
                  if ((*(double *)(local_1058 + uVar24 * 0x10) <= dVar2) ||
                     (*(double *)(local_1058 + uVar24 * 0x10 + 8) <
                      *(double *)(local_2060 + lVar25 * 0x10 + 8) ||
                      *(double *)(local_1058 + uVar24 * 0x10 + 8) ==
                      *(double *)(local_2060 + lVar25 * 0x10 + 8))) goto LAB_149a248bd;
LAB_149a24908:
                  bVar14 = true;
                }
                else {
                  if ((dVar2 <= *(double *)(local_1058 + uVar24 * 0x10)) &&
                     (*(double *)(local_2060 + lVar25 * 0x10 + 8) <=
                      *(double *)(local_1058 + uVar24 * 0x10 + 8))) goto LAB_149a24908;
LAB_149a248bd:
                  bVar14 = false;
                }
                if (bVar14) {
                  bVar14 = true;
                  goto LAB_149a249f0;
                }
              }
              bVar14 = false;
            }
            else {
              uVar19 = 0;
              if ((int)uVar23 < local_2068[0]) {
                uVar19 = uVar21;
              }
              if ((uVar19 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                uVar13 = (*pcVar7)();
                return (bool)uVar13;
              }
              uVar19 = 0;
              if ((int)uVar23 < local_1060[0]) {
                uVar19 = uVar21;
              }
              if ((uVar19 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                uVar13 = (*pcVar7)();
                return (bool)uVar13;
              }
              if (cVar3 == '\x04') {
                uVar21 = SUB84(*(double *)(local_2060 + lVar25 * 0x10) -
                               *(double *)(local_3068 + uVar24 * 0x10),0) & uVar10;
                uVar19 = (uint)((ulonglong)
                                (*(double *)(local_2060 + lVar25 * 0x10) -
                                *(double *)(local_3068 + uVar24 * 0x10)) >> 0x20) & uVar11;
                if (((double)CONCAT44(uVar19,uVar21) < dVar9 ||
                     (double)CONCAT44(uVar19,uVar21) == dVar9) &&
                   (uVar21 = SUB84(*(double *)(local_2060 + lVar25 * 0x10 + 8) -
                                   *(double *)(local_3068 + uVar24 * 0x10 + 8),0) & uVar10,
                   uVar19 = (uint)((ulonglong)
                                   (*(double *)(local_2060 + lVar25 * 0x10 + 8) -
                                   *(double *)(local_3068 + uVar24 * 0x10 + 8)) >> 0x20) & uVar11,
                   (double)CONCAT44(uVar19,uVar21) < dVar9 ||
                   (double)CONCAT44(uVar19,uVar21) == dVar9)) {
LAB_149a24bb5:
                  bVar14 = true;
                  goto LAB_149a249f0;
                }
LAB_149a249ee:
                bVar14 = false;
              }
              else {
                if (cVar3 == '\x05') {
                  uVar21 = SUB84(*(double *)(local_2060 + lVar25 * 0x10) -
                                 *(double *)(local_3068 + uVar24 * 0x10),0) & uVar10;
                  uVar19 = (uint)((ulonglong)
                                  (*(double *)(local_2060 + lVar25 * 0x10) -
                                  *(double *)(local_3068 + uVar24 * 0x10)) >> 0x20) & uVar11;
                  if (dVar9 <= (double)CONCAT44(uVar19,uVar21) &&
                      (double)CONCAT44(uVar19,uVar21) != dVar9) goto LAB_149a24bb5;
                  uVar21 = SUB84(*(double *)(local_2060 + lVar25 * 0x10 + 8) -
                                 *(double *)(local_3068 + uVar24 * 0x10 + 8),0) & uVar10;
                  uVar19 = (uint)((ulonglong)
                                  (*(double *)(local_2060 + lVar25 * 0x10 + 8) -
                                  *(double *)(local_3068 + uVar24 * 0x10 + 8)) >> 0x20) & uVar11;
                  if (dVar9 <= (double)CONCAT44(uVar19,uVar21) &&
                      (double)CONCAT44(uVar19,uVar21) != dVar9) {
                    bVar14 = true;
                    goto LAB_149a249f0;
                  }
                  goto LAB_149a249ee;
                }
                if (cVar3 == '\0') {
                  if ((*(double *)(local_3068 + uVar24 * 0x10) <
                       *(double *)(local_2060 + lVar25 * 0x10)) &&
                     (*(double *)(local_3068 + uVar24 * 0x10 + 8) <
                      *(double *)(local_2060 + lVar25 * 0x10 + 8))) goto LAB_149a24bb5;
                  goto LAB_149a249ee;
                }
                if (cVar3 == '\x01') {
                  if ((*(double *)(local_2060 + lVar25 * 0x10) <=
                       *(double *)(local_3068 + uVar24 * 0x10) &&
                       *(double *)(local_3068 + uVar24 * 0x10) !=
                       *(double *)(local_2060 + lVar25 * 0x10)) ||
                     (*(double *)(local_2060 + lVar25 * 0x10 + 8) <=
                      *(double *)(local_3068 + uVar24 * 0x10 + 8) &&
                      *(double *)(local_3068 + uVar24 * 0x10 + 8) !=
                      *(double *)(local_2060 + lVar25 * 0x10 + 8))) goto LAB_149a249ee;
                  bVar14 = true;
                }
                else if (cVar3 == '\x02') {
                  if ((*(double *)(local_3068 + uVar24 * 0x10) <
                       *(double *)(local_2060 + lVar25 * 0x10) ||
                       *(double *)(local_3068 + uVar24 * 0x10) ==
                       *(double *)(local_2060 + lVar25 * 0x10)) ||
                     (*(double *)(local_3068 + uVar24 * 0x10 + 8) <
                      *(double *)(local_2060 + lVar25 * 0x10 + 8) ||
                      *(double *)(local_3068 + uVar24 * 0x10 + 8) ==
                      *(double *)(local_2060 + lVar25 * 0x10 + 8))) goto LAB_149a249ee;
                  bVar14 = true;
                }
                else {
                  if (((cVar3 != '\x03') ||
                      (*(double *)(local_3068 + uVar24 * 0x10) <
                       *(double *)(local_2060 + lVar25 * 0x10))) ||
                     (*(double *)(local_3068 + uVar24 * 0x10 + 8) <
                      *(double *)(local_2060 + lVar25 * 0x10 + 8))) goto LAB_149a249ee;
                  bVar14 = true;
                }
              }
            }
LAB_149a249f0:
            lVar6 = *(longlong *)((longlong)this + 0x38);
            iVar17 = uVar23 + iVar26;
            if (((iVar17 < 0) || (*(int *)(lVar6 + 0x2020) <= iVar17)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              uVar13 = (*pcVar7)();
              return (bool)uVar13;
            }
            lVar22 = lVar6 + 0x18;
            if (*(longlong *)(lVar6 + 0x2018) != 0) {
              lVar22 = *(longlong *)(lVar6 + 0x2018);
            }
            iVar18 = iVar17;
            if (iVar17 < 0) {
              iVar18 = iVar17 + 0x1f;
            }
            uVar19 = 1 << ((byte)iVar17 & 0x1f);
            uVar21 = *(uint *)(lVar22 + (longlong)(iVar18 >> 5) * 4);
            if (bVar14) {
              uVar19 = uVar19 | uVar21;
            }
            else {
              uVar19 = ~uVar19 & uVar21;
            }
            *(uint *)(lVar22 + (longlong)(iVar18 >> 5) * 4) = uVar19;
          }
          local_3200 = local_3200 + 0x10;
          uVar24 = (ulonglong)(uVar23 + 1);
          lVar25 = lVar25 + 1;
          bVar14 = bVar8;
        } while ((int)(uVar23 + 1) < iVar16);
      }
      local_3218 = local_3218 + 1;
    } while (local_3218 < iVar20);
  }
  return true;
}

// operator()<UE::Math::TVector4<double>_> @ 149a262a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
`FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
operator()<UE::Math::TVector4<double>_>(void *this,TVector4<double> *param_1)

{
  uint *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  char cVar6;
  UPCGBasePointData *pUVar7;
  IPCGAttributeAccessor *this_00;
  code *pcVar8;
  bool bVar9;
  double dVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auStackY_6278 [32];
  int local_622c;
  TTypeCompatibleBytes<bool> *local_6218;
  int local_6210;
  int local_620c;
  undefined8 local_6208;
  ForElementType<bool> *local_6200;
  TVector4<double> *local_61f8;
  int iStack_61f0;
  undefined4 uStack_61ec;
  TVector4<double> *local_61e8;
  int iStack_61e0;
  undefined4 uStack_61dc;
  TVector4<double> *local_61d8;
  int iStack_61d0;
  undefined4 uStack_61cc;
  TArrayView<UE::Math::TVector4<double>,int> local_61c8;
  TArrayView<UE::Math::TVector4<double>,int> local_61b8;
  TArrayView<UE::Math::TVector4<double>,int> local_61a8;
  ForElementType<bool> local_6198;
  int local_6098 [4];
  undefined1 local_6088 [16];
  double adStack_6078 [1022];
  int local_4088 [4];
  undefined1 local_4078 [16];
  double adStack_4068 [1022];
  int local_2078;
  int local_2074;
  undefined1 local_2068 [16];
  double adStack_2058 [1022];
  int local_68;
  int local_64;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_6278;
  iVar16 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  if (iVar16 < 1) {
    return false;
  }
  local_4088[0] = 0;
  local_4088[1] = 0x100;
  local_2078 = 0;
  local_2074 = 0x100;
  local_68 = 0;
  local_64 = 0x100;
  local_6098[0] = 0;
  local_6098[1] = 0x100;
  iVar17 = UE::Core::Private::
           ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector4<double>_>_>
                     (0x20,0x10,0x100,(ForElementType<UE::Math::TVector4<double>_> *)local_6088,
                      local_4088,local_4088 + 1);
  DefaultConstructItems<UE::Math::TVector4<double>,int>(local_6088 + (longlong)iVar17 * 0x20,0x100);
  TArray<UE::Math::TVector4<double>,TFixedAllocator<256>_>::SetNum
            ((TArray<UE::Math::TVector4<double>,TFixedAllocator<256>_> *)local_4078,0x100,No);
  TArray<UE::Math::TVector4<double>,TFixedAllocator<256>_>::SetNum
            ((TArray<UE::Math::TVector4<double>,TFixedAllocator<256>_> *)local_2068,0x100,No);
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) == 0) &&
     (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) == 0)) {
    bVar15 = false;
    bVar9 = false;
  }
  else {
    bVar15 = true;
    bVar9 = true;
    if (local_6098[0] < 0x100) {
      UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
                (1,1,0x100 - local_6098[0],&local_6198,local_6098,local_6098 + 1);
    }
    else if (0x100 < local_6098[0]) {
      iVar17 = local_6098[0] + -0x100;
      if (iVar17 < 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
      }
      else if (iVar17 == 0) goto LAB_149a264b4;
      iVar18 = (local_6098[0] - iVar17) + -0x100;
      if (iVar18 != 0) {
        memmove(local_6098,(void *)((longlong)local_6098 + (longlong)iVar17),(longlong)iVar18);
      }
      local_6098[0] = local_6098[0] - iVar17;
    }
  }
LAB_149a264b4:
  uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar10 = __real_3e45798ee2308c3a;
  iVar17 = (int)((iVar16 + 0xff >> 0x1f & 0xffU) + iVar16 + 0xff) >> 8;
  local_622c = 0;
  if (0 < iVar17) {
    do {
      iVar25 = local_622c * 0x100;
      iVar19 = iVar16 + local_622c * -0x100;
      iVar18 = 0x100;
      if (iVar19 < 0x100) {
        iVar18 = iVar19;
      }
      local_61d8 = (TVector4<double> *)local_6088;
      iStack_61d0 = iVar18;
      if ((iVar18 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        uVar14 = (*pcVar8)();
        return (bool)uVar14;
      }
      local_61f8 = (TVector4<double> *)local_4078;
      iStack_61f0 = iVar18;
      if ((iVar18 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        uVar14 = (*pcVar8)();
        return (bool)uVar14;
      }
      local_61e8 = (TVector4<double> *)local_2068;
      iStack_61e0 = iVar18;
      if ((iVar18 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        uVar14 = (*pcVar8)();
        return (bool)uVar14;
      }
      if (bVar15) {
        memset(&local_6198,0,(longlong)local_6098[0]);
        local_6208 = *(undefined8 *)((longlong)this + 0x38);
        local_6200 = &local_6198;
        local_6210 = iVar18;
        local_620c = iVar25;
        ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
        operator()<UE::Math::TVector4<double>_>'::__l11::<lambda_1>::operator()
                  (&local_6210,*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18),
                   *(UPCGSpatialData **)(*(longlong *)((longlong)this + 8) + 0x20));
        pUVar7 = *(UPCGBasePointData **)(*(longlong *)((longlong)this + 0x10) + 0x18);
        if (*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18) != pUVar7) {
          ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
          operator()<UE::Math::TVector4<double>_>'::__l11::<lambda_1>::operator()
                    (&local_6210,pUVar7,
                     *(UPCGSpatialData **)(*(longlong *)((longlong)this + 0x10) + 0x20));
        }
      }
      else {
        local_6208 = *(undefined8 *)((longlong)this + 0x38);
        local_6200 = &local_6198;
        local_6210 = iVar18;
        local_620c = iVar25;
      }
      local_61c8._12_4_ = uStack_61cc;
      local_61c8.ArrayNum = iStack_61d0;
      local_61c8.DataPtr = local_61d8;
      bVar13 = IPCGAttributeAccessor::GetRange<UE::Math::TVector4<double>_>
                         ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18),
                          &local_61c8,iVar25,
                          (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20),
                          StrictType);
      if (!bVar13) {
        return false;
      }
      local_61b8._12_4_ = uStack_61ec;
      local_61b8.ArrayNum = iStack_61f0;
      local_61b8.DataPtr = local_61f8;
      bVar13 = IPCGAttributeAccessor::GetRange<UE::Math::TVector4<double>_>
                         ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_61b8
                          ,iVar25,(IPCGAttributeAccessorKeys *)
                                  (*(undefined8 **)((longlong)this + 8))[1],
                          AllowBroadcastAndConstructible);
      if (!bVar13) {
        return false;
      }
      this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10);
      if (this_00 != (IPCGAttributeAccessor *)0x0) {
        local_61a8._12_4_ = uStack_61dc;
        local_61a8.ArrayNum = iStack_61e0;
        local_61a8.DataPtr = local_61e8;
        bVar13 = IPCGAttributeAccessor::GetRange<UE::Math::TVector4<double>_>
                           (this_00,&local_61a8,iVar25,
                            (IPCGAttributeAccessorKeys *)
                            (*(undefined8 **)((longlong)this + 0x10))[1],
                            AllowBroadcastAndConstructible);
        if (!bVar13) {
          return false;
        }
      }
      if ((iVar18 != 0) &&
         (((iVar19 = iVar25 + -1 + iVar18, iVar19 < 0 ||
           (*(int *)(*(longlong *)((longlong)this + 0x38) + 0x2020) <= iVar19)) &&
          (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("Range == 0 || OperationData.FilterBitArray.IsValidIndex(StartIndex + Range - 1)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                               ,0x2e6,L""), bVar13)))) {
        pcVar8 = (code *)swi(3);
        uVar14 = (*pcVar8)();
        return (bool)uVar14;
      }
      uVar28 = 0;
      if (0 < iVar18) {
        local_6218 = local_6198.InlineData;
        lVar24 = 0;
        iVar19 = iVar25;
        do {
          if (bVar9) {
            uVar27 = 0;
            if ((int)uVar28 < local_6098[0]) {
              uVar27 = ~uVar28 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar8 = (code *)swi(3);
              uVar14 = (*pcVar8)();
              return (bool)uVar14;
            }
            if (local_6218->Pad[0] == '\0') goto LAB_149a26847;
            lVar23 = *(longlong *)((longlong)this + 0x38);
            if (((iVar19 < 0) || (*(int *)(lVar23 + 0x2020) <= (int)(uVar28 + iVar25))) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar15)) {
              pcVar8 = (code *)swi(3);
              uVar14 = (*pcVar8)();
              return (bool)uVar14;
            }
            iVar22 = uVar28 + iVar25;
            lVar26 = lVar23 + 0x18;
            if (*(longlong *)(lVar23 + 0x2018) != 0) {
              lVar26 = *(longlong *)(lVar23 + 0x2018);
            }
            iVar20 = iVar22;
            if (iVar22 < 0) {
              iVar20 = iVar22 + 0x1f;
            }
            puVar1 = (uint *)(lVar26 + (longlong)(iVar20 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar22 & 0x1f);
          }
          else {
LAB_149a26847:
            uVar27 = ~uVar28 >> 0x1f;
            cVar5 = **(char **)this;
            if (cVar5 == '\x06') {
              cVar5 = *(char *)**(undefined8 **)((longlong)this + 0x30);
              cVar6 = **(char **)((longlong)this + 0x28);
              uVar21 = 0;
              if ((int)uVar28 < local_68) {
                uVar21 = uVar27;
              }
              if ((uVar21 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              uVar21 = 0;
              if ((int)uVar28 < local_2078) {
                uVar21 = uVar27;
              }
              if ((uVar21 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              uVar21 = 0;
              if ((int)uVar28 < local_4088[0]) {
                uVar21 = uVar27;
              }
              if ((uVar21 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              dVar3 = *(double *)(local_6088 + lVar24);
              if (cVar6 == '\0') {
                if ((((dVar3 <= *(double *)(local_4078 + lVar24)) ||
                     (*(double *)(local_6088 + lVar24 + 8) <= *(double *)(local_4078 + lVar24 + 8)))
                    || (*(double *)((longlong)adStack_6078 + lVar24) <=
                        *(double *)((longlong)adStack_4068 + lVar24))) ||
                   (*(double *)((longlong)adStack_6078 + lVar24 + 8) <=
                    *(double *)((longlong)adStack_4068 + lVar24 + 8))) goto LAB_149a26997;
LAB_149a26a59:
                bVar15 = true;
              }
              else {
                if (((*(double *)(local_4078 + lVar24) <= dVar3) &&
                    (*(double *)(local_4078 + lVar24 + 8) < *(double *)(local_6088 + lVar24 + 8) ||
                     *(double *)(local_4078 + lVar24 + 8) == *(double *)(local_6088 + lVar24 + 8)))
                   && ((*(double *)((longlong)adStack_4068 + lVar24) <
                        *(double *)((longlong)adStack_6078 + lVar24) ||
                        *(double *)((longlong)adStack_4068 + lVar24) ==
                        *(double *)((longlong)adStack_6078 + lVar24) &&
                       (dVar4 = *(double *)((longlong)adStack_4068 + lVar24 + 8),
                       pdVar2 = (double *)((longlong)adStack_6078 + lVar24 + 8),
                       dVar4 < *pdVar2 || dVar4 == *pdVar2)))) goto LAB_149a26a59;
LAB_149a26997:
                bVar15 = false;
              }
              if (bVar15) {
                if (cVar5 == '\0') {
                  if (((*(double *)(local_2068 + lVar24) <= dVar3) ||
                      (*(double *)(local_2068 + lVar24 + 8) < *(double *)(local_6088 + lVar24 + 8)
                       || *(double *)(local_2068 + lVar24 + 8) ==
                          *(double *)(local_6088 + lVar24 + 8))) ||
                     ((*(double *)((longlong)adStack_2058 + lVar24) <
                       *(double *)((longlong)adStack_6078 + lVar24) ||
                       *(double *)((longlong)adStack_2058 + lVar24) ==
                       *(double *)((longlong)adStack_6078 + lVar24) ||
                      (dVar3 = *(double *)((longlong)adStack_2058 + lVar24 + 8),
                      pdVar2 = (double *)((longlong)adStack_6078 + lVar24 + 8),
                      dVar3 < *pdVar2 || dVar3 == *pdVar2)))) goto LAB_149a269f9;
LAB_149a26aae:
                  bVar15 = true;
                }
                else {
                  if ((((dVar3 <= *(double *)(local_2068 + lVar24)) &&
                       (*(double *)(local_6088 + lVar24 + 8) <= *(double *)(local_2068 + lVar24 + 8)
                       )) && (*(double *)((longlong)adStack_6078 + lVar24) <=
                              *(double *)((longlong)adStack_2058 + lVar24))) &&
                     (*(double *)((longlong)adStack_6078 + lVar24 + 8) <=
                      *(double *)((longlong)adStack_2058 + lVar24 + 8))) goto LAB_149a26aae;
LAB_149a269f9:
                  bVar15 = false;
                }
                if (bVar15) {
LAB_149a26a03:
                  bVar15 = true;
                  goto LAB_149a26cdf;
                }
              }
LAB_149a26c6d:
              bVar15 = false;
            }
            else {
              uVar21 = 0;
              if ((int)uVar28 < local_2078) {
                uVar21 = uVar27;
              }
              if ((uVar21 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              uVar21 = 0;
              if ((int)uVar28 < local_4088[0]) {
                uVar21 = uVar27;
              }
              if ((uVar21 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              if (cVar5 == '\x04') {
                uVar27 = SUB84(*(double *)(local_6088 + lVar24) - *(double *)(local_4078 + lVar24),0
                              ) & uVar11;
                uVar21 = (uint)((ulonglong)
                                (*(double *)(local_6088 + lVar24) - *(double *)(local_4078 + lVar24)
                                ) >> 0x20) & uVar12;
                if (((((double)CONCAT44(uVar21,uVar27) < dVar10 ||
                       (double)CONCAT44(uVar21,uVar27) == dVar10) &&
                     (uVar27 = SUB84(*(double *)(local_6088 + lVar24 + 8) -
                                     *(double *)(local_4078 + lVar24 + 8),0) & uVar11,
                     uVar21 = (uint)((ulonglong)
                                     (*(double *)(local_6088 + lVar24 + 8) -
                                     *(double *)(local_4078 + lVar24 + 8)) >> 0x20) & uVar12,
                     (double)CONCAT44(uVar21,uVar27) < dVar10 ||
                     (double)CONCAT44(uVar21,uVar27) == dVar10)) &&
                    (dVar3 = *(double *)((longlong)adStack_6078 + lVar24) -
                             *(double *)((longlong)adStack_4068 + lVar24),
                    uVar27 = SUB84(dVar3,0) & uVar11,
                    uVar21 = (uint)((ulonglong)dVar3 >> 0x20) & uVar12,
                    (double)CONCAT44(uVar21,uVar27) < dVar10 ||
                    (double)CONCAT44(uVar21,uVar27) == dVar10)) &&
                   (dVar3 = *(double *)((longlong)adStack_6078 + lVar24 + 8) -
                            *(double *)((longlong)adStack_4068 + lVar24 + 8),
                   uVar27 = SUB84(dVar3,0) & uVar11,
                   uVar21 = (uint)((ulonglong)dVar3 >> 0x20) & uVar12,
                   (double)CONCAT44(uVar21,uVar27) < dVar10 ||
                   (double)CONCAT44(uVar21,uVar27) == dVar10)) {
                  bVar15 = true;
                  goto LAB_149a26cdf;
                }
                goto LAB_149a26c6d;
              }
              if (cVar5 == '\x05') {
                uVar27 = SUB84(*(double *)(local_6088 + lVar24) - *(double *)(local_4078 + lVar24),0
                              ) & uVar11;
                uVar21 = (uint)((ulonglong)
                                (*(double *)(local_6088 + lVar24) - *(double *)(local_4078 + lVar24)
                                ) >> 0x20) & uVar12;
                if ((((double)CONCAT44(uVar21,uVar27) < dVar10 ||
                      (double)CONCAT44(uVar21,uVar27) == dVar10) &&
                    (uVar27 = SUB84(*(double *)(local_6088 + lVar24 + 8) -
                                    *(double *)(local_4078 + lVar24 + 8),0) & uVar11,
                    uVar21 = (uint)((ulonglong)
                                    (*(double *)(local_6088 + lVar24 + 8) -
                                    *(double *)(local_4078 + lVar24 + 8)) >> 0x20) & uVar12,
                    (double)CONCAT44(uVar21,uVar27) < dVar10 ||
                    (double)CONCAT44(uVar21,uVar27) == dVar10)) &&
                   ((dVar3 = *(double *)((longlong)adStack_6078 + lVar24) -
                             *(double *)((longlong)adStack_4068 + lVar24),
                    uVar27 = SUB84(dVar3,0) & uVar11,
                    uVar21 = (uint)((ulonglong)dVar3 >> 0x20) & uVar12,
                    (double)CONCAT44(uVar21,uVar27) < dVar10 ||
                    (double)CONCAT44(uVar21,uVar27) == dVar10 &&
                    (dVar3 = *(double *)((longlong)adStack_6078 + lVar24 + 8) -
                             *(double *)((longlong)adStack_4068 + lVar24 + 8),
                    uVar27 = SUB84(dVar3,0) & uVar11,
                    uVar21 = (uint)((ulonglong)dVar3 >> 0x20) & uVar12,
                    (double)CONCAT44(uVar21,uVar27) < dVar10 ||
                    (double)CONCAT44(uVar21,uVar27) == dVar10)))) {
                  bVar15 = false;
                  goto LAB_149a26cdf;
                }
                goto LAB_149a26a03;
              }
              if (cVar5 == '\0') {
                bVar15 = PCG::Private::MetadataTraits<UE::Math::TVector4<double>_>::Greater
                                   ((TVector4<double> *)(local_6088 + lVar24),
                                    (TVector4<double> *)(local_4078 + lVar24));
              }
              else if (cVar5 == '\x01') {
                bVar15 = PCG::Private::MetadataTraits<UE::Math::TVector4<double>_>::GreaterOrEqual
                                   ((TVector4<double> *)(local_6088 + lVar24),
                                    (TVector4<double> *)(local_4078 + lVar24));
              }
              else if (cVar5 == '\x02') {
                bVar15 = PCG::Private::MetadataTraits<UE::Math::TVector4<double>_>::Less
                                   ((TVector4<double> *)(local_6088 + lVar24),
                                    (TVector4<double> *)(local_4078 + lVar24));
              }
              else {
                if (cVar5 != '\x03') goto LAB_149a26c6d;
                bVar15 = PCG::Private::MetadataTraits<UE::Math::TVector4<double>_>::LessOrEqual
                                   ((TVector4<double> *)(local_6088 + lVar24),
                                    (TVector4<double> *)(local_4078 + lVar24));
              }
            }
LAB_149a26cdf:
            lVar23 = *(longlong *)((longlong)this + 0x38);
            iVar22 = iVar25 + uVar28;
            if (((iVar22 < 0) || (*(int *)(lVar23 + 0x2020) <= iVar22)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar13)) {
              pcVar8 = (code *)swi(3);
              uVar14 = (*pcVar8)();
              return (bool)uVar14;
            }
            lVar26 = lVar23 + 0x18;
            if (*(longlong *)(lVar23 + 0x2018) != 0) {
              lVar26 = *(longlong *)(lVar23 + 0x2018);
            }
            iVar20 = iVar22;
            if (iVar22 < 0) {
              iVar20 = iVar22 + 0x1f;
            }
            lVar23 = (longlong)(iVar20 >> 5);
            uVar21 = 1 << ((byte)iVar22 & 0x1f);
            uVar27 = *(uint *)(lVar26 + lVar23 * 4);
            if (bVar15 == false) {
              *(uint *)(lVar26 + lVar23 * 4) = ~uVar21 & uVar27;
            }
            else {
              *(uint *)(lVar26 + lVar23 * 4) = uVar27 | uVar21;
            }
          }
          local_6218 = local_6218 + 1;
          uVar28 = uVar28 + 1;
          lVar24 = lVar24 + 0x20;
          iVar19 = iVar19 + 1;
          bVar15 = bVar9;
        } while ((int)uVar28 < iVar18);
      }
      local_622c = local_622c + 1;
    } while (local_622c < iVar17);
  }
  return true;
}

// operator()<UE::Math::TVector<double>_> @ 149a28470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
`FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
operator()<UE::Math::TVector<double>_>(void *this,TVector<double> *param_1)

{
  uint *puVar1;
  double dVar2;
  char cVar3;
  char cVar4;
  UPCGBasePointData *pUVar5;
  IPCGAttributeAccessor *this_00;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  undefined1 auStackY_4a68 [32];
  int local_4a24;
  int local_4a10;
  int local_4a0c;
  undefined8 local_4a08;
  ForElementType<bool> *local_4a00;
  longlong local_49f8;
  TVector<double> *local_49e8;
  int iStack_49e0;
  undefined4 uStack_49dc;
  TVector<double> *local_49d8;
  int iStack_49d0;
  undefined4 uStack_49cc;
  undefined8 *local_49c8;
  TVector<double> *local_49b8;
  int iStack_49b0;
  undefined4 uStack_49ac;
  TArrayView<UE::Math::TVector<double>,int> local_49a8;
  TArrayView<UE::Math::TVector<double>,int> local_4998;
  TArrayView<UE::Math::TVector<double>,int> local_4988;
  ForElementType<bool> local_4978;
  int local_4878 [4];
  undefined1 local_4868 [16];
  double adStack_4858 [766];
  int local_3068 [2];
  undefined1 local_3060 [16];
  double adStack_3050 [766];
  int local_1860 [2];
  undefined1 local_1858 [16];
  double adStack_1848 [766];
  int local_58 [2];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_4a68;
  local_49c8 = this;
  iVar15 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  if (iVar15 < 1) {
    return false;
  }
  local_1860[0] = 0;
  local_1860[1] = 0x100;
  local_3068[0] = 0;
  local_3068[1] = 0x100;
  local_58[0] = 0;
  local_58[1] = 0x100;
  local_4878[0] = 0;
  local_4878[1] = 0x100;
  UE::Core::Private::
  ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector<double>_>_>
            (0x18,8,0x100,(ForElementType<UE::Math::TVector<double>_> *)local_3060,local_1860,
             local_1860 + 1);
  if (local_3068[0] < 0x100) {
    UE::Core::Private::
    ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector<double>_>_>
              (0x18,8,0x100 - local_3068[0],(ForElementType<UE::Math::TVector<double>_> *)local_4868
               ,local_3068,local_3068 + 1);
  }
  else if (0x100 < local_3068[0]) {
    iVar20 = local_3068[0] + -0x100;
    if (iVar20 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
    }
    else if (iVar20 == 0) goto LAB_149a28630;
    iVar16 = (local_3068[0] - iVar20) + -0x100;
    if (iVar16 != 0) {
      memmove(local_3068,local_3068 + (longlong)iVar20 * 6,(longlong)iVar16 * 0x18);
    }
    local_3068[0] = local_3068[0] - iVar20;
  }
LAB_149a28630:
  if (local_58[0] < 0x100) {
    UE::Core::Private::
    ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector<double>_>_>
              (0x18,8,0x100 - local_58[0],(ForElementType<UE::Math::TVector<double>_> *)local_1858,
               local_58,local_58 + 1);
  }
  else if (0x100 < local_58[0]) {
    iVar20 = local_58[0] + -0x100;
    if (iVar20 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
    }
    else if (iVar20 == 0) goto LAB_149a28719;
    iVar16 = (local_58[0] - iVar20) + -0x100;
    if (iVar16 != 0) {
      memmove(local_58,local_58 + (longlong)iVar20 * 6,(longlong)iVar16 * 0x18);
    }
    local_58[0] = local_58[0] - iVar20;
  }
LAB_149a28719:
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) == 0) &&
     (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) == 0)) {
    bVar14 = false;
    bVar8 = false;
  }
  else {
    bVar14 = true;
    bVar8 = true;
    if (local_4878[0] < 0x100) {
      UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
                (1,1,0x100 - local_4878[0],&local_4978,local_4878,local_4878 + 1);
    }
    else if (0x100 < local_4878[0]) {
      iVar20 = local_4878[0] + -0x100;
      if (iVar20 < 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar12) {
          pcVar7 = (code *)swi(3);
          uVar13 = (*pcVar7)();
          return (bool)uVar13;
        }
      }
      else if (iVar20 == 0) goto LAB_149a28816;
      iVar16 = (local_4878[0] - iVar20) + -0x100;
      if (iVar16 != 0) {
        memmove(local_4878,(void *)((longlong)local_4878 + (longlong)iVar20),(longlong)iVar16);
      }
      local_4878[0] = local_4878[0] - iVar20;
    }
  }
LAB_149a28816:
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar9 = __real_3e45798ee2308c3a;
  iVar20 = (int)((iVar15 + 0xff >> 0x1f & 0xffU) + iVar15 + 0xff) >> 8;
  local_4a24 = 0;
  if (0 < iVar20) {
    do {
      iVar25 = local_4a24 * 0x100;
      iVar17 = iVar15 + local_4a24 * -0x100;
      iVar16 = 0x100;
      if (iVar17 < 0x100) {
        iVar16 = iVar17;
      }
      local_49b8 = (TVector<double> *)local_3060;
      iStack_49b0 = iVar16;
      if ((iVar16 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
      local_49e8 = (TVector<double> *)local_4868;
      iStack_49e0 = iVar16;
      if ((iVar16 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
      local_49d8 = (TVector<double> *)local_1858;
      iStack_49d0 = iVar16;
      if ((iVar16 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
      if (bVar14) {
        memset(&local_4978,0,(longlong)local_4878[0]);
        local_4a08 = *(undefined8 *)((longlong)this + 0x38);
        local_4a00 = &local_4978;
        local_4a10 = iVar16;
        local_4a0c = iVar25;
        ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
        operator()<UE::Math::TVector<double>_>'::__l11::<lambda_1>::operator()
                  (&local_4a10,*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18),
                   *(UPCGSpatialData **)(*(longlong *)((longlong)this + 8) + 0x20));
        pUVar5 = *(UPCGBasePointData **)(*(longlong *)((longlong)this + 0x10) + 0x18);
        if (*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18) != pUVar5) {
          ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
          operator()<UE::Math::TVector<double>_>'::__l11::<lambda_1>::operator()
                    (&local_4a10,pUVar5,
                     *(UPCGSpatialData **)(*(longlong *)((longlong)this + 0x10) + 0x20));
        }
      }
      else {
        local_4a08 = *(undefined8 *)((longlong)this + 0x38);
        local_4a00 = &local_4978;
        local_4a10 = iVar16;
        local_4a0c = iVar25;
      }
      local_49a8._12_4_ = uStack_49ac;
      local_49a8.ArrayNum = iStack_49b0;
      local_49a8.DataPtr = local_49b8;
      bVar12 = IPCGAttributeAccessor::GetRange<UE::Math::TVector<double>_>
                         ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18),
                          &local_49a8,iVar25,
                          (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20),
                          StrictType);
      if (!bVar12) {
        return false;
      }
      local_4998._12_4_ = uStack_49dc;
      local_4998.ArrayNum = iStack_49e0;
      local_4998.DataPtr = local_49e8;
      bVar12 = IPCGAttributeAccessor::GetRange<UE::Math::TVector<double>_>
                         ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_4998
                          ,iVar25,(IPCGAttributeAccessorKeys *)
                                  (*(undefined8 **)((longlong)this + 8))[1],
                          AllowBroadcastAndConstructible);
      if (!bVar12) {
        return false;
      }
      this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10);
      if (this_00 != (IPCGAttributeAccessor *)0x0) {
        local_4988._12_4_ = uStack_49cc;
        local_4988.ArrayNum = iStack_49d0;
        local_4988.DataPtr = local_49d8;
        bVar12 = IPCGAttributeAccessor::GetRange<UE::Math::TVector<double>_>
                           (this_00,&local_4988,iVar25,
                            (IPCGAttributeAccessorKeys *)
                            (*(undefined8 **)((longlong)this + 0x10))[1],
                            AllowBroadcastAndConstructible);
        if (!bVar12) {
          return false;
        }
      }
      if ((iVar16 != 0) &&
         (((iVar17 = iVar25 + -1 + iVar16, iVar17 < 0 ||
           (*(int *)(*(longlong *)((longlong)this + 0x38) + 0x2020) <= iVar17)) &&
          (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Range == 0 || OperationData.FilterBitArray.IsValidIndex(StartIndex + Range - 1)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                               ,0x2e6,L""), bVar12)))) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
      uVar24 = 0;
      local_49f8 = 0;
      if (0 < iVar16) {
        do {
          lVar6 = local_49f8;
          uVar23 = (uint)uVar24;
          if (bVar14) {
            uVar21 = 0;
            if ((int)uVar23 < local_4878[0]) {
              uVar21 = ~uVar23 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              uVar13 = (*pcVar7)();
              return (bool)uVar13;
            }
            if (local_4978.InlineData[lVar6].Pad[0] == '\0') goto LAB_149a28bb6;
            lVar6 = *(longlong *)((longlong)this + 0x38);
            iVar17 = iVar25 + uVar23;
            if (((iVar17 < 0) || (*(int *)(lVar6 + 0x2020) <= iVar17)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar14)) {
              pcVar7 = (code *)swi(3);
              uVar13 = (*pcVar7)();
              return (bool)uVar13;
            }
            lVar22 = lVar6 + 0x18;
            if (*(longlong *)(lVar6 + 0x2018) != 0) {
              lVar22 = *(longlong *)(lVar6 + 0x2018);
            }
            iVar18 = iVar17;
            if (iVar17 < 0) {
              iVar18 = iVar17 + 0x1f;
            }
            puVar1 = (uint *)(lVar22 + (longlong)(iVar18 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar17 & 0x1f);
          }
          else {
LAB_149a28bb6:
            uVar21 = ~uVar23 >> 0x1f;
            cVar3 = **(char **)this;
            if (cVar3 == '\x06') {
              cVar3 = *(char *)**(undefined8 **)((longlong)this + 0x30);
              cVar4 = **(char **)((longlong)this + 0x28);
              uVar19 = 0;
              if ((int)uVar23 < local_58[0]) {
                uVar19 = uVar21;
              }
              if ((uVar19 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                uVar13 = (*pcVar7)();
                return (bool)uVar13;
              }
              uVar19 = 0;
              if ((int)uVar23 < local_3068[0]) {
                uVar19 = uVar21;
              }
              if ((uVar19 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                uVar13 = (*pcVar7)();
                return (bool)uVar13;
              }
              uVar19 = 0;
              if ((int)uVar23 < local_1860[0]) {
                uVar19 = uVar21;
              }
              if ((uVar19 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                uVar13 = (*pcVar7)();
                return (bool)uVar13;
              }
              dVar2 = *(double *)(local_3060 + lVar6 * 0x18);
              if (cVar4 == '\0') {
                if (((dVar2 <= *(double *)(local_4868 + lVar6 * 0x18)) ||
                    (*(double *)(local_3060 + lVar6 * 0x18 + 8) <=
                     *(double *)(local_4868 + lVar6 * 0x18 + 8))) ||
                   (adStack_3050[lVar6 * 3] <= adStack_4858[lVar6 * 3])) goto LAB_149a28d01;
LAB_149a28da2:
                bVar14 = true;
              }
              else {
                if (((*(double *)(local_4868 + lVar6 * 0x18) <= dVar2) &&
                    (*(double *)(local_4868 + lVar6 * 0x18 + 8) <
                     *(double *)(local_3060 + lVar6 * 0x18 + 8) ||
                     *(double *)(local_4868 + lVar6 * 0x18 + 8) ==
                     *(double *)(local_3060 + lVar6 * 0x18 + 8))) &&
                   (adStack_4858[lVar6 * 3] < adStack_3050[lVar6 * 3] ||
                    adStack_4858[lVar6 * 3] == adStack_3050[lVar6 * 3])) goto LAB_149a28da2;
LAB_149a28d01:
                bVar14 = false;
              }
              this = local_49c8;
              if (bVar14) {
                if (cVar3 == '\0') {
                  if (((*(double *)(local_1858 + uVar24 * 0x18) <= dVar2) ||
                      (*(double *)(local_1858 + uVar24 * 0x18 + 8) <
                       *(double *)(local_3060 + lVar6 * 0x18 + 8) ||
                       *(double *)(local_1858 + uVar24 * 0x18 + 8) ==
                       *(double *)(local_3060 + lVar6 * 0x18 + 8))) ||
                     (adStack_1848[uVar24 * 3] < adStack_3050[lVar6 * 3] ||
                      adStack_1848[uVar24 * 3] == adStack_3050[lVar6 * 3])) goto LAB_149a28d52;
LAB_149a28ddd:
                  bVar14 = true;
                }
                else {
                  if (((dVar2 <= *(double *)(local_1858 + uVar24 * 0x18)) &&
                      (*(double *)(local_3060 + lVar6 * 0x18 + 8) <=
                       *(double *)(local_1858 + uVar24 * 0x18 + 8))) &&
                     (adStack_3050[lVar6 * 3] <= adStack_1848[uVar24 * 3])) goto LAB_149a28ddd;
LAB_149a28d52:
                  bVar14 = false;
                }
                if (bVar14) {
                  bVar14 = true;
                  goto LAB_149a28edf;
                }
              }
              bVar14 = false;
            }
            else {
              uVar19 = 0;
              if ((int)uVar23 < local_3068[0]) {
                uVar19 = uVar21;
              }
              if ((uVar19 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                uVar13 = (*pcVar7)();
                return (bool)uVar13;
              }
              uVar19 = 0;
              if ((int)uVar23 < local_1860[0]) {
                uVar19 = uVar21;
              }
              if ((uVar19 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                uVar13 = (*pcVar7)();
                return (bool)uVar13;
              }
              if (cVar3 == '\x04') {
                uVar21 = SUB84(*(double *)(local_3060 + uVar24 * 0x18) -
                               *(double *)(local_4868 + uVar24 * 0x18),0) & uVar10;
                uVar19 = (uint)((ulonglong)
                                (*(double *)(local_3060 + uVar24 * 0x18) -
                                *(double *)(local_4868 + uVar24 * 0x18)) >> 0x20) & uVar11;
                if ((((double)CONCAT44(uVar19,uVar21) < dVar9 ||
                      (double)CONCAT44(uVar19,uVar21) == dVar9) &&
                    (uVar21 = SUB84(*(double *)(local_3060 + uVar24 * 0x18 + 8) -
                                    *(double *)(local_4868 + uVar24 * 0x18 + 8),0) & uVar10,
                    uVar19 = (uint)((ulonglong)
                                    (*(double *)(local_3060 + uVar24 * 0x18 + 8) -
                                    *(double *)(local_4868 + uVar24 * 0x18 + 8)) >> 0x20) & uVar11,
                    (double)CONCAT44(uVar19,uVar21) < dVar9 ||
                    (double)CONCAT44(uVar19,uVar21) == dVar9)) &&
                   (uVar21 = SUB84(adStack_3050[uVar24 * 3] - adStack_4858[uVar24 * 3],0) & uVar10,
                   uVar19 = (uint)((ulonglong)(adStack_3050[uVar24 * 3] - adStack_4858[uVar24 * 3])
                                  >> 0x20) & uVar11,
                   (double)CONCAT44(uVar19,uVar21) < dVar9 ||
                   (double)CONCAT44(uVar19,uVar21) == dVar9)) {
LAB_149a29122:
                  bVar14 = true;
                  goto LAB_149a28edf;
                }
LAB_149a28edd:
                bVar14 = false;
              }
              else {
                if (cVar3 == '\x05') {
                  uVar21 = SUB84(*(double *)(local_3060 + uVar24 * 0x18) -
                                 *(double *)(local_4868 + uVar24 * 0x18),0) & uVar10;
                  uVar19 = (uint)((ulonglong)
                                  (*(double *)(local_3060 + uVar24 * 0x18) -
                                  *(double *)(local_4868 + uVar24 * 0x18)) >> 0x20) & uVar11;
                  if ((dVar9 <= (double)CONCAT44(uVar19,uVar21) &&
                       (double)CONCAT44(uVar19,uVar21) != dVar9) ||
                     (uVar21 = SUB84(*(double *)(local_3060 + uVar24 * 0x18 + 8) -
                                     *(double *)(local_4868 + uVar24 * 0x18 + 8),0) & uVar10,
                     uVar19 = (uint)((ulonglong)
                                     (*(double *)(local_3060 + uVar24 * 0x18 + 8) -
                                     *(double *)(local_4868 + uVar24 * 0x18 + 8)) >> 0x20) & uVar11,
                     dVar9 <= (double)CONCAT44(uVar19,uVar21) &&
                     (double)CONCAT44(uVar19,uVar21) != dVar9)) goto LAB_149a29122;
                  uVar21 = SUB84(adStack_3050[uVar24 * 3] - adStack_4858[uVar24 * 3],0) & uVar10;
                  uVar19 = (uint)((ulonglong)(adStack_3050[uVar24 * 3] - adStack_4858[uVar24 * 3])
                                 >> 0x20) & uVar11;
                  if (dVar9 <= (double)CONCAT44(uVar19,uVar21) &&
                      (double)CONCAT44(uVar19,uVar21) != dVar9) {
                    bVar14 = true;
                    goto LAB_149a28edf;
                  }
                  goto LAB_149a28edd;
                }
                if (cVar3 == '\0') {
                  if (((*(double *)(local_4868 + uVar24 * 0x18) <
                        *(double *)(local_3060 + uVar24 * 0x18)) &&
                      (*(double *)(local_4868 + uVar24 * 0x18 + 8) <
                       *(double *)(local_3060 + uVar24 * 0x18 + 8))) &&
                     (adStack_4858[uVar24 * 3] < adStack_3050[uVar24 * 3])) goto LAB_149a29122;
                  goto LAB_149a28edd;
                }
                if (cVar3 == '\x01') {
                  if (((*(double *)(local_3060 + uVar24 * 0x18) <=
                        *(double *)(local_4868 + uVar24 * 0x18) &&
                        *(double *)(local_4868 + uVar24 * 0x18) !=
                        *(double *)(local_3060 + uVar24 * 0x18)) ||
                      (*(double *)(local_3060 + uVar24 * 0x18 + 8) <=
                       *(double *)(local_4868 + uVar24 * 0x18 + 8) &&
                       *(double *)(local_4868 + uVar24 * 0x18 + 8) !=
                       *(double *)(local_3060 + uVar24 * 0x18 + 8))) ||
                     (adStack_3050[uVar24 * 3] <= adStack_4858[uVar24 * 3] &&
                      adStack_4858[uVar24 * 3] != adStack_3050[uVar24 * 3])) goto LAB_149a28edd;
                  bVar14 = true;
                }
                else if (cVar3 == '\x02') {
                  if (((*(double *)(local_4868 + uVar24 * 0x18) <
                        *(double *)(local_3060 + uVar24 * 0x18) ||
                        *(double *)(local_4868 + uVar24 * 0x18) ==
                        *(double *)(local_3060 + uVar24 * 0x18)) ||
                      (*(double *)(local_4868 + uVar24 * 0x18 + 8) <
                       *(double *)(local_3060 + uVar24 * 0x18 + 8) ||
                       *(double *)(local_4868 + uVar24 * 0x18 + 8) ==
                       *(double *)(local_3060 + uVar24 * 0x18 + 8))) ||
                     (adStack_4858[uVar24 * 3] < adStack_3050[uVar24 * 3] ||
                      adStack_4858[uVar24 * 3] == adStack_3050[uVar24 * 3])) goto LAB_149a28edd;
                  bVar14 = true;
                }
                else {
                  if ((((cVar3 != '\x03') ||
                       (*(double *)(local_4868 + uVar24 * 0x18) <
                        *(double *)(local_3060 + uVar24 * 0x18))) ||
                      (*(double *)(local_4868 + uVar24 * 0x18 + 8) <
                       *(double *)(local_3060 + uVar24 * 0x18 + 8))) ||
                     (adStack_4858[uVar24 * 3] < adStack_3050[uVar24 * 3])) goto LAB_149a28edd;
                  bVar14 = true;
                }
              }
            }
LAB_149a28edf:
            lVar6 = *(longlong *)((longlong)this + 0x38);
            iVar17 = iVar25 + uVar23;
            if (((iVar17 < 0) || (*(int *)(lVar6 + 0x2020) <= iVar17)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              uVar13 = (*pcVar7)();
              return (bool)uVar13;
            }
            lVar22 = lVar6 + 0x18;
            if (*(longlong *)(lVar6 + 0x2018) != 0) {
              lVar22 = *(longlong *)(lVar6 + 0x2018);
            }
            iVar18 = iVar17;
            if (iVar17 < 0) {
              iVar18 = iVar17 + 0x1f;
            }
            uVar19 = 1 << ((byte)iVar17 & 0x1f);
            uVar21 = *(uint *)(lVar22 + (longlong)(iVar18 >> 5) * 4);
            if (bVar14) {
              uVar19 = uVar19 | uVar21;
            }
            else {
              uVar19 = ~uVar19 & uVar21;
            }
            *(uint *)(lVar22 + (longlong)(iVar18 >> 5) * 4) = uVar19;
          }
          uVar24 = (ulonglong)(uVar23 + 1);
          local_49f8 = local_49f8 + 1;
          bVar14 = bVar8;
        } while ((int)(uVar23 + 1) < iVar16);
      }
      local_4a24 = local_4a24 + 1;
    } while (local_4a24 < iVar20);
  }
  return true;
}

// operator()<FSoftClassPath> @ 149a29d80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<FSoftClassPath>
          (void *this,FSoftClassPath *param_1)

{
  uint *puVar1;
  EPCGAttributeFilterOperator EVar2;
  char cVar3;
  char cVar4;
  UPCGBasePointData *pUVar5;
  IPCGAttributeAccessor *this_00;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  void *pvVar15;
  FSoftClassPath *pFVar16;
  FSoftClassPath *pFVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  undefined1 auStackY_6258 [32];
  int local_6210;
  int local_620c;
  uint local_6208;
  FSoftClassPath *local_61f8;
  TTypeCompatibleBytes<bool> *local_61f0;
  uint local_61e8;
  int local_61e4;
  undefined8 local_61e0;
  ForElementType<bool> *local_61d8;
  FSoftClassPath *local_61d0;
  FSoftClassPath *local_61c8;
  uint uStack_61c0;
  undefined4 uStack_61bc;
  FSoftClassPath *local_61b8;
  uint uStack_61b0;
  undefined4 uStack_61ac;
  FSoftClassPath *local_61a8;
  uint uStack_61a0;
  undefined4 uStack_619c;
  TArrayView<FSoftClassPath,int> local_6198;
  TArrayView<FSoftClassPath,int> local_6188;
  TArrayView<FSoftClassPath,int> local_6178;
  ForElementType<bool> local_6168;
  int local_6068 [4];
  ForElementType<FSoftClassPath> local_6058;
  undefined1 local_4058 [8];
  ForElementType<FSoftClassPath> local_4050;
  undefined1 local_2050 [8];
  ForElementType<FSoftClassPath> local_2048;
  int local_48 [2];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_6258;
  local_61d0 = param_1;
  local_6208 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  if ((int)local_6208 < 1) {
    pvVar15 = *(void **)&param_1->field_0x10;
LAB_149a2a890:
    if (pvVar15 != (void *)0x0) {
      FMemory::Free(pvVar15);
    }
    return false;
  }
  local_48[1] = 0x100;
  local_48[0] = 0;
  local_2050._0_4_ = 0;
  local_4058._0_4_ = 0;
  local_6068[0] = 0;
  local_2050._4_4_ = 0x100;
  local_4058._4_4_ = 0x100;
  local_6068[1] = 0x100;
  iVar12 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<FSoftClassPath>_>
                     (0x20,8,0x100,&local_2048,local_48,local_48 + 1);
  DefaultConstructItems<FSoftClassPath,int>(local_2048.InlineData + iVar12,0x100);
  if ((int)local_2050._0_4_ < 0x100) {
    iVar18 = 0x100 - local_2050._0_4_;
    iVar12 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<FSoftClassPath>_>
                       (0x20,8,iVar18,&local_4050,(int *)local_2050,(int *)(local_2050 + 4));
    DefaultConstructItems<FSoftClassPath,int>(local_4050.InlineData + iVar12,iVar18);
  }
  else if (0x100 < (int)local_2050._0_4_) {
    iVar12 = local_2050._0_4_ + -0x100;
    if (iVar12 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
    }
    else if (iVar12 == 0) goto LAB_149a29f76;
    DestructItems<FSoftClassPath,int>((FSoftClassPath *)local_2050,iVar12);
    iVar18 = (local_2050._0_4_ - iVar12) + -0x100;
    if (iVar18 != 0) {
      memmove(local_2050,local_2050 + (longlong)iVar12 * 0x20,(longlong)iVar18 << 5);
    }
    local_2050._0_4_ = local_2050._0_4_ - iVar12;
  }
LAB_149a29f76:
  if ((int)local_4058._0_4_ < 0x100) {
    iVar18 = 0x100 - local_4058._0_4_;
    iVar12 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<FSoftClassPath>_>
                       (0x20,8,iVar18,&local_6058,(int *)local_4058,(int *)(local_4058 + 4));
    DefaultConstructItems<FSoftClassPath,int>(local_6058.InlineData + iVar12,iVar18);
  }
  else if (0x100 < (int)local_4058._0_4_) {
    iVar12 = local_4058._0_4_ + -0x100;
    if (iVar12 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
    }
    else if (iVar12 == 0) goto LAB_149a2a081;
    DestructItems<FSoftClassPath,int>((FSoftClassPath *)local_4058,iVar12);
    iVar18 = (local_4058._0_4_ - iVar12) + -0x100;
    if (iVar18 != 0) {
      memmove(local_4058,local_4058 + (longlong)iVar12 * 0x20,(longlong)iVar18 << 5);
    }
    local_4058._0_4_ = local_4058._0_4_ - iVar12;
  }
LAB_149a2a081:
  iVar12 = local_4058._0_4_;
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) == 0) &&
     (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) == 0)) {
    bVar11 = false;
    bVar8 = false;
  }
  else {
    bVar11 = true;
    bVar8 = true;
    if (local_6068[0] < 0x100) {
      UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
                (1,1,0x100 - local_6068[0],&local_6168,local_6068,local_6068 + 1);
      iVar12 = local_4058._0_4_;
    }
    else if (0x100 < local_6068[0]) {
      iVar18 = local_6068[0] + -0x100;
      if (iVar18 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
      }
      else if (iVar18 == 0) goto LAB_149a2a188;
      iVar12 = local_4058._0_4_;
      iVar21 = (local_6068[0] - iVar18) + -0x100;
      if (iVar21 != 0) {
        memmove(local_6068,(void *)((longlong)local_6068 + (longlong)iVar18),(longlong)iVar21);
      }
      local_6068[0] = local_6068[0] - iVar18;
    }
  }
LAB_149a2a188:
  local_620c = 0;
  iVar18 = (int)(local_6208 + 0xff + ((int)(local_6208 + 0xff) >> 0x1f & 0xffU)) >> 8;
  if (0 < iVar18) {
    local_6210 = 0;
    do {
      local_61a8 = (FSoftClassPath *)&local_2048;
      uVar19 = 0x100;
      if ((int)local_6208 < 0x100) {
        uVar19 = local_6208;
      }
      uStack_61a0 = uVar19;
      if (((int)uVar19 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      local_61c8 = (FSoftClassPath *)&local_4050;
      uStack_61c0 = uVar19;
      if (((int)uVar19 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      local_61b8 = (FSoftClassPath *)&local_6058;
      uStack_61b0 = uVar19;
      if (((int)uVar19 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      if (bVar11) {
        memset(&local_6168,0,(longlong)local_6068[0]);
        local_61e0 = *(undefined8 *)((longlong)this + 0x38);
        local_61d8 = &local_6168;
        local_61e8 = uVar19;
        local_61e4 = local_6210;
        ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
        operator()<FSoftClassPath>'::__l11::<lambda_1>::operator()
                  (&local_61e8,*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18),
                   *(UPCGSpatialData **)(*(longlong *)((longlong)this + 8) + 0x20));
        pUVar5 = *(UPCGBasePointData **)(*(longlong *)((longlong)this + 0x10) + 0x18);
        if (*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18) != pUVar5) {
          ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
          operator()<FSoftClassPath>'::__l11::<lambda_1>::operator()
                    (&local_61e8,pUVar5,
                     *(UPCGSpatialData **)(*(longlong *)((longlong)this + 0x10) + 0x20));
        }
      }
      else {
        local_61e0 = *(undefined8 *)((longlong)this + 0x38);
        local_61d8 = &local_6168;
        local_61e8 = uVar19;
        local_61e4 = local_6210;
      }
      local_6198._12_4_ = uStack_619c;
      local_6198.ArrayNum = uStack_61a0;
      local_6198.DataPtr = local_61a8;
      bVar9 = IPCGAttributeAccessor::GetRange<FSoftClassPath>
                        ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18),
                         &local_6198,local_6210,
                         (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20),
                         StrictType);
      if (!bVar9) {
LAB_149a2a852:
        DestructItems<FSoftClassPath,int>((FSoftClassPath *)&local_6058,local_4058._0_4_);
        DestructItems<FSoftClassPath,int>((FSoftClassPath *)&local_4050,local_2050._0_4_);
        DestructItems<FSoftClassPath,int>((FSoftClassPath *)&local_2048,local_48[0]);
        pvVar15 = *(void **)&local_61d0->field_0x10;
        goto LAB_149a2a890;
      }
      local_6188._12_4_ = uStack_61bc;
      local_6188.ArrayNum = uStack_61c0;
      local_6188.DataPtr = local_61c8;
      bVar9 = IPCGAttributeAccessor::GetRange<FSoftClassPath>
                        ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_6188,
                         local_6210,
                         (IPCGAttributeAccessorKeys *)(*(undefined8 **)((longlong)this + 8))[1],
                         AllowBroadcastAndConstructible);
      if (!bVar9) goto LAB_149a2a852;
      this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10);
      if (this_00 != (IPCGAttributeAccessor *)0x0) {
        local_6178._12_4_ = uStack_61ac;
        local_6178.ArrayNum = uStack_61b0;
        local_6178.DataPtr = local_61b8;
        bVar9 = IPCGAttributeAccessor::GetRange<FSoftClassPath>
                          (this_00,&local_6178,local_6210,
                           (IPCGAttributeAccessorKeys *)(*(undefined8 **)((longlong)this + 0x10))[1]
                           ,AllowBroadcastAndConstructible);
        if (!bVar9) goto LAB_149a2a852;
      }
      if ((uVar19 != 0) &&
         (((iVar12 = (uVar19 - 1) + local_6210, iVar12 < 0 ||
           (*(int *)(*(longlong *)((longlong)this + 0x38) + 0x2020) <= iVar12)) &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Range == 0 || OperationData.FilterBitArray.IsValidIndex(StartIndex + Range - 1)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                              ,0x2e6,L""), bVar9)))) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      uVar23 = 0;
      if (0 < (int)uVar19) {
        local_61f0 = local_6168.InlineData;
        lVar24 = 0;
        local_61f8 = (FSoftClassPath *)&local_2048;
        iVar12 = local_6210;
        do {
          if (bVar8) {
            uVar20 = 0;
            if ((int)uVar23 < local_6068[0]) {
              uVar20 = ~uVar23 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            if (local_61f0->Pad[0] == '\0') goto LAB_149a2a4f8;
            lVar6 = *(longlong *)((longlong)this + 0x38);
            if (((iVar12 < 0) || (*(int *)(lVar6 + 0x2020) <= (int)(local_6210 + uVar23))) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            iVar21 = local_6210 + uVar23;
            lVar22 = lVar6 + 0x18;
            if (*(longlong *)(lVar6 + 0x2018) != 0) {
              lVar22 = *(longlong *)(lVar6 + 0x2018);
            }
            iVar13 = iVar21;
            if (iVar21 < 0) {
              iVar13 = iVar21 + 0x1f;
            }
            puVar1 = (uint *)(lVar22 + (longlong)(iVar13 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar21 & 0x1f);
          }
          else {
LAB_149a2a4f8:
            uVar20 = ~uVar23 >> 0x1f;
            EVar2 = **(EPCGAttributeFilterOperator **)this;
            if (EVar2 == InRange) {
              cVar3 = *(char *)**(undefined8 **)((longlong)this + 0x30);
              cVar4 = **(char **)((longlong)this + 0x28);
              uVar14 = 0;
              if ((int)uVar23 < (int)local_4058._0_4_) {
                uVar14 = uVar20;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              uVar14 = 0;
              if ((int)uVar23 < (int)local_2050._0_4_) {
                uVar14 = uVar20;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              uVar14 = 0;
              if ((int)uVar23 < local_48[0]) {
                uVar14 = uVar20;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              pFVar16 = (FSoftClassPath *)(local_4050.InlineData[0].Pad + lVar24);
              if (cVar4 == '\0') {
                bVar11 = PCG::Private::SoftObjectPathTraits<FSoftClassPath>::Greater
                                   ((FSoftClassPath *)(local_2048.InlineData[0].Pad + lVar24),
                                    pFVar16);
              }
              else {
                bVar11 = PCG::Private::SoftObjectPathTraits<FSoftClassPath>::GreaterOrEqual
                                   (local_61f8,pFVar16);
              }
              if (bVar11 != false) {
                pFVar17 = (FSoftClassPath *)(local_6058.InlineData[0].Pad + lVar24);
                pFVar16 = (FSoftClassPath *)(local_2048.InlineData[0].Pad + lVar24);
                if (cVar3 == '\0') {
                  bVar11 = PCG::Private::SoftObjectPathTraits<FSoftClassPath>::Less(pFVar16,pFVar17)
                  ;
                }
                else {
                  bVar11 = PCG::Private::SoftObjectPathTraits<FSoftClassPath>::LessOrEqual
                                     (pFVar16,pFVar17);
                }
                if (bVar11 != false) {
                  bVar11 = true;
                  goto LAB_149a2a6f3;
                }
              }
              bVar11 = false;
            }
            else {
              uVar14 = 0;
              if ((int)uVar23 < (int)local_2050._0_4_) {
                uVar14 = uVar20;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              uVar14 = 0;
              if ((int)uVar23 < local_48[0]) {
                uVar14 = uVar20;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              bVar11 = PCGAttributeFilterHelpers::ApplyCompare<FSoftClassPath>
                                 ((FSoftClassPath *)(local_2048.InlineData[0].Pad + lVar24),
                                  (FSoftClassPath *)(local_4050.InlineData[0].Pad + lVar24),EVar2);
            }
LAB_149a2a6f3:
            lVar6 = *(longlong *)((longlong)this + 0x38);
            iVar21 = local_6210 + uVar23;
            if (((iVar21 < 0) || (*(int *)(lVar6 + 0x2020) <= iVar21)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            lVar22 = lVar6 + 0x18;
            if (*(longlong *)(lVar6 + 0x2018) != 0) {
              lVar22 = *(longlong *)(lVar6 + 0x2018);
            }
            iVar13 = iVar21;
            if (iVar21 < 0) {
              iVar13 = iVar21 + 0x1f;
            }
            puVar1 = (uint *)(lVar22 + (longlong)(iVar13 >> 5) * 4);
            uVar20 = 1 << ((byte)iVar21 & 0x1f);
            if (bVar11 == false) {
              *puVar1 = ~uVar20 & *puVar1;
            }
            else {
              *puVar1 = *puVar1 | uVar20;
            }
          }
          local_61f0 = local_61f0 + 1;
          uVar23 = uVar23 + 1;
          local_61f8 = local_61f8 + 1;
          lVar24 = lVar24 + 0x20;
          iVar12 = iVar12 + 1;
          bVar11 = bVar8;
        } while ((int)uVar23 < (int)uVar19);
      }
      local_6210 = local_6210 + 0x100;
      local_620c = local_620c + 1;
      local_6208 = local_6208 - 0x100;
      param_1 = local_61d0;
      iVar12 = local_4058._0_4_;
    } while (local_620c < iVar18);
  }
  DestructItems<FSoftClassPath,int>((FSoftClassPath *)&local_6058,iVar12);
  DestructItems<FSoftClassPath,int>((FSoftClassPath *)&local_4050,local_2050._0_4_);
  DestructItems<FSoftClassPath,int>((FSoftClassPath *)&local_2048,local_48[0]);
  if (*(void **)&param_1->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x10);
  }
  return true;
}

// operator()<FSoftObjectPath> @ 149a2b460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<FSoftObjectPath>
          (void *this,FSoftObjectPath *param_1)

{
  uint *puVar1;
  EPCGAttributeFilterOperator EVar2;
  char cVar3;
  char cVar4;
  UPCGBasePointData *pUVar5;
  IPCGAttributeAccessor *this_00;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FSoftObjectPath *pFVar16;
  FSoftObjectPath *pFVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  undefined1 auStackY_6258 [32];
  int local_6210;
  int local_620c;
  uint local_6208;
  FSoftObjectPath *local_61f8;
  TTypeCompatibleBytes<bool> *local_61f0;
  uint local_61e8;
  int local_61e4;
  undefined8 local_61e0;
  ForElementType<bool> *local_61d8;
  FSoftObjectPath *local_61d0;
  FSoftObjectPath *local_61c8;
  uint uStack_61c0;
  undefined4 uStack_61bc;
  FSoftObjectPath *local_61b8;
  uint uStack_61b0;
  undefined4 uStack_61ac;
  FSoftObjectPath *local_61a8;
  uint uStack_61a0;
  undefined4 uStack_619c;
  TArrayView<FSoftObjectPath,int> local_6198;
  TArrayView<FSoftObjectPath,int> local_6188;
  TArrayView<FSoftObjectPath,int> local_6178;
  ForElementType<bool> local_6168;
  int local_6068 [4];
  ForElementType<FSoftObjectPath> local_6058;
  undefined1 local_4058 [8];
  ForElementType<FSoftObjectPath> local_4050;
  undefined1 local_2050 [8];
  ForElementType<FSoftObjectPath> local_2048;
  int local_48 [2];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_6258;
  local_61d0 = param_1;
  local_6208 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  if ((int)local_6208 < 1) {
    pFVar15 = (param_1->SubPathString).Data.AllocatorInstance.Data;
LAB_149a2bf6e:
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    return false;
  }
  local_48[1] = 0x100;
  local_48[0] = 0;
  local_2050._0_4_ = 0;
  local_4058._0_4_ = 0;
  local_6068[0] = 0;
  local_2050._4_4_ = 0x100;
  local_4058._4_4_ = 0x100;
  local_6068[1] = 0x100;
  iVar12 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<FSoftObjectPath>_>
                     (0x20,8,0x100,&local_2048,local_48,local_48 + 1);
  DefaultConstructItems<FSoftObjectPath,int>(local_2048.InlineData + iVar12,0x100);
  if ((int)local_2050._0_4_ < 0x100) {
    iVar18 = 0x100 - local_2050._0_4_;
    iVar12 = UE::Core::Private::
             ReallocGrow<0,TFixedAllocator<256>::ForElementType<FSoftObjectPath>_>
                       (0x20,8,iVar18,&local_4050,(int *)local_2050,(int *)(local_2050 + 4));
    DefaultConstructItems<FSoftObjectPath,int>(local_4050.InlineData + iVar12,iVar18);
  }
  else if (0x100 < (int)local_2050._0_4_) {
    iVar12 = local_2050._0_4_ - 0x100;
    if (iVar12 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
    }
    else if (iVar12 == 0) goto LAB_149a2b656;
    DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_2050,iVar12);
    iVar18 = (local_2050._0_4_ - iVar12) + -0x100;
    if (iVar18 != 0) {
      memmove(local_2050,local_2050 + (longlong)iVar12 * 0x20,(longlong)iVar18 << 5);
    }
    local_2050._0_4_ = local_2050._0_4_ - iVar12;
  }
LAB_149a2b656:
  if ((int)local_4058._0_4_ < 0x100) {
    iVar18 = 0x100 - local_4058._0_4_;
    iVar12 = UE::Core::Private::
             ReallocGrow<0,TFixedAllocator<256>::ForElementType<FSoftObjectPath>_>
                       (0x20,8,iVar18,&local_6058,(int *)local_4058,(int *)(local_4058 + 4));
    DefaultConstructItems<FSoftObjectPath,int>(local_6058.InlineData + iVar12,iVar18);
  }
  else if (0x100 < (int)local_4058._0_4_) {
    iVar12 = local_4058._0_4_ - 0x100;
    if (iVar12 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
    }
    else if (iVar12 == 0) goto LAB_149a2b761;
    DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_4058,iVar12);
    iVar18 = (local_4058._0_4_ - iVar12) + -0x100;
    if (iVar18 != 0) {
      memmove(local_4058,local_4058 + (longlong)iVar12 * 0x20,(longlong)iVar18 << 5);
    }
    local_4058._0_4_ = local_4058._0_4_ - iVar12;
  }
LAB_149a2b761:
  uVar19 = local_4058._0_4_;
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) == 0) &&
     (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) == 0)) {
    bVar11 = false;
    bVar8 = false;
  }
  else {
    bVar11 = true;
    bVar8 = true;
    if (local_6068[0] < 0x100) {
      UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
                (1,1,0x100 - local_6068[0],&local_6168,local_6068,local_6068 + 1);
      uVar19 = local_4058._0_4_;
    }
    else if (0x100 < local_6068[0]) {
      iVar12 = local_6068[0] + -0x100;
      if (iVar12 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
      }
      else if (iVar12 == 0) goto LAB_149a2b868;
      uVar19 = local_4058._0_4_;
      iVar18 = (local_6068[0] - iVar12) + -0x100;
      if (iVar18 != 0) {
        memmove(local_6068,(void *)((longlong)local_6068 + (longlong)iVar12),(longlong)iVar18);
      }
      local_6068[0] = local_6068[0] - iVar12;
    }
  }
LAB_149a2b868:
  local_620c = 0;
  iVar12 = (int)(local_6208 + 0xff + ((int)(local_6208 + 0xff) >> 0x1f & 0xffU)) >> 8;
  if (0 < iVar12) {
    local_6210 = 0;
    do {
      local_61a8 = (FSoftObjectPath *)&local_2048;
      uVar19 = 0x100;
      if ((int)local_6208 < 0x100) {
        uVar19 = local_6208;
      }
      uStack_61a0 = uVar19;
      if (((int)uVar19 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      local_61c8 = (FSoftObjectPath *)&local_4050;
      uStack_61c0 = uVar19;
      if (((int)uVar19 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      local_61b8 = (FSoftObjectPath *)&local_6058;
      uStack_61b0 = uVar19;
      if (((int)uVar19 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      if (bVar11) {
        memset(&local_6168,0,(longlong)local_6068[0]);
        local_61e0 = *(undefined8 *)((longlong)this + 0x38);
        local_61d8 = &local_6168;
        local_61e8 = uVar19;
        local_61e4 = local_6210;
        ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
        operator()<FSoftObjectPath>'::__l11::<lambda_1>::operator()
                  (&local_61e8,*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18),
                   *(UPCGSpatialData **)(*(longlong *)((longlong)this + 8) + 0x20));
        pUVar5 = *(UPCGBasePointData **)(*(longlong *)((longlong)this + 0x10) + 0x18);
        if (*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18) != pUVar5) {
          ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
          operator()<FSoftObjectPath>'::__l11::<lambda_1>::operator()
                    (&local_61e8,pUVar5,
                     *(UPCGSpatialData **)(*(longlong *)((longlong)this + 0x10) + 0x20));
        }
      }
      else {
        local_61e0 = *(undefined8 *)((longlong)this + 0x38);
        local_61d8 = &local_6168;
        local_61e8 = uVar19;
        local_61e4 = local_6210;
      }
      local_6198._12_4_ = uStack_619c;
      local_6198.ArrayNum = uStack_61a0;
      local_6198.DataPtr = local_61a8;
      bVar9 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                        ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18),
                         &local_6198,local_6210,
                         (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20),
                         StrictType);
      if (!bVar9) {
LAB_149a2bf30:
        DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)&local_6058,local_4058._0_4_);
        DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)&local_4050,local_2050._0_4_);
        DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)&local_2048,local_48[0]);
        pFVar15 = (local_61d0->SubPathString).Data.AllocatorInstance.Data;
        goto LAB_149a2bf6e;
      }
      local_6188._12_4_ = uStack_61bc;
      local_6188.ArrayNum = uStack_61c0;
      local_6188.DataPtr = local_61c8;
      bVar9 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                        ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_6188,
                         local_6210,
                         (IPCGAttributeAccessorKeys *)(*(undefined8 **)((longlong)this + 8))[1],
                         AllowBroadcastAndConstructible);
      if (!bVar9) goto LAB_149a2bf30;
      this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10);
      if (this_00 != (IPCGAttributeAccessor *)0x0) {
        local_6178._12_4_ = uStack_61ac;
        local_6178.ArrayNum = uStack_61b0;
        local_6178.DataPtr = local_61b8;
        bVar9 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                          (this_00,&local_6178,local_6210,
                           (IPCGAttributeAccessorKeys *)(*(undefined8 **)((longlong)this + 0x10))[1]
                           ,AllowBroadcastAndConstructible);
        if (!bVar9) goto LAB_149a2bf30;
      }
      if ((uVar19 != 0) &&
         (((iVar18 = (uVar19 - 1) + local_6210, iVar18 < 0 ||
           (*(int *)(*(longlong *)((longlong)this + 0x38) + 0x2020) <= iVar18)) &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Range == 0 || OperationData.FilterBitArray.IsValidIndex(StartIndex + Range - 1)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                              ,0x2e6,L""), bVar9)))) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      uVar23 = 0;
      if (0 < (int)uVar19) {
        local_61f0 = local_6168.InlineData;
        lVar24 = 0;
        local_61f8 = (FSoftObjectPath *)&local_2048;
        iVar18 = local_6210;
        do {
          if (bVar8) {
            uVar20 = 0;
            if ((int)uVar23 < local_6068[0]) {
              uVar20 = ~uVar23 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            if (local_61f0->Pad[0] == '\0') goto LAB_149a2bbd8;
            lVar6 = *(longlong *)((longlong)this + 0x38);
            if (((iVar18 < 0) || (*(int *)(lVar6 + 0x2020) <= (int)(local_6210 + uVar23))) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            iVar21 = local_6210 + uVar23;
            lVar22 = lVar6 + 0x18;
            if (*(longlong *)(lVar6 + 0x2018) != 0) {
              lVar22 = *(longlong *)(lVar6 + 0x2018);
            }
            iVar13 = iVar21;
            if (iVar21 < 0) {
              iVar13 = iVar21 + 0x1f;
            }
            puVar1 = (uint *)(lVar22 + (longlong)(iVar13 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar21 & 0x1f);
          }
          else {
LAB_149a2bbd8:
            uVar20 = ~uVar23 >> 0x1f;
            EVar2 = **(EPCGAttributeFilterOperator **)this;
            if (EVar2 == InRange) {
              cVar3 = *(char *)**(undefined8 **)((longlong)this + 0x30);
              cVar4 = **(char **)((longlong)this + 0x28);
              uVar14 = 0;
              if ((int)uVar23 < (int)local_4058._0_4_) {
                uVar14 = uVar20;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              uVar14 = 0;
              if ((int)uVar23 < (int)local_2050._0_4_) {
                uVar14 = uVar20;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              uVar14 = 0;
              if ((int)uVar23 < local_48[0]) {
                uVar14 = uVar20;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              pFVar16 = (FSoftObjectPath *)(local_4050.InlineData[0].Pad + lVar24);
              if (cVar4 == '\0') {
                bVar11 = PCG::Private::SoftObjectPathTraits<FSoftObjectPath>::Greater
                                   ((FSoftObjectPath *)(local_2048.InlineData[0].Pad + lVar24),
                                    pFVar16);
              }
              else {
                bVar11 = PCG::Private::SoftObjectPathTraits<FSoftObjectPath>::GreaterOrEqual
                                   (local_61f8,pFVar16);
              }
              if (bVar11 != false) {
                pFVar17 = (FSoftObjectPath *)(local_6058.InlineData[0].Pad + lVar24);
                pFVar16 = (FSoftObjectPath *)(local_2048.InlineData[0].Pad + lVar24);
                if (cVar3 == '\0') {
                  bVar11 = PCG::Private::SoftObjectPathTraits<FSoftObjectPath>::Less
                                     (pFVar16,pFVar17);
                }
                else {
                  bVar11 = PCG::Private::SoftObjectPathTraits<FSoftObjectPath>::LessOrEqual
                                     (pFVar16,pFVar17);
                }
                if (bVar11 != false) {
                  bVar11 = true;
                  goto LAB_149a2bdd3;
                }
              }
              bVar11 = false;
            }
            else {
              uVar14 = 0;
              if ((int)uVar23 < (int)local_2050._0_4_) {
                uVar14 = uVar20;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              uVar14 = 0;
              if ((int)uVar23 < local_48[0]) {
                uVar14 = uVar20;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              bVar11 = PCGAttributeFilterHelpers::ApplyCompare<FSoftObjectPath>
                                 ((FSoftObjectPath *)(local_2048.InlineData[0].Pad + lVar24),
                                  (FSoftObjectPath *)(local_4050.InlineData[0].Pad + lVar24),EVar2);
            }
LAB_149a2bdd3:
            lVar6 = *(longlong *)((longlong)this + 0x38);
            iVar21 = local_6210 + uVar23;
            if (((iVar21 < 0) || (*(int *)(lVar6 + 0x2020) <= iVar21)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            lVar22 = lVar6 + 0x18;
            if (*(longlong *)(lVar6 + 0x2018) != 0) {
              lVar22 = *(longlong *)(lVar6 + 0x2018);
            }
            iVar13 = iVar21;
            if (iVar21 < 0) {
              iVar13 = iVar21 + 0x1f;
            }
            puVar1 = (uint *)(lVar22 + (longlong)(iVar13 >> 5) * 4);
            uVar14 = 1 << ((byte)iVar21 & 0x1f);
            uVar20 = *puVar1;
            if (bVar11 == false) {
              uVar14 = ~uVar14 & uVar20;
            }
            else {
              uVar14 = uVar14 | uVar20;
            }
            *puVar1 = uVar14;
          }
          local_61f0 = local_61f0 + 1;
          uVar23 = uVar23 + 1;
          local_61f8 = local_61f8 + 1;
          lVar24 = lVar24 + 0x20;
          iVar18 = iVar18 + 1;
          bVar11 = bVar8;
        } while ((int)uVar23 < (int)uVar19);
      }
      local_6210 = local_6210 + 0x100;
      local_620c = local_620c + 1;
      local_6208 = local_6208 - 0x100;
      param_1 = local_61d0;
      uVar19 = local_4058._0_4_;
    } while (local_620c < iVar12);
  }
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)&local_6058,uVar19);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)&local_4050,local_2050._0_4_);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)&local_2048,local_48[0]);
  pFVar15 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar15 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar15);
  }
  return true;
}

// operator()<FName> @ 149a2ca20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
`FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<FName>
          (void *this,FName param_1)

{
  uint *puVar1;
  FName *this_00;
  EPCGAttributeFilterOperator EVar2;
  char cVar3;
  char cVar4;
  UPCGBasePointData *pUVar5;
  IPCGAttributeAccessor *this_01;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 auStackY_1a38 [32];
  int local_19f0;
  int local_19ec;
  longlong local_19e0;
  TTypeCompatibleBytes<bool> *local_19d8;
  int local_19d0;
  int local_19cc;
  undefined8 local_19c8;
  ForElementType<bool> *local_19c0;
  TArray<FName,TFixedAllocator<256>_> *local_19b8;
  int iStack_19b0;
  undefined4 uStack_19ac;
  TArray<FName,TFixedAllocator<256>_> *local_19a8;
  int iStack_19a0;
  undefined4 uStack_199c;
  FName *local_1998;
  int iStack_1990;
  undefined4 uStack_198c;
  TArrayView<FName,int> local_1988;
  TArrayView<FName,int> local_1978;
  TArrayView<FName,int> local_1968;
  ForElementType<bool> local_1958;
  int local_1858 [4];
  ForElementType<FName> local_1848;
  int local_1048 [2];
  TArray<FName,TFixedAllocator<256>_> local_1040;
  TArray<FName,TFixedAllocator<256>_> local_838;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1a38;
  iVar12 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  if (iVar12 < 1) {
    return false;
  }
  local_1048[0] = 0;
  local_1040.ArrayNum = 0;
  local_838.ArrayNum = 0;
  local_1858[0] = 0;
  local_1048[1] = 0x100;
  local_1040.ArrayMax = 0x100;
  local_838.ArrayMax = 0x100;
  local_1858[1] = 0x100;
  iVar13 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<FName>_>
                     (8,4,0x100,&local_1848,local_1048,local_1048 + 1);
  memset(local_1848.InlineData + iVar13,0,0x800);
  TArray<FName,TFixedAllocator<256>_>::SetNum(&local_1040,0x100,No);
  TArray<FName,TFixedAllocator<256>_>::SetNum(&local_838,0x100,No);
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) == 0) &&
     (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) == 0)) {
    bVar11 = false;
    bVar8 = false;
    goto LAB_149a2cc24;
  }
  bVar11 = true;
  bVar8 = true;
  if (local_1858[0] < 0x100) {
    UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
              (1,1,0x100 - local_1858[0],&local_1958,local_1858,local_1858 + 1);
    goto LAB_149a2cc24;
  }
  if (local_1858[0] < 0x101) goto LAB_149a2cc24;
  iVar13 = local_1858[0] + -0x100;
  if (iVar13 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x458,
                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                       );
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
LAB_149a2cbf1:
    iVar14 = (local_1858[0] - iVar13) + -0x100;
    if (iVar14 != 0) {
      memmove(local_1858,(void *)((longlong)local_1858 + (longlong)iVar13),(longlong)iVar14);
    }
    local_1858[0] = local_1858[0] - iVar13;
  }
  else if (iVar13 != 0) goto LAB_149a2cbf1;
  bVar11 = true;
LAB_149a2cc24:
  iVar13 = (int)(iVar12 + 0xff + (iVar12 + 0xff >> 0x1f & 0xffU)) >> 8;
  local_19ec = 0;
  if (0 < iVar13) {
    local_19f0 = 0;
    do {
      local_1998 = (FName *)&local_1848;
      iVar14 = 0x100;
      if (iVar12 < 0x100) {
        iVar14 = iVar12;
      }
      iStack_1990 = iVar14;
      if ((iVar14 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      local_19b8 = &local_1040;
      iStack_19b0 = iVar14;
      if ((iVar14 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      local_19a8 = &local_838;
      iStack_19a0 = iVar14;
      if ((iVar14 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      if (bVar11) {
        memset(&local_1958,0,(longlong)local_1858[0]);
        local_19c8 = *(undefined8 *)((longlong)this + 0x38);
        local_19c0 = &local_1958;
        local_19d0 = iVar14;
        local_19cc = local_19f0;
        ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<FName>'::__l11
        ::<lambda_1>::operator()
                  (&local_19d0,*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18),
                   *(UPCGSpatialData **)(*(longlong *)((longlong)this + 8) + 0x20));
        pUVar5 = *(UPCGBasePointData **)(*(longlong *)((longlong)this + 0x10) + 0x18);
        if (*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18) != pUVar5) {
          ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<FName>'::
          __l11::<lambda_1>::operator()
                    (&local_19d0,pUVar5,
                     *(UPCGSpatialData **)(*(longlong *)((longlong)this + 0x10) + 0x20));
        }
      }
      else {
        local_19c8 = *(undefined8 *)((longlong)this + 0x38);
        local_19c0 = &local_1958;
        local_19d0 = iVar14;
        local_19cc = local_19f0;
      }
      local_1988._12_4_ = uStack_198c;
      local_1988.ArrayNum = iStack_1990;
      local_1988.DataPtr = local_1998;
      bVar9 = IPCGAttributeAccessor::GetRange<FName>
                        ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18),
                         &local_1988,local_19f0,
                         (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20),
                         StrictType);
      if (!bVar9) {
        return false;
      }
      local_1978._12_4_ = uStack_19ac;
      local_1978.ArrayNum = iStack_19b0;
      local_1978.DataPtr = (FName *)local_19b8;
      bVar9 = IPCGAttributeAccessor::GetRange<FName>
                        ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_1978,
                         local_19f0,
                         (IPCGAttributeAccessorKeys *)(*(undefined8 **)((longlong)this + 8))[1],
                         AllowBroadcastAndConstructible);
      if (!bVar9) {
        return false;
      }
      this_01 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10);
      if (this_01 != (IPCGAttributeAccessor *)0x0) {
        local_1968._12_4_ = uStack_199c;
        local_1968.ArrayNum = iStack_19a0;
        local_1968.DataPtr = (FName *)local_19a8;
        bVar9 = IPCGAttributeAccessor::GetRange<FName>
                          (this_01,&local_1968,local_19f0,
                           (IPCGAttributeAccessorKeys *)(*(undefined8 **)((longlong)this + 0x10))[1]
                           ,AllowBroadcastAndConstructible);
        if (!bVar9) {
          return false;
        }
      }
      if ((iVar14 != 0) &&
         (((iVar17 = iVar14 + -1 + local_19f0, iVar17 < 0 ||
           (*(int *)(*(longlong *)((longlong)this + 0x38) + 0x2020) <= iVar17)) &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Range == 0 || OperationData.FilterBitArray.IsValidIndex(StartIndex + Range - 1)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                              ,0x2e6,L""), bVar9)))) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      uVar21 = 0;
      if (0 < iVar14) {
        local_19d8 = local_1958.InlineData;
        lVar22 = 0;
        local_19e0 = 0;
        iVar17 = local_19f0;
        do {
          if (bVar8) {
            uVar19 = 0;
            if ((int)uVar21 < local_1858[0]) {
              uVar19 = ~uVar21 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            if (local_19d8->Pad[0] == '\0') goto LAB_149a2cfb9;
            lVar6 = *(longlong *)((longlong)this + 0x38);
            if (((iVar17 < 0) || (*(int *)(lVar6 + 0x2020) <= (int)(local_19f0 + uVar21))) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            iVar18 = local_19f0 + uVar21;
            lVar20 = lVar6 + 0x18;
            if (*(longlong *)(lVar6 + 0x2018) != 0) {
              lVar20 = *(longlong *)(lVar6 + 0x2018);
            }
            iVar15 = iVar18;
            if (iVar18 < 0) {
              iVar15 = iVar18 + 0x1f;
            }
            puVar1 = (uint *)(lVar20 + (longlong)(iVar15 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar18 & 0x1f);
          }
          else {
LAB_149a2cfb9:
            uVar19 = ~uVar21 >> 0x1f;
            EVar2 = **(EPCGAttributeFilterOperator **)this;
            if (EVar2 == InRange) {
              cVar3 = *(char *)**(undefined8 **)((longlong)this + 0x30);
              cVar4 = **(char **)((longlong)this + 0x28);
              uVar16 = 0;
              if ((int)uVar21 < local_838.ArrayNum) {
                uVar16 = uVar19;
              }
              if ((uVar16 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              uVar16 = 0;
              if ((int)uVar21 < local_1040.ArrayNum) {
                uVar16 = uVar19;
              }
              if ((uVar16 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              uVar16 = 0;
              if ((int)uVar21 < local_1048[0]) {
                uVar16 = uVar19;
              }
              if ((uVar16 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              this_00 = (FName *)(local_1848.InlineData + lVar22);
              if (cVar4 == '\0') {
                iVar18 = ::FName::Compare(this_00,(FName *)(local_1040.AllocatorInstance.InlineData
                                                           + lVar22));
                bVar11 = 0 < iVar18;
              }
              else {
                iVar18 = ::FName::Compare(this_00,(FName *)(local_1040.AllocatorInstance.InlineData
                                                            [0].Pad + local_19e0));
                bVar11 = (bool)((byte)((uint)iVar18 >> 0x1f) ^ 1);
              }
              if (bVar11 != false) {
                iVar18 = ::FName::Compare(this_00,(FName *)(local_838.AllocatorInstance.InlineData +
                                                           lVar22));
                if (cVar3 == '\0') {
                  bVar11 = SUB41((uint)iVar18 >> 0x1f,0);
                }
                else {
                  bVar11 = iVar18 < 1;
                }
                if (bVar11 != false) {
                  bVar11 = true;
                  goto LAB_149a2d1c4;
                }
              }
              bVar11 = false;
            }
            else {
              uVar16 = 0;
              if ((int)uVar21 < local_1040.ArrayNum) {
                uVar16 = uVar19;
              }
              if ((uVar16 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              uVar16 = 0;
              if ((int)uVar21 < local_1048[0]) {
                uVar16 = uVar19;
              }
              if ((uVar16 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              bVar11 = PCGAttributeFilterHelpers::ApplyCompare<FName>
                                 ((FName *)(local_1848.InlineData + lVar22),
                                  (FName *)(local_1040.AllocatorInstance.InlineData + lVar22),EVar2)
              ;
            }
LAB_149a2d1c4:
            lVar6 = *(longlong *)((longlong)this + 0x38);
            iVar18 = local_19f0 + uVar21;
            if (((iVar18 < 0) || (*(int *)(lVar6 + 0x2020) <= iVar18)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            lVar20 = lVar6 + 0x18;
            if (*(longlong *)(lVar6 + 0x2018) != 0) {
              lVar20 = *(longlong *)(lVar6 + 0x2018);
            }
            iVar15 = iVar18;
            if (iVar18 < 0) {
              iVar15 = iVar18 + 0x1f;
            }
            puVar1 = (uint *)(lVar20 + (longlong)(iVar15 >> 5) * 4);
            uVar16 = 1 << ((byte)iVar18 & 0x1f);
            uVar19 = *puVar1;
            if (bVar11 == false) {
              uVar16 = ~uVar16 & uVar19;
            }
            else {
              uVar16 = uVar16 | uVar19;
            }
            *puVar1 = uVar16;
          }
          local_19d8 = local_19d8 + 1;
          uVar21 = uVar21 + 1;
          local_19e0 = local_19e0 + 8;
          lVar22 = lVar22 + 1;
          iVar17 = iVar17 + 1;
          bVar11 = bVar8;
        } while ((int)uVar21 < iVar14);
      }
      local_19f0 = local_19f0 + 0x100;
      local_19ec = local_19ec + 1;
      iVar12 = iVar12 + -0x100;
    } while (local_19ec < iVar13);
  }
  return true;
}

// operator()<FString> @ 149a2f8d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
`FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<FString>
          (void *this,FString *param_1)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  UPCGBasePointData *pUVar4;
  IPCGAttributeAccessor *this_00;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  wchar_t *pwVar16;
  FScriptContainerElement *pFVar17;
  wchar_t *pwVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  TTypeCompatibleBytes<FString> *pTVar22;
  int iVar23;
  TTypeCompatibleBytes<FString> *this_01;
  uint uVar24;
  int iVar25;
  undefined1 auStackY_3258 [32];
  int local_3208;
  longlong local_31f0;
  int local_31e8;
  int local_31e4;
  undefined8 local_31e0;
  ForElementType<bool> *local_31d8;
  FString *local_31d0;
  ForElementType<FString> *local_31c8;
  int iStack_31c0;
  undefined4 uStack_31bc;
  FString *local_31b8;
  int iStack_31b0;
  undefined4 uStack_31ac;
  ForElementType<FString> *local_31a8;
  int iStack_31a0;
  undefined4 uStack_319c;
  TArrayView<FString,int> local_3198;
  TArrayView<FString,int> local_3188;
  TArrayView<FString,int> local_3178;
  ForElementType<bool> local_3168;
  int local_3068 [4];
  ForElementType<FString> local_3058;
  undefined1 local_2058 [8];
  ForElementType<FString> local_2050;
  undefined1 local_1050 [8];
  ForElementType<FString> local_1048;
  int local_48 [2];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_3258;
  local_31d0 = param_1;
  iVar11 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  if (iVar11 < 1) {
    pFVar17 = (param_1->Data).AllocatorInstance.Data;
LAB_149a30626:
    if (pFVar17 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar17);
    }
    return false;
  }
  local_48[0] = 0;
  local_48[1] = 0x100;
  local_2058._0_4_ = 0;
  local_2058._4_4_ = 0x100;
  local_1050._0_4_ = 0;
  local_1050._4_4_ = 0x100;
  local_3068[0] = 0;
  local_3068[1] = 0x100;
  iVar12 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<FString>_>
                     (0x10,8,0x100,&local_1048,local_48,local_48 + 1);
  memset(local_1048.InlineData + iVar12,0,0x1000);
  if ((int)local_2058._0_4_ < 0x100) {
    iVar23 = 0x100 - local_2058._0_4_;
    iVar12 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<FString>_>
                       (0x10,8,iVar23,&local_3058,(int *)local_2058,(int *)(local_2058 + 4));
    memset(local_3058.InlineData + iVar12,0,(longlong)iVar23 << 4);
  }
  else if (0x100 < (int)local_2058._0_4_) {
    iVar12 = local_2058._0_4_ + -0x100;
    if (iVar12 < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    else if (iVar12 == 0) goto LAB_149a2fae5;
    DestructItems<FString,int>((FString *)local_2058,iVar12);
    iVar23 = (local_2058._0_4_ - iVar12) + -0x100;
    if (iVar23 != 0) {
      memmove(local_2058,local_2058 + (longlong)iVar12 * 0x10,(longlong)iVar23 << 4);
    }
    local_2058._0_4_ = local_2058._0_4_ - iVar12;
  }
LAB_149a2fae5:
  if ((int)local_1050._0_4_ < 0x100) {
    iVar23 = 0x100 - local_1050._0_4_;
    iVar12 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<FString>_>
                       (0x10,8,iVar23,(ForElementType<FString> *)(local_2058 + 8),(int *)local_1050,
                        (int *)(local_1050 + 4));
    memset(local_2058 + (longlong)iVar12 * 0x10 + 8,0,(longlong)iVar23 << 4);
  }
  else if (0x100 < (int)local_1050._0_4_) {
    iVar12 = local_1050._0_4_ + -0x100;
    if (iVar12 < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    else if (iVar12 == 0) goto LAB_149a2fbfe;
    DestructItems<FString,int>((FString *)local_1050,iVar12);
    iVar23 = (local_1050._0_4_ - iVar12) + -0x100;
    if (iVar23 != 0) {
      memmove(local_1050,local_1050 + (longlong)iVar12 * 0x10,(longlong)iVar23 << 4);
    }
    local_1050._0_4_ = local_1050._0_4_ - iVar12;
  }
LAB_149a2fbfe:
  iVar12 = local_1050._0_4_;
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) == 0) &&
     (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) == 0)) {
    bVar10 = false;
    bVar7 = false;
  }
  else {
    bVar10 = true;
    bVar7 = true;
    if (local_3068[0] < 0x100) {
      UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
                (1,1,0x100 - local_3068[0],&local_3168,local_3068,local_3068 + 1);
      iVar12 = local_1050._0_4_;
    }
    else if (0x100 < local_3068[0]) {
      iVar23 = local_3068[0] + -0x100;
      if (iVar23 < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      else if (iVar23 == 0) goto LAB_149a2fd0a;
      iVar12 = local_1050._0_4_;
      iVar13 = (local_3068[0] - iVar23) + -0x100;
      if (iVar13 != 0) {
        memmove(local_3068,(void *)((longlong)local_3068 + (longlong)iVar23),(longlong)iVar13);
      }
      local_3068[0] = local_3068[0] - iVar23;
    }
  }
LAB_149a2fd0a:
  iVar23 = (int)((iVar11 + 0xff >> 0x1f & 0xffU) + iVar11 + 0xff) >> 8;
  local_3208 = 0;
  if (0 < iVar23) {
    do {
      iVar25 = local_3208 * 0x100;
      iVar13 = iVar11 + local_3208 * -0x100;
      iVar12 = 0x100;
      if (iVar13 < 0x100) {
        iVar12 = iVar13;
      }
      local_31a8 = &local_1048;
      iStack_31a0 = iVar12;
      if ((iVar12 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      local_31c8 = &local_3058;
      iStack_31c0 = iVar12;
      if ((iVar12 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      local_31b8 = (FString *)(local_2058 + 8);
      iStack_31b0 = iVar12;
      if ((iVar12 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (bVar10) {
        memset(&local_3168,0,(longlong)local_3068[0]);
        local_31e0 = *(undefined8 *)((longlong)this + 0x38);
        local_31d8 = &local_3168;
        local_31e8 = iVar12;
        local_31e4 = iVar25;
        ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<FString>'::
        __l11::<lambda_1>::operator()
                  (&local_31e8,*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18),
                   *(UPCGSpatialData **)(*(longlong *)((longlong)this + 8) + 0x20));
        pUVar4 = *(UPCGBasePointData **)(*(longlong *)((longlong)this + 0x10) + 0x18);
        if (*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18) != pUVar4) {
          ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<FString>'::
          __l11::<lambda_1>::operator()
                    (&local_31e8,pUVar4,
                     *(UPCGSpatialData **)(*(longlong *)((longlong)this + 0x10) + 0x20));
        }
      }
      else {
        local_31e0 = *(undefined8 *)((longlong)this + 0x38);
        local_31d8 = &local_3168;
        local_31e8 = iVar12;
        local_31e4 = iVar25;
      }
      local_3198._12_4_ = uStack_319c;
      local_3198.ArrayNum = iStack_31a0;
      local_3198.DataPtr = (FString *)local_31a8;
      bVar8 = IPCGAttributeAccessor::GetRange<FString>
                        ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18),
                         &local_3198,iVar25,
                         (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20),
                         StrictType);
      if (!bVar8) {
LAB_149a305e9:
        DestructItems<FString,int>((FString *)(local_2058 + 8),local_1050._0_4_);
        DestructItems<FString,int>((FString *)&local_3058,local_2058._0_4_);
        DestructItems<FString,int>((FString *)&local_1048,local_48[0]);
        pFVar17 = (local_31d0->Data).AllocatorInstance.Data;
        goto LAB_149a30626;
      }
      local_3188._12_4_ = uStack_31bc;
      local_3188.ArrayNum = iStack_31c0;
      local_3188.DataPtr = (FString *)local_31c8;
      bVar8 = IPCGAttributeAccessor::GetRange<FString>
                        ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_3188,
                         iVar25,(IPCGAttributeAccessorKeys *)
                                (*(undefined8 **)((longlong)this + 8))[1],
                         AllowBroadcastAndConstructible);
      if (!bVar8) goto LAB_149a305e9;
      this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10);
      if (this_00 != (IPCGAttributeAccessor *)0x0) {
        local_3178._12_4_ = uStack_31ac;
        local_3178.ArrayNum = iStack_31b0;
        local_3178.DataPtr = local_31b8;
        bVar8 = IPCGAttributeAccessor::GetRange<FString>
                          (this_00,&local_3178,iVar25,
                           (IPCGAttributeAccessorKeys *)(*(undefined8 **)((longlong)this + 0x10))[1]
                           ,AllowBroadcastAndConstructible);
        if (!bVar8) goto LAB_149a305e9;
      }
      if ((iVar12 != 0) &&
         (((iVar13 = iVar25 + -1 + iVar12, iVar13 < 0 ||
           (*(int *)(*(longlong *)((longlong)this + 0x38) + 0x2020) <= iVar13)) &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Range == 0 || OperationData.FilterBitArray.IsValidIndex(StartIndex + Range - 1)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                              ,0x2e6,L""), bVar8)))) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      local_31f0 = 0;
      uVar24 = 0;
      if (0 < iVar12) {
        do {
          if (bVar10) {
            uVar19 = 0;
            if ((int)uVar24 < local_3068[0]) {
              uVar19 = ~uVar24 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (local_3168.InlineData[local_31f0].Pad[0] == '\0') goto LAB_149a3007d;
            lVar5 = *(longlong *)((longlong)this + 0x38);
            iVar13 = iVar25 + uVar24;
            if (((iVar13 < 0) || (*(int *)(lVar5 + 0x2020) <= iVar13)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            lVar21 = lVar5 + 0x18;
            if (*(longlong *)(lVar5 + 0x2018) != 0) {
              lVar21 = *(longlong *)(lVar5 + 0x2018);
            }
            iVar14 = iVar13;
            if (iVar13 < 0) {
              iVar14 = iVar13 + 0x1f;
            }
            puVar1 = (uint *)(lVar21 + (longlong)(iVar14 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
          }
          else {
LAB_149a3007d:
            uVar20 = (ulonglong)uVar24;
            uVar19 = ~uVar24 >> 0x1f;
            cVar2 = **(char **)this;
            if (cVar2 == '\x06') {
              cVar2 = *(char *)**(undefined8 **)((longlong)this + 0x30);
              cVar3 = **(char **)((longlong)this + 0x28);
              uVar15 = 0;
              if ((int)uVar24 < (int)local_1050._0_4_) {
                uVar15 = uVar19;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              uVar15 = 0;
              if ((int)uVar24 < (int)local_2058._0_4_) {
                uVar15 = uVar19;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              uVar15 = 0;
              if ((int)uVar24 < local_48[0]) {
                uVar15 = uVar19;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              if (cVar3 == '\0') {
                if (*(int *)(local_1048.InlineData[local_31f0].Pad + 8) == 0) {
                  pwVar18 = L"";
                }
                else {
                  pwVar18 = *(wchar_t **)local_1048.InlineData[local_31f0].Pad;
                }
                if (*(int *)(local_3058.InlineData[local_31f0].Pad + 8) == 0) {
                  pwVar16 = L"";
                }
                else {
                  pwVar16 = *(wchar_t **)local_3058.InlineData[local_31f0].Pad;
                }
                uVar19 = FGenericPlatformStricmp::Stricmp(pwVar16,pwVar18);
              }
              else {
                if (*(int *)(local_3058.InlineData[local_31f0].Pad + 8) == 0) {
                  pwVar18 = L"";
                }
                else {
                  pwVar18 = *(wchar_t **)local_3058.InlineData[local_31f0].Pad;
                }
                if (*(int *)(local_1048.InlineData[local_31f0].Pad + 8) == 0) {
                  uVar19 = FGenericPlatformStricmp::Stricmp(L"",pwVar18);
                  uVar19 = ~uVar19;
                }
                else {
                  uVar19 = FGenericPlatformStricmp::Stricmp
                                     (*(wchar_t **)local_1048.InlineData[local_31f0].Pad,pwVar18);
                  uVar19 = ~uVar19;
                }
              }
              if ((int)uVar19 < 0) {
                if (cVar2 == '\0') {
                  if (*(int *)(local_2050.InlineData[uVar20].Pad + 8) == 0) {
                    pwVar18 = L"";
                  }
                  else {
                    pwVar18 = *(wchar_t **)(local_2058 + uVar20 * 0x10 + 8);
                  }
                  if (*(int *)(local_1048.InlineData[local_31f0].Pad + 8) == 0) {
                    pwVar16 = L"";
                  }
                  else {
                    pwVar16 = *(wchar_t **)local_1048.InlineData[local_31f0].Pad;
                  }
                  uVar19 = FGenericPlatformStricmp::Stricmp(pwVar16,pwVar18);
                }
                else {
                  if (*(int *)(local_1048.InlineData[local_31f0].Pad + 8) == 0) {
                    pwVar18 = L"";
                  }
                  else {
                    pwVar18 = *(wchar_t **)local_1048.InlineData[local_31f0].Pad;
                  }
                  if (*(int *)(local_2050.InlineData[uVar20].Pad + 8) == 0) {
                    uVar19 = FGenericPlatformStricmp::Stricmp(L"",pwVar18);
                    uVar19 = ~uVar19;
                  }
                  else {
                    uVar19 = FGenericPlatformStricmp::Stricmp
                                       (*(wchar_t **)(local_2058 + uVar20 * 0x10 + 8),pwVar18);
                    uVar19 = ~uVar19;
                  }
                }
                if ((int)uVar19 < 0) {
                  bVar10 = true;
                  goto LAB_149a304ae;
                }
              }
              bVar10 = false;
            }
            else {
              uVar15 = 0;
              if ((int)uVar24 < (int)local_2058._0_4_) {
                uVar15 = uVar19;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              pTVar22 = local_3058.InlineData + uVar20;
              uVar15 = 0;
              if ((int)uVar24 < local_48[0]) {
                uVar15 = uVar19;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              this_01 = local_1048.InlineData + local_31f0;
              if (cVar2 == '\x04') {
                iVar13 = *(int *)(local_1048.InlineData[local_31f0].Pad + 8);
                iVar14 = *(int *)(local_3058.InlineData[uVar20].Pad + 8);
                if (iVar13 == iVar14) {
                  if (iVar13 < 2) {
                    bVar10 = true;
                  }
                  else {
                    iVar13 = FGenericPlatformStricmp::Stricmp
                                       (*(wchar_t **)this_01->Pad,*(wchar_t **)pTVar22->Pad);
                    bVar10 = iVar13 == 0;
                  }
                }
                else {
                  bVar10 = iVar14 + iVar13 == 1;
                }
              }
              else if (cVar2 == '\x05') {
                iVar13 = *(int *)(local_1048.InlineData[local_31f0].Pad + 8);
                iVar14 = *(int *)(local_3058.InlineData[uVar20].Pad + 8);
                if (iVar13 == iVar14) {
                  if (iVar13 < 2) {
                    bVar10 = false;
                  }
                  else {
                    iVar13 = FGenericPlatformStricmp::Stricmp
                                       (*(wchar_t **)this_01->Pad,*(wchar_t **)pTVar22->Pad);
                    bVar10 = iVar13 != 0;
                  }
                }
                else {
                  bVar10 = iVar14 + iVar13 != 1;
                }
              }
              else if (cVar2 == '\0') {
                bVar10 = PCG::Private::DefaultCompareTraits<FString>::Greater
                                   ((FString *)this_01,(FString *)pTVar22);
              }
              else if (cVar2 == '\x01') {
                bVar10 = PCG::Private::DefaultCompareTraits<FString>::GreaterOrEqual
                                   ((FString *)this_01,(FString *)pTVar22);
              }
              else if (cVar2 == '\x02') {
                bVar10 = PCG::Private::DefaultCompareTraits<FString>::Less
                                   ((FString *)this_01,(FString *)pTVar22);
              }
              else if (cVar2 == '\x03') {
                bVar10 = PCG::Private::DefaultCompareTraits<FString>::LessOrEqual
                                   ((FString *)this_01,(FString *)pTVar22);
              }
              else if (cVar2 == '\a') {
                bVar10 = PCG::Private::MetadataTraits<FString>::Substring
                                   ((FString *)this_01,(FString *)pTVar22,IgnoreCase);
              }
              else if (cVar2 == '\b') {
                iVar13 = *(int *)(local_3058.InlineData[uVar20].Pad + 8);
                if (iVar13 == 0) {
                  bVar10 = ::FString::MatchesWildcard((FString *)this_01,L"",0,IgnoreCase);
                }
                else {
                  bVar10 = ::FString::MatchesWildcard
                                     ((FString *)this_01,*(wchar_t **)pTVar22->Pad,iVar13 + -1,
                                      IgnoreCase);
                }
              }
              else {
                bVar10 = false;
              }
            }
LAB_149a304ae:
            lVar5 = *(longlong *)((longlong)this + 0x38);
            iVar13 = iVar25 + uVar24;
            if (((iVar13 < 0) || (*(int *)(lVar5 + 0x2020) <= iVar13)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            lVar21 = lVar5 + 0x18;
            if (*(longlong *)(lVar5 + 0x2018) != 0) {
              lVar21 = *(longlong *)(lVar5 + 0x2018);
            }
            iVar14 = iVar13;
            if (iVar13 < 0) {
              iVar14 = iVar13 + 0x1f;
            }
            puVar1 = (uint *)(lVar21 + (longlong)(iVar14 >> 5) * 4);
            uVar19 = 1 << ((byte)iVar13 & 0x1f);
            if (bVar10 == false) {
              *puVar1 = ~uVar19 & *puVar1;
            }
            else {
              *puVar1 = *puVar1 | uVar19;
            }
          }
          local_31f0 = local_31f0 + 1;
          uVar24 = uVar24 + 1;
          bVar10 = bVar7;
        } while ((int)uVar24 < iVar12);
      }
      local_3208 = local_3208 + 1;
      param_1 = local_31d0;
      iVar12 = local_1050._0_4_;
    } while (local_3208 < iVar23);
  }
  DestructItems<FString,int>((FString *)(local_2058 + 8),iVar12);
  DestructItems<FString,int>((FString *)&local_3058,local_2058._0_4_);
  DestructItems<FString,int>((FString *)&local_1048,local_48[0]);
  pFVar17 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar17 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar17);
  }
  return true;
}

// operator()<__int64> @ 149a315e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
`FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<__int64>
          (void *this,long64 param_1)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  UPCGBasePointData *pUVar4;
  IPCGAttributeAccessor *this_00;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  undefined1 auStackY_1a38 [32];
  int local_19f0;
  int local_19ec;
  TTypeCompatibleBytes<bool> *local_19d8;
  int local_19d0;
  int local_19cc;
  undefined8 local_19c8;
  ForElementType<bool> *local_19c0;
  TArray<__int64,TFixedAllocator<256>_> *local_19b8;
  int iStack_19b0;
  undefined4 uStack_19ac;
  TArray<__int64,TFixedAllocator<256>_> *local_19a8;
  int iStack_19a0;
  undefined4 uStack_199c;
  ForElementType<__int64> *local_1998;
  int iStack_1990;
  undefined4 uStack_198c;
  TArrayView<__int64,int> local_1988;
  TArrayView<__int64,int> local_1978;
  TArrayView<__int64,int> local_1968;
  ForElementType<bool> local_1958;
  int local_1858 [4];
  ForElementType<__int64> local_1848;
  int local_1048 [2];
  TArray<__int64,TFixedAllocator<256>_> local_1040;
  TArray<__int64,TFixedAllocator<256>_> local_838;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1a38;
  iVar11 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  if (iVar11 < 1) {
    return false;
  }
  local_1048[0] = 0;
  local_1040.ArrayNum = 0;
  local_838.ArrayNum = 0;
  local_1858[0] = 0;
  local_1048[1] = 0x100;
  local_1040.ArrayMax = 0x100;
  local_838.ArrayMax = 0x100;
  local_1858[1] = 0x100;
  iVar12 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<__int64>_>
                     (8,8,0x100,&local_1848,local_1048,local_1048 + 1);
  memset(local_1848.InlineData + iVar12,0,0x800);
  TArray<__int64,TFixedAllocator<256>_>::SetNum(&local_1040,0x100,No);
  TArray<__int64,TFixedAllocator<256>_>::SetNum(&local_838,0x100,No);
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) == 0) &&
     (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) == 0)) {
    bVar10 = false;
    bVar7 = false;
  }
  else {
    bVar10 = true;
    bVar7 = true;
    if (local_1858[0] < 0x100) {
      UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
                (1,1,0x100 - local_1858[0],&local_1958,local_1858,local_1858 + 1);
    }
    else if (0x100 < local_1858[0]) {
      iVar12 = local_1858[0] + -0x100;
      if (iVar12 < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      else if (iVar12 == 0) goto LAB_149a317e9;
      iVar13 = (local_1858[0] - iVar12) + -0x100;
      if (iVar13 != 0) {
        memmove(local_1858,(void *)((longlong)local_1858 + (longlong)iVar12),(longlong)iVar13);
      }
      local_1858[0] = local_1858[0] - iVar12;
    }
  }
LAB_149a317e9:
  iVar12 = (int)(iVar11 + 0xff + (iVar11 + 0xff >> 0x1f & 0xffU)) >> 8;
  local_19ec = 0;
  if (0 < iVar12) {
    local_19f0 = 0;
    do {
      local_1998 = &local_1848;
      iVar13 = 0x100;
      if (iVar11 < 0x100) {
        iVar13 = iVar11;
      }
      iStack_1990 = iVar13;
      if ((iVar13 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      local_19b8 = &local_1040;
      iStack_19b0 = iVar13;
      if ((iVar13 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      local_19a8 = &local_838;
      iStack_19a0 = iVar13;
      if ((iVar13 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (bVar10) {
        memset(&local_1958,0,(longlong)local_1858[0]);
        local_19c8 = *(undefined8 *)((longlong)this + 0x38);
        local_19c0 = &local_1958;
        local_19d0 = iVar13;
        local_19cc = local_19f0;
        ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<__int64>'::
        __l11::<lambda_1>::operator()
                  (&local_19d0,*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18),
                   *(UPCGSpatialData **)(*(longlong *)((longlong)this + 8) + 0x20));
        pUVar4 = *(UPCGBasePointData **)(*(longlong *)((longlong)this + 0x10) + 0x18);
        if (*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18) != pUVar4) {
          ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<__int64>'::
          __l11::<lambda_1>::operator()
                    (&local_19d0,pUVar4,
                     *(UPCGSpatialData **)(*(longlong *)((longlong)this + 0x10) + 0x20));
        }
      }
      else {
        local_19c8 = *(undefined8 *)((longlong)this + 0x38);
        local_19c0 = &local_1958;
        local_19d0 = iVar13;
        local_19cc = local_19f0;
      }
      local_1988._12_4_ = uStack_198c;
      local_1988.ArrayNum = iStack_1990;
      local_1988.DataPtr = (long64 *)local_1998;
      bVar8 = IPCGAttributeAccessor::GetRange<__int64>
                        ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18),
                         &local_1988,local_19f0,
                         (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20),
                         StrictType);
      if (!bVar8) {
        return false;
      }
      local_1978._12_4_ = uStack_19ac;
      local_1978.ArrayNum = iStack_19b0;
      local_1978.DataPtr = (long64 *)local_19b8;
      bVar8 = IPCGAttributeAccessor::GetRange<__int64>
                        ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_1978,
                         local_19f0,
                         (IPCGAttributeAccessorKeys *)(*(undefined8 **)((longlong)this + 8))[1],
                         AllowBroadcastAndConstructible);
      if (!bVar8) {
        return false;
      }
      this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10);
      if (this_00 != (IPCGAttributeAccessor *)0x0) {
        local_1968._12_4_ = uStack_199c;
        local_1968.ArrayNum = iStack_19a0;
        local_1968.DataPtr = (long64 *)local_19a8;
        bVar8 = IPCGAttributeAccessor::GetRange<__int64>
                          (this_00,&local_1968,local_19f0,
                           (IPCGAttributeAccessorKeys *)(*(undefined8 **)((longlong)this + 0x10))[1]
                           ,AllowBroadcastAndConstructible);
        if (!bVar8) {
          return false;
        }
      }
      if ((iVar13 != 0) &&
         (((iVar16 = iVar13 + -1 + local_19f0, iVar16 < 0 ||
           (*(int *)(*(longlong *)((longlong)this + 0x38) + 0x2020) <= iVar16)) &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Range == 0 || OperationData.FilterBitArray.IsValidIndex(StartIndex + Range - 1)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                              ,0x2e6,L""), bVar8)))) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      uVar22 = 0;
      if (0 < iVar13) {
        lVar21 = 0;
        local_19d8 = local_1958.InlineData;
        lVar20 = 0;
        iVar16 = local_19f0;
        do {
          if (bVar7) {
            uVar18 = 0;
            if ((int)uVar22 < local_1858[0]) {
              uVar18 = ~uVar22 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (local_19d8->Pad[0] == '\0') goto LAB_149a31b58;
            lVar5 = *(longlong *)((longlong)this + 0x38);
            if (((iVar16 < 0) || (*(int *)(lVar5 + 0x2020) <= (int)(local_19f0 + uVar22))) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            iVar17 = local_19f0 + uVar22;
            lVar19 = lVar5 + 0x18;
            if (*(longlong *)(lVar5 + 0x2018) != 0) {
              lVar19 = *(longlong *)(lVar5 + 0x2018);
            }
            iVar14 = iVar17;
            if (iVar17 < 0) {
              iVar14 = iVar17 + 0x1f;
            }
            puVar1 = (uint *)(lVar19 + (longlong)(iVar14 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar17 & 0x1f);
          }
          else {
LAB_149a31b58:
            uVar18 = ~uVar22 >> 0x1f;
            cVar2 = **(char **)this;
            if (cVar2 == '\x06') {
              cVar2 = *(char *)**(undefined8 **)((longlong)this + 0x30);
              cVar3 = **(char **)((longlong)this + 0x28);
              uVar15 = 0;
              if ((int)uVar22 < local_838.ArrayNum) {
                uVar15 = uVar18;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              uVar15 = 0;
              if ((int)uVar22 < local_1040.ArrayNum) {
                uVar15 = uVar18;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              uVar15 = 0;
              if ((int)uVar22 < local_1048[0]) {
                uVar15 = uVar18;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              lVar5 = *(longlong *)(local_1040.AllocatorInstance.InlineData[0].Pad + lVar20);
              lVar19 = *(longlong *)(local_1848.InlineData[0].Pad + lVar20);
              if (cVar3 == '\0') {
                bVar10 = lVar5 < lVar19;
              }
              else {
                bVar10 = lVar5 <= lVar19;
              }
              if (bVar10) {
                lVar5 = *(longlong *)local_838.AllocatorInstance.InlineData[lVar21].Pad;
                if (cVar2 == '\0') {
                  bVar10 = lVar19 < lVar5;
                }
                else {
                  bVar10 = lVar19 <= lVar5;
                }
                if (bVar10) {
                  bVar10 = true;
                  goto LAB_149a31dc6;
                }
              }
LAB_149a31d70:
              bVar10 = false;
            }
            else {
              uVar15 = 0;
              if ((int)uVar22 < local_1040.ArrayNum) {
                uVar15 = uVar18;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              uVar15 = 0;
              if ((int)uVar22 < local_1048[0]) {
                uVar15 = uVar18;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              if (cVar2 == '\x04') {
                bVar10 = *(longlong *)(local_1848.InlineData[0].Pad + lVar20) ==
                         *(longlong *)local_1040.AllocatorInstance.InlineData[lVar21].Pad;
              }
              else if (cVar2 == '\x05') {
                bVar10 = *(longlong *)(local_1848.InlineData[0].Pad + lVar20) !=
                         *(longlong *)local_1040.AllocatorInstance.InlineData[lVar21].Pad;
              }
              else if (cVar2 == '\0') {
                bVar10 = *(longlong *)local_1040.AllocatorInstance.InlineData[lVar21].Pad <
                         *(longlong *)(local_1848.InlineData[0].Pad + lVar20);
              }
              else if (cVar2 == '\x01') {
                bVar10 = *(longlong *)local_1040.AllocatorInstance.InlineData[lVar21].Pad <=
                         *(longlong *)(local_1848.InlineData[0].Pad + lVar20);
              }
              else if (cVar2 == '\x02') {
                bVar10 = *(longlong *)(local_1848.InlineData[0].Pad + lVar20) <
                         *(longlong *)local_1040.AllocatorInstance.InlineData[lVar21].Pad;
              }
              else {
                if (cVar2 != '\x03') goto LAB_149a31d70;
                bVar10 = *(longlong *)(local_1848.InlineData[0].Pad + lVar20) <=
                         *(longlong *)local_1040.AllocatorInstance.InlineData[lVar21].Pad;
              }
            }
LAB_149a31dc6:
            lVar5 = *(longlong *)((longlong)this + 0x38);
            iVar17 = local_19f0 + uVar22;
            if (((iVar17 < 0) || (*(int *)(lVar5 + 0x2020) <= iVar17)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            lVar19 = lVar5 + 0x18;
            if (*(longlong *)(lVar5 + 0x2018) != 0) {
              lVar19 = *(longlong *)(lVar5 + 0x2018);
            }
            iVar14 = iVar17;
            if (iVar17 < 0) {
              iVar14 = iVar17 + 0x1f;
            }
            puVar1 = (uint *)(lVar19 + (longlong)(iVar14 >> 5) * 4);
            uVar18 = 1 << ((byte)iVar17 & 0x1f);
            if (bVar10) {
              *puVar1 = *puVar1 | uVar18;
            }
            else {
              *puVar1 = ~uVar18 & *puVar1;
            }
          }
          local_19d8 = local_19d8 + 1;
          uVar22 = uVar22 + 1;
          lVar21 = lVar21 + 1;
          lVar20 = lVar20 + 8;
          iVar16 = iVar16 + 1;
          bVar10 = bVar7;
        } while ((int)uVar22 < iVar13);
      }
      local_19f0 = local_19f0 + 0x100;
      local_19ec = local_19ec + 1;
      iVar11 = iVar11 + -0x100;
    } while (local_19ec < iVar12);
  }
  return true;
}

// operator()<bool> @ 149a32960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<bool>
          (void *this,bool param_1)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  uchar uVar4;
  UPCGBasePointData *pUVar5;
  IPCGAttributeAccessor *this_00;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined7 in_register_00000011;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  undefined1 auStackY_548 [32];
  int local_500;
  int local_4f0;
  int local_4ec;
  undefined8 local_4e8;
  ForElementType<bool> *local_4e0;
  ForElementType<bool> *local_4d8;
  int iStack_4d0;
  undefined4 uStack_4cc;
  ForElementType<bool> *local_4c8;
  int iStack_4c0;
  undefined4 uStack_4bc;
  ForElementType<bool> *local_4b8;
  int iStack_4b0;
  undefined4 uStack_4ac;
  TArrayView<bool,int> local_4a8;
  TArrayView<bool,int> local_498;
  TArrayView<bool,int> local_488;
  ForElementType<bool> local_478;
  int local_378 [4];
  ForElementType<bool> local_368;
  int local_268 [4];
  ForElementType<bool> local_258;
  int local_158 [4];
  ForElementType<bool> local_148;
  int local_48 [4];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_548;
  iVar12 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))
                     ((longlong *)**(undefined8 **)((longlong)this + 0x20),
                      CONCAT71(in_register_00000011,param_1));
  if (iVar12 < 1) {
    return false;
  }
  local_48[0] = 0;
  local_48[1] = 0x100;
  local_378[0] = 0;
  local_378[1] = 0x100;
  local_158[0] = 0;
  local_158[1] = 0x100;
  local_268[0] = 0;
  local_268[1] = 0x100;
  iVar13 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
                     (1,1,0x100,&local_148,local_48,local_48 + 1);
  memset(local_148.InlineData + iVar13,0,0x100);
  if (local_378[0] < 0x100) {
    iVar21 = 0x100 - local_378[0];
    iVar13 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
                       (1,1,iVar21,&local_478,local_378,local_378 + 1);
    memset(local_478.InlineData + iVar13,0,(longlong)iVar21);
  }
  else if (0x100 < local_378[0]) {
    iVar13 = local_378[0] + -0x100;
    if (iVar13 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
    }
    else if (iVar13 == 0) goto LAB_149a32b33;
    iVar21 = (local_378[0] - iVar13) + -0x100;
    if (iVar21 != 0) {
      memmove(local_378,(void *)((longlong)local_378 + (longlong)iVar13),(longlong)iVar21);
    }
    local_378[0] = local_378[0] - iVar13;
  }
LAB_149a32b33:
  if (local_158[0] < 0x100) {
    iVar21 = 0x100 - local_158[0];
    iVar13 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
                       (1,1,iVar21,&local_258,local_158,local_158 + 1);
    memset(local_258.InlineData + iVar13,0,(longlong)iVar21);
  }
  else if (0x100 < local_158[0]) {
    iVar13 = local_158[0] + -0x100;
    if (iVar13 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
    }
    else if (iVar13 == 0) goto LAB_149a32c23;
    iVar21 = (local_158[0] - iVar13) + -0x100;
    if (iVar21 != 0) {
      memmove(local_158,(void *)((longlong)local_158 + (longlong)iVar13),(longlong)iVar21);
    }
    local_158[0] = local_158[0] - iVar13;
  }
LAB_149a32c23:
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) == 0) &&
     (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) == 0)) {
    bVar11 = false;
    bVar8 = false;
  }
  else {
    bVar11 = true;
    bVar8 = true;
    if (local_268[0] < 0x100) {
      UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
                (1,1,0x100 - local_268[0],&local_368,local_268,local_268 + 1);
    }
    else if (0x100 < local_268[0]) {
      iVar13 = local_268[0] + -0x100;
      if (iVar13 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
      }
      else if (iVar13 == 0) goto LAB_149a32d27;
      iVar21 = (local_268[0] - iVar13) + -0x100;
      if (iVar21 != 0) {
        memmove(local_268,(void *)((longlong)local_268 + (longlong)iVar13),(longlong)iVar21);
      }
      local_268[0] = local_268[0] - iVar13;
    }
  }
LAB_149a32d27:
  iVar13 = (int)((iVar12 + 0xff >> 0x1f & 0xffU) + iVar12 + 0xff) >> 8;
  local_500 = 0;
  if (0 < iVar13) {
    do {
      iVar22 = local_500 * 0x100;
      iVar14 = iVar12 + local_500 * -0x100;
      iVar21 = 0x100;
      if (iVar14 < 0x100) {
        iVar21 = iVar14;
      }
      local_4b8 = &local_148;
      iStack_4b0 = iVar21;
      if ((iVar21 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      local_4d8 = &local_478;
      iStack_4d0 = iVar21;
      if ((iVar21 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      local_4c8 = &local_258;
      iStack_4c0 = iVar21;
      if ((iVar21 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      if (bVar11) {
        memset(&local_368,0,(longlong)local_268[0]);
        local_4e8 = *(undefined8 *)((longlong)this + 0x38);
        local_4e0 = &local_368;
        local_4f0 = iVar21;
        local_4ec = iVar22;
        ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<bool>'::__l11
        ::<lambda_1>::operator()
                  (&local_4f0,*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18),
                   *(UPCGSpatialData **)(*(longlong *)((longlong)this + 8) + 0x20));
        pUVar5 = *(UPCGBasePointData **)(*(longlong *)((longlong)this + 0x10) + 0x18);
        if (*(UPCGBasePointData **)(*(longlong *)((longlong)this + 8) + 0x18) != pUVar5) {
          ``FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::operator()<bool>'::
          __l11::<lambda_1>::operator()
                    (&local_4f0,pUVar5,
                     *(UPCGSpatialData **)(*(longlong *)((longlong)this + 0x10) + 0x20));
        }
      }
      else {
        local_4e8 = *(undefined8 *)((longlong)this + 0x38);
        local_4e0 = &local_368;
        local_4f0 = iVar21;
        local_4ec = iVar22;
      }
      local_4a8._12_4_ = uStack_4ac;
      local_4a8.ArrayNum = iStack_4b0;
      local_4a8.DataPtr = (bool *)local_4b8;
      bVar9 = IPCGAttributeAccessor::GetRange<bool>
                        ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18),
                         &local_4a8,iVar22,
                         (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20),
                         StrictType);
      if (!bVar9) {
        return false;
      }
      local_498._12_4_ = uStack_4cc;
      local_498.ArrayNum = iStack_4d0;
      local_498.DataPtr = (bool *)local_4d8;
      bVar9 = IPCGAttributeAccessor::GetRange<bool>
                        ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_498,
                         iVar22,(IPCGAttributeAccessorKeys *)
                                (*(undefined8 **)((longlong)this + 8))[1],
                         AllowBroadcastAndConstructible);
      if (!bVar9) {
        return false;
      }
      this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10);
      if (this_00 != (IPCGAttributeAccessor *)0x0) {
        local_488._12_4_ = uStack_4bc;
        local_488.ArrayNum = iStack_4c0;
        local_488.DataPtr = (bool *)local_4c8;
        bVar9 = IPCGAttributeAccessor::GetRange<bool>
                          (this_00,&local_488,iVar22,
                           (IPCGAttributeAccessorKeys *)(*(undefined8 **)((longlong)this + 0x10))[1]
                           ,AllowBroadcastAndConstructible);
        if (!bVar9) {
          return false;
        }
      }
      if ((iVar21 != 0) &&
         (((iVar14 = iVar22 + -1 + iVar21, iVar14 < 0 ||
           (*(int *)(*(longlong *)((longlong)this + 0x38) + 0x2020) <= iVar14)) &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Range == 0 || OperationData.FilterBitArray.IsValidIndex(StartIndex + Range - 1)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                              ,0x2e6,L""), bVar9)))) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      uVar23 = 0;
      if (0 < iVar21) {
        lVar20 = 0;
        iVar14 = iVar22;
        do {
          if (bVar11) {
            uVar18 = 0;
            if ((int)uVar23 < local_268[0]) {
              uVar18 = ~uVar23 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            if (local_368.InlineData[lVar20].Pad[0] == '\0') goto LAB_149a330ac;
            lVar6 = *(longlong *)((longlong)this + 0x38);
            if (((iVar14 < 0) || (*(int *)(lVar6 + 0x2020) <= (int)(uVar23 + iVar22))) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            iVar17 = uVar23 + iVar22;
            lVar19 = lVar6 + 0x18;
            if (*(longlong *)(lVar6 + 0x2018) != 0) {
              lVar19 = *(longlong *)(lVar6 + 0x2018);
            }
            iVar15 = iVar17;
            if (iVar17 < 0) {
              iVar15 = iVar17 + 0x1f;
            }
            puVar1 = (uint *)(lVar19 + (longlong)(iVar15 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar17 & 0x1f);
          }
          else {
LAB_149a330ac:
            uVar18 = ~uVar23 >> 0x1f;
            cVar2 = **(char **)this;
            if (cVar2 == '\x06') {
              cVar2 = *(char *)**(undefined8 **)((longlong)this + 0x30);
              cVar3 = **(char **)((longlong)this + 0x28);
              uVar16 = 0;
              if ((int)uVar23 < local_158[0]) {
                uVar16 = uVar18;
              }
              if ((uVar16 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              uVar16 = 0;
              if ((int)uVar23 < local_378[0]) {
                uVar16 = uVar18;
              }
              if ((uVar16 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              uVar16 = 0;
              if ((int)uVar23 < local_48[0]) {
                uVar16 = uVar18;
              }
              if ((uVar16 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              uVar4 = local_148.InlineData[lVar20].Pad[0];
              if (cVar3 == '\0') {
                if ((uVar4 == '\0') || (local_478.InlineData[lVar20].Pad[0] != '\0'))
                goto LAB_149a331c7;
                bVar11 = true;
              }
              else if ((uVar4 == '\0') && (local_478.InlineData[lVar20].Pad[0] != '\0')) {
LAB_149a331c7:
                bVar11 = false;
              }
              else {
                bVar11 = true;
              }
              if (!bVar11) goto LAB_149a331ff;
              if (cVar2 == '\0') {
                if ((uVar4 != '\0') || (local_258.InlineData[lVar20].Pad[0] == '\0'))
                goto LAB_149a331f5;
                bVar11 = true;
              }
              else if ((uVar4 == '\0') || (local_258.InlineData[lVar20].Pad[0] != '\0')) {
                bVar11 = true;
              }
              else {
LAB_149a331f5:
                bVar11 = false;
              }
              if (bVar11) {
LAB_149a333d0:
                bVar11 = true;
              }
              else {
LAB_149a331ff:
                bVar11 = false;
              }
            }
            else {
              uVar16 = 0;
              if ((int)uVar23 < local_378[0]) {
                uVar16 = uVar18;
              }
              if ((uVar16 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              uVar16 = 0;
              if ((int)uVar23 < local_48[0]) {
                uVar16 = uVar18;
              }
              if ((uVar16 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              if (cVar2 == '\x04') {
                bVar11 = local_148.InlineData[lVar20].Pad[0] == local_478.InlineData[lVar20].Pad[0];
              }
              else {
                if (cVar2 != '\x05') {
                  if (cVar2 == '\0') {
                    if ((local_148.InlineData[lVar20].Pad[0] != '\0') &&
                       (local_478.InlineData[lVar20].Pad[0] == '\0')) goto LAB_149a333d0;
                  }
                  else if (cVar2 == '\x01') {
                    if (local_148.InlineData[lVar20].Pad[0] != '\0') goto LAB_149a333d0;
                    if (local_478.InlineData[lVar20].Pad[0] == '\0') {
                      bVar11 = true;
                      goto LAB_149a33201;
                    }
                  }
                  else if (cVar2 == '\x02') {
                    if ((local_148.InlineData[lVar20].Pad[0] == '\0') &&
                       (local_478.InlineData[lVar20].Pad[0] != '\0')) {
                      bVar11 = true;
                      goto LAB_149a33201;
                    }
                  }
                  else if (cVar2 == '\x03') {
                    if (local_148.InlineData[lVar20].Pad[0] == '\0') goto LAB_149a333d0;
                    if (local_478.InlineData[lVar20].Pad[0] != '\0') {
                      bVar11 = true;
                      goto LAB_149a33201;
                    }
                  }
                  goto LAB_149a331ff;
                }
                bVar11 = local_148.InlineData[lVar20].Pad[0] != local_478.InlineData[lVar20].Pad[0];
              }
            }
LAB_149a33201:
            lVar6 = *(longlong *)((longlong)this + 0x38);
            iVar17 = uVar23 + iVar22;
            if (((iVar17 < 0) || (*(int *)(lVar6 + 0x2020) <= iVar17)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            lVar19 = lVar6 + 0x18;
            if (*(longlong *)(lVar6 + 0x2018) != 0) {
              lVar19 = *(longlong *)(lVar6 + 0x2018);
            }
            iVar15 = iVar17;
            if (iVar17 < 0) {
              iVar15 = iVar17 + 0x1f;
            }
            puVar1 = (uint *)(lVar19 + (longlong)(iVar15 >> 5) * 4);
            uVar16 = 1 << ((byte)iVar17 & 0x1f);
            uVar18 = *puVar1;
            if (bVar11) {
              uVar16 = uVar16 | uVar18;
            }
            else {
              uVar16 = ~uVar16 & uVar18;
            }
            *puVar1 = uVar16;
            bVar11 = bVar8;
          }
          uVar23 = uVar23 + 1;
          lVar20 = lVar20 + 1;
          iVar14 = iVar14 + 1;
        } while ((int)uVar23 < iVar21);
      }
      local_500 = local_500 + 1;
    } while (local_500 < iVar13);
  }
  return true;
}

// operator() @ 149add500

void __thiscall
`FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPCGTaggedData *pFVar6;
  
  pFVar2 = *(ForAnyElementType **)this;
  pFVar6 = (FPCGTaggedData *)((longlong)this + 8);
  if (((FPCGTaggedData *)pFVar2->Data <= pFVar6) &&
     (pFVar6 < (FPCGTaggedData *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  pFVar6 = FPCGTaggedData::FPCGTaggedData
                     ((FPCGTaggedData *)(pFVar2->Data + (longlong)iVar5 * 0x78),pFVar6);
  pFVar6->Pin = PCGPinConstants::DefaultInFilterLabel;
  FPCGDataPtrWrapper::operator=(&pFVar6->Data,*(UPCGData **)((longlong)this + 0x80));
  return;
}

// DoFiltering @ 149afde60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000149afff7f) */
/* WARNING: Removing unreachable block (ram,0x000149afff95) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGAttributeFilterElementBase::DoFiltering
          (FPCGAttributeFilterElementBase *this,FPCGContext *param_1,
          EPCGAttributeFilterOperator param_2,FPCGAttributePropertyInputSelector *param_3,
          bool param_4,bool param_5,bool param_6,FPCGAttributeFilterThresholdSettings *param_7,
          FPCGAttributeFilterThresholdSettings *param_8)

{
  int *piVar1;
  short sVar2;
  uint uVar3;
  TObjectPtr<UPCGMetadata>_u_0 TVar4;
  UPCGMetadata *pUVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  FPCGAttributeFilterThresholdSettings *pFVar22;
  TBitArray<TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_> *pTVar23;
  FPCGDataCollection *pFVar24;
  bool bVar25;
  undefined1 uVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  int iVar30;
  undefined4 uVar31;
  uint uVar32;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar33;
  UClass *pUVar34;
  TObjectPtr<UPCGData_const_>_u_0 this_00;
  long64 lVar35;
  UPCGBasePointData *pUVar36;
  UPCGBasePointData *this_01;
  UPCGMetadata *pUVar37;
  ForElementType<__int64> FVar38;
  FPCGTaggedData *pFVar39;
  FText *pFVar40;
  FName FVar41;
  FText *pFVar42;
  FTextFormat *pFVar43;
  FPCGTaggedData *pFVar44;
  FString *pFVar45;
  ulonglong uVar46;
  ForElementType<unsigned_int> FVar47;
  ForAnyElementType FVar48;
  TRefCountPtr<ITextData> TVar49;
  uint uVar50;
  wchar_t *pwVar51;
  uint uVar52;
  wchar_t *pwVar53;
  uint uVar54;
  longlong lVar55;
  FPCGContext *pFVar56;
  FName *pFVar57;
  TObjectPtr<UPCGMetadata>_u_0 TVar58;
  ForElementType<__int64> FVar59;
  FPCGDataCollection *pFVar60;
  bool bVar61;
  bool bVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined1 auStackY_3e38 [32];
  EPCGAttributeFilterOperator local_3de4 [4];
  FPCGTaggedData *local_3de0;
  FPCGContext *local_3dd8;
  undefined1 local_3dd0 [24];
  FPCGAttributeFilterThresholdSettings *local_3db8;
  int local_3db0;
  int local_3dac;
  uint local_3da8;
  TConstSetBitIterator<TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_> local_3da0;
  longlong local_3d80;
  longlong local_3d78;
  UPCGBasePointData *local_3d70;
  int local_3d68;
  FPCGAttributeFilterThresholdSettings *local_3d60;
  UPCGBasePointData *local_3d58;
  FPCGTaggedData *local_3d50;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_3d48;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_3d38;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_3d28;
  undefined8 local_3d18;
  FPCGTaggedData *local_3d10;
  EPCGAttributeFilterOperator *local_3d08;
  ThresholdInfo *pTStack_3d00;
  ThresholdInfo *local_3cf8;
  undefined1 *puStack_3cf0;
  undefined1 *local_3ce8;
  FPCGAttributeFilterThresholdSettings *pFStack_3ce0;
  undefined1 local_3cd8 [16];
  FPCGAttributePropertySelector local_3cc8;
  ThresholdInfo local_3c88;
  FPCGTaggedData *local_3c60;
  FPCGAttributePropertyInputSelector *local_3c58;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_3c50;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_3c40;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_3c30;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_3c20;
  FString local_3c10;
  int local_3c00;
  FSoftObjectPath local_3bf8;
  FSoftClassPath local_3bd8;
  ThresholdInfo local_3bb8;
  TArrayView<__int64_const_,int> local_3b90;
  TArrayView<__int64_const_,int> local_3b80;
  EPCGAttributeFilterOperator *local_3b68;
  ThresholdInfo *pTStack_3b60;
  ThresholdInfo *local_3b58;
  undefined1 *puStack_3b50;
  undefined1 *local_3b48;
  FPCGAttributeFilterThresholdSettings *pFStack_3b40;
  FPCGAttributeFilterThresholdSettings **local_3b38;
  TObjectPtr<UPCGData_const_>_u_0 *pTStack_3b30;
  FString local_3b28;
  FString local_3b18;
  FText local_3b08;
  FText local_3af8;
  FString local_3ae8;
  FString local_3ad8;
  FText local_3ac8;
  undefined8 local_3ab8;
  undefined8 uStack_3ab0;
  undefined8 local_3aa8;
  TVector<double>_u_0 local_3a98;
  undefined8 local_3a78;
  undefined8 uStack_3a70;
  undefined8 local_3a68;
  TRotator<double> local_3a58;
  FString local_3a30;
  FString local_3a20;
  FText local_3a10;
  TVector2<double>_u_0 local_39f8;
  FString local_39e8;
  FString local_39d8;
  FText local_39c8;
  FPCGInitializeFromDataParams local_39b8;
  TVector4<double>_u_0 local_3978;
  TQuat<double> local_3958;
  TTransform<double> local_3938;
  FString local_38d8;
  FString local_38c8;
  FString local_38b8;
  undefined8 local_38a8;
  undefined8 uStack_38a0;
  double local_3898;
  double dStack_3890;
  undefined8 local_3888;
  undefined8 uStack_3880;
  undefined8 local_3878;
  undefined8 uStack_3870;
  FString local_3868;
  FString local_3858;
  undefined8 local_3848;
  undefined8 uStack_3840;
  FText local_3838;
  FTextFormat local_3828;
  FString local_3818;
  undefined1 local_3808 [16];
  double local_37f8;
  double dStack_37f0;
  double local_37e8;
  double dStack_37e0;
  double local_37d8;
  double dStack_37d0;
  double local_37c8;
  double dStack_37c0;
  undefined1 local_37b8 [16];
  TObjectPtr<UPCGData_const_>_u_0 local_37a8;
  undefined8 uStack_37a0;
  undefined8 local_3798;
  TBitArray<TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_> local_3790;
  TObjectPtr<UPCGData_const_>_u_0 local_1780;
  undefined8 local_1778;
  undefined8 uStack_1770;
  char local_1768;
  undefined1 local_1758 [24];
  undefined8 uStack_1740;
  void *local_1738;
  undefined4 local_1730;
  uint local_172c;
  undefined4 local_1728;
  undefined4 local_1724;
  ForElementType<FSetElementId> local_1720;
  ulonglong local_1710;
  undefined1 local_1708 [24];
  undefined8 uStack_16f0;
  void *local_16e8;
  undefined4 local_16e0;
  uint local_16dc;
  undefined4 local_16d8;
  undefined4 local_16d4;
  ForElementType<FSetElementId> local_16d0;
  ulonglong local_16c0;
  FPCGDataCollection *local_16b8;
  FPCGTaggedData local_16b0;
  TObjectPtr<UPCGData_const_>_u_0 local_1638;
  FPCGDataCollection *local_1628;
  FPCGTaggedData local_1620;
  TObjectPtr<UPCGData_const_>_u_0 local_15a8;
  TVector<double>_u_0 local_1598;
  undefined8 uStack_1580;
  undefined8 local_1578;
  undefined8 uStack_1570;
  undefined1 local_1568;
  undefined4 local_1567;
  undefined2 local_1563;
  undefined1 local_1561;
  ForElementType<__int64> local_1560;
  int local_d58;
  int local_d54;
  ForElementType<__int64> local_d50;
  int local_548;
  int local_544 [3];
  FConstPCGPointValueRanges local_538;
  FPCGPointValueRanges local_3a8;
  FPCGPointValueRanges local_218;
  ulonglong local_88;
  undefined8 uStack_40;
  
  uStack_40 = 0x149afde82;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_3e38;
  local_3d60 = param_7;
  local_3db8 = param_8;
  local_3da8 = 0;
  bVar62 = -1 < CpuChannel->Enabled;
  local_3dd8 = param_1;
  local_3c58 = param_3;
  if (bVar62) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId480,"FPCGAttributeFilterElementBase::DoFiltering",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
               ,0x1e0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId480);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                          ,0x1e1,L""), bVar25)) {
    pcVar6 = (code *)swi(3);
    uVar26 = (*pcVar6)();
    return (bool)uVar26;
  }
  local_3798 = 0;
  local_37a8.DebugPtr = (UPCGData *)0x0;
  uStack_37a0 = 0;
  local_1778 = 0;
  uStack_1770 = 0;
  local_3790.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_3790.NumBits = 0;
  local_3790.MaxBits = 0x10000;
  local_1780.DebugPtr = (UPCGData *)0x0;
  local_1768 = '\0';
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_3d48,&PCGPinConstants::DefaultInputLabel);
  bVar25 = local_3db8 == (FPCGAttributeFilterThresholdSettings *)0x0;
  if (bVar25) {
    pTVar33 = &local_3c50;
    pFVar57 = &PCGAttributeFilterConstants::FilterLabel;
  }
  else {
    pTVar33 = &local_3c40;
    pFVar57 = &PCGAttributeFilterConstants::FilterMinLabel;
  }
  local_3dd0._8_8_ = &param_1->OutputData;
  pTVar33 = FPCGDataCollection::GetInputsByPin(&param_1->InputData,pTVar33,pFVar57);
  local_3d10 = (FPCGTaggedData *)(pTVar33->AllocatorInstance).Data;
  (pTVar33->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_3dac = pTVar33->ArrayNum;
  pTVar33->ArrayNum = 0;
  pTVar33->ArrayMax = 0;
  if ((bVar25) &&
     (DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_3c50.AllocatorInstance.Data,local_3c50.ArrayNum),
     (FPCGTaggedData *)local_3c50.AllocatorInstance.Data != (FPCGTaggedData *)0x0)) {
    FMemory::Free(local_3c50.AllocatorInstance.Data);
  }
  if ((!bVar25) &&
     (DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_3c40.AllocatorInstance.Data,local_3c40.ArrayNum),
     (FPCGTaggedData *)local_3c40.AllocatorInstance.Data != (FPCGTaggedData *)0x0)) {
    FMemory::Free(local_3c40.AllocatorInstance.Data);
  }
  bVar25 = local_3db8 == (FPCGAttributeFilterThresholdSettings *)0x0;
  if (bVar25) {
    local_3c30.ArrayNum = 0;
    pTVar33 = &local_3c30;
    local_3d50 = (FPCGTaggedData *)0x0;
  }
  else {
    pTVar33 = FPCGDataCollection::GetInputsByPin
                        (&param_1->InputData,&local_3c20,
                         &PCGAttributeFilterConstants::FilterMaxLabel);
    local_3d50 = (FPCGTaggedData *)(pTVar33->AllocatorInstance).Data;
  }
  (pTVar33->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_3db0 = pTVar33->ArrayNum;
  pTVar33->ArrayNum = 0;
  pTVar33->ArrayMax = 0;
  if ((bVar25) &&
     (DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_3c30.AllocatorInstance.Data,local_3c30.ArrayNum),
     (FPCGTaggedData *)local_3c30.AllocatorInstance.Data != (FPCGTaggedData *)0x0)) {
    FMemory::Free(local_3c30.AllocatorInstance.Data);
  }
  if ((!bVar25) &&
     (DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_3c20.AllocatorInstance.Data,local_3c20.ArrayNum),
     (FPCGTaggedData *)local_3c20.AllocatorInstance.Data != (FPCGTaggedData *)0x0)) {
    FMemory::Free(local_3c20.AllocatorInstance.Data);
  }
  iVar30 = local_3dac;
  bVar17 = false;
  bVar15 = false;
  bVar14 = false;
  bVar12 = false;
  bVar13 = false;
  bVar10 = false;
  bVar11 = false;
  bVar8 = false;
  bVar9 = false;
  bVar25 = false;
  bVar7 = false;
  local_3de4[0] = param_2;
  if (local_3d48.ArrayNum == 0) goto LAB_149b0003c;
  if ((local_3db8 != (FPCGAttributeFilterThresholdSettings *)0x0) != (param_2 == InRange)) {
    bVar25 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<7266949699779691008>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                        ,0x200,
                        "(SecondThreshold != nullptr) == (InOperation == EPCGAttributeFilterOperator::InRange)"
                       );
    if (bVar25) {
      pcVar6 = (code *)swi(3);
      uVar26 = (*pcVar6)();
      return (bool)uVar26;
    }
    goto LAB_149b0003c;
  }
  local_3d38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c88.bUseInputDataForThreshold = false;
  local_3c88.bUseSpatialQuery = false;
  local_3bb8.bUseInputDataForThreshold = false;
  local_3bb8.bUseSpatialQuery = false;
  local_3d38.ArrayNum = local_3dac;
  local_3c88.ThresholdAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
  local_3c88.ThresholdKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
  local_3c88.ThresholdPointData = (UPCGBasePointData *)0x0;
  local_3c88.ThresholdSpatialData = (UPCGSpatialData *)0x0;
  local_3bb8.ThresholdAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
  local_3bb8.ThresholdKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
  local_3bb8.ThresholdPointData = (UPCGBasePointData *)0x0;
  local_3bb8.ThresholdSpatialData = (UPCGSpatialData *)0x0;
  if (local_3dac == 0) {
    local_3d38.ArrayMax = local_3dac;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,local_3dac,0,&local_3d38.AllocatorInstance,local_3dac,&local_3d38.ArrayMax);
    ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
              (local_3d38.AllocatorInstance.Data,local_3d10,iVar30);
  }
  bVar27 = PCGAttributeFilterHelpers::InitialPrepareThresholdInfo
                     (param_1,&local_3d38,local_3d60,&local_3c88);
  iVar30 = local_3db0;
  pFVar22 = local_3db8;
  if (bVar27) {
    if (local_3db8 != (FPCGAttributeFilterThresholdSettings *)0x0) {
      local_3d28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3d28.ArrayNum = local_3db0;
      if (local_3db0 == 0) {
        local_3d28.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,local_3db0,0,&local_3d28.AllocatorInstance,local_3db0,&local_3d28.ArrayMax
                  );
        ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                  (local_3d28.AllocatorInstance.Data,local_3d50,iVar30);
      }
      bVar27 = PCGAttributeFilterHelpers::InitialPrepareThresholdInfo
                         (param_1,&local_3d28,pFVar22,&local_3bb8);
      if (!bVar27) goto LAB_149afffe4;
    }
    dVar20 = _UNK_15061cbc8;
    dVar19 = ___xmm_3ff00000000000000000000000000000;
    uVar46 = (ulonglong)local_3d48.ArrayNum;
    local_3da8 = local_3d48.ArrayNum;
    local_3c60 = (FPCGTaggedData *)(local_3d48.AllocatorInstance.Data + uVar46 * 0x78);
    FVar48.Data = local_3d48.AllocatorInstance.Data;
    pFVar60 = &param_1->OutputData;
    bVar27 = bVar14;
    bVar16 = bVar15;
    bVar18 = bVar17;
    while( true ) {
      pFVar44 = local_3c60;
      local_3de0 = (FPCGTaggedData *)FVar48.Data;
      if (local_3d48.ArrayNum != (uint)uVar46) {
        local_3de4[1] = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_3de4 + 1);
      }
      if ((FPCGTaggedData *)FVar48.Data == pFVar44) break;
      this_00 = (TObjectPtr<UPCGData_const_>_u_0)
                (((FPCGTaggedData *)FVar48.Data)->Data).Data.field0_0x0.DebugPtr;
      if ((UPCGBasePointData *)this_00.DebugPtr == (UPCGBasePointData *)0x0) {
LAB_149afffd1:
        FVar48.Data = FVar48.Data + 0x78;
        uVar46 = (ulonglong)local_3da8;
      }
      else {
        pUVar34 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
        iVar30 = (int)pUVar34->_padding_;
        if ((*(int *)((this_00.DebugPtr)->_padding_ + 0x38) < iVar30) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((this_00.DebugPtr)->_padding_ + 0x30) + (longlong)iVar30 * 8) !=
            &pUVar34->_padding_)) {
          pUVar34 = Z_Construct_UClass_UPCGParamData_NoRegister();
          iVar30 = (int)pUVar34->_padding_;
          if ((*(int *)((this_00.DebugPtr)->_padding_ + 0x38) < iVar30) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)((this_00.DebugPtr)->_padding_ + 0x30) + (longlong)iVar30 * 8) !=
              &pUVar34->_padding_)) {
            if ((byte)LogPCG._0_1_ < 2) goto LAB_149afffd1;
            pFVar40 = FText::AsLocalizable_Advanced_LocText
                                (&local_3ac8,L"PCGPointFilterElement",L"InvalidInput",
                                 L"Input is not a point data nor an attribute set. Unsupported.");
            FText::ToString(pFVar40);
            if (param_1 != (FPCGContext *)0x0) {
              FPCGContext::GetTaskName(param_1,&local_3ad8);
              bVar18 = true;
              FPCGContext::GetExecutionSourceName(param_1,&local_3ae8);
              bVar7 = bVar25;
              bVar9 = bVar8;
              bVar11 = bVar10;
              bVar13 = bVar12;
              bVar14 = bVar27;
              bVar16 = bVar15;
              bVar17 = bVar18;
            }
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            TVar49.Reference = local_3ac8.TextData.Reference;
            if ((bVar17) &&
               (bVar17 = false, bVar7 = bVar25, bVar9 = bVar8, bVar11 = bVar10, bVar13 = bVar12,
               bVar14 = bVar27, bVar16 = bVar15, bVar18 = bVar17,
               local_3ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_3ad8.Data.AllocatorInstance.Data);
              TVar49.Reference = local_3ac8.TextData.Reference;
            }
LAB_149afffc1:
            FVar48.Data = (FScriptContainerElement *)local_3de0;
            if (TVar49.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*TVar49.Reference + 0x10))();
              FVar48.Data = (FScriptContainerElement *)local_3de0;
            }
            goto LAB_149afffd1;
          }
          local_3c88._16_2_ = local_3c88._16_2_ & 0xff;
          local_3bb8._16_2_ = local_3bb8._16_2_ & 0xff;
          local_1768 = '\0';
        }
        else {
          pUVar34 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
          iVar30 = (int)pUVar34->_padding_;
          if ((*(int *)((this_00.DebugPtr)->_padding_ + 0x38) < iVar30) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)((this_00.DebugPtr)->_padding_ + 0x30) + (longlong)iVar30 * 8) !=
              &pUVar34->_padding_)) {
            if (param_4) {
              local_1568 = 0;
              local_1567 = 0;
              local_1563 = 0;
              local_1561 = 0;
              local_1598._s_0.X = 0.0;
              local_1598._s_0.Y = 0.0;
              local_1598._s_0.Z = 0.0;
              uStack_1580 = 0;
              local_1578 = 0;
              uStack_1570 = 0;
              this_00.DebugPtr =
                   (UPCGData *)
                   UPCGSpatialData::ToBasePointData
                             ((UPCGSpatialData *)this_00.DebugPtr,param_1,
                              (TBox<double> *)&local_1598._s_0);
              if ((UPCGBasePointData *)this_00.DebugPtr != (UPCGBasePointData *)0x0) {
                local_1768 = '\x01';
                goto LAB_149afe4e9;
              }
            }
            if (1 < (byte)LogPCG._0_1_) {
              pFVar40 = FText::AsLocalizable_Advanced_LocText
                                  (&local_3a10,L"PCGPointFilterElement",L"NoPointDataInInput",
                                   L"Unable to get point data from input. Use a conversion node before this node to transform it to points."
                                  );
              FText::ToString(pFVar40);
              if (param_1 != (FPCGContext *)0x0) {
                FPCGContext::GetTaskName(param_1,&local_3a20);
                bVar16 = true;
                bVar27 = true;
                FPCGContext::GetExecutionSourceName(param_1,&local_3a30);
                bVar7 = bVar25;
                bVar9 = bVar8;
                bVar11 = bVar10;
                bVar13 = bVar12;
                bVar14 = bVar27;
                bVar15 = bVar16;
                bVar18 = bVar17;
              }
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if ((bVar27) &&
                 (bVar27 = false, bVar7 = bVar25, bVar9 = bVar8, bVar11 = bVar10, bVar13 = bVar12,
                 bVar14 = bVar27, bVar16 = bVar15, bVar18 = bVar17,
                 local_3a30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_3a30.Data.AllocatorInstance.Data);
              }
              TVar49.Reference = local_3a10.TextData.Reference;
              if ((bVar15) &&
                 (bVar15 = false, bVar7 = bVar25, bVar9 = bVar8, bVar11 = bVar10, bVar13 = bVar12,
                 bVar14 = bVar27, bVar16 = bVar15, bVar18 = bVar17,
                 local_3a20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_3a20.Data.AllocatorInstance.Data);
                TVar49.Reference = local_3a10.TextData.Reference;
              }
              goto LAB_149afffc1;
            }
            goto LAB_149afffd1;
          }
          local_1768 = '\x01';
        }
LAB_149afe4e9:
        local_1628 = pFVar60;
        FPCGTaggedData::FPCGTaggedData(&local_1620,(FPCGTaggedData *)FVar48.Data);
        local_16b8 = pFVar60;
        local_15a8 = this_00;
        FPCGTaggedData::FPCGTaggedData(&local_16b0,(FPCGTaggedData *)FVar48.Data);
        local_1638 = this_00;
        FPCGAttributePropertyInputSelector::CopyAndFixLast
                  (local_3c58,(FPCGAttributePropertyInputSelector *)&local_3cc8,this_00.DebugPtr);
        PCGAttributeAccessorHelpers::CreateConstAccessor
                  ((UPCGData *)local_3dd0,(FPCGAttributePropertySelector *)this_00.DebugPtr,
                   SUB81(&local_3cc8,0));
        PCGAttributeAccessorHelpers::CreateConstKeys
                  ((UPCGData *)(local_3dd0 + 0x10),(FPCGAttributePropertySelector *)this_00.DebugPtr
                  );
        if (((undefined8 *)local_3dd0._0_8_ == (undefined8 *)0x0) ||
           ((longlong *)local_3dd0._16_8_ == (longlong *)0x0)) {
          if ((param_5) && (2 < (byte)LogPCG._0_1_)) {
            FVar41 = FPCGAttributePropertySelector::GetName(&local_3cc8);
            pFVar40 = FText::FromName(&local_3838,(FName *)FVar41);
            pFVar42 = FText::AsLocalizable_Advanced_LocText
                                (&local_3af8,L"PCGPointFilterElement",L"TargetMissingAttribute",
                                 L"Input data doesn\'t have target attribute/property \'{0}\'");
            pFVar43 = FTextFormat::FTextFormat(&local_3828,pFVar42,Default);
            pFVar40 = FText::Format<FText>(&local_3b08,pFVar43,pFVar40);
            FText::ToString(pFVar40);
            if (param_1 != (FPCGContext *)0x0) {
              FPCGContext::GetTaskName(param_1,&local_3b18);
              bVar13 = true;
              bVar10 = true;
              FPCGContext::GetExecutionSourceName(param_1,&local_3b28);
              bVar7 = bVar25;
              bVar9 = bVar8;
              bVar11 = bVar10;
              bVar12 = bVar13;
              bVar14 = bVar27;
              bVar16 = bVar15;
              bVar18 = bVar17;
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (bVar10) {
              bVar10 = false;
              bVar7 = bVar25;
              bVar9 = bVar8;
              bVar11 = bVar10;
              bVar13 = bVar12;
              bVar14 = bVar27;
              bVar16 = bVar15;
              bVar18 = bVar17;
              if (local_3b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3b28.Data.AllocatorInstance.Data);
                bVar11 = false;
              }
            }
            if (bVar12) {
              bVar12 = false;
              bVar7 = bVar25;
              bVar9 = bVar8;
              bVar11 = bVar10;
              bVar13 = bVar12;
              bVar14 = bVar27;
              bVar16 = bVar15;
              bVar18 = bVar17;
              if (local_3b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3b18.Data.AllocatorInstance.Data);
                bVar13 = false;
              }
            }
            if (local_3b08.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_3b08.TextData.Reference + 0x10))();
            }
            FVar48.Data = (FScriptContainerElement *)local_3de0;
            if (local_3af8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_3af8.TextData.Reference + 0x10))();
              FVar48.Data = (FScriptContainerElement *)local_3de0;
            }
          }
          pFVar24 = local_16b8;
          pFVar44 = (FPCGTaggedData *)(local_16b8->TaggedData).AllocatorInstance.Data;
          if (((pFVar44 <= &local_16b0) &&
              (&local_16b0 < pFVar44 + (local_16b8->TaggedData).ArrayMax)) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar29)) {
            pcVar6 = (code *)swi(3);
            uVar26 = (*pcVar6)();
            return (bool)uVar26;
          }
          iVar30 = (pFVar24->TaggedData).ArrayNum;
          piVar1 = &(pFVar24->TaggedData).ArrayMax;
          if (iVar30 == *piVar1) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)pFVar24,piVar1);
          }
          (pFVar24->TaggedData).ArrayNum = iVar30 + 1;
          pFVar44 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((pFVar24->TaggedData).AllocatorInstance.Data +
                               (longlong)iVar30 * 0x78),&local_16b0);
          pFVar44->Pin = PCGPinConstants::DefaultOutFilterLabel;
          FPCGDataPtrWrapper::operator=(&pFVar44->Data,local_1638.DebugPtr);
          if ((longlong *)local_3dd0._16_8_ != (longlong *)0x0) {
            (*(code *)**(undefined8 **)local_3dd0._16_8_)(local_3dd0._16_8_,1);
          }
          if ((undefined8 *)local_3dd0._0_8_ != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)local_3dd0._0_8_)(local_3dd0._0_8_,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_3cc8.ExtraNames.AllocatorInstance.Data,
                     local_3cc8.ExtraNames.ArrayNum);
          if (local_3cc8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3cc8.ExtraNames.AllocatorInstance.Data);
          }
          local_16b0.Tags.HashSize = 0;
          if (local_16b0.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_16b0.Tags.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_16b0.Tags.Elements);
          FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_16b0.Data);
          local_1620.Tags.HashSize = 0;
          if (local_1620.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_1620.Tags.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_1620.Tags.Elements);
          FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_1620.Data);
          uVar46 = (ulonglong)local_3da8;
          FVar48.Data = FVar48.Data + 0x78;
        }
        else {
          sVar2 = *(short *)(local_3dd0._0_8_ + 10);
          bVar29 = (byte)(local_3de4[0] - Substring) < 2;
          if (((byte)(local_3de4[0] - Equal) < 2) || (bVar29)) {
            bVar61 = false;
          }
          else {
            bVar61 = true;
          }
          iVar30 = (**(code **)(*(longlong *)local_3dd0._16_8_ + 0x10))();
          if (iVar30 == 0) {
            `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_1>::operator()
                      (&local_1628);
            if ((longlong *)local_3dd0._16_8_ != (longlong *)0x0) {
              (*(code *)**(undefined8 **)local_3dd0._16_8_)(local_3dd0._16_8_,1);
            }
            if ((undefined8 *)local_3dd0._0_8_ != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)local_3dd0._0_8_)(local_3dd0._0_8_,1);
            }
            DestructItems<FString,int>
                      ((FString *)local_3cc8.ExtraNames.AllocatorInstance.Data,
                       local_3cc8.ExtraNames.ArrayNum);
            if (local_3cc8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3cc8.ExtraNames.AllocatorInstance.Data);
            }
            local_16b0.Tags.HashSize = 0;
            if (local_16b0.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_16b0.Tags.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_16b0.Tags.Elements);
            FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_16b0.Data);
            local_1620.Tags.HashSize = 0;
            if (local_1620.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_1620.Tags.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_1620.Tags.Elements);
            FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_1620.Data);
            FVar48.Data = (FScriptContainerElement *)(local_3de0 + 1);
            uVar46 = (ulonglong)local_3da8;
            pFVar60 = (FPCGDataCollection *)local_3dd0._8_8_;
            param_1 = local_3dd8;
          }
          else {
            bVar28 = PCGAttributeFilterHelpers::PrepareThresholdInfoFromInput
                               (local_3dd8,this_00.DebugPtr,iVar30,local_3d60,&local_3c88,sVar2,
                                bVar61,bVar29,param_5,(ThresholdInfo *)0x0);
            param_1 = local_3dd8;
            if (bVar28) {
              if ((local_3db8 == (FPCGAttributeFilterThresholdSettings *)0x0) ||
                 (bVar29 = PCGAttributeFilterHelpers::PrepareThresholdInfoFromInput
                                     (local_3dd8,this_00.DebugPtr,iVar30,local_3db8,&local_3bb8,
                                      sVar2,bVar61,bVar29,param_5,&local_3c88), bVar29)) {
                local_1780 = this_00;
                if (local_1768 == '\0') {
                  if ((UPCGBasePointData *)this_00.DebugPtr == (UPCGBasePointData *)0x0) {
                    pFVar45 = GetTypeName<UPCGParamData>(&local_3858);
                    if ((pFVar45->Data).ArrayNum == 0) {
                      pwVar53 = L"";
                    }
                    else {
                      pwVar53 = (wchar_t *)(pFVar45->Data).AllocatorInstance.Data;
                    }
                    /* WARNING: Subroutine does not return */
                    CastLogError(L"nullptr",pwVar53);
                  }
                  pUVar34 = Z_Construct_UClass_UPCGParamData_NoRegister();
                  iVar30 = (int)pUVar34->_padding_;
                  if ((*(int *)((this_00.DebugPtr)->_padding_ + 0x38) < iVar30) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)((this_00.DebugPtr)->_padding_ + 0x30) + (longlong)iVar30 * 8)
                      != &pUVar34->_padding_)) {
                    pFVar45 = GetTypeName<UPCGParamData>(&local_38b8);
                    pwVar53 = L"";
                    if ((pFVar45->Data).ArrayNum == 0) {
                      pwVar51 = L"";
                    }
                    else {
                      pwVar51 = (wchar_t *)(pFVar45->Data).AllocatorInstance.Data;
                    }
                    pFVar45 = GetFullNameForCastLogError<UPCGData_const_>
                                        (&local_3868,this_00.DebugPtr);
                    if ((pFVar45->Data).ArrayNum != 0) {
                      pwVar53 = (wchar_t *)(pFVar45->Data).AllocatorInstance.Data;
                    }
                    /* WARNING: Subroutine does not return */
                    CastLogError(pwVar53,pwVar51);
                  }
                  pUVar37 = ((this_00.DebugPtr)->Metadata).field0_0x0.DebugPtr;
                  if (pUVar37 == (UPCGMetadata *)0x0) {
                    iVar30 = 0;
                  }
                  else {
                    lVar35 = UPCGMetadata::GetItemCountForChild(pUVar37);
                    iVar30 = (int)lVar35;
                  }
                }
                else {
                  if ((UPCGBasePointData *)this_00.DebugPtr == (UPCGBasePointData *)0x0) {
                    pFVar45 = GetTypeName<UPCGBasePointData>(&local_38c8);
                    if ((pFVar45->Data).ArrayNum == 0) {
                      pwVar53 = L"";
                    }
                    else {
                      pwVar53 = (wchar_t *)(pFVar45->Data).AllocatorInstance.Data;
                    }
                    /* WARNING: Subroutine does not return */
                    CastLogError(L"nullptr",pwVar53);
                  }
                  pUVar34 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
                  iVar30 = (int)pUVar34->_padding_;
                  if ((*(int *)((this_00.DebugPtr)->_padding_ + 0x38) < iVar30) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)((this_00.DebugPtr)->_padding_ + 0x30) + (longlong)iVar30 * 8)
                      != &pUVar34->_padding_)) {
                    pFVar45 = GetTypeName<UPCGBasePointData>(&local_3818);
                    pwVar53 = L"";
                    if ((pFVar45->Data).ArrayNum == 0) {
                      pwVar51 = L"";
                    }
                    else {
                      pwVar51 = (wchar_t *)(pFVar45->Data).AllocatorInstance.Data;
                    }
                    pFVar45 = GetFullNameForCastLogError<UPCGData_const_>
                                        (&local_38d8,this_00.DebugPtr);
                    if ((pFVar45->Data).ArrayNum != 0) {
                      pwVar53 = (wchar_t *)(pFVar45->Data).AllocatorInstance.Data;
                    }
                    /* WARNING: Subroutine does not return */
                    CastLogError(pwVar53,pwVar51);
                  }
                  local_37a8 = this_00;
                  iVar30 = (**(code **)((this_00.DebugPtr)->_padding_ + 0x488))(this_00.DebugPtr);
                }
                TBitArray<TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_>::
                SetNumUninitialized(&local_3790,iVar30);
                local_3d08 = local_3de4;
                pTStack_3d00 = &local_3c88;
                local_3cf8 = &local_3bb8;
                puStack_3cf0 = local_3dd0;
                local_3ce8 = local_3dd0 + 0x10;
                pFStack_3b40 = local_3d60;
                local_3b38 = &local_3db8;
                pTStack_3b30 = &local_37a8;
                local_3cd8._8_8_ = pTStack_3b30;
                local_3cd8._0_8_ = local_3b38;
                pFStack_3ce0 = local_3d60;
                local_3b68 = local_3d08;
                pTStack_3b60 = pTStack_3d00;
                local_3b58 = local_3cf8;
                puStack_3b50 = puStack_3cf0;
                local_3b48 = local_3ce8;
                switch(*(undefined2 *)(local_3dd0._0_8_ + 10)) {
                case 0:
                  bVar29 = `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
                           operator()<float>(&local_3d08,0.0);
                  break;
                case 1:
                  bVar29 = `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
                           operator()<double>(&local_3d08,0.0);
                  break;
                case 2:
                  bVar29 = `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
                           operator()<int>(&local_3d08,0);
                  break;
                case 3:
                  bVar29 = `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
                           operator()<__int64>(&local_3d08,0);
                  break;
                case 4:
                  local_3848 = 0;
                  uStack_3840 = 0;
                  local_39f8._s_0.X = 0.0;
                  local_39f8._s_0.Y = 0.0;
                  bVar29 = `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
                           operator()<UE::Math::TVector2<double>_>
                                     (&local_3d08,(TVector2<double> *)&local_39f8._s_0);
                  break;
                case 5:
                  local_3a98._s_0.X = 0.0;
                  local_3a98._s_0.Y = 0.0;
                  local_3ab8 = 0;
                  uStack_3ab0 = 0;
                  local_3aa8 = 0;
                  local_3a98._s_0.Z = 0.0;
                  bVar29 = `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
                           operator()<UE::Math::TVector<double>_>
                                     (&local_3d08,(TVector<double> *)&local_3a98._s_0);
                  break;
                case 6:
                  local_3898 = dVar19;
                  dStack_3890 = dVar20;
                  local_38a8 = 0;
                  uStack_38a0 = 0;
                  local_3978._s_0.X = 0.0;
                  local_3978._s_0.Y = 0.0;
                  local_3978._s_0.Z = dVar19;
                  local_3978._s_0.W = dVar20;
                  bVar29 = `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
                           operator()<UE::Math::TVector4<double>_>
                                     (&local_3d08,(TVector4<double> *)&local_3978._s_0);
                  break;
                case 7:
                  local_3888 = 0;
                  uStack_3880 = 0;
                  local_3878 = 0;
                  uStack_3870 = 0;
                  local_3958.X = 0.0;
                  local_3958.Y = 0.0;
                  local_3958.Z = 0.0;
                  local_3958.W = 0.0;
                  bVar29 = `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
                           operator()<UE::Math::TQuat<double>_>(&local_3d08,&local_3958);
                  break;
                case 8:
                  uVar64 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                  uVar65 = (undefined4)
                           ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
                  ;
                  local_3938.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_3938.Rotation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[3];
                  local_3938.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_3938.Translation.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                  local_3938.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_3938.Translation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                  local_3938.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_3938.Scale3D.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[1];
                  uVar31 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                  uVar63 = (undefined4)
                           ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
                  ;
                  local_3808._8_4_ = uVar64;
                  local_3808._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_3808._12_4_ = uVar65;
                  local_37b8._8_4_ = uVar31;
                  local_37b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_37b8._12_4_ = uVar63;
                  local_3938.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar31;
                  local_3938.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_3938.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar63;
                  local_3938.Rotation.XY.m128d_f64[1]._0_4_ = uVar64;
                  local_3938.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_3938.Rotation.XY.m128d_f64[1]._4_4_ = uVar65;
                  local_37f8 = local_3938.Rotation.ZW.m128d_f64[0];
                  dStack_37f0 = local_3938.Rotation.ZW.m128d_f64[1];
                  local_37e8 = local_3938.Translation.XY.m128d_f64[0];
                  dStack_37e0 = local_3938.Translation.XY.m128d_f64[1];
                  local_37d8 = local_3938.Translation.ZW.m128d_f64[0];
                  dStack_37d0 = local_3938.Translation.ZW.m128d_f64[1];
                  local_37c8 = local_3938.Scale3D.XY.m128d_f64[0];
                  dStack_37c0 = local_3938.Scale3D.XY.m128d_f64[1];
                  bVar29 = `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
                           operator()<UE::Math::TTransform<double>_>(&local_3d08,&local_3938);
                  break;
                case 9:
                  local_3c10.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_3c10.Data.ArrayNum = 0;
                  local_3c10.Data.ArrayMax = 0;
                  bVar29 = `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
                           operator()<FString>(&local_3d08,&local_3c10);
                  break;
                case 10:
                  bVar29 = `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
                           operator()<bool>(&local_3d08,false);
                  break;
                case 0xb:
                  local_3a58.Pitch = 0.0;
                  local_3a58.Yaw = 0.0;
                  local_3a78 = 0;
                  uStack_3a70 = 0;
                  local_3a68 = 0;
                  local_3a58.Roll = 0.0;
                  bVar29 = `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
                           operator()<UE::Math::TRotator<double>_>(&local_3d08,&local_3a58);
                  break;
                case 0xc:
                  local_3d18 = 0;
                  bVar29 = `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
                           operator()<FName>(&local_3d08,(FName)0x0);
                  break;
                case 0xd:
                  local_3bf8.AssetPath.PackageName.ComparisonIndex.Value = 0;
                  local_3bf8.AssetPath.PackageName.Number = 0;
                  local_3bf8.AssetPath.AssetName.ComparisonIndex.Value = 0;
                  local_3bf8.AssetPath.AssetName.Number = 0;
                  local_3bf8.SubPathString.Data.AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  local_3bf8.SubPathString.Data.ArrayNum = 0;
                  local_3bf8.SubPathString.Data.ArrayMax = 0;
                  bVar29 = `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
                           operator()<FSoftObjectPath>(&local_3d08,&local_3bf8);
                  break;
                case 0xe:
                  local_3bd8._0_8_ = 0;
                  local_3bd8._8_8_ = 0;
                  local_3bd8._16_8_ = 0;
                  local_3bd8._24_8_ = 0;
                  bVar29 = `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_3>::
                           operator()<FSoftClassPath>(&local_3d08,&local_3bd8);
                  break;
                default:
                  goto switchD_149afea5f_default;
                }
                pUVar36 = (UPCGBasePointData *)0x0;
                if (bVar29 == false) {
switchD_149afea5f_default:
                  if (2 < (byte)LogPCG._0_1_) {
                    pFVar40 = FText::AsLocalizable_Advanced_LocText
                                        (&local_39c8,L"PCGPointFilterElement",
                                         L"TypeCannotBeConverted",
                                         L"Cannot convert threshold type to target type");
                    FText::ToString(pFVar40);
                    if (param_1 != (FPCGContext *)0x0) {
                      FPCGContext::GetTaskName(param_1,&local_39d8);
                      bVar9 = true;
                      bVar25 = true;
                      FPCGContext::GetExecutionSourceName(param_1,&local_39e8);
                      bVar7 = bVar25;
                      bVar8 = bVar9;
                      bVar11 = bVar10;
                      bVar13 = bVar12;
                      bVar14 = bVar27;
                      bVar16 = bVar15;
                      bVar18 = bVar17;
                    }
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                    if (bVar25) {
                      bVar25 = false;
                      bVar7 = bVar25;
                      bVar9 = bVar8;
                      bVar11 = bVar10;
                      bVar13 = bVar12;
                      bVar14 = bVar27;
                      bVar16 = bVar15;
                      bVar18 = bVar17;
                      if (local_39e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_39e8.Data.AllocatorInstance.Data);
                        bVar7 = false;
                      }
                    }
                    if (bVar8) {
                      bVar8 = false;
                      bVar7 = bVar25;
                      bVar9 = bVar8;
                      bVar11 = bVar10;
                      bVar13 = bVar12;
                      bVar14 = bVar27;
                      bVar16 = bVar15;
                      bVar18 = bVar17;
                      if (local_39d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_39d8.Data.AllocatorInstance.Data);
                        bVar9 = false;
                      }
                    }
                    if (local_39c8.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_39c8.TextData.Reference + 0x10))();
                    }
                  }
                  `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_1>::operator()
                            (&local_1628);
                  pFVar60 = (FPCGDataCollection *)local_3dd0._8_8_;
                }
                else {
                  local_3d58 = (UPCGBasePointData *)0x0;
                  if (local_1768 == '\0') {
                    if (((UPCGBasePointData *)local_1780.DebugPtr == (UPCGBasePointData *)0x0) &&
                       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                           ("OperationData.OriginalData",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                                            ,0x336,L""), bVar29)) {
                      pcVar6 = (code *)swi(3);
                      uVar26 = (*pcVar6)();
                      return (bool)uVar26;
                    }
                    pFVar60 = (FPCGDataCollection *)local_3dd0._8_8_;
                    if (local_3790.NumBits == 0) goto LAB_149aff9bb;
                    pUVar37 = (UPCGMetadata *)
                              (**(code **)((local_1780.DebugPtr)->_padding_ + 800))();
                    lVar55 = (longlong)local_3790.NumBits;
                    lVar35 = UPCGMetadata::GetItemCountForChild(pUVar37);
                    if ((lVar55 != lVar35) &&
                       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                           ("OperationData.FilterBitArray.Num() == OriginalMetadata->GetItemCountForChild()"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                                            ,0x33b,L""), bVar29)) {
                      pcVar6 = (code *)swi(3);
                      uVar26 = (*pcVar6)();
                      return (bool)uVar26;
                    }
                    uVar54 = 0;
                    local_544[0] = 0x100;
                    local_d50.SecondaryData = (ForElementType<__int64>)0x0;
                    local_548 = 0;
                    local_1560.SecondaryData = (ForElementType<__int64>)0x0;
                    local_d58 = 0;
                    local_d54 = 0x100;
                    uVar52 = TBitArray<TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_>
                             ::CountSetBits(&local_3790,0,-1);
                    lVar35 = UPCGMetadata::GetItemCountForChild(pUVar37);
                    uVar32 = (int)lVar35 - uVar52;
                    local_3d70 = (UPCGBasePointData *)(ulonglong)uVar32;
                    if ((int)uVar52 < 0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar52);
                    }
                    if (local_544[0] < (int)uVar52) {
                      UE::Core::Private::
                      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                                (8,8,uVar52,&local_d50,local_548,local_544);
                    }
                    if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
                    }
                    if (local_d54 < (int)uVar32) {
                      UE::Core::Private::
                      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                                (8,8,uVar32,&local_1560,local_d58,&local_d54);
                    }
                    if (0 < local_3790.NumBits) {
                      do {
                        if ((((int)uVar54 < 0) || (local_3790.NumBits <= (int)uVar54)) &&
                           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Index>=0 && Index<NumBits",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                ,0x5be,L""), bVar29)) {
                          pcVar6 = (code *)swi(3);
                          uVar26 = (*pcVar6)();
                          return (bool)uVar26;
                        }
                        lVar55 = (longlong)(int)uVar54;
                        FVar47 = (ForElementType<unsigned_int>)&local_3790;
                        if (local_3790.AllocatorInstance.SecondaryData !=
                            (ForElementType<unsigned_int>)0x0) {
                          FVar47 = local_3790.AllocatorInstance.SecondaryData;
                        }
                        uVar32 = uVar54;
                        if ((int)uVar54 < 0) {
                          uVar32 = uVar54 + 0x1f;
                        }
                        if ((*(uint *)((longlong)FVar47 + (longlong)((int)uVar32 >> 5) * 4) >>
                             (uVar54 & 0x1f) & 1) == 0) {
                          FVar38 = (ForElementType<__int64>)&local_1560;
                          if (local_1560.SecondaryData != (ForElementType<__int64>)0x0) {
                            FVar38 = local_1560.SecondaryData;
                          }
                          local_3d78 = lVar55;
                          if ((ulonglong)FVar38 <= &local_3d78) {
                            FVar38 = (ForElementType<__int64>)&local_1560;
                            if (local_1560.SecondaryData != (ForElementType<__int64>)0x0) {
                              FVar38 = local_1560.SecondaryData;
                            }
                            if ((&local_3d78 <
                                 (longlong *)((longlong)FVar38 + (longlong)local_d54 * 8)) &&
                               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                   (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar29)) {
                              pcVar6 = (code *)swi(3);
                              uVar26 = (*pcVar6)();
                              return (bool)uVar26;
                            }
                          }
                          iVar30 = local_d58;
                          if (local_d58 == local_d54) {
                            iVar30 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                                               (0x808,&local_1560,&local_d54);
                          }
                          local_d58 = iVar30 + 1;
                          FVar38 = (ForElementType<__int64>)&local_1560;
                          lVar55 = local_3d78;
                          FVar59 = local_1560.SecondaryData;
                        }
                        else {
                          FVar38 = (ForElementType<__int64>)&local_d50;
                          if (local_d50.SecondaryData != (ForElementType<__int64>)0x0) {
                            FVar38 = local_d50.SecondaryData;
                          }
                          local_3d80 = lVar55;
                          if ((ulonglong)FVar38 <= &local_3d80) {
                            FVar38 = (ForElementType<__int64>)&local_d50;
                            if (local_d50.SecondaryData != (ForElementType<__int64>)0x0) {
                              FVar38 = local_d50.SecondaryData;
                            }
                            if ((&local_3d80 <
                                 (longlong *)((longlong)FVar38 + (longlong)local_544[0] * 8)) &&
                               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                   (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar29)) {
                              pcVar6 = (code *)swi(3);
                              uVar26 = (*pcVar6)();
                              return (bool)uVar26;
                            }
                          }
                          if (local_548 == local_544[0]) {
                            local_548 = UE::Core::Private::
                                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                                                  (0x808,&local_d50,local_544);
                          }
                          FVar38 = (ForElementType<__int64>)&local_d50;
                          lVar55 = local_3d80;
                          FVar59 = local_d50.SecondaryData;
                          iVar30 = local_548;
                          local_548 = local_548 + 1;
                        }
                        if (FVar59 != (ForElementType<__int64>)0x0) {
                          FVar38 = FVar59;
                        }
                        uVar54 = uVar54 + 1;
                        *(longlong *)((longlong)FVar38 + (longlong)iVar30 * 8) = lVar55;
                      } while ((int)uVar54 < local_3790.NumBits);
                      uVar32 = (uint)local_3d70;
                    }
                    if ((0 < (int)uVar52) || (pFVar56 = local_3dd8, param_6)) {
                      pUVar36 = (UPCGBasePointData *)
                                FPCGContext::NewObject_AnyThread<UPCGParamData>(local_3dd8);
                      pUVar5 = (UPCGMetadata *)pUVar36->_padding_;
                      PCGMetadataHelpers::InitializeMetadataWithDataDomainCopyAndElementsNoCopy
                                (local_1780.DebugPtr,(UPCGData *)pUVar36);
                      local_16dc = 0x80;
                      local_16d0.InlineData[0] = '\0';
                      local_16d0.InlineData[1] = '\0';
                      local_16d0.InlineData[2] = '\0';
                      local_16d0.InlineData[3] = '\0';
                      local_16d0._padding_ = 0;
                      local_1708._16_8_ = 0;
                      uStack_16f0 = 0;
                      local_16c0 = 0;
                      local_1708._0_8_ = (FScriptContainerElement *)0x0;
                      local_1708._8_8_ = 0;
                      local_16e8 = (void *)0x0;
                      local_16e0 = 0;
                      local_16d8 = 0xffffffff;
                      local_16d4 = 0;
                      local_16d0.SecondaryData = (ForElementType<FSetElementId>)0x0;
                      UPCGMetadata::AddAttributesFiltered
                                (pUVar5,pUVar37,
                                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                                 local_1708,ExcludeAttributes,Equal);
                      local_16c0 = local_16c0 & 0xffffffff00000000;
                      if (local_16d0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                        FMemory::Free((void *)local_16d0.SecondaryData);
                      }
                      iVar30 = SUB84(local_1708._8_8_,4);
                      local_1708._8_8_ = local_1708._8_8_ & 0xffffffff00000000;
                      if (iVar30 != 0) {
                        UE::Core::Private::
                        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x10,4,0,(ForAnyElementType *)local_1708,0,
                                   (int *)(local_1708 + 0xc));
                      }
                      local_16d8 = 0xffffffff;
                      local_16d4 = 0;
                      local_16e0 = 0;
                      if (0x80 < local_16dc) {
                        local_16dc = 0x80;
                        TBitArray<FDefaultBitArrayAllocator>::Realloc
                                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_1708 + 0x10),0);
                      }
                      if (local_16e8 != (void *)0x0) {
                        FMemory::Free(local_16e8);
                      }
                      if ((FScriptContainerElement *)local_1708._0_8_ !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free((void *)local_1708._0_8_);
                      }
                      iVar30 = local_548;
                      local_3b80.DataPtr = (long64 *)&local_d50;
                      if (local_d50.SecondaryData != (ForElementType<__int64>)0x0) {
                        local_3b80.DataPtr = (long64 *)local_d50.SecondaryData;
                      }
                      if ((local_548 < 0) &&
                         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                             ("InCount >= 0",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0xeb,L""), bVar29)) {
                        pcVar6 = (code *)swi(3);
                        uVar26 = (*pcVar6)();
                        return (bool)uVar26;
                      }
                      pFVar56 = local_3dd8;
                      local_3b80.ArrayNum = iVar30;
                      UPCGMetadata::SetAttributes
                                (pUVar5,&local_3b80,pUVar37,(TArrayView<__int64,int> *)0x0,
                                 local_3dd8);
                    }
                    if ((0 < (int)uVar32) || (this_01 = local_3d58, param_6)) {
                      this_01 = (UPCGBasePointData *)
                                FPCGContext::NewObject_AnyThread<UPCGParamData>(pFVar56);
                      pUVar5 = (UPCGMetadata *)this_01->_padding_;
                      PCGMetadataHelpers::InitializeMetadataWithDataDomainCopyAndElementsNoCopy
                                (local_1780.DebugPtr,(UPCGData *)this_01);
                      local_172c = 0x80;
                      local_1720.InlineData[0] = '\0';
                      local_1720.InlineData[1] = '\0';
                      local_1720.InlineData[2] = '\0';
                      local_1720.InlineData[3] = '\0';
                      local_1720._padding_ = 0;
                      local_1758._16_8_ = 0;
                      uStack_1740 = 0;
                      local_1710 = 0;
                      local_1758._0_8_ = (FScriptContainerElement *)0x0;
                      local_1758._8_8_ = 0;
                      local_1738 = (void *)0x0;
                      local_1730 = 0;
                      local_1728 = 0xffffffff;
                      local_1724 = 0;
                      local_1720.SecondaryData = (ForElementType<FSetElementId>)0x0;
                      UPCGMetadata::AddAttributesFiltered
                                (pUVar5,pUVar37,
                                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                                 local_1758,ExcludeAttributes,Equal);
                      local_1710 = local_1710 & 0xffffffff00000000;
                      if (local_1720.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                        FMemory::Free((void *)local_1720.SecondaryData);
                      }
                      iVar30 = SUB84(local_1758._8_8_,4);
                      local_1758._8_8_ = local_1758._8_8_ & 0xffffffff00000000;
                      if (iVar30 != 0) {
                        UE::Core::Private::
                        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x10,4,0,(ForAnyElementType *)local_1758,0,
                                   (int *)(local_1758 + 0xc));
                      }
                      local_1728 = 0xffffffff;
                      local_1724 = 0;
                      local_1730 = 0;
                      if (0x80 < local_172c) {
                        local_172c = 0x80;
                        TBitArray<FDefaultBitArrayAllocator>::Realloc
                                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_1758 + 0x10),0);
                      }
                      if (local_1738 != (void *)0x0) {
                        FMemory::Free(local_1738);
                      }
                      if ((FScriptContainerElement *)local_1758._0_8_ !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free((void *)local_1758._0_8_);
                      }
                      iVar30 = local_d58;
                      local_3b90.DataPtr = (long64 *)&local_1560;
                      if (local_1560.SecondaryData != (ForElementType<__int64>)0x0) {
                        local_3b90.DataPtr = (long64 *)local_1560.SecondaryData;
                      }
                      if ((local_d58 < 0) &&
                         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                             ("InCount >= 0",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0xeb,L""), bVar29)) {
                        pcVar6 = (code *)swi(3);
                        uVar26 = (*pcVar6)();
                        return (bool)uVar26;
                      }
                      local_3b90.ArrayNum = iVar30;
                      UPCGMetadata::SetAttributes
                                (pUVar5,&local_3b90,pUVar37,(TArrayView<__int64,int> *)0x0,
                                 local_3dd8);
                    }
                    FVar48.Data = (FScriptContainerElement *)local_d50.SecondaryData;
                    if (local_1560.SecondaryData != (ForElementType<__int64>)0x0) {
                      FMemory::Free((void *)local_1560.SecondaryData);
                      FVar48.Data = (FScriptContainerElement *)local_d50.SecondaryData;
                    }
                  }
                  else {
                    iVar30 = TBitArray<TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_>
                             ::CountSetBits(&local_3790,0,-1);
                    local_3d68 = (**(code **)((local_37a8.DebugPtr)->_padding_ + 0x488))();
                    local_3d68 = local_3d68 - iVar30;
                    FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                              (&local_39b8,(UPCGSpatialData *)local_37a8.DebugPtr);
                    local_39b8.bInheritSpatialData = false;
                    FConstPCGPointValueRanges::FConstPCGPointValueRanges
                              (&local_538,(UPCGBasePointData *)local_37a8.DebugPtr);
                    if ((0 < iVar30) || (this_01 = pUVar36, param_6)) {
                      pUVar36 = FPCGContext::NewPointData_AnyThread(param_1);
                      local_3d70 = pUVar36;
                      UPCGSpatialData::InitializeFromDataWithParams
                                ((UPCGSpatialData *)pUVar36,&local_39b8);
                      (**(code **)(pUVar36->_padding_ + 0x490))(pUVar36,iVar30);
                      pcVar6 = *(code **)(pUVar36->_padding_ + 0x498);
                      uVar31 = (**(code **)((local_37a8.DebugPtr)->_padding_ + 0x640))
                                         (local_37a8.DebugPtr,1);
                      (*pcVar6)(pUVar36,uVar31);
                      (**(code **)(pUVar36->_padding_ + 0x4b0))(pUVar36,local_37a8.DebugPtr);
                      FPCGPointValueRanges::FPCGPointValueRanges(&local_3a8,pUVar36,false);
                      uVar46 = 0;
                      local_3da0.Array = &local_3790;
                      local_3da0._padding_._0_4_ = 0;
                      local_3da0.CurrentBitIndex = 0;
                      local_3da0.BaseBitIndex = 0;
                      local_3da0._padding_._4_4_ = 1;
                      local_3da0.UnvisitedBitMask = 0xffffffff;
                      uVar52 = 0;
                      if (local_3790.NumBits != 0) {
                        TConstSetBitIterator<TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_>
                        ::FindFirstSetBit(&local_3da0);
                        uVar46 = local_3da0._20_8_ & 0xffffffff;
                        uVar52 = local_3da0.BaseBitIndex;
                      }
                      pTVar23 = local_3da0.Array;
                      pUVar36 = local_3d70;
                      this_01 = local_3d58;
                      uVar54 = (uint)local_3da0._padding_;
                      uVar32 = local_3da0._padding_._4_4_;
                      iVar30 = 0;
                      bVar25 = bVar7;
                      bVar8 = bVar9;
                      bVar10 = bVar11;
                      bVar12 = bVar13;
                      bVar27 = bVar14;
                      bVar15 = bVar16;
                      bVar17 = bVar18;
                      if ((int)uVar46 <
                          *(int *)&(((UPCGMetadata *)((longlong)local_3da0.Array + 0x1fb8))->
                                   OtherParents).Elements.field_0x20) {
                        do {
                          uVar50 = local_3da0.UnvisitedBitMask;
                          FPCGPointValueRanges::SetFromValueRanges
                                    (&local_3a8,iVar30,&local_538,(int)uVar46);
                          uVar3 = *(uint *)&(((UPCGMetadata *)((longlong)pTVar23 + 0x1fb8))->
                                            OtherParents).Elements.field_0x20;
                          local_3da0.UnvisitedBitMask = uVar50 & ~uVar32;
                          TVar4 = (TObjectPtr<UPCGMetadata>_u_0)
                                  *(TObjectPtr<UPCGMetadata>_u_0 *)
                                   &(((UPCGMetadata *)((longlong)pTVar23 + 0x1fb8))->OtherParents).
                                    Elements.field_0x18;
                          TVar58 = (TObjectPtr<UPCGMetadata>_u_0)pTVar23;
                          if ((ForElementType<unsigned_int>)TVar4.DebugPtr !=
                              (ForElementType<unsigned_int>)0x0) {
                            TVar58 = TVar4;
                          }
                          uVar50 = local_3da0.UnvisitedBitMask &
                                   *(uint *)(((TVar58.DebugPtr)->OtherParents).Hash.InlineData +
                                            (longlong)(int)uVar54 * 4 + -0x68);
                          while (uVar50 == 0) {
                            uVar54 = uVar54 + 1;
                            uVar52 = uVar52 + 0x20;
                            local_3da0._20_8_ = (ulonglong)uVar52 << 0x20;
                            local_3da0._padding_._0_4_ = uVar54;
                            if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <
                                (int)uVar54) {
                              local_3da0.BaseBitIndex = uVar52;
                              local_3da0.CurrentBitIndex = uVar3;
                              uVar50 = uVar3;
                              goto LAB_149afef2a;
                            }
                            local_3da0.UnvisitedBitMask = 0xffffffff;
                            uVar50 = *(uint *)(((TVar58.DebugPtr)->OtherParents).Hash.InlineData +
                                              (longlong)(int)uVar54 * 4 + -0x68);
                          }
                          uVar32 = -uVar50 & uVar50;
                          uVar46 = (ulonglong)uVar32 * 2 + 1;
                          lVar55 = 0x3f;
                          if (uVar46 != 0) {
                            for (; uVar46 >> lVar55 == 0; lVar55 = lVar55 + -1) {
                            }
                          }
                          local_3c00 = (int)lVar55;
                          uVar50 = local_3c00 + -1 + uVar52;
                          if ((int)uVar3 < (int)uVar50) {
                            uVar50 = uVar3;
                          }
                          local_3da0.BaseBitIndex = (int)((ulonglong)local_3da0._20_8_ >> 0x20);
                          local_3da0.CurrentBitIndex = uVar50;
                          local_3da0._padding_._4_4_ = uVar32;
LAB_149afef2a:
                          uVar46 = (ulonglong)uVar50;
                          pUVar36 = local_3d70;
                          this_01 = local_3d58;
                          iVar30 = iVar30 + 1;
                        } while ((int)uVar50 < (int)uVar3);
                      }
                    }
                    iVar30 = local_3d68;
                    if ((0 < local_3d68) || (param_6)) {
                      this_01 = FPCGContext::NewPointData_AnyThread(local_3dd8);
                      UPCGSpatialData::InitializeFromDataWithParams
                                ((UPCGSpatialData *)this_01,&local_39b8);
                      (**(code **)(this_01->_padding_ + 0x490))(this_01,iVar30);
                      pcVar6 = *(code **)(this_01->_padding_ + 0x498);
                      uVar31 = (**(code **)((local_37a8.DebugPtr)->_padding_ + 0x640))
                                         (local_37a8.DebugPtr,1);
                      (*pcVar6)(this_01,uVar31);
                      (**(code **)(this_01->_padding_ + 0x4b0))(this_01,local_37a8.DebugPtr);
                      FPCGPointValueRanges::FPCGPointValueRanges(&local_218,this_01,false);
                      iVar30 = 0;
                      uVar52 = 0;
                      if (0 < local_3790.NumBits) {
                        do {
                          if ((((int)uVar52 < 0) || (local_3790.NumBits <= (int)uVar52)) &&
                             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Index>=0 && Index<NumBits",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                  ,0x5be,L""), bVar29)) {
                            pcVar6 = (code *)swi(3);
                            uVar26 = (*pcVar6)();
                            return (bool)uVar26;
                          }
                          FVar47 = (ForElementType<unsigned_int>)&local_3790;
                          if (local_3790.AllocatorInstance.SecondaryData !=
                              (ForElementType<unsigned_int>)0x0) {
                            FVar47 = local_3790.AllocatorInstance.SecondaryData;
                          }
                          uVar54 = uVar52;
                          if ((int)uVar52 < 0) {
                            uVar54 = uVar52 + 0x1f;
                          }
                          if ((*(uint *)((longlong)FVar47 + (longlong)((int)uVar54 >> 5) * 4) >>
                               (uVar52 & 0x1f) & 1) == 0) {
                            FPCGPointValueRanges::SetFromValueRanges
                                      (&local_218,iVar30,&local_538,uVar52);
                            iVar30 = iVar30 + 1;
                          }
                          uVar52 = uVar52 + 1;
                        } while ((int)uVar52 < local_3790.NumBits);
                      }
                    }
                    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                               local_39b8.MetadataInitializeParams.DomainInitializeParams.
                               AllocatorInstance.Data,
                               local_39b8.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
                    FVar48.Data = local_39b8.MetadataInitializeParams.DomainMapping.
                                  AllocatorInstance.Data;
                    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                        local_39b8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance
                        .Data != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                                 0x0) {
                      FMemory::Free(local_39b8.MetadataInitializeParams.DomainInitializeParams.
                                    AllocatorInstance.Data);
                      FVar48.Data = local_39b8.MetadataInitializeParams.DomainMapping.
                                    AllocatorInstance.Data;
                    }
                  }
                  if ((ForElementType<__int64>)FVar48.Data != (ForElementType<__int64>)0x0) {
                    FMemory::Free(FVar48.Data);
                  }
                  uVar21 = local_3dd0._8_8_;
                  pFVar44 = local_3de0;
                  if (pUVar36 != (UPCGBasePointData *)0x0) {
                    pFVar39 = (FPCGTaggedData *)
                              (((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                               local_3dd0._8_8_)->AllocatorInstance).Data;
                    if (((pFVar39 <= local_3de0) &&
                        (local_3de0 <
                         pFVar39 + ((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                                   local_3dd0._8_8_)->ArrayMax)) &&
                       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar29)) {
                      pcVar6 = (code *)swi(3);
                      uVar26 = (*pcVar6)();
                      return (bool)uVar26;
                    }
                    iVar30 = ((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)uVar21)->
                             ArrayNum;
                    piVar1 = &((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)uVar21)->
                              ArrayMax;
                    if (iVar30 == *piVar1) {
                      iVar30 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x878,(ForAnyElementType *)uVar21,piVar1);
                    }
                    ((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)uVar21)->ArrayNum =
                         iVar30 + 1;
                    pFVar39 = FPCGTaggedData::FPCGTaggedData
                                        ((FPCGTaggedData *)
                                         ((((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                                           uVar21)->AllocatorInstance).Data +
                                         (longlong)iVar30 * 0x78),pFVar44);
                    pFVar39->Pin = PCGPinConstants::DefaultInFilterLabel;
                    FPCGDataPtrWrapper::operator=(&pFVar39->Data,(UPCGData *)pUVar36);
                    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                              (&pFVar39->Tags,&pFVar44->Tags);
                  }
                  pFVar60 = (FPCGDataCollection *)local_3dd0._8_8_;
                  if (this_01 != (UPCGBasePointData *)0x0) {
                    pFVar39 = (FPCGTaggedData *)
                              (((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                               local_3dd0._8_8_)->AllocatorInstance).Data;
                    if (((pFVar39 <= pFVar44) &&
                        (pFVar44 < pFVar39 + ((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                                             local_3dd0._8_8_)->ArrayMax)) &&
                       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar29)) {
                      pcVar6 = (code *)swi(3);
                      uVar26 = (*pcVar6)();
                      return (bool)uVar26;
                    }
                    iVar30 = (pFVar60->TaggedData).ArrayNum;
                    piVar1 = &(pFVar60->TaggedData).ArrayMax;
                    if (iVar30 == *piVar1) {
                      iVar30 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x878,(ForAnyElementType *)pFVar60,piVar1);
                    }
                    (pFVar60->TaggedData).ArrayNum = iVar30 + 1;
                    pFVar39 = FPCGTaggedData::FPCGTaggedData
                                        ((FPCGTaggedData *)
                                         ((pFVar60->TaggedData).AllocatorInstance.Data +
                                         (longlong)iVar30 * 0x78),pFVar44);
                    pFVar39->Pin = PCGPinConstants::DefaultOutFilterLabel;
                    FPCGDataPtrWrapper::operator=(&pFVar39->Data,(UPCGData *)this_01);
                    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                              (&pFVar39->Tags,&pFVar44->Tags);
                  }
                }
LAB_149aff9bb:
                if ((longlong *)local_3dd0._16_8_ != (longlong *)0x0) {
                  (*(code *)**(undefined8 **)local_3dd0._16_8_)(local_3dd0._16_8_,1);
                }
                if ((undefined8 *)local_3dd0._0_8_ != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)local_3dd0._0_8_)(local_3dd0._0_8_,1);
                }
                DestructItems<FString,int>
                          ((FString *)local_3cc8.ExtraNames.AllocatorInstance.Data,
                           local_3cc8.ExtraNames.ArrayNum);
                if (local_3cc8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free(local_3cc8.ExtraNames.AllocatorInstance.Data);
                }
                local_16b0.Tags.HashSize = 0;
                if (local_16b0.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_16b0.Tags.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_16b0.Tags.Elements);
                FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_16b0.Data);
                local_1620.Tags.HashSize = 0;
                if (local_1620.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_1620.Tags.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_1620.Tags.Elements);
                FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_1620.Data);
                FVar48.Data = (FScriptContainerElement *)(local_3de0 + 1);
                uVar46 = (ulonglong)local_3da8;
                param_1 = local_3dd8;
              }
              else {
                `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_1>::operator()
                          (&local_1628);
                if ((longlong *)local_3dd0._16_8_ != (longlong *)0x0) {
                  (*(code *)**(undefined8 **)local_3dd0._16_8_)(local_3dd0._16_8_,1);
                }
                if ((undefined8 *)local_3dd0._0_8_ != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)local_3dd0._0_8_)(local_3dd0._0_8_,1);
                }
                DestructItems<FString,int>
                          ((FString *)local_3cc8.ExtraNames.AllocatorInstance.Data,
                           local_3cc8.ExtraNames.ArrayNum);
                if (local_3cc8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free(local_3cc8.ExtraNames.AllocatorInstance.Data);
                }
                local_16b0.Tags.HashSize = 0;
                if (local_16b0.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_16b0.Tags.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_16b0.Tags.Elements);
                FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_16b0.Data);
                local_1620.Tags.HashSize = 0;
                if (local_1620.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_1620.Tags.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_1620.Tags.Elements);
                FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_1620.Data);
                pFVar60 = &param_1->OutputData;
                uVar46 = (ulonglong)local_3da8;
                FVar48.Data = (FScriptContainerElement *)(local_3de0 + 1);
              }
            }
            else {
              `FPCGAttributeFilterElementBase::DoFiltering'::__l25::<lambda_1>::operator()
                        (&local_1628);
              if ((longlong *)local_3dd0._16_8_ != (longlong *)0x0) {
                (*(code *)**(undefined8 **)local_3dd0._16_8_)(local_3dd0._16_8_,1);
              }
              if ((undefined8 *)local_3dd0._0_8_ != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)local_3dd0._0_8_)(local_3dd0._0_8_,1);
              }
              DestructItems<FString,int>
                        ((FString *)local_3cc8.ExtraNames.AllocatorInstance.Data,
                         local_3cc8.ExtraNames.ArrayNum);
              if (local_3cc8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3cc8.ExtraNames.AllocatorInstance.Data);
              }
              local_16b0.Tags.HashSize = 0;
              if (local_16b0.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_16b0.Tags.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_16b0.Tags.Elements);
              FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_16b0.Data);
              local_1620.Tags.HashSize = 0;
              if (local_1620.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_1620.Tags.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_1620.Tags.Elements);
              FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_1620.Data);
              FVar48.Data = (FScriptContainerElement *)(local_3de0 + 1);
              uVar46 = (ulonglong)local_3da8;
              pFVar60 = (FPCGDataCollection *)local_3dd0._8_8_;
              param_1 = local_3dd8;
            }
          }
        }
      }
    }
  }
LAB_149afffe4:
  if (local_3bb8.ThresholdKeys.Ptr != (IPCGAttributeAccessorKeys *)0x0) {
    (**(code **)(local_3bb8.ThresholdKeys.Ptr)->_padding_)(local_3bb8.ThresholdKeys.Ptr,1);
  }
  if (local_3bb8.ThresholdAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
    (**(code **)(local_3bb8.ThresholdAccessor.Ptr)->_padding_)(local_3bb8.ThresholdAccessor.Ptr,1);
  }
  if (local_3c88.ThresholdKeys.Ptr != (IPCGAttributeAccessorKeys *)0x0) {
    (**(code **)(local_3c88.ThresholdKeys.Ptr)->_padding_)(local_3c88.ThresholdKeys.Ptr,1);
  }
  if (local_3c88.ThresholdAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
    (**(code **)(local_3c88.ThresholdAccessor.Ptr)->_padding_)(local_3c88.ThresholdAccessor.Ptr,1);
  }
LAB_149b0003c:
  pFVar44 = local_3d50;
  DestructItems<FPCGTaggedData,int>(local_3d50,local_3db0);
  if (pFVar44 != (FPCGTaggedData *)0x0) {
    FMemory::Free(pFVar44);
  }
  pFVar44 = local_3d10;
  DestructItems<FPCGTaggedData,int>(local_3d10,local_3dac);
  if (pFVar44 != (FPCGTaggedData *)0x0) {
    FMemory::Free(pFVar44);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_3d48.AllocatorInstance.Data,local_3d48.ArrayNum);
  if ((FPCGTaggedData *)local_3d48.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_3d48.AllocatorInstance.Data);
  }
  if (local_3790.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_3790.AllocatorInstance.SecondaryData);
  }
  if (bVar62) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149b11aa0

EPCGElementExecutionLoopMode __thiscall
FPCGAttributeFilterElementBase::ExecutionLoopMode
          (FPCGAttributeFilterElementBase *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b2d130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGAttributeFilterElementBase::SupportsBasePointDataInputs
          (FPCGAttributeFilterElementBase *this,FPCGContext *param_1)

{
  return true;
}


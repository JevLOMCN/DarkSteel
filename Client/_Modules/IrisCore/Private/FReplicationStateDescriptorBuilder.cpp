// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// CreateDescriptorForFunction @ 144202160

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> __cdecl
UE::Net::FReplicationStateDescriptorBuilder::CreateDescriptorForFunction
          (UFunction *param_1,FParameters *param_2)

{
  longlong *plVar1;
  FBuildParameters *pFVar2;
  FReplicationStateDescriptorRegistry *this;
  code *pcVar3;
  FProperty *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar8;
  UObject *pUVar9;
  FPropertyNetSerializerInfo *pFVar10;
  longlong lVar11;
  longlong *plVar12;
  FFieldObjectUnion FVar13;
  longlong *in_R8;
  FWeakObjectPtr *this_00;
  bool bVar14;
  undefined1 local_178 [8];
  TFieldIterator<FProperty> local_170;
  FMemberProperty local_158;
  FWeakObjectPtr local_108;
  FFieldObjectUnion local_100;
  FPropertyReplicationStateDescriptorBuilder local_f8;
  FString local_a8;
  FName local_98;
  FName local_90;
  FString local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined2 local_5b;
  FString local_58;
  void *local_48 [2];
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2662,
               "FReplicationStateDescriptorBuilder_CreateDescriptorForFunction",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
               ,0xa66);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2662);
  }
  plVar1 = (longlong *)*in_R8;
  if (plVar1 != (longlong *)0x0) {
    if (((UObject *)((ulonglong)param_2 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (GC::GIsIncrementalReachabilityPending != false)) {
      GC::MarkAsReachable((UObject *)((ulonglong)param_2 & 0xfffffffffffffffe));
    }
    uVar6 = ((uint)(((ulonglong)param_2 & 0xffff00000) >> 0x14) ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      plVar12 = (longlong *)plVar1[8];
      if ((longlong *)plVar1[8] == (longlong *)0x0) {
        plVar12 = plVar1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar12 +
                      (ulonglong)((int)plVar1[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar7 != -1) {
        lVar11 = *plVar1;
        do {
          if (*(ulonglong *)(lVar11 + (longlong)iVar7 * 0x30) == ((ulonglong)param_2 | 1)) {
            if ((iVar7 != -1) && (lVar11 = (longlong)iVar7 * 0x30 + lVar11, lVar11 != 0)) {
              this_00 = (FWeakObjectPtr *)(lVar11 + 8);
              goto LAB_144202294;
            }
            break;
          }
          iVar7 = *(int *)(lVar11 + 0x28 + (longlong)iVar7 * 0x30);
        } while (iVar7 != -1);
      }
    }
    this_00 = (FWeakObjectPtr *)0x0;
LAB_144202294:
    if (((UObject *)((ulonglong)param_2 & 0xfffffffffffffffe) == (UObject *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectForPruning != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorRegistry.cpp"
                           ,0x5d,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar8.Reference = (FReplicationStateDescriptor *)(*pcVar3)();
      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar8.Reference;
    }
    if ((this_00 != (FWeakObjectPtr *)0x0) &&
       (pUVar9 = FWeakObjectPtr::Get(this_00),
       pUVar9 == (UObject *)((ulonglong)param_2 & 0xfffffffffffffffe))) {
      local_108.ObjectIndex = this_00[3].ObjectIndex;
      local_108.ObjectSerialNumber = this_00[3].ObjectSerialNumber;
      pUVar9 = FWeakObjectPtr::Get(&local_108);
      if (pUVar9 == (UObject *)0x0) {
        if (6 < (byte)LogIris._0_1_) {
          Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
      }
      else if (this_00 + 1 != (FWeakObjectPtr *)0x0) {
        if ((this_00[2].ObjectIndex != 1) &&
           (bVar5 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6449277768747185554>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                               ,0xa6e,"Result->Num() == 1"), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar8.Reference = (FReplicationStateDescriptor *)(*pcVar3)();
          return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar8.Reference;
        }
        if ((this_00[2].ObjectIndex < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar8.Reference = (FReplicationStateDescriptor *)(*pcVar3)();
          return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar8.Reference;
        }
        lVar11 = *(longlong *)this_00[1];
        param_1->_padding_ = lVar11;
        if ((lVar11 != 0) && ((*(uint *)(lVar11 + 0xb8) >> 3 & 1) != 0)) {
          LOCK();
          *(int *)(lVar11 + 0xbc) = *(int *)(lVar11 + 0xbc) + 1;
          UNLOCK();
        }
        goto LAB_14420288f;
      }
    }
  }
  local_f8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Property = (FProperty *)0x0;
  local_158.PropertyRepNotifyFunction = (UFunction *)0x0;
  local_f8.Name.Data.ArrayNum = 0;
  local_f8.Name.Data.ArrayMax = 0;
  local_f8.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Members.ArrayNum = 0;
  local_f8.Members.ArrayMax = 0;
  local_f8.Functions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Functions.ArrayNum = 0;
  local_f8.Functions.ArrayMax = 0;
  local_f8.StructInfo.SizeAndAlignment.Size = 0;
  local_f8.StructInfo.SizeAndAlignment.Alignment = 0;
  local_f8.StructInfo.Struct = (UStruct *)0x0;
  local_f8.StructInfo.SerializerType = Struct;
  local_158.SerializerInfo = (FPropertyNetSerializerInfo *)0x0;
  local_158.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_158.Traits = None;
  local_158.ReplicationCondition = COND_None;
  local_158.ChangeMaskBits = 0;
  local_158.ChangeMaskGroupName.ComparisonIndex.Value = 0;
  local_158.ChangeMaskGroupName.Number = 0;
  local_158.ExternalSizeAndAlignment.Size = 0;
  local_158.ExternalSizeAndAlignment.Alignment = 0;
  if (param_2 == (FParameters *)0x0) {
    local_170.Field = (FField *)0x0;
  }
  else {
    local_170.Field = (FField *)param_2[2].DefaultStateSource;
  }
  local_170.InterfaceIndex = -1;
  local_170.bIncludeSuper = true;
  local_170.bIncludeDeprecated = true;
  local_170.bIncludeInterface = false;
  local_170.Struct = (UStruct *)param_2;
  TFieldIterator<FProperty>::IterateToNext(&local_170);
  pFVar4 = (FProperty *)local_170.Field;
  while ((local_170.Field = (FField *)pFVar4, pFVar4 != (FProperty *)0x0 &&
         (((uint)pFVar4->PropertyFlags & 0x480) == 0x80))) {
    if ((pFVar4->PropertyFlags >> 0x1f & 1) == 0) {
      pFVar10 = FPropertyNetSerializerInfoRegistry::FindSerializerInfo(pFVar4);
      if (pFVar10 == (FPropertyNetSerializerInfo *)0x0) {
        if (2 < (byte)LogIris._0_1_) {
          (**(code **)(pFVar4->_padding_ + 0x68))(pFVar4,local_48,0,0);
          bVar5 = IsThisNotNull(pFVar4,"FField::GetName");
          if (bVar5) {
            ::FName::ToString((FName *)&pFVar4->_padding_,&local_a8);
          }
          else {
            ::FString::FString(&local_a8,L"None");
          }
          local_98.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
          local_98.Number = param_2->SinglePropertyIndex;
          ::FName::ToString(&local_98,&local_88);
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_48[0] != (void *)0x0) {
            FMemory::Free(local_48[0]);
          }
        }
      }
      else {
        local_158.ChangeMaskBits = 1;
        local_158.ExternalSizeAndAlignment.Size = 0;
        local_158.ExternalSizeAndAlignment.Alignment = 0;
        local_158.Property = pFVar4;
        local_158.SerializerInfo = pFVar10;
        Net::Private::FPropertyReplicationStateDescriptorBuilder::GetIrisPropertyTraits
                  (&local_158,pFVar4,(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *)0x0,
                   (UClass *)0x0);
        Net::Private::FPropertyReplicationStateDescriptorBuilder::GetSerializerTraits
                  (&local_158,pFVar4,pFVar10,false);
        if (((local_158.Traits >> 0xb & 1) != 0) ||
           (((local_158.Traits >> 10 & 1) != 0 &&
            (Net::Private::bIrisUseChangeMaskForTArray != false)))) {
          local_158.ChangeMaskBits = 0x40;
        }
        if (local_158.CreateAndRegisterReplicationFragmentFunction ==
            (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
             *)0x0) {
          local_158.CreateAndRegisterReplicationFragmentFunction =
               (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
                *)(**(code **)(pFVar10->_padding_ + 0x28))(pFVar10);
        }
        if (((local_f8.Members.AllocatorInstance.Data <= &local_158) &&
            (&local_158 <
             (FMemberProperty *)
             (local_f8.Members.AllocatorInstance.Data + (longlong)local_f8.Members.ArrayMax * 0x48))
            ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar8.Reference = (FReplicationStateDescriptor *)(*pcVar3)();
          return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar8.Reference;
        }
        iVar7 = local_f8.Members.ArrayNum;
        if (local_f8.Members.ArrayNum == local_f8.Members.ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x848,&local_f8.Members.AllocatorInstance,&local_f8.Members.ArrayMax);
        }
        local_f8.Members.ArrayNum = iVar7 + 1;
        lVar11 = (longlong)iVar7;
        *(FProperty **)(local_f8.Members.AllocatorInstance.Data + lVar11 * 0x48) =
             local_158.Property;
        *(UFunction **)(local_f8.Members.AllocatorInstance.Data + lVar11 * 0x48 + 8) =
             local_158.PropertyRepNotifyFunction;
        *(FPropertyNetSerializerInfo **)
         (local_f8.Members.AllocatorInstance.Data + lVar11 * 0x48 + 0x10) = local_158.SerializerInfo
        ;
        *(_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
          **)(local_f8.Members.AllocatorInstance.Data + lVar11 * 0x48 + 0x10 + 8) =
             local_158.CreateAndRegisterReplicationFragmentFunction;
        *(undefined8 *)(local_f8.Members.AllocatorInstance.Data + lVar11 * 0x48 + 0x20) =
             local_158._32_8_;
        *(ulonglong *)(local_f8.Members.AllocatorInstance.Data + lVar11 * 0x48 + 0x20 + 8) =
             CONCAT44(local_158.ChangeMaskGroupName.ComparisonIndex.Value,
                      CONCAT22(local_158._42_2_,local_158.ChangeMaskBits));
        *(ulonglong *)(local_f8.Members.AllocatorInstance.Data + lVar11 * 0x48 + 0x30) =
             CONCAT44(local_158._52_4_,local_158.ChangeMaskGroupName.Number);
        *(ulong64 *)(local_f8.Members.AllocatorInstance.Data + lVar11 * 0x48 + 0x30 + 8) =
             local_158.ExternalSizeAndAlignment.Size;
        *(ulong64 *)(local_f8.Members.AllocatorInstance.Data + lVar11 * 0x48 + 0x40) =
             local_158.ExternalSizeAndAlignment.Alignment;
      }
    }
    local_170.Field = (FField *)pFVar4->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_170);
    pFVar4 = (FProperty *)local_170.Field;
  }
  local_f8.StructInfo.SizeAndAlignment.Size =
       (ulong64)*(ushort *)((longlong)&param_2[5].DefaultStateSource + 6);
  pFVar2 = (FBuildParameters *)*in_R8;
  local_f8.StructInfo.SizeAndAlignment.Alignment = (ulong64)(short)param_2[2].SinglePropertyIndex;
  local_90.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
  local_90.Number = param_2->SinglePropertyIndex;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_5b = 1;
  local_60 = 3;
  local_5c = 0;
  ::FName::ToString(&local_90,&local_58);
  Net::Private::FPropertyReplicationStateDescriptorBuilder::Build
            (&local_f8,(FString *)local_178,(FReplicationStateDescriptorRegistry *)&local_58,pFVar2)
  ;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  this = (FReplicationStateDescriptorRegistry *)*in_R8;
  if ((this != (FReplicationStateDescriptorRegistry *)0x0) && (local_178 != (undefined1  [8])0x0)) {
    local_100.Unknown = (ulonglong)param_2 | 1;
    if (((UObject *)((ulonglong)param_2 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (GC::GIsIncrementalReachabilityPending != false)) {
      GC::MarkAsReachable((UObject *)((ulonglong)param_2 & 0xfffffffffffffffe));
    }
    FVar13 = local_100;
    if ((local_100.Unknown & 1) == 0) {
      do {
        FVar13 = (FFieldObjectUnion)((FFieldObjectUnion *)(FVar13.Unknown + 0x10))->Unknown;
        if ((FVar13.Unknown & 1) != 0) {
          if (((UObject *)(FVar13.Unknown & 0xfffffffffffffffe) != (UObject *)0x0) &&
             (GC::GIsIncrementalReachabilityPending != false)) {
            GC::MarkAsReachable((UObject *)(FVar13.Unknown & 0xfffffffffffffffe));
          }
          break;
        }
      } while ((FVar13.Unknown & 0xfffffffffffffffe) != 0);
      pUVar9 = (UObject *)(FVar13.Unknown & 0xfffffffffffffffe);
      if ((FVar13.Unknown & 1) == 0) {
        pUVar9 = (UObject *)0x0;
      }
    }
    else {
      pUVar9 = (UObject *)(local_100.Unknown & 0xfffffffffffffffe);
    }
    Net::Private::FReplicationStateDescriptorRegistry::Register
              (this,(FFieldVariant *)&local_100,pUVar9,
               (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *)local_178);
  }
  param_1->_padding_ = (longlong)local_178;
  local_178 = (undefined1  [8])0x0;
  if (local_f8.Functions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Functions.AllocatorInstance.Data);
  }
  if ((FMemberProperty *)local_f8.Members.AllocatorInstance.Data != (FMemberProperty *)0x0) {
    FMemory::Free(local_f8.Members.AllocatorInstance.Data);
  }
  if (local_f8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Name.Data.AllocatorInstance.Data);
  }
LAB_14420288f:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)
         (FReplicationStateDescriptor *)param_1;
}

// CreateDescriptorForStruct @ 144202f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> __cdecl
UE::Net::FReplicationStateDescriptorBuilder::CreateDescriptorForStruct
          (UStruct *param_1,FParameters *param_2)

{
  FName *pFVar1;
  ForElementType<UStruct_const_*> FVar2;
  short sVar3;
  wchar_t wVar4;
  ENetSerializerTraits EVar5;
  longlong *plVar6;
  FWeakObjectPtr FVar7;
  FReplicationStateMemberDescriptor *pFVar8;
  FName FVar9;
  FName FVar10;
  FBuildParameters *pFVar11;
  FReplicationStateDescriptorRegistry *pFVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  ForAnyElementType FVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar20;
  UObject *pUVar21;
  UClass *pUVar22;
  UScriptStruct *pUVar23;
  FPropertyNetSerializerInfo *pFVar24;
  UReplicationStateDescriptorConfig *pUVar25;
  FNetSerializer *pFVar26;
  FName FVar27;
  UStruct *pUVar28;
  uint uVar29;
  void *pvVar30;
  longlong *plVar31;
  wchar_t *pwVar32;
  FName *pFVar33;
  FProperty *pFVar34;
  FReplicationStateDescriptor *pFVar35;
  FWeakObjectPtr *this;
  FName FVar36;
  longlong *in_R8;
  longlong lVar37;
  FFieldObjectUnion FVar38;
  ForElementType<UStruct_const_*> FVar39;
  ulonglong uVar40;
  bool bVar41;
  undefined1 auStackY_2428 [32];
  char local_23d8;
  undefined1 local_23d4 [4];
  EStructNetSerializerType local_23d0;
  TObjectPtr<UStruct>_u_0 local_23c8 [2];
  FMemberProperty local_23b8;
  FString local_2368;
  FPropertyReplicationStateDescriptorBuilder local_2358;
  TFieldIterator<FProperty> local_2308;
  TFieldIterator<FProperty> local_22f0;
  uint local_22d8;
  FName local_22d4;
  longlong *local_22c8;
  FWeakObjectPtr local_22c0;
  FFieldObjectUnion local_22b8;
  FReplicationStateDescriptor *local_22b0;
  FString local_22a8;
  FString local_2298;
  FString local_2288;
  FName local_2278;
  FName local_2270;
  UStruct *local_2268;
  FName local_2260;
  FString local_2258;
  FString local_2248;
  FString local_2238;
  FString local_2228;
  FString local_2218;
  FString local_2208;
  FName local_21f8;
  FName local_21f0;
  FName local_21e8;
  FName local_21e0;
  TStringBuilderBase<wchar_t> *local_21d8;
  undefined8 local_21d0;
  undefined8 uStack_21c8;
  undefined4 local_21c0;
  undefined1 local_21bc;
  char local_21bb;
  undefined1 local_21ba;
  undefined1 local_21b8 [16];
  void *local_21a8 [2];
  void *local_2198 [2];
  void *local_2188 [2];
  ForElementType<UStruct_const_*> local_2178;
  uint local_2070;
  uint local_206c;
  TStringBuilderBase<wchar_t> local_2068;
  wchar_t local_2048 [4096];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_2428;
  bVar41 = -1 < CpuChannel->Enabled;
  local_22c8 = in_R8;
  local_22b0 = (FReplicationStateDescriptor *)param_1;
  local_2268 = (UStruct *)param_2;
  if (bVar41) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2491,
               "FReplicationStateDescriptorBuilder_CreateDescriptorForStruct",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
               ,0x9bb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2491);
  }
  plVar6 = (longlong *)*in_R8;
  if (plVar6 != (longlong *)0x0) {
    if (((UObject *)((ulonglong)param_2 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (GC::GIsIncrementalReachabilityPending != false)) {
      GC::MarkAsReachable((UObject *)((ulonglong)param_2 & 0xfffffffffffffffe));
    }
    uVar29 = ((uint)(((ulonglong)param_2 & 0xffff00000) >> 0x14) ^ (uint)((ulonglong)param_2 >> 4))
             * -0x7a143595;
    uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
    if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
      plVar31 = (longlong *)plVar6[8];
      if ((longlong *)plVar6[8] == (longlong *)0x0) {
        plVar31 = plVar6 + 7;
      }
      iVar18 = *(int *)((longlong)plVar31 +
                       (ulonglong)((int)plVar6[9] - 1U & (uVar29 >> 0x10 ^ uVar29)) * 4);
      if (iVar18 != -1) {
        lVar37 = *plVar6;
        do {
          if (*(ulonglong *)(lVar37 + (longlong)iVar18 * 0x30) == ((ulonglong)param_2 | 1)) {
            if ((iVar18 != -1) &&
               (lVar37 = (longlong)iVar18 * 0x30 + lVar37, this = (FWeakObjectPtr *)(lVar37 + 8),
               lVar37 != 0)) goto LAB_14420307a;
            break;
          }
          iVar18 = *(int *)(lVar37 + 0x28 + (longlong)iVar18 * 0x30);
        } while (iVar18 != -1);
      }
    }
    this = (FWeakObjectPtr *)0x0;
LAB_14420307a:
    if (((UObject *)((ulonglong)param_2 & 0xfffffffffffffffe) == (UObject *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("ObjectForPruning != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorRegistry.cpp"
                            ,0x5d,L""), bVar17)) {
      pcVar13 = (code *)swi(3);
      TVar20.Reference = (FReplicationStateDescriptor *)(*pcVar13)();
      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar20.Reference;
    }
    if ((this != (FWeakObjectPtr *)0x0) &&
       (pUVar21 = FWeakObjectPtr::Get(this),
       pUVar21 == (UObject *)((ulonglong)param_2 & 0xfffffffffffffffe))) {
      local_22c0.ObjectIndex = this[3].ObjectIndex;
      local_22c0.ObjectSerialNumber = this[3].ObjectSerialNumber;
      pUVar21 = FWeakObjectPtr::Get(&local_22c0);
      if (pUVar21 == (UObject *)0x0) {
        if (6 < (byte)LogIris._0_1_) {
          Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
      }
      else if (this + 1 != (FWeakObjectPtr *)0x0) {
        if ((this[2].ObjectIndex != 1) &&
           (bVar17 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_6449277768747185725>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                                ,0x9c3,"Result->Num() == 1"), bVar17)) {
          pcVar13 = (code *)swi(3);
          TVar20.Reference = (FReplicationStateDescriptor *)(*pcVar13)();
          return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar20.Reference;
        }
        if ((this[2].ObjectIndex < 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          TVar20.Reference = (FReplicationStateDescriptor *)(*pcVar13)();
          return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar20.Reference;
        }
        FVar7 = this[1];
        local_22b0->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
        pFVar8 = *(FReplicationStateMemberDescriptor **)FVar7;
        local_22b0->MemberDescriptors = pFVar8;
        pFVar35 = local_22b0;
        if ((pFVar8 != (FReplicationStateMemberDescriptor *)0x0) &&
           ((pFVar8[0x17].ExternalMemberOffset >> 3 & 1) != 0)) {
          LOCK();
          pFVar8[0x17].InternalMemberOffset = pFVar8[0x17].InternalMemberOffset + 1;
          UNLOCK();
        }
        goto LAB_1442041a9;
      }
    }
  }
  bVar15 = false;
  bVar17 = false;
  bVar14 = false;
  if (param_2 != (FParameters *)0x0) {
    pUVar22 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar18 = (int)pUVar22->_padding_;
    if ((iVar18 <= *(int *)&param_2->DefaultStateSource[1].field_0x10) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)&param_2->DefaultStateSource[1].field_0x8 + (longlong)iVar18 * 8) ==
        &pUVar22->_padding_)) {
      pUVar23 = FFastArraySerializerItem::StaticStruct();
      if (pUVar23 == (UScriptStruct *)0x0) {
LAB_14420315c:
        bVar15 = false;
      }
      else {
        iVar18 = (int)pUVar23->_padding_;
        if ((*(int *)&param_2[1].field_0x18 < iVar18) ||
           (bVar15 = true,
           (longlong *)
           *(undefined1 **)(&(param_2[1].DefaultStateSource)->field_0x0 + (longlong)iVar18 * 8) !=
           &pUVar23->_padding_)) goto LAB_14420315c;
      }
      pUVar23 = FFastArraySerializer::StaticStruct();
      if (pUVar23 == (UScriptStruct *)0x0) {
        bVar14 = false;
      }
      else {
        iVar18 = (int)pUVar23->_padding_;
        if ((*(int *)&param_2[1].field_0x18 < iVar18) ||
           ((longlong *)
            *(undefined1 **)(&(param_2[1].DefaultStateSource)->field_0x0 + (longlong)iVar18 * 8) !=
            &pUVar23->_padding_)) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
        }
        if (bVar14) {
          if ((*(byte *)(in_R8 + 3) & 4) != 0) goto LAB_1442032d3;
          bVar14 = false;
          if (2 < (byte)LogIris._0_1_) {
            local_2270.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
            local_2270.Number = param_2->SinglePropertyIndex;
            ::FName::ToString(&local_2270,&local_2258);
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            if (local_2258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2258.Data.AllocatorInstance.Data);
            }
          }
        }
      }
      if (((ulonglong)param_2[5].DefaultStateSource & 0x100400) != 0) {
        bVar17 = true;
      }
    }
  }
LAB_1442032d3:
  local_23d8 = '\x01';
  local_2358.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2358.Name.Data.ArrayNum = 0;
  local_2358.Name.Data.ArrayMax = 0;
  local_2358.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2358.Members.ArrayNum = 0;
  local_2358.Members.ArrayMax = 0;
  local_2358.Functions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2358.Functions.ArrayNum = 0;
  local_2358.Functions.ArrayMax = 0;
  local_2358.StructInfo.SizeAndAlignment.Size = 0;
  local_2358.StructInfo.SizeAndAlignment.Alignment = 0;
  local_2358.StructInfo.Struct = (UStruct *)0x0;
  local_2358.StructInfo.SerializerType = Struct;
  local_23b8.Property = (FProperty *)0x0;
  local_23b8.PropertyRepNotifyFunction = (UFunction *)0x0;
  local_23b8.SerializerInfo = (FPropertyNetSerializerInfo *)0x0;
  local_23b8.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_23b8.Traits = None;
  local_23b8.ReplicationCondition = COND_None;
  local_23b8.ChangeMaskBits = 0;
  local_23b8.ChangeMaskGroupName.ComparisonIndex.Value = 0;
  local_23b8.ChangeMaskGroupName.Number = 0;
  local_23b8.ExternalSizeAndAlignment.Size = 0;
  local_23b8.ExternalSizeAndAlignment.Alignment = 0;
  local_23d0 = 0;
  if ((*(byte *)(in_R8 + 3) & 0x10) == 0) {
    FVar9.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
    FVar9.Number = param_2->SinglePropertyIndex;
    pFVar24 = FPropertyNetSerializerInfoRegistry::FindStructSerializerInfo(FVar9);
    if (pFVar24 == (FPropertyNetSerializerInfo *)0x0) {
      in_R8 = local_22c8;
      for (pFVar12 = param_2[2].DescriptorRegistry; local_22c8 = in_R8,
          pFVar12 != (FReplicationStateDescriptorRegistry *)0x0;
          pFVar12 = *(FReplicationStateDescriptorRegistry **)
                     &(pFVar12->RegisteredDescriptorsMap).field_0x40) {
        FVar10.ComparisonIndex.Value = *(uint *)&(pFVar12->RegisteredDescriptorsMap).field_0x18;
        FVar10.Number = *(uint *)&(pFVar12->RegisteredDescriptorsMap).field_0x1c;
        pFVar24 = FPropertyNetSerializerInfoRegistry::FindStructSerializerInfo(FVar10);
        if (pFVar24 != (FPropertyNetSerializerInfo *)0x0) {
          local_23d0 = DerivedFromCustom;
          goto LAB_144203433;
        }
        in_R8 = local_22c8;
      }
      goto LAB_14420338a;
    }
    local_23d0 = Custom;
LAB_144203433:
    sVar3 = (short)param_2[2].SinglePropertyIndex;
    local_23b8.ExternalSizeAndAlignment.Alignment = (ulong64)sVar3;
    local_23b8.ChangeMaskBits = 1;
    local_23b8.ExternalSizeAndAlignment.Size =
         (ulong64)(int)(*(int *)&param_2[2].field_0x18 + -1 + (int)sVar3 & ~((int)sVar3 - 1U));
    local_23b8.SerializerInfo = pFVar24;
    local_23b8.CreateAndRegisterReplicationFragmentFunction =
         (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
          *)(**(code **)(pFVar24->_padding_ + 0x28))(pFVar24);
    pFVar26 = (FNetSerializer *)(**(code **)(pFVar24->_padding_ + 0x10))(pFVar24,0);
    EVar5 = pFVar26->Traits;
    bVar17 = IsObjectReferenceNetSerializer(pFVar26);
    FVar27.Number = local_23b8.ChangeMaskGroupName.Number;
    FVar27.ComparisonIndex.Value = local_23b8.ChangeMaskGroupName.ComparisonIndex.Value;
    local_23b8.Traits =
         (((pFVar26->Traits >> 4 & 1) << 2 | pFVar26->Traits >> 2 & 1) << 0xb |
         pFVar26->Traits >> 1 & 1) << 5 |
         (uint)bVar17 << 6 |
         -(uint)((EVar5 >> 3 & 1) != 0) & (HasCustomObjectReference|HasObjectReference) |
         local_23b8.Traits;
    if (pFVar26 == &FNetRoleNetSerializerNetSerializerInfo::Serializer) {
      FVar27 = Net::Private::ReplicationStateDescriptorBuilder_NAME_RoleGroup;
    }
    local_23b8.ChangeMaskGroupName.ComparisonIndex = FVar27.ComparisonIndex.Value;
    local_23b8.ChangeMaskGroupName.Number = FVar27.Number;
    Net::Private::FPropertyReplicationStateDescriptorBuilder::AddMemberProperty
              (&local_2358,&local_23b8);
    if (local_23d0 == DerivedFromCustom) {
      pUVar28 = Net::Private::FPropertyReplicationStateDescriptorBuilder::
                FindSuperStructWithCustomSerializer((UStruct *)param_2);
      local_206c = 0x20;
      local_2178.SecondaryData = (ForElementType<UStruct_const_*>)0x0;
      local_2070 = 0;
      local_22d8 = local_2070;
      for (local_23c8[0] = (TObjectPtr<UStruct>_u_0)param_2; local_2070 = local_22d8,
          local_23c8[0].DebugPtr != pUVar28;
          local_23c8[0] =
               (TObjectPtr<UStruct>_u_0)((local_23c8[0].DebugPtr)->SuperStruct).field0_0x0.DebugPtr)
      {
        FVar39 = (ForElementType<UStruct_const_*>)&local_2178;
        if (local_2178.SecondaryData != (ForElementType<UStruct_const_*>)0x0) {
          FVar39 = local_2178.SecondaryData;
        }
        if ((ulonglong)FVar39 <= local_23c8) {
          FVar39 = (ForElementType<UStruct_const_*>)&local_2178;
          if (local_2178.SecondaryData != (ForElementType<UStruct_const_*>)0x0) {
            FVar39 = local_2178.SecondaryData;
          }
          if ((local_23c8 <
               (TObjectPtr<UStruct>_u_0 *)((longlong)FVar39 + (longlong)(int)local_206c * 8)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar13 = (code *)swi(3);
            TVar20.Reference = (FReplicationStateDescriptor *)(*pcVar13)();
            return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar20.Reference;
          }
        }
        if (local_2070 == local_206c) {
          local_2070 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UStruct_const_*>_>
                                 (0x808,&local_2178,(int *)&local_206c);
        }
        FVar39 = (ForElementType<UStruct_const_*>)&local_2178;
        if (local_2178.SecondaryData != (ForElementType<UStruct_const_*>)0x0) {
          FVar39 = local_2178.SecondaryData;
        }
        lVar37 = (longlong)(int)local_2070;
        local_2070 = local_2070 + 1;
        memmove((TObjectPtr<UStruct>_u_0 *)((longlong)FVar39 + 8),(void *)FVar39,lVar37 << 3);
        FVar39 = (ForElementType<UStruct_const_*>)&local_2178;
        if (local_2178.SecondaryData != (ForElementType<UStruct_const_*>)0x0) {
          FVar39 = local_2178.SecondaryData;
        }
        *(TObjectPtr<UStruct>_u_0 *)FVar39 = (UStruct *)local_23c8[0];
        local_22d8 = local_2070;
      }
      uVar40 = (ulonglong)(int)local_22d8;
      FVar39 = (ForElementType<UStruct_const_*>)&local_2178;
      if (local_2178.SecondaryData != (ForElementType<UStruct_const_*>)0x0) {
        FVar39 = local_2178.SecondaryData;
      }
      FVar2 = (ForElementType<UStruct_const_*>)((longlong)FVar39 + uVar40 * 8);
      while( true ) {
        if (local_2070 != (uint)uVar40) {
          local_23d4[0] = 0;
          `TCheckedPointerIterator<UStruct_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_23d4);
        }
        param_2 = (FParameters *)local_2268;
        if (FVar39 == FVar2) break;
        local_22f0.Struct = *(UStruct **)FVar39;
        if (local_22f0.Struct == (UStruct *)0x0) {
          local_22f0.Field = (FField *)0x0;
        }
        else {
          local_22f0.Field = (local_22f0.Struct)->ChildProperties;
        }
        local_22f0.InterfaceIndex = -1;
        local_22f0.bIncludeSuper = false;
        local_22f0.bIncludeDeprecated = true;
        local_22f0.bIncludeInterface = false;
        TFieldIterator<FProperty>::IterateToNext(&local_22f0);
        if ((FProperty *)local_22f0.Field != (FProperty *)0x0) {
          do {
            pFVar34 = (FProperty *)local_22f0.Field;
            if ((int)*(EPropertyFlags *)((longlong)local_22f0.Field + 0x38) < 0) {
              local_23d8 = '\0';
            }
            else {
              pFVar24 = FPropertyNetSerializerInfoRegistry::FindSerializerInfo
                                  ((FProperty *)local_22f0.Field);
              if (pFVar24 != (FPropertyNetSerializerInfo *)0x0) {
                local_23b8.Property = pFVar34;
                local_23b8.ChangeMaskBits = 1;
                local_23b8.ExternalSizeAndAlignment.Size = 0;
                local_23b8.ExternalSizeAndAlignment.Alignment = 0;
                local_23b8.SerializerInfo = pFVar24;
                Net::Private::FPropertyReplicationStateDescriptorBuilder::GetIrisPropertyTraits
                          (&local_23b8,pFVar34,
                           (TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *)0x0,
                           (UClass *)0x0);
                Net::Private::FPropertyReplicationStateDescriptorBuilder::GetSerializerTraits
                          (&local_23b8,pFVar34,pFVar24,false);
                if (((local_23b8.Traits >> 0xb & 1) != 0) ||
                   (((local_23b8.Traits >> 10 & 1) != 0 &&
                    (Net::Private::bIrisUseChangeMaskForTArray != false)))) {
                  local_23b8.ChangeMaskBits = 0x40;
                }
                if (local_23b8.CreateAndRegisterReplicationFragmentFunction ==
                    (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
                     *)0x0) {
                  local_23b8.CreateAndRegisterReplicationFragmentFunction =
                       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
                        *)(**(code **)(pFVar24->_padding_ + 0x28))(pFVar24);
                }
                if (*(int *)((longlong)pFVar34 + 0x30) != 0) {
                  uVar40 = (ulonglong)(uint)*(int *)((longlong)pFVar34 + 0x30);
                  do {
                    if (((local_2358.Members.AllocatorInstance.Data <= &local_23b8) &&
                        (&local_23b8 <
                         (FMemberProperty *)
                         (local_2358.Members.AllocatorInstance.Data +
                         (longlong)local_2358.Members.ArrayMax * 0x48))) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar17)) {
                      pcVar13 = (code *)swi(3);
                      TVar20.Reference = (FReplicationStateDescriptor *)(*pcVar13)();
                      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)
                             TVar20.Reference;
                    }
                    iVar18 = local_2358.Members.ArrayNum;
                    if (local_2358.Members.ArrayNum == local_2358.Members.ArrayMax) {
                      iVar18 = Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x848,&local_2358.Members.AllocatorInstance,
                                          &local_2358.Members.ArrayMax);
                    }
                    local_2358.Members.ArrayNum = iVar18 + 1;
                    lVar37 = (longlong)iVar18;
                    *(FProperty **)(local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48) =
                         local_23b8.Property;
                    *(UFunction **)(local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48 + 8) =
                         local_23b8.PropertyRepNotifyFunction;
                    *(FPropertyNetSerializerInfo **)
                     (local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48 + 0x10) =
                         local_23b8.SerializerInfo;
                    *(_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
                      **)(local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48 + 0x10 + 8) =
                         local_23b8.CreateAndRegisterReplicationFragmentFunction;
                    *(undefined8 *)
                     (local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48 + 0x20) =
                         local_23b8._32_8_;
                    *(ulonglong *)
                     (local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48 + 0x20 + 8) =
                         CONCAT44(local_23b8.ChangeMaskGroupName.ComparisonIndex.Value,
                                  CONCAT22(local_23b8._42_2_,local_23b8.ChangeMaskBits));
                    *(ulonglong *)(local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48 + 0x30)
                         = CONCAT44(local_23b8._52_4_,local_23b8.ChangeMaskGroupName.Number);
                    *(ulong64 *)
                     (local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48 + 0x30 + 8) =
                         local_23b8.ExternalSizeAndAlignment.Size;
                    *(ulong64 *)(local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48 + 0x40) =
                         local_23b8.ExternalSizeAndAlignment.Alignment;
                    uVar40 = uVar40 - 1;
                    pFVar34 = (FProperty *)local_22f0.Field;
                  } while (uVar40 != 0);
                }
              }
            }
            local_22f0.Field = (FField *)pFVar34->_padding_;
            TFieldIterator<FProperty>::IterateToNext(&local_22f0);
          } while ((FProperty *)local_22f0.Field != (FProperty *)0x0);
          uVar40 = (ulonglong)local_22d8;
        }
        FVar39 = (ForElementType<UStruct_const_*>)((longlong)FVar39 + 8);
      }
      if (local_2178.SecondaryData != (ForElementType<UStruct_const_*>)0x0) {
        FMemory::Free((void *)local_2178.SecondaryData);
      }
    }
    else {
      local_23d8 = '\x01';
    }
  }
  else {
LAB_14420338a:
    local_23d0 = Struct;
    if ((((bVar17) && ((*(byte *)(in_R8 + 3) & 0x10) == 0)) &&
        (PRIVATE_GIsRunningCommandlet == false)) &&
       (Net::Private::bWarnAboutStructsWithCustomSerialization != false)) {
      FVar36.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
      FVar36.Number = param_2->SinglePropertyIndex;
      if (Net::Private::bUseSupportsStructNetSerializerList != false) {
        pUVar25 = GetDefault<UReplicationStateDescriptorConfig>();
        iVar18 = (pUVar25->SupportsStructNetSerializerList).ArrayNum;
        pFVar33 = (FName *)(pUVar25->SupportsStructNetSerializerList).AllocatorInstance.Data;
        if ((iVar18 < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          TVar20.Reference = (FReplicationStateDescriptor *)(*pcVar13)();
          return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar20.Reference;
        }
        pFVar1 = (FName *)((longlong)pFVar33 + (longlong)iVar18 * 0xc);
        for (; pFVar33 != pFVar1; pFVar33 = (FName *)&pFVar33[1].Number) {
          if (*pFVar33 == FVar36) {
            if ((pFVar33 != (FName *)0x0) && ((char)pFVar33[1].ComparisonIndex.Value != '\0'))
            goto LAB_14420395e;
            break;
          }
        }
        FVar36.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
        FVar36.Number = param_2->SinglePropertyIndex;
      }
      if (2 < (byte)LogIris._0_1_) {
        local_2260 = FVar36;
        ::FName::ToString(&local_2260,&local_2248);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_2248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2248.Data.AllocatorInstance.Data);
        }
      }
    }
LAB_14420395e:
    iVar18 = 0;
    if (param_2 == (FParameters *)0x0) {
      local_2308.Field = (FField *)0x0;
    }
    else {
      local_2308.Field = (FField *)param_2[2].DefaultStateSource;
    }
    local_2308.InterfaceIndex = -1;
    local_2308.bIncludeSuper = true;
    local_2308.bIncludeDeprecated = true;
    local_2308.bIncludeInterface = false;
    local_2308.Struct = (UStruct *)param_2;
    TFieldIterator<FProperty>::IterateToNext(&local_2308);
    if ((FProperty *)local_2308.Field != (FProperty *)0x0) {
      do {
        pFVar34 = (FProperty *)local_2308.Field;
        iVar18 = iVar18 + 1;
        if ((int)*(EPropertyFlags *)((longlong)local_2308.Field + 0x38) < 0) {
          if (bVar15) {
            bVar17 = IsThisNotNull(local_2308.Field,"FField::GetFName");
            if (bVar17) {
              local_22d4 = ((FField *)pFVar34)->NamePrivate;
            }
            else {
              local_22d4.ComparisonIndex.Value = 0;
              local_22d4.Number = 0;
            }
            if (local_22d4 == Net::Private::PropertyNetSerializerRegistry_NAME_ReplicationID)
            goto LAB_144203a02;
          }
          local_23d8 = '\0';
        }
        else {
LAB_144203a02:
          pFVar24 = FPropertyNetSerializerInfoRegistry::FindSerializerInfo(pFVar34);
          if (pFVar24 == (FPropertyNetSerializerInfo *)0x0) {
            if (2 < (byte)LogIris._0_1_) {
              (**(code **)(((FField *)pFVar34)->_padding_ + 0x68))(pFVar34,local_2188,0,0);
              bVar17 = IsThisNotNull(pFVar34,"FField::GetName");
              if (bVar17) {
                ::FName::ToString(&((FField *)pFVar34)->NamePrivate,&local_2288);
              }
              else {
                ::FString::FString(&local_2288,L"None");
              }
              local_21e8.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
              local_21e8.Number = param_2->SinglePropertyIndex;
              ::FName::ToString(&local_21e8,&local_2218);
              Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              if (local_2218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2218.Data.AllocatorInstance.Data);
              }
              pvVar30 = local_2188[0];
              if (local_2288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2288.Data.AllocatorInstance.Data);
                pvVar30 = local_2188[0];
              }
LAB_144203e8f:
              if (pvVar30 != (void *)0x0) {
                FMemory::Free(pvVar30);
              }
            }
          }
          else {
            local_23b8.Property = pFVar34;
            local_23b8.ChangeMaskBits = 1;
            local_23b8.ExternalSizeAndAlignment.Size = 0;
            local_23b8.ExternalSizeAndAlignment.Alignment = 0;
            local_23b8.SerializerInfo = pFVar24;
            Net::Private::FPropertyReplicationStateDescriptorBuilder::GetIrisPropertyTraits
                      (&local_23b8,pFVar34,
                       (TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *)0x0,(UClass *)0x0);
            Net::Private::FPropertyReplicationStateDescriptorBuilder::GetSerializerTraits
                      (&local_23b8,pFVar34,pFVar24,false);
            if (((local_23b8.Traits >> 0xb & 1) != 0) ||
               (((local_23b8.Traits >> 10 & 1) != 0 &&
                (Net::Private::bIrisUseChangeMaskForTArray != false)))) {
              local_23b8.ChangeMaskBits = 0x40;
            }
            if (local_23b8.CreateAndRegisterReplicationFragmentFunction ==
                (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
                 *)0x0) {
              local_23b8.CreateAndRegisterReplicationFragmentFunction =
                   (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
                    *)(**(code **)(pFVar24->_padding_ + 0x28))(pFVar24);
            }
            if ((local_23b8.Traits >> 0xb & 1) == 0) {
              if (((bVar14) && ((local_23b8.Traits >> 0xe & 1) == 0)) &&
                 ((*(byte *)(local_22c8 + 3) & 8) == 0)) {
                if (2 < (byte)LogIris._0_1_) {
                  (**(code **)(((FField *)pFVar34)->_padding_ + 0x68))(pFVar34,local_2198,0,0);
                  bVar17 = IsThisNotNull(pFVar34,"FField::GetName");
                  if (bVar17) {
                    ::FName::ToString(&((FField *)pFVar34)->NamePrivate,&local_2298);
                  }
                  else {
                    ::FString::FString(&local_2298,L"None");
                  }
                  local_21f0.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
                  local_21f0.Number = param_2->SinglePropertyIndex;
                  ::FName::ToString(&local_21f0,&local_2228);
                  Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                  if (local_2228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2228.Data.AllocatorInstance.Data);
                  }
                  pvVar30 = local_2198[0];
                  if (local_2298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2298.Data.AllocatorInstance.Data);
                    pvVar30 = local_2198[0];
                  }
                  goto LAB_144203e8f;
                }
              }
              else if (*(int *)((longlong)pFVar34 + 0x30) != 0) {
                uVar40 = (ulonglong)(uint)*(int *)((longlong)pFVar34 + 0x30);
                do {
                  if (((local_2358.Members.AllocatorInstance.Data <= &local_23b8) &&
                      (&local_23b8 <
                       (FMemberProperty *)
                       (local_2358.Members.AllocatorInstance.Data +
                       (longlong)local_2358.Members.ArrayMax * 0x48))) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar17)) {
                    pcVar13 = (code *)swi(3);
                    TVar20.Reference = (FReplicationStateDescriptor *)(*pcVar13)();
                    return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)
                           TVar20.Reference;
                  }
                  iVar19 = local_2358.Members.ArrayNum;
                  if (local_2358.Members.ArrayNum == local_2358.Members.ArrayMax) {
                    iVar19 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x848,&local_2358.Members.AllocatorInstance,
                                        &local_2358.Members.ArrayMax);
                  }
                  local_2358.Members.ArrayNum = iVar19 + 1;
                  lVar37 = (longlong)iVar19;
                  *(FProperty **)(local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48) =
                       local_23b8.Property;
                  *(UFunction **)(local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48 + 8) =
                       local_23b8.PropertyRepNotifyFunction;
                  *(FPropertyNetSerializerInfo **)
                   (local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48 + 0x10) =
                       local_23b8.SerializerInfo;
                  *(_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
                    **)(local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48 + 0x10 + 8) =
                       local_23b8.CreateAndRegisterReplicationFragmentFunction;
                  *(undefined8 *)(local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48 + 0x20)
                       = local_23b8._32_8_;
                  *(ulonglong *)
                   (local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48 + 0x20 + 8) =
                       CONCAT44(local_23b8.ChangeMaskGroupName.ComparisonIndex.Value,
                                CONCAT22(local_23b8._42_2_,local_23b8.ChangeMaskBits));
                  *(ulonglong *)(local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48 + 0x30) =
                       CONCAT44(local_23b8._52_4_,local_23b8.ChangeMaskGroupName.Number);
                  *(ulong64 *)(local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48 + 0x30 + 8)
                       = local_23b8.ExternalSizeAndAlignment.Size;
                  *(ulong64 *)(local_2358.Members.AllocatorInstance.Data + lVar37 * 0x48 + 0x40) =
                       local_23b8.ExternalSizeAndAlignment.Alignment;
                  uVar40 = uVar40 - 1;
                  pFVar34 = (FProperty *)local_2308.Field;
                } while (uVar40 != 0);
              }
            }
            else if (2 < (byte)LogIris._0_1_) {
              (**(code **)(((FField *)pFVar34)->_padding_ + 0x68))(pFVar34,local_21a8,0,0);
              bVar17 = IsThisNotNull(pFVar34,"FField::GetName");
              if (bVar17) {
                ::FName::ToString(&((FField *)pFVar34)->NamePrivate,&local_22a8);
              }
              else {
                ::FString::FString(&local_22a8,L"None");
              }
              local_21f8.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
              local_21f8.Number = param_2->SinglePropertyIndex;
              ::FName::ToString(&local_21f8,&local_2238);
              Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              if (local_2238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2238.Data.AllocatorInstance.Data);
              }
              pvVar30 = local_21a8[0];
              if (local_22a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_22a8.Data.AllocatorInstance.Data);
                pvVar30 = local_21a8[0];
              }
              goto LAB_144203e8f;
            }
          }
        }
        local_2308.Field = (FField *)pFVar34->_padding_;
        TFieldIterator<FProperty>::IterateToNext(&local_2308);
      } while ((FProperty *)local_2308.Field != (FProperty *)0x0);
      if ((local_23d8 == '\0') || (iVar18 != 0)) goto LAB_144203f40;
    }
    if ((2 < (byte)LogIris._0_1_) &&
       (Net::Private::bWarnAboutStructPropertiesWithSuspectedNotReplicatedProperties != false)) {
      local_21e0.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
      local_21e0.Number = param_2->SinglePropertyIndex;
      ::FName::ToString(&local_21e0,&local_2208);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_2208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2208.Data.AllocatorInstance.Data);
      }
    }
    local_23d8 = '\0';
  }
LAB_144203f40:
  sVar3 = ((UStruct *)param_2)->MinAlignment;
  local_2358.StructInfo.SizeAndAlignment.Alignment = (ulong64)sVar3;
  local_2068.bIsDynamic = false;
  local_2068.bIsExternal = false;
  local_2358.StructInfo.SizeAndAlignment.Size =
       (ulong64)(int)(((UStruct *)param_2)->PropertiesSize + -1 + (int)sVar3 & ~((int)sVar3 - 1U));
  local_21ba = 0;
  local_2358.StructInfo.SerializerType = local_23d0;
  local_2068.Base = local_2048;
  local_2068.CurPos = local_2048;
  local_2068.End = (wchar_t *)local_48;
  local_21d0 = 0;
  uStack_21c8 = 0;
  local_2358.StructInfo.Struct = (UStruct *)param_2;
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,(UObject *)0x0,&local_2068);
  if (local_2068.End < local_2068.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_2068,1);
  }
  *local_2068.CurPos = L'\0';
  wVar4 = *local_2068.Base;
  pwVar32 = local_2068.Base;
  for (lVar37 = (longlong)(int)((longlong)local_2068.CurPos - (longlong)local_2068.Base >> 1);
      (wVar4 != L'\0' && (lVar37 != 0)); lVar37 = lVar37 + -1) {
    *pwVar32 = *pwVar32 - (-(ushort)((ushort)*pwVar32 - 0x61 < 0x1a) & 0x20);
    pwVar32 = pwVar32 + 1;
    wVar4 = *pwVar32;
  }
  local_21d8 = &local_2068;
  local_2278 = (FName)((UStruct *)param_2)->_padding_;
  pFVar11 = (FBuildParameters *)*local_22c8;
  local_21c0 = 2;
  local_21bc = 0;
  local_21bb = local_23d8;
  ::FName::ToString(&local_2278,(FString *)local_21b8);
  Net::Private::FPropertyReplicationStateDescriptorBuilder::Build
            (&local_2358,&local_2368,(FReplicationStateDescriptorRegistry *)local_21b8,pFVar11);
  if ((FScriptContainerElement *)local_21b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_21b8._0_8_);
  }
  pFVar12 = (FReplicationStateDescriptorRegistry *)*local_22c8;
  if ((pFVar12 != (FReplicationStateDescriptorRegistry *)0x0) &&
     ((FReplicationStateMemberDescriptor *)local_2368.Data.AllocatorInstance.Data !=
      (FReplicationStateMemberDescriptor *)0x0)) {
    local_22b8.Unknown = (ulonglong)param_2 | 1;
    if (((UObject *)((ulonglong)param_2 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (GC::GIsIncrementalReachabilityPending != false)) {
      GC::MarkAsReachable((UObject *)((ulonglong)param_2 & 0xfffffffffffffffe));
    }
    FVar38 = local_22b8;
    if ((local_22b8.Unknown & 1) == 0) {
      do {
        FVar38 = (FFieldObjectUnion)((FFieldObjectUnion *)(FVar38.Unknown + 0x10))->Unknown;
        if ((FVar38.Unknown & 1) != 0) {
          if (((UObject *)(FVar38.Unknown & 0xfffffffffffffffe) != (UObject *)0x0) &&
             (GC::GIsIncrementalReachabilityPending != false)) {
            GC::MarkAsReachable((UObject *)(FVar38.Unknown & 0xfffffffffffffffe));
          }
          break;
        }
      } while ((FVar38.Unknown & 0xfffffffffffffffe) != 0);
      pUVar21 = (UObject *)(FVar38.Unknown & 0xfffffffffffffffe);
      if ((FVar38.Unknown & 1) == 0) {
        pUVar21 = (UObject *)0x0;
      }
    }
    else {
      pUVar21 = (UObject *)(local_22b8.Unknown & 0xfffffffffffffffe);
    }
    Net::Private::FReplicationStateDescriptorRegistry::Register
              (pFVar12,(FFieldVariant *)&local_22b8,pUVar21,
               (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *)&local_2368);
  }
  pFVar35 = local_22b0;
  FVar16.Data = local_2368.Data.AllocatorInstance.Data;
  local_2368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_22b0->MemberDescriptors = (FReplicationStateMemberDescriptor *)FVar16.Data;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2068);
  if (local_2358.Functions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2358.Functions.AllocatorInstance.Data);
  }
  if ((FMemberProperty *)local_2358.Members.AllocatorInstance.Data != (FMemberProperty *)0x0) {
    FMemory::Free(local_2358.Members.AllocatorInstance.Data);
  }
  if (local_2358.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2358.Name.Data.AllocatorInstance.Data);
  }
LAB_1442041a9:
  if (bVar41) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)pFVar35;
}

// CreateDescriptorsForClass @ 1442041f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000144205298) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __cdecl
UE::Net::FReplicationStateDescriptorBuilder::CreateDescriptorsForClass
          (TArray<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TSizedDefaultAllocator<32>_>
           *param_1,UClass *param_2,FParameters *param_3)

{
  TArray<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  wchar_t wVar7;
  FReplicationStateDescriptorRegistry *pFVar8;
  void *pvVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  UObject *pUVar18;
  ulong64 uVar19;
  FPropertyNetSerializerInfo *pFVar20;
  ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
  FVar21;
  longlong lVar22;
  UClass *pUVar23;
  UObject *pUVar24;
  FProperty *pFVar25;
  ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
  FVar26;
  longlong lVar27;
  FString *pFVar28;
  uint uVar29;
  FParameters *pFVar30;
  undefined1 *puVar31;
  ulonglong uVar32;
  ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
  FVar33;
  wchar_t *pwVar34;
  ForAnyElementType FVar35;
  longlong *plVar36;
  ulonglong uVar37;
  wchar_t *pwVar38;
  int iVar39;
  FScriptContainerElement *pFVar40;
  FPropertyReplicationStateType *pFVar41;
  undefined1 uVar42;
  uint uVar43;
  int *piVar44;
  FScriptContainerElement *pFVar45;
  longlong *plVar46;
  TArray<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TSizedDefaultAllocator<32>_>
  *pTVar47;
  bool bVar48;
  bool bVar49;
  undefined1 auStackY_2c68 [32];
  undefined1 local_2c08 [2];
  undefined1 local_2c06;
  undefined1 local_2c05 [5];
  FParameters *local_2c00;
  TArray<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TSizedDefaultAllocator<32>_>
  *local_2bf8;
  ForAnyElementType local_2bf0;
  undefined8 local_2be8;
  undefined1 local_2be0 [8];
  FString local_2bd8;
  FProperty *local_2bc8;
  UObject *local_2bc0;
  longlong local_2bb8;
  TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> local_2bb0;
  FMemberProperty local_2b98;
  FString local_2b48;
  FNetBitArray local_2b38;
  FWeakObjectPtr local_2b20;
  FPropertyReplicationStateDescriptorBuilder local_2b18;
  FString local_2ac8;
  FString local_2ab8;
  undefined8 local_2aa8;
  longlong local_2aa0;
  FName local_2a98;
  FName local_2a90;
  FName local_2a88;
  FFieldObjectUnion local_2a80;
  FName local_2a78;
  undefined8 *local_2a70;
  undefined1 local_2a68 [4];
  FName local_2a64;
  FProperty **local_2a58;
  FString local_2a50;
  FString local_2a40;
  FString local_2a30;
  FString local_2a20;
  TStringBuilderBase<wchar_t> *local_2a10;
  UObjectBaseUtility *local_2a08;
  UReplicationSystem *local_2a00;
  undefined4 local_29f8;
  byte local_29f4;
  undefined1 local_29f3;
  undefined1 local_29f2;
  FName local_29f0;
  TStringBuilderBase<wchar_t> *local_29e8;
  UObjectBaseUtility *local_29e0;
  UReplicationSystem *local_29d8;
  undefined4 local_29d0;
  undefined1 local_29cc;
  undefined1 local_29cb;
  undefined1 local_29ca;
  FName local_29c8 [2];
  FMemberProperty local_29b8;
  FName local_2968;
  <lambda_1> local_2960;
  wchar_t *local_2948;
  int iStack_2940;
  undefined4 uStack_293c;
  undefined1 local_2938 [16];
  FString local_2928;
  undefined1 local_2918 [16];
  FString local_2908;
  FString local_28f8;
  FString local_28e8;
  void *local_28d8 [2];
  FString local_28c8;
  FString local_28b8;
  TStringView<wchar_t> local_28a8;
  FString local_2898;
  FString local_2888;
  FString local_2878;
  ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
  local_2868;
  uint local_2620;
  uint local_261c;
  ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
  local_2618;
  uint local_23d0;
  uint local_23cc;
  TStringBuilderBase<wchar_t> local_23c8;
  wchar_t local_23a8 [4096];
  FPropertyReplicationStateDescriptorBuilder local_3a8;
  FPropertyReplicationStateDescriptorBuilder local_358;
  FPropertyReplicationStateDescriptorBuilder local_308;
  FPropertyReplicationStateDescriptorBuilder local_2b8;
  longlong local_268 [64];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2c68;
  bVar48 = -1 < CpuChannel->Enabled;
  local_2c00 = param_3;
  local_2bf8 = param_1;
  if (bVar48) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2738,
               "FReplicationStateDescriptorBuilder_CreateDescriptorForClass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
               ,0xab2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2738);
  }
  if ((param_2 == (UClass *)0x0) || (((uint)param_2->_padding_ >> 0x1e & 1) != 0)) {
    if (1 < (byte)LogIris._0_1_) {
      if (param_2 == (UClass *)0x0) {
        ::FString::FString(&local_2ab8,L"None");
      }
      else {
        local_2a78 = (FName)param_2->_padding_;
        ::FName::ToString(&local_2a78,&local_2ab8);
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_2ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2ab8.Data.AllocatorInstance.Data);
      }
    }
    uVar19 = 0;
  }
  else {
    pUVar24 = param_3->DefaultStateSource;
    if (pUVar24 == (UObject *)0x0) {
      if ((param_2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        local_2bc0 = pUVar24;
        UClass::InternalCreateDefaultObjectWrapper(param_2);
      }
      pUVar24 = (param_2->ClassDefaultObject).field0_0x0.DebugPtr;
    }
    pFVar8 = param_3->DescriptorRegistry;
    local_2bc0 = pUVar24;
    if (pFVar8 != (FReplicationStateDescriptorRegistry *)0x0) {
      if (((UObject *)((ulonglong)pUVar24 & 0xfffffffffffffffe) != (UObject *)0x0) &&
         (GC::GIsIncrementalReachabilityPending != false)) {
        GC::MarkAsReachable((UObject *)((ulonglong)pUVar24 & 0xfffffffffffffffe));
      }
      uVar29 = ((uint)(((ulonglong)pUVar24 & 0xffff00000) >> 0x14) ^ (uint)((ulonglong)pUVar24 >> 4)
               ) * -0x7a143595;
      uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
      if (*(int *)&(pFVar8->RegisteredDescriptorsMap).field_0x8 !=
          *(int *)&(pFVar8->RegisteredDescriptorsMap).field_0x34) {
        puVar31 = *(undefined1 **)&(pFVar8->RegisteredDescriptorsMap).field_0x40;
        if (puVar31 == (undefined1 *)0x0) {
          puVar31 = &(pFVar8->RegisteredDescriptorsMap).field_0x38;
        }
        iVar39 = *(int *)(puVar31 +
                         (ulonglong)
                         (*(int *)&(pFVar8->RegisteredDescriptorsMap).field_0x48 - 1U &
                         (uVar29 >> 0x10 ^ uVar29)) * 4);
        if (iVar39 != -1) {
          lVar22 = *(longlong *)&pFVar8->RegisteredDescriptorsMap;
          do {
            if (*(ulonglong *)(lVar22 + (longlong)iVar39 * 0x30) == ((ulonglong)pUVar24 | 1)) {
              if ((((iVar39 != -1) && (lVar22 = (longlong)iVar39 * 0x30 + lVar22, lVar22 != 0)) &&
                  ((FWeakObjectPtr *)(lVar22 + 8) != (FWeakObjectPtr *)0x0)) &&
                 (pUVar23 = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar22 + 8)),
                 pUVar23 == param_2)) {
                local_2b20.ObjectIndex = *(int *)(lVar22 + 0x20);
                local_2b20.ObjectSerialNumber = *(int *)(lVar22 + 0x24);
                pUVar18 = FWeakObjectPtr::Get(&local_2b20);
                if (pUVar18 == (UObject *)0x0) {
                  if (6 < (byte)LogIris._0_1_) {
                    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                  }
                }
                else {
                  pTVar1 = (TArray<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TSizedDefaultAllocator<32>_>
                            *)(lVar22 + 0x10);
                  param_3 = local_2c00;
                  if (pTVar1 != (TArray<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TSizedDefaultAllocator<32>_>
                                 *)0x0) {
                    if (6 < (byte)LogIris._0_1_) {
                      UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)pUVar24,&local_28f8,(UObject *)0x0);
                      local_2a64 = (FName)param_2->_padding_;
                      ::FName::ToString(&local_2a64,&local_2a50);
                      Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                      if (local_2a50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_2a50.Data.AllocatorInstance.Data);
                      }
                      if (local_28f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_28f8.Data.AllocatorInstance.Data);
                      }
                    }
                    if ((param_1 == pTVar1) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(const void*)this != (const void*)&Items",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x767,L""), bVar14)) {
                      pcVar10 = (code *)swi(3);
                      uVar19 = (*pcVar10)();
                      return uVar19;
                    }
                    iVar39 = *(int *)(lVar22 + 0x18);
                    iVar16 = Core::Private::
                             ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (8,8,iVar39,&param_1->AllocatorInstance,&param_1->ArrayNum,
                                        &param_1->ArrayMax);
                    pFVar45 = (param_1->AllocatorInstance).Data;
                    memmove(pFVar45 + (longlong)iVar39 * 8,pFVar45,(longlong)iVar16 << 3);
                    ConstructItems<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,int>
                              ((param_1->AllocatorInstance).Data,
                               (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *)
                               (pTVar1->AllocatorInstance).Data,iVar39);
                    uVar19 = (ulong64)param_1->ArrayNum;
                    goto LAB_144206046;
                  }
                }
              }
              break;
            }
            iVar39 = *(int *)(lVar22 + 0x28 + (longlong)iVar39 * 0x30);
          } while (iVar39 != -1);
        }
      }
    }
    local_2bd8.Data.ArrayNum = param_3->SinglePropertyIndex;
    if ((param_3->DescriptorRegistry == (FReplicationStateDescriptorRegistry *)0x0) ||
       (bVar14 = true, local_2bd8.Data.ArrayNum != -1)) {
      bVar14 = false;
    }
    if (CpuChannel->Enabled < 0) {
      UClass::SetUpRuntimeReplicationData(param_2);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2769,
                 "FReplicationStateDescriptorBuilder_SetUpRuntimeReplicationData",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                 ,0xad1);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2769);
      UClass::SetUpRuntimeReplicationData(param_2);
      FCpuProfilerTrace::OutputEndEvent();
    }
    local_2bf0.Data = (FScriptContainerElement *)0x0;
    local_2be8 = 0;
    local_2bb0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2bb0.ArrayNum = 0;
    local_2bb0.ArrayMax = 0;
    if (param_3->GetLifeTimeProperties) {
      bVar49 = -1 < CpuChannel->Enabled;
      if (bVar49) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId2779,
                   "FReplicationStateDescriptorBuilder_GetLifeTimeProperties",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                   ,0xadb);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2779);
      }
      local_2b38.BitCount = (param_2->ClassReps).ArrayNum;
      local_2b38.Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b38.Storage.ArrayNum = 0;
      local_2b38.Storage.ArrayMax = 0;
      FNetBitArray::Init(&local_2b38,local_2b38.BitCount);
      uVar29 = (param_2->ClassReps).ArrayNum;
      if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
      }
      if (local_2be8._4_4_ < (int)uVar29) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar29,&local_2bf0,(int)local_2be8,(int *)((longlong)&local_2be8 + 4));
      }
      if ((param_2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(param_2);
      }
      pUVar24 = (param_2->ClassDefaultObject).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar24 + 0x1e8))(pUVar24,&local_2bf0);
      TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_>::SetNum
                (&local_2bb0,(param_2->ClassReps).ArrayNum,Default);
      iVar39 = (int)local_2be8;
      uVar32 = (ulonglong)(int)local_2be8;
      pFVar45 = local_2bf0.Data + uVar32 * 0x18;
      FVar35.Data = local_2bf0.Data;
      while( true ) {
        if ((int)uVar32 != iVar39) {
          local_2c08[0] = 0;
          `TCheckedPointerIterator<FLifetimeProperty,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_2c08);
        }
        if (FVar35.Data == pFVar45) break;
        uVar6 = *(ushort *)FVar35.Data;
        uVar4 = *(undefined8 *)(FVar35.Data + 0x10);
        uVar11 = *(undefined8 *)FVar35.Data;
        uVar12 = *(undefined8 *)(FVar35.Data + 8);
        if ((local_2bb0.ArrayNum <= (int)(uint)uVar6) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          uVar19 = (*pcVar10)();
          return uVar19;
        }
        FVar13.Data = local_2b38.Storage.AllocatorInstance.Data;
        *(undefined8 *)(local_2bb0.AllocatorInstance.Data + (ulonglong)uVar6 * 0x18) = uVar11;
        *(undefined8 *)(local_2bb0.AllocatorInstance.Data + (ulonglong)uVar6 * 0x18 + 8) = uVar12;
        *(undefined8 *)(local_2bb0.AllocatorInstance.Data + (ulonglong)uVar6 * 0x18 + 0x10) = uVar4;
        uVar6 = *(ushort *)FVar35.Data;
        if ((local_2b38.BitCount <= uVar6) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < BitCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x2a2,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          uVar19 = (*pcVar10)();
          return uVar19;
        }
        *(uint *)(FVar13.Data + (ulonglong)(uVar6 >> 5) * 4) =
             *(uint *)(FVar13.Data + (ulonglong)(uVar6 >> 5) * 4) | 1 << (uVar6 & 0x1f);
        FVar35.Data = FVar35.Data + 0x18;
        uVar32 = local_2be8 & 0xffffffff;
      }
      local_2960.LifeTimeProperties = &local_2bb0;
      local_2960.InObjectClass = param_2;
      FNetBitArrayHelper::
      ForAllUnsetBits<_UE::Net::FReplicationStateDescriptorBuilder::CreateDescriptorsForClass_::__l51::<lambda_1>_&>
                ((uint *)local_2b38.Storage.AllocatorInstance.Data,local_2b38.Storage.ArrayNum,
                 local_2b38.BitCount,&local_2960);
      if (local_2b38.Storage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b38.Storage.AllocatorInstance.Data);
      }
      if (bVar49) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    pFVar45 = (param_2->ClassReps).AllocatorInstance.Data;
    local_3a8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar39 = (param_2->ClassReps).ArrayNum;
    pFVar40 = pFVar45 + (longlong)iVar39 * 0x10;
    local_3a8.Name.Data.ArrayNum = 0;
    local_3a8.Name.Data.ArrayMax = 0;
    local_3a8.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3a8.Members.ArrayNum = 0;
    local_3a8.Members.ArrayMax = 0;
    local_3a8.Functions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3a8.Functions.ArrayNum = 0;
    local_3a8.Functions.ArrayMax = 0;
    local_3a8.StructInfo.SizeAndAlignment.Size = 0;
    local_3a8.StructInfo.SizeAndAlignment.Alignment = 0;
    local_3a8.StructInfo.Struct = (UStruct *)0x0;
    local_3a8.StructInfo.SerializerType = Struct;
    local_358.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_358.Name.Data.ArrayNum = 0;
    local_358.Name.Data.ArrayMax = 0;
    local_358.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_358.Members.ArrayNum = 0;
    local_358.Members.ArrayMax = 0;
    local_358.Functions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_358.Functions.ArrayNum = 0;
    local_358.Functions.ArrayMax = 0;
    local_358.StructInfo.SizeAndAlignment.Size = 0;
    local_358.StructInfo.SizeAndAlignment.Alignment = 0;
    local_358.StructInfo.Struct = (UStruct *)0x0;
    local_358.StructInfo.SerializerType = Struct;
    local_308.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.Name.Data.ArrayNum = 0;
    local_308.Name.Data.ArrayMax = 0;
    local_308.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.Members.ArrayNum = 0;
    local_308.Members.ArrayMax = 0;
    local_308.Functions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.Functions.ArrayNum = 0;
    local_308.Functions.ArrayMax = 0;
    local_308.StructInfo.SizeAndAlignment.Size = 0;
    local_308.StructInfo.SizeAndAlignment.Alignment = 0;
    local_308.StructInfo.Struct = (UStruct *)0x0;
    local_308.StructInfo.SerializerType = Struct;
    local_2b8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.Name.Data.ArrayNum = 0;
    local_2b8.Name.Data.ArrayMax = 0;
    local_2b8.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.Members.ArrayNum = 0;
    local_2b8.Members.ArrayMax = 0;
    local_2b8.Functions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.Functions.ArrayNum = 0;
    local_2b8.Functions.ArrayMax = 0;
    local_2b8.StructInfo.SizeAndAlignment.Size = 0;
    local_2b8.StructInfo.SizeAndAlignment.Alignment = 0;
    local_2b8.StructInfo.Struct = (UStruct *)0x0;
    local_2b8.StructInfo.SerializerType = Struct;
    local_2868.SecondaryData =
         (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
          )0x0;
    local_2620 = 0;
    local_261c = 8;
    pFVar30 = local_2c00;
    while( true ) {
      if ((param_2->ClassReps).ArrayNum != iVar39) {
        local_2c06 = 0;
        `TCheckedPointerIterator<FRepRecord,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_2c06);
        pFVar30 = local_2c00;
      }
      if (pFVar45 == pFVar40) break;
      local_2bc8 = *(FProperty **)pFVar45;
      local_2b98.Property = (FProperty *)0x0;
      local_2b98.PropertyRepNotifyFunction = (UFunction *)0x0;
      local_2b98.SerializerInfo = (FPropertyNetSerializerInfo *)0x0;
      local_2b98.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      local_2b98.Traits = None;
      local_2b98.ReplicationCondition = COND_None;
      local_2b98.ChangeMaskBits = 0;
      local_2b98.ChangeMaskGroupName.ComparisonIndex.Value = 0;
      local_2b98.ChangeMaskGroupName.Number = 0;
      local_2b98.ExternalSizeAndAlignment.Size = 0;
      local_2b98.ExternalSizeAndAlignment.Alignment = 0;
      if ((local_2bd8.Data.ArrayNum == -1) ||
         ((uint)local_2bc8->RepIndex == pFVar30->SinglePropertyIndex)) {
        if (!param_3->IncludeSuper) {
          uVar32 = local_2bc8->_padding_;
          if ((((uVar32 & 1) != 0) && ((UObject *)(uVar32 & 0xfffffffffffffffe) != (UObject *)0x0))
             && (GC::GIsIncrementalReachabilityPending != false)) {
            GC::MarkAsReachable((UObject *)(uVar32 & 0xfffffffffffffffe));
          }
          if (((UObject *)((ulonglong)param_2 & 0xfffffffffffffffe) != (UObject *)0x0) &&
             (GC::GIsIncrementalReachabilityPending != false)) {
            GC::MarkAsReachable((UObject *)((ulonglong)param_2 & 0xfffffffffffffffe));
          }
          pFVar30 = local_2c00;
          if (uVar32 != ((ulonglong)param_2 | 1)) goto LAB_144204dfe;
        }
        pFVar25 = local_2bc8;
        pFVar20 = FPropertyNetSerializerInfoRegistry::FindSerializerInfo(local_2bc8);
        if (pFVar20 == (FPropertyNetSerializerInfo *)0x0) {
          pFVar30 = local_2c00;
          if (2 < (byte)LogIris._0_1_) {
            (**(code **)(local_2bc8->_padding_ + 0x68))(local_2bc8,local_28d8,0,0);
            pFVar25 = local_2bc8;
            bVar49 = IsThisNotNull(local_2bc8,"FField::GetName");
            if (bVar49) {
              ::FName::ToString((FName *)&pFVar25->_padding_,&local_2ac8);
            }
            else {
              ::FString::FString(&local_2ac8,L"None");
            }
            local_29f0 = (FName)param_2->_padding_;
            ::FName::ToString(&local_29f0,&local_2a40);
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            if (local_2a40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a40.Data.AllocatorInstance.Data);
            }
            if (local_2ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2ac8.Data.AllocatorInstance.Data);
            }
            pFVar30 = local_2c00;
            if (local_28d8[0] != (void *)0x0) {
              FMemory::Free(local_28d8[0]);
              pFVar30 = local_2c00;
            }
          }
        }
        else {
          local_2b98.Property = pFVar25;
          local_2b98.ChangeMaskBits = 1;
          local_2b98.ExternalSizeAndAlignment.Size = 0;
          local_2b98.ExternalSizeAndAlignment.Alignment = 0;
          local_2b98.SerializerInfo = pFVar20;
          Net::Private::FPropertyReplicationStateDescriptorBuilder::GetIrisPropertyTraits
                    (&local_2b98,pFVar25,&local_2bb0,param_2);
          Net::Private::FPropertyReplicationStateDescriptorBuilder::GetSerializerTraits
                    (&local_2b98,pFVar25,pFVar20,
                     local_2c00->AllowFastArrayWithExtraReplicatedProperties);
          if (((local_2b98.Traits >> 0xb & 1) != 0) ||
             (((local_2b98.Traits >> 10 & 1) != 0 &&
              (Net::Private::bIrisUseChangeMaskForTArray != false)))) {
            local_2b98.ChangeMaskBits = 0x40;
          }
          if (local_2b98.CreateAndRegisterReplicationFragmentFunction ==
              (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
               *)0x0) {
            local_2b98.CreateAndRegisterReplicationFragmentFunction =
                 (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
                  *)(**(code **)(pFVar20->_padding_ + 0x28))(pFVar20);
          }
          uVar32 = local_2b98._32_8_ & 0xffffffff;
          pFVar30 = local_2c00;
          if (local_2b98.ReplicationCondition != COND_Never) {
            if ((uVar32 >> 0xf & 1) == 0) {
              if (local_2b98.CreateAndRegisterReplicationFragmentFunction ==
                  (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
                   *)0x0) {
                if ((uVar32 >> 0xb & 1) == 0) goto LAB_144204af0;
                if (1 < (byte)LogIris._0_1_) {
                  FField::GetFullName((FField *)local_2bc8,&local_28e8);
                  Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                  if (local_28e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_28e8.Data.AllocatorInstance.Data);
                  }
                }
                local_2a58 = &local_2bc8;
                `UE::Net::FReplicationStateDescriptorBuilder::CreateDescriptorsForClass'::__l82::
                <lambda_2>::operator()(&local_2a58);
                pFVar30 = local_2c00;
              }
              else {
                FVar21 = (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                          )&local_2868;
                if (local_2868.SecondaryData !=
                    (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                     )0x0) {
                  FVar21 = local_2868.SecondaryData;
                }
                if ((ulonglong)FVar21 <= &local_2b98) {
                  FVar21 = (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                            )&local_2868;
                  if (local_2868.SecondaryData !=
                      (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                       )0x0) {
                    FVar21 = local_2868.SecondaryData;
                  }
                  if ((&local_2b98 <
                       (FMemberProperty *)((longlong)FVar21 + (longlong)(int)local_261c * 0x48)) &&
                     (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar49)) {
                    pcVar10 = (code *)swi(3);
                    uVar19 = (*pcVar10)();
                    return uVar19;
                  }
                }
                if (local_2620 == local_261c) {
                  local_2620 = Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>_>
                                         (0x848,&local_2868,(int *)&local_261c);
                }
                lVar22 = (longlong)(int)local_2620;
                FVar21 = (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                          )&local_2868;
                if (local_2868.SecondaryData !=
                    (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                     )0x0) {
                  FVar21 = local_2868.SecondaryData;
                }
                plVar46 = (longlong *)((longlong)FVar21 + lVar22 * 0x48);
                local_2620 = local_2620 + 1;
                *plVar46 = (longlong)local_2b98.Property;
                plVar46[1] = (longlong)local_2b98.PropertyRepNotifyFunction;
                *(FPropertyNetSerializerInfo **)((uchar *)((longlong)FVar21 + 0x10) + lVar22 * 0x48)
                     = local_2b98.SerializerInfo;
                *(_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
                  **)((uchar *)((longlong)FVar21 + 0x10) + lVar22 * 0x48 + 8) =
                     local_2b98.CreateAndRegisterReplicationFragmentFunction;
                *(undefined8 *)((uchar *)((longlong)FVar21 + 0x20) + lVar22 * 0x48) =
                     local_2b98._32_8_;
                *(ulonglong *)((uchar *)((longlong)FVar21 + 0x20) + lVar22 * 0x48 + 8) =
                     CONCAT44(local_2b98.ChangeMaskGroupName.ComparisonIndex.Value,
                              CONCAT22(local_2b98._42_2_,local_2b98.ChangeMaskBits));
                *(ulonglong *)((uchar *)((longlong)FVar21 + 0x30) + lVar22 * 0x48) =
                     CONCAT44(local_2b98._52_4_,local_2b98.ChangeMaskGroupName.Number);
                *(ulong64 *)((uchar *)((longlong)FVar21 + 0x30) + lVar22 * 0x48 + 8) =
                     local_2b98.ExternalSizeAndAlignment.Size;
                *(ulong64 *)((uchar *)((longlong)FVar21 + 0x40) + lVar22 * 0x48) =
                     local_2b98.ExternalSizeAndAlignment.Alignment;
                pFVar30 = local_2c00;
              }
            }
            else {
              local_2b98.CreateAndRegisterReplicationFragmentFunction =
                   (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
                    *)0x0;
LAB_144204af0:
              if ((local_2b98._32_8_ & 1) != 0) {
                Net::Private::FPropertyReplicationStateDescriptorBuilder::AddMemberProperty
                          (&local_358,&local_2b98);
                uVar32 = local_2b98._32_8_ & 0xffffffff;
              }
              if ((uVar32 >> 1 & 1) != 0) {
                Net::Private::FPropertyReplicationStateDescriptorBuilder::AddMemberProperty
                          (&local_308,&local_2b98);
                uVar32 = local_2b98._32_8_ & 0xffffffff;
              }
              pFVar30 = local_2c00;
              if ((uVar32 & 3) == 0) {
                Net::Private::FPropertyReplicationStateDescriptorBuilder::AddMemberProperty
                          (&local_2b8,&local_2b98);
                pFVar30 = local_2c00;
              }
            }
          }
        }
      }
LAB_144204dfe:
      pFVar45 = pFVar45 + 0x10;
    }
    iStack_2940 = 0x14;
    local_2948 = L"/Script/Engine.Actor";
    pUVar23 = Z_Construct_UClass_UClass_NoRegister();
    local_28a8._12_4_ = uStack_293c;
    local_28a8.Size = iStack_2940;
    local_28a8.DataPtr = local_2948;
    pUVar24 = StaticFindObject(pUVar23,(UObject *)0x0,&local_28a8,ExactClass);
    if (pUVar24 == (UObject *)0x0) {
      pFVar28 = GetTypeName<UClass>(&local_2898);
      if ((pFVar28->Data).ArrayNum == 0) {
        pwVar38 = L"";
      }
      else {
        pwVar38 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar38);
    }
    pUVar23 = Z_Construct_UClass_UClass_NoRegister();
    iVar39 = (int)pUVar23->_padding_;
    if ((*(int *)(*(longlong *)&pUVar24->field_0x10 + 0x38) < iVar39) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar24->field_0x10 + 0x30) + (longlong)iVar39 * 8) !=
        &pUVar23->_padding_)) {
      pFVar28 = GetTypeName<UClass>(&local_2888);
      pwVar38 = L"";
      if ((pFVar28->Data).ArrayNum == 0) {
        pwVar34 = L"";
      }
      else {
        pwVar34 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
      }
      pFVar28 = GetFullNameForCastLogError<UObject>(&local_2878,pUVar24);
      if ((pFVar28->Data).ArrayNum != 0) {
        pwVar38 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar38,pwVar34);
    }
    if ((*(int *)&pUVar24[1].field_0x10 <= (int)param_2->_padding_) &&
       (*(undefined1 **)(param_2->_padding_ + (longlong)*(int *)&pUVar24[1].field_0x10 * 8) ==
        &pUVar24[1].field_0x8)) {
      pFVar25 = UStruct::FindPropertyByName
                          ((UStruct *)param_2,
                           Net::Private::
                           ReplicationStateDescriptorBuilder_NAME_NetCullDistanceSquared);
      if (pFVar25 == (FProperty *)0x0) {
        if (1 < (byte)LogIris._0_1_) {
          local_29c8[0] =
               Net::Private::ReplicationStateDescriptorBuilder_NAME_NetCullDistanceSquared;
          ::FName::ToString(local_29c8,&local_28c8);
          local_2968 = (FName)param_2->_padding_;
          ::FName::ToString(&local_2968,&local_2a30);
          Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_FPropertyReplic_150b758c8,
                     (FLogCategoryBase *)&LogIris);
          if (local_2a30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a30.Data.AllocatorInstance.Data);
          }
          if (local_28c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28c8.Data.AllocatorInstance.Data);
          }
        }
        bVar49 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_6449277768747185296>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                            ,0xb70,"false");
        if (bVar49) {
          pcVar10 = (code *)swi(3);
          uVar19 = (*pcVar10)();
          return uVar19;
        }
      }
      else {
        local_29b8.CreateAndRegisterReplicationFragmentFunction =
             (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
              *)0x0;
        local_29b8.SerializerInfo =
             (FPropertyNetSerializerInfo *)&Net::Private::NopNetSerializerInfo;
        local_29b8.ChangeMaskGroupName.ComparisonIndex.Value = 0;
        local_29b8.ChangeMaskGroupName.Number = 0;
        local_29b8.ChangeMaskBits = 1;
        local_29b8.ExternalSizeAndAlignment.Size = 0;
        local_29b8.ExternalSizeAndAlignment.Alignment = 0;
        local_29b8.PropertyRepNotifyFunction = (UFunction *)0x0;
        local_29b8.Traits = None;
        local_29b8.ReplicationCondition = COND_None;
        local_29b8.Property = pFVar25;
        Net::Private::FPropertyReplicationStateDescriptorBuilder::GetIrisPropertyTraits
                  (&local_29b8,pFVar25,(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *)0x0,
                   param_2);
        Net::Private::FPropertyReplicationStateDescriptorBuilder::GetSerializerTraits
                  (&local_29b8,pFVar25,local_29b8.SerializerInfo,false);
        local_29b8.ReplicationCondition = COND_Never;
        local_29b8.Traits = local_29b8.Traits | (HasPushBasedDirtiness|HasLifetimeConditionals);
        Net::Private::FPropertyReplicationStateDescriptorBuilder::AddMemberProperty
                  (&local_308,&local_29b8);
      }
    }
    if (local_2bd8.Data.ArrayNum == -1) {
      local_2aa8 = 0x40;
      lVar22 = 0x40;
      pUVar23 = param_2;
      do {
        if (lVar22 == 0) {
          local_2a70 = &local_2aa8;
          bVar49 = `UE::Net::FReplicationStateDescriptorBuilder::CreateDescriptorsForClass'::__l165
                   ::<lambda_3>::operator()(&local_2a70);
          lVar27 = 0;
          if (!bVar49) break;
        }
        lVar22 = lVar22 + -1;
        local_268[lVar22] = (longlong)pUVar23;
        pUVar23 = (UClass *)pUVar23->_padding_;
        lVar27 = lVar22;
      } while (pUVar23 != (UClass *)0x0);
      iVar39 = 0x40 - (int)lVar27;
      plVar46 = local_268 + lVar27;
      if ((iVar39 < 0) &&
         (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar49)) {
        pcVar10 = (code *)swi(3);
        uVar19 = (*pcVar10)();
        return uVar19;
      }
      plVar2 = plVar46 + iVar39;
      for (; plVar46 != plVar2; plVar46 = plVar46 + 1) {
        iVar39 = *(int *)(*plVar46 + 0x108);
        plVar36 = *(longlong **)(*plVar46 + 0x100);
        if ((iVar39 < 0) &&
           (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar49)) {
          pcVar10 = (code *)swi(3);
          uVar19 = (*pcVar10)();
          return uVar19;
        }
        plVar3 = plVar36 + iVar39;
        for (; plVar36 != plVar3; plVar36 = plVar36 + 1) {
          lVar22 = *plVar36;
          if (lVar22 != 0) {
            pUVar23 = Z_Construct_UClass_UFunction_NoRegister();
            iVar39 = (int)pUVar23->_padding_;
            if ((iVar39 <= *(int *)(*(longlong *)(lVar22 + 0x10) + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) + (longlong)iVar39 * 8) ==
                &pUVar23->_padding_)) {
              local_2bb8 = lVar22;
              if ((local_3a8.Functions.AllocatorInstance.Data <=
                   (FScriptContainerElement *)&local_2bb8) &&
                 (((FScriptContainerElement *)&local_2bb8 <
                   local_3a8.Functions.AllocatorInstance.Data +
                   (longlong)local_3a8.Functions.ArrayMax * 8 &&
                  (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar49)))) {
                pcVar10 = (code *)swi(3);
                uVar19 = (*pcVar10)();
                return uVar19;
              }
              iVar39 = local_3a8.Functions.ArrayNum;
              if (local_3a8.Functions.ArrayNum == local_3a8.Functions.ArrayMax) {
                iVar39 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_3a8.Functions.AllocatorInstance,
                                    &local_3a8.Functions.ArrayMax);
              }
              local_3a8.Functions.ArrayNum = iVar39 + 1;
              *(longlong *)(local_3a8.Functions.AllocatorInstance.Data + (longlong)iVar39 * 8) =
                   local_2bb8;
            }
          }
        }
      }
    }
    local_2aa0 = param_2->_padding_;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&Net::Private::FPropertyReplicationStateDescriptorBuilder::UniqueClassNames,
               (FName *)local_2a68,(bool *)&local_2aa0);
    pUVar23 = UReplicationStateDescriptorConfig::StaticClass();
    if ((pUVar23->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar23);
    }
    pUVar24 = (pUVar23->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar24[1].field_0x20 == '\0') {
      iVar39 = *(int *)&pUVar24[1].field_0x18;
      plVar46 = *(longlong **)&pUVar24[1].field_0x10;
      if ((iVar39 < 0) &&
         (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar49)) {
        pcVar10 = (code *)swi(3);
        uVar19 = (*pcVar10)();
        return uVar19;
      }
      plVar2 = plVar46 + iVar39;
      for (; plVar46 != plVar2; plVar46 = plVar46 + 1) {
        if (*plVar46 == param_2->_padding_) {
          uVar42 = 1;
          goto LAB_1442052a0;
        }
      }
      uVar42 = 0;
    }
    else {
      uVar42 = 1;
    }
LAB_1442052a0:
    local_23c8.bIsDynamic = false;
    local_23c8.bIsExternal = false;
    local_23c8.Base = local_23a8;
    pFVar41 = InternalPropertyReplicationStateTypes;
    uVar32 = 0;
    local_23c8.CurPos = local_23a8;
    piVar44 = &local_3a8.Functions.ArrayNum;
    local_23c8.End = (wchar_t *)&local_3a8;
    do {
      if ((0 < piVar44[-4]) || (*piVar44 != 0)) {
        if ((int)((longlong)local_23c8.CurPos - (longlong)local_23c8.Base >> 1) == 0) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,(UObject *)0x0,&local_23c8);
          if (local_23c8.End < (FPropertyReplicationStateDescriptorBuilder *)(local_23c8.CurPos + 1)
             ) {
            TStringBuilderBase<wchar_t>::Extend(&local_23c8,1);
          }
          *local_23c8.CurPos = L'\0';
          wVar7 = *local_23c8.Base;
          pwVar38 = local_23c8.Base;
          for (lVar22 = (longlong)
                        (int)((longlong)local_23c8.CurPos - (longlong)local_23c8.Base >> 1);
              (wVar7 != L'\0' && (lVar22 != 0)); lVar22 = lVar22 + -1) {
            *pwVar38 = *pwVar38 - (-(ushort)((ushort)*pwVar38 - 0x61 < 0x1a) & 0x20);
            pwVar38 = pwVar38 + 1;
            wVar7 = *pwVar38;
          }
        }
        local_29e8 = &local_23c8;
        pwVar38 = pFVar41->NamePostFix;
        pFVar8 = local_2c00->DescriptorRegistry;
        local_29e0 = (UObjectBaseUtility *)local_2bc0;
        local_29d8 = local_2c00->ReplicationSystem;
        local_29cc = (int)uVar32 == 1;
        local_29d0 = 1;
        local_29cb = 0;
        local_2a98 = (FName)param_2->_padding_;
        local_29ca = uVar42;
        ::FName::ToString(&local_2a98,&local_2928);
        ::FString::ConcatFC((FString *)local_2938,&local_2928,pwVar38);
        Net::Private::FPropertyReplicationStateDescriptorBuilder::Build
                  (&local_3a8 + uVar32,(FString *)local_2be0,
                   (FReplicationStateDescriptorRegistry *)local_2938,(FBuildParameters *)pFVar8);
        if ((FScriptContainerElement *)local_2938._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_2938._0_8_);
        }
        if (local_2928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2928.Data.AllocatorInstance.Data);
        }
        pTVar1 = local_2bf8;
        pFVar45 = (local_2bf8->AllocatorInstance).Data;
        if (((pFVar45 <= (FScriptContainerElement *)local_2be0) &&
            ((FScriptContainerElement *)local_2be0 < pFVar45 + (longlong)local_2bf8->ArrayMax * 8))
           && (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar49)) {
          pcVar10 = (code *)swi(3);
          uVar19 = (*pcVar10)();
          return uVar19;
        }
        iVar39 = pTVar1->ArrayNum;
        if (iVar39 == pTVar1->ArrayMax) {
          iVar39 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
        }
        pTVar1->ArrayNum = iVar39 + 1;
        pFVar45 = (pTVar1->AllocatorInstance).Data;
        *(undefined8 *)(pFVar45 + (longlong)iVar39 * 8) = 0;
        *(undefined1 (*) [8])(pFVar45 + (longlong)iVar39 * 8) = local_2be0;
        if (local_2be0 != (undefined1  [8])0x0) {
          if ((*(EReplicationStateTraits *)((longlong)local_2be0 + 0xb8) >> 3 & 1) != 0) {
            LOCK();
            *(atomic<int> *)((longlong)local_2be0 + 0xbc) =
                 (atomic<int>)((int)*(atomic<int> *)((longlong)local_2be0 + 0xbc) + 1);
            UNLOCK();
          }
          if (local_2be0 != (undefined1  [8])0x0) {
            FReplicationStateDescriptor::Release((FReplicationStateDescriptor *)local_2be0);
          }
        }
      }
      uVar29 = (int)uVar32 + 1;
      uVar32 = (ulonglong)uVar29;
      piVar44 = piVar44 + 0x14;
      pFVar41 = pFVar41 + 1;
    } while (uVar29 < 4);
    uVar32 = (ulonglong)local_2620;
    if ((1 < (int)local_2620) &&
       (uVar37 = 0, bReplicateCustomDeltaPropertiesInRepIndexOrder == false)) {
      local_2618.SecondaryData =
           (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
            )0x0;
      local_23d0 = 0;
      local_23cc = 8;
      if ((int)local_2620 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar32);
      }
      if (8 < (int)local_2620) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>_>
                  (0x48,8,local_2620,&local_2618,0,(int *)&local_23cc);
        uVar32 = (ulonglong)local_2620;
        uVar37 = (ulonglong)local_23d0;
      }
      iVar39 = (int)local_2be8;
      pFVar45 = local_2bf0.Data + (longlong)(int)local_2be8 * 0x18;
      FVar21 = local_2618.SecondaryData;
      FVar35.Data = local_2bf0.Data;
      while( true ) {
        if ((int)local_2be8 != iVar39) {
          local_2c05[0] = 0;
          `TCheckedPointerIterator<FLifetimeProperty,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_2c05);
          uVar32 = (ulonglong)local_2620;
          uVar37 = (ulonglong)local_23d0;
          FVar21 = local_2618.SecondaryData;
        }
        uVar29 = (uint)uVar37;
        if (FVar35.Data == pFVar45) break;
        FVar33 = (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                  )&local_2868;
        if (local_2868.SecondaryData !=
            (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
             )0x0) {
          FVar33 = local_2868.SecondaryData;
        }
        FVar26 = (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                  )((longlong)FVar33 + (longlong)(int)uVar32 * 0x48);
        if (FVar33 == FVar26) {
LAB_144205843:
          FVar35.Data = FVar35.Data + 0x18;
        }
        else {
          do {
            if (*(ushort *)FVar35.Data == *(ushort *)(*(longlong *)FVar33 + 0x40)) {
              if (FVar33 != (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                             )0x0) {
                FVar26 = (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                          )&local_2618;
                if (FVar21 != (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                               )0x0) {
                  FVar26 = FVar21;
                }
                if ((ulonglong)FVar26 <= (ulonglong)FVar33) {
                  FVar26 = (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                            )&local_2618;
                  if (FVar21 != (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                                 )0x0) {
                    FVar26 = FVar21;
                  }
                  if (((ulonglong)FVar33 <
                       (ulonglong)((longlong)FVar26 + (longlong)(int)local_23cc * 0x48)) &&
                     (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), FVar21 = local_2618.SecondaryData, uVar29 = local_23d0,
                     bVar49)) {
                    pcVar10 = (code *)swi(3);
                    uVar19 = (*pcVar10)();
                    return uVar19;
                  }
                }
                if (uVar29 == local_23cc) {
                  uVar29 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>_>
                                     (0x848,&local_2618,(int *)&local_23cc);
                  FVar21 = local_2618.SecondaryData;
                }
                lVar27 = (longlong)(int)uVar29;
                local_23d0 = uVar29 + 1;
                lVar22 = *(longlong *)((longlong)FVar33 + 8);
                FVar26 = (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                          )&local_2618;
                if (FVar21 != (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                               )0x0) {
                  FVar26 = FVar21;
                }
                plVar46 = (longlong *)((longlong)FVar26 + lVar27 * 0x48);
                *plVar46 = *(longlong *)FVar33;
                plVar46[1] = lVar22;
                lVar22 = *(longlong *)((longlong)FVar33 + 0x18);
                *(longlong *)((uchar *)((longlong)FVar26 + 0x10) + lVar27 * 0x48) =
                     *(longlong *)((longlong)FVar33 + 0x10);
                *(longlong *)((uchar *)((longlong)FVar26 + 0x10) + lVar27 * 0x48 + 8) = lVar22;
                lVar22 = *(longlong *)((longlong)FVar33 + 0x28);
                *(longlong *)((uchar *)((longlong)FVar26 + 0x20) + lVar27 * 0x48) =
                     *(longlong *)((longlong)FVar33 + 0x20);
                *(longlong *)((uchar *)((longlong)FVar26 + 0x20) + lVar27 * 0x48 + 8) = lVar22;
                lVar22 = *(longlong *)((longlong)FVar33 + 0x38);
                *(longlong *)((uchar *)((longlong)FVar26 + 0x30) + lVar27 * 0x48) =
                     *(longlong *)((longlong)FVar33 + 0x30);
                *(longlong *)((uchar *)((longlong)FVar26 + 0x30) + lVar27 * 0x48 + 8) = lVar22;
                *(longlong *)((uchar *)((longlong)FVar26 + 0x40) + lVar27 * 0x48) =
                     *(longlong *)((longlong)FVar33 + 0x40);
                uVar32 = (ulonglong)local_2620;
                uVar37 = (ulonglong)local_23d0;
                FVar21 = local_2618.SecondaryData;
              }
              goto LAB_144205843;
            }
            FVar33 = (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                      )((longlong)FVar33 + 0x48);
          } while (FVar33 != FVar26);
          FVar35.Data = FVar35.Data + 0x18;
        }
      }
      local_2620 = uVar29;
      FVar33 = (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                )&local_2618;
      if (FVar21 != (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                     )0x0) {
        FVar33 = FVar21;
      }
      if ((uVar29 == 0) && (local_261c == 0)) {
        local_261c = 8;
      }
      else {
        Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>_>
                  (0x48,8,uVar29,local_261c,&local_2868,uVar29,(int *)&local_261c);
        FVar21 = (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                  )&local_2868;
        if (local_2868.SecondaryData !=
            (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
             )0x0) {
          FVar21 = local_2868.SecondaryData;
        }
        if (uVar29 != 0) {
          memcpy((void *)FVar21,(void *)FVar33,(longlong)(int)uVar29 * 0x48);
        }
        uVar37 = (ulonglong)local_2620;
        FVar21 = local_2618.SecondaryData;
      }
      uVar32 = uVar37;
      if (FVar21 != (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                     )0x0) {
        FMemory::Free((void *)FVar21);
        uVar32 = (ulonglong)local_2620;
      }
    }
    pTVar1 = local_2bf8;
    uVar43 = 0;
    uVar29 = (uint)uVar32;
    if (uVar29 != 0) {
      while( true ) {
        uVar17 = 0;
        if ((int)uVar43 < (int)uVar32) {
          uVar17 = ~uVar43 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar49)) {
          pcVar10 = (code *)swi(3);
          uVar19 = (*pcVar10)();
          return uVar19;
        }
        FVar21 = (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
                  )&local_2868;
        if (local_2868.SecondaryData !=
            (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
             )0x0) {
          FVar21 = local_2868.SecondaryData;
        }
        pFVar45 = (FScriptContainerElement *)((longlong)FVar21 + (longlong)(int)uVar43 * 0x48);
        if ((((byte)*(undefined4 *)
                     ((uchar *)((longlong)FVar21 + 0x20) + (longlong)(int)uVar43 * 0x48) & 3) == 3)
           && (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!EnumHasAllFlags(MemberProperty.Traits, EMemberPropertyTraits::InitOnly | EMemberPropertyTraits::HasLifetimeConditionals)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                                   ,0xbcb,L""), bVar49)) {
          pcVar10 = (code *)swi(3);
          uVar19 = (*pcVar10)();
          return uVar19;
        }
        local_2b18.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2b18.Name.Data.ArrayNum = 0;
        local_2b18.Name.Data.ArrayMax = 0;
        local_2b18.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2b18.Members.ArrayNum = 0;
        local_2b18.Members.ArrayMax = 0;
        local_2b18.Functions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2b18.Functions.ArrayNum = 0;
        local_2b18.Functions.ArrayMax = 0;
        local_2b18.StructInfo.SizeAndAlignment.Size = 0;
        local_2b18.StructInfo.SizeAndAlignment.Alignment = 0;
        local_2b18.StructInfo.Struct = (UStruct *)0x0;
        local_2b18.StructInfo.SerializerType = Struct;
        local_29f2 = 0;
        iVar39 = 0;
        if ((int)((longlong)local_23c8.CurPos - (longlong)local_23c8.Base >> 1) == 0) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,(UObject *)0x0,&local_23c8);
          if (local_23c8.End < (FPropertyReplicationStateDescriptorBuilder *)(local_23c8.CurPos + 1)
             ) {
            TStringBuilderBase<wchar_t>::Extend(&local_23c8,1);
          }
          *local_23c8.CurPos = L'\0';
          wVar7 = *local_23c8.Base;
          pwVar38 = local_23c8.Base;
          for (lVar22 = (longlong)
                        (int)((longlong)local_23c8.CurPos - (longlong)local_23c8.Base >> 1);
              (wVar7 != L'\0' && (lVar22 != 0)); lVar22 = lVar22 + -1) {
            *pwVar38 = *pwVar38 - (-(ushort)((ushort)*pwVar38 - 0x61 < 0x1a) & 0x20);
            pwVar38 = pwVar38 + 1;
            wVar7 = *pwVar38;
          }
          iVar39 = local_2b18.Members.ArrayNum;
        }
        pFVar30 = local_2c00;
        local_2a10 = &local_23c8;
        local_2a08 = (UObjectBaseUtility *)local_2bc0;
        local_2a00 = local_2c00->ReplicationSystem;
        local_29f8 = 1;
        local_29f4 = (byte)pFVar45[0x20] & 1;
        local_29f3 = 0;
        if ((local_2b18.Members.AllocatorInstance.Data <= pFVar45) &&
           (pFVar45 < local_2b18.Members.AllocatorInstance.Data +
                      (longlong)local_2b18.Members.ArrayMax * 0x48)) {
          bVar49 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar49) {
            pcVar10 = (code *)swi(3);
            uVar19 = (*pcVar10)();
            return uVar19;
          }
          iVar39 = local_2b18.Members.ArrayNum;
        }
        if (iVar39 == local_2b18.Members.ArrayMax) {
          iVar39 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,&local_2b18.Members.AllocatorInstance,
                              &local_2b18.Members.ArrayMax);
        }
        lVar27 = (longlong)iVar39;
        local_2b18.Members.ArrayNum = iVar39 + 1;
        lVar22 = *(longlong *)(pFVar45 + 8);
        *(longlong *)(local_2b18.Members.AllocatorInstance.Data + lVar27 * 0x48) =
             *(longlong *)pFVar45;
        *(longlong *)(local_2b18.Members.AllocatorInstance.Data + lVar27 * 0x48 + 8) = lVar22;
        lVar22 = *(longlong *)(pFVar45 + 0x18);
        *(longlong *)(local_2b18.Members.AllocatorInstance.Data + lVar27 * 0x48 + 0x10) =
             *(longlong *)(pFVar45 + 0x10);
        *(longlong *)(local_2b18.Members.AllocatorInstance.Data + lVar27 * 0x48 + 0x10 + 8) = lVar22
        ;
        lVar22 = *(longlong *)(pFVar45 + 0x28);
        *(longlong *)(local_2b18.Members.AllocatorInstance.Data + lVar27 * 0x48 + 0x20) =
             *(longlong *)(pFVar45 + 0x20);
        *(longlong *)(local_2b18.Members.AllocatorInstance.Data + lVar27 * 0x48 + 0x20 + 8) = lVar22
        ;
        lVar22 = *(longlong *)(pFVar45 + 0x38);
        *(longlong *)(local_2b18.Members.AllocatorInstance.Data + lVar27 * 0x48 + 0x30) =
             *(longlong *)(pFVar45 + 0x30);
        *(longlong *)(local_2b18.Members.AllocatorInstance.Data + lVar27 * 0x48 + 0x30 + 8) = lVar22
        ;
        *(longlong *)(local_2b18.Members.AllocatorInstance.Data + lVar27 * 0x48 + 0x40) =
             *(longlong *)(pFVar45 + 0x40);
        local_2b48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2b48.Data.ArrayNum = 0;
        local_2b48.Data.ArrayMax = 0;
        pvVar9 = *(void **)pFVar45;
        bVar49 = IsThisNotNull(pvVar9,"FField::GetName");
        if (bVar49) {
          ::FName::ToString((FName *)((longlong)pvVar9 + 0x20),&local_2b48);
        }
        else {
          ::FString::operator=(&local_2b48,L"None");
        }
        local_2a90 = (FName)param_2->_padding_;
        FVar35.Data = (FScriptContainerElement *)L"";
        if (local_2b48.Data.ArrayNum != 0) {
          FVar35.Data = local_2b48.Data.AllocatorInstance.Data;
        }
        pFVar8 = pFVar30->DescriptorRegistry;
        ::FName::ToString(&local_2a90,&local_2908);
        ::FString::ConcatFC((FString *)local_2918,&local_2908,(wchar_t *)FVar35.Data);
        Net::Private::FPropertyReplicationStateDescriptorBuilder::Build
                  (&local_2b18,&local_2bd8,(FReplicationStateDescriptorRegistry *)local_2918,
                   (FBuildParameters *)pFVar8);
        if ((FScriptContainerElement *)local_2918._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_2918._0_8_);
        }
        if (local_2908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2908.Data.AllocatorInstance.Data);
        }
        pFVar45 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar45 <= (FScriptContainerElement *)&local_2bd8) &&
            ((FScriptContainerElement *)&local_2bd8 < pFVar45 + (longlong)pTVar1->ArrayMax * 8)) &&
           (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar49)) {
          pcVar10 = (code *)swi(3);
          uVar19 = (*pcVar10)();
          return uVar19;
        }
        iVar39 = pTVar1->ArrayNum;
        if (iVar39 == pTVar1->ArrayMax) {
          iVar39 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
        }
        pTVar1->ArrayNum = iVar39 + 1;
        pFVar45 = (pTVar1->AllocatorInstance).Data;
        *(undefined8 *)(pFVar45 + (longlong)iVar39 * 8) = 0;
        *(FScriptContainerElement **)(pFVar45 + (longlong)iVar39 * 8) =
             local_2bd8.Data.AllocatorInstance.Data;
        if ((FReplicationStateDescriptor *)local_2bd8.Data.AllocatorInstance.Data !=
            (FReplicationStateDescriptor *)0x0) {
          if ((*(EReplicationStateTraits *)(local_2bd8.Data.AllocatorInstance.Data + 0xb8) >> 3 & 1)
              != 0) {
            LOCK();
            *(atomic<int> *)(local_2bd8.Data.AllocatorInstance.Data + 0xbc) =
                 (atomic<int>)
                 ((int)*(atomic<int> *)(local_2bd8.Data.AllocatorInstance.Data + 0xbc) + 1);
            UNLOCK();
          }
          if ((FReplicationStateDescriptor *)local_2bd8.Data.AllocatorInstance.Data !=
              (FReplicationStateDescriptor *)0x0) {
            FReplicationStateDescriptor::Release
                      ((FReplicationStateDescriptor *)local_2bd8.Data.AllocatorInstance.Data);
          }
        }
        if (local_2b48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b48.Data.AllocatorInstance.Data);
        }
        if (local_2b18.Functions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b18.Functions.AllocatorInstance.Data);
        }
        if (local_2b18.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b18.Members.AllocatorInstance.Data);
        }
        if (local_2b18.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b18.Name.Data.AllocatorInstance.Data);
        }
        uVar43 = uVar43 + 1;
        if (uVar43 == uVar29) break;
        uVar32 = (ulonglong)local_2620;
      }
    }
    pUVar24 = local_2bc0;
    pTVar47 = local_2bf8;
    if ((bVar14) && (pTVar1->ArrayNum != 0)) {
      if (6 < (byte)LogIris._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_2bc0,&local_28b8,(UObject *)0x0)
        ;
        local_2a88 = (FName)param_2->_padding_;
        ::FName::ToString(&local_2a88,&local_2a20);
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_2a20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a20.Data.AllocatorInstance.Data);
        }
        if (local_28b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28b8.Data.AllocatorInstance.Data);
        }
      }
      local_2a80.Object = pUVar24 | 1;
      pFVar8 = local_2c00->DescriptorRegistry;
      pUVar24 = (UObject *)((ulonglong)pUVar24 & 0xfffffffffffffffe);
      if ((pUVar24 != (UObject *)0x0) && (GC::GIsIncrementalReachabilityPending != false)) {
        GC::MarkAsReachable(pUVar24);
      }
      pTVar47 = local_2bf8;
      Net::Private::FReplicationStateDescriptorRegistry::Register
                (pFVar8,(FFieldVariant *)&local_2a80,(UObject *)param_2,local_2bf8);
    }
    uVar19 = (ulong64)pTVar47->ArrayNum;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_23c8);
    if (local_2868.SecondaryData !=
        (ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
         )0x0) {
      FMemory::Free((void *)local_2868.SecondaryData);
    }
    if (local_2b8.Functions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Functions.AllocatorInstance.Data);
    }
    if (local_2b8.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Members.AllocatorInstance.Data);
    }
    if (local_2b8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Name.Data.AllocatorInstance.Data);
    }
    if (local_308.Functions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Functions.AllocatorInstance.Data);
    }
    if (local_308.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Members.AllocatorInstance.Data);
    }
    if (local_308.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Name.Data.AllocatorInstance.Data);
    }
    if (local_358.Functions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Functions.AllocatorInstance.Data);
    }
    if (local_358.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Members.AllocatorInstance.Data);
    }
    if (local_358.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Name.Data.AllocatorInstance.Data);
    }
    if (local_3a8.Functions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Functions.AllocatorInstance.Data);
    }
    if (local_3a8.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Members.AllocatorInstance.Data);
    }
    if (local_3a8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Name.Data.AllocatorInstance.Data);
    }
    if (local_2bb0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2bb0.AllocatorInstance.Data);
    }
    if (local_2bf0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2bf0.Data);
    }
  }
LAB_144206046:
  if (bVar48) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return uVar19;
}

// operator() @ 1504b2d20

bool __thiscall
`UE::Net::FReplicationStateDescriptorBuilder::CreateDescriptorsForClass'::__l82::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6449277768747185357>);
  if (bVar2) {
    FField::GetFullName((FField *)**(undefined8 **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6449277768747185357>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b2d8a;
    }
  }
  bVar2 = false;
LAB_1504b2d8a:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b2dc0

bool __thiscall
`UE::Net::FReplicationStateDescriptorBuilder::CreateDescriptorsForClass'::__l165::<lambda_3>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6449277768747185279>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6449277768747185279>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


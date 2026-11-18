// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 148679580

UClass * __cdecl USoundNodeGroupControl::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeGroupControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeGroupControl",
               &Z_Registration_Info_UClass_USoundNodeGroupControl.InnerSingleton,
               StaticRegisterNativesUSoundNodeGroupControl,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeGroupControl>,
               InternalVTableHelperCtorCaller<USoundNodeGroupControl>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeGroupControl.InnerSingleton;
}

// USoundNodeGroupControl @ 148697690

USoundNodeGroupControl * __thiscall
USoundNodeGroupControl::USoundNodeGroupControl(USoundNodeGroupControl *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeGroupControl__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->GroupSizes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupSizes).ArrayNum = 0;
  (this->GroupSizes).ArrayMax = 0;
  return this;
}

// USoundNodeGroupControl @ 1486976d0

USoundNodeGroupControl * __thiscall
USoundNodeGroupControl::USoundNodeGroupControl
          (USoundNodeGroupControl *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeGroupControl__6B_;
  (this->GroupSizes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupSizes).ArrayNum = 0;
  (this->GroupSizes).ArrayMax = 0;
  return this;
}

// ~USoundNodeGroupControl @ 14869bab0

void __thiscall USoundNodeGroupControl::~USoundNodeGroupControl(USoundNodeGroupControl *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundNodeGroupControl__6B_;
  pFVar1 = (this->GroupSizes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateStartingConnectors @ 1486af4a0

void __thiscall USoundNodeGroupControl::CreateStartingConnectors(USoundNodeGroupControl *this)

{
  (**(code **)(this->_padding_ + 800))(this,(int)this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x0001486af4c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 800))(this,(int)this->_padding_);
  return;
}

// FixGroupSizesArray @ 1486b7ec0

void __thiscall USoundNodeGroupControl::FixGroupSizesArray(USoundNodeGroupControl *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  piVar1 = &(this->GroupSizes).ArrayNum;
  iVar7 = *piVar1;
  pTVar2 = &this->GroupSizes;
  uVar5 = (int)this->_padding_ - 1;
  uVar8 = 0;
  if (0 < (int)uVar5) {
    uVar8 = uVar5;
  }
  if ((int)uVar8 <= iVar7) {
    if ((int)uVar8 < iVar7) {
      uVar5 = iVar7 - uVar8;
      if (((int)(uVar5 | uVar8) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4;
        iVar7 = ((this->GroupSizes).ArrayNum - uVar8) - uVar5;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 4,(longlong)iVar7 << 2);
        }
        piVar1 = &(this->GroupSizes).ArrayNum;
        *piVar1 = *piVar1 - uVar5;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar2->AllocatorInstance,(this->GroupSizes).ArrayNum,
                   &(this->GroupSizes).ArrayMax);
      }
    }
    return;
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar8 - iVar7,&pTVar2->AllocatorInstance,piVar1,
                     &(this->GroupSizes).ArrayMax);
  memset((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4,0,
         (longlong)(int)(uVar8 - iVar7) << 2);
  return;
}

// GetMaxChildNodes @ 1486c1240

int __thiscall USoundNodeGroupControl::GetMaxChildNodes(USoundNodeGroupControl *this)

{
  return 0x20;
}

// GetPrivateStaticClass @ 1486c4db0

UClass * __cdecl USoundNodeGroupControl::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeGroupControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeGroupControl",
               &Z_Registration_Info_UClass_USoundNodeGroupControl.InnerSingleton,
               StaticRegisterNativesUSoundNodeGroupControl,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeGroupControl>,
               InternalVTableHelperCtorCaller<USoundNodeGroupControl>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeGroupControl.InnerSingleton;
}

// InsertChildNode @ 1486d04f0

void __thiscall USoundNodeGroupControl::InsertChildNode(USoundNodeGroupControl *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  FixGroupSizesArray(this);
  piVar1 = &(this->GroupSizes).ArrayNum;
  if ((param_1 < 0) || (*piVar1 + 1 < param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index <= GroupSizes.Num() + 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundNodeGroupControl.cpp"
                       ,0xae,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = (this->GroupSizes).AllocatorInstance.Data;
  if (param_1 < *piVar1) {
    local_14[0] = 1;
    if ((pFVar5 <= (FScriptContainerElement *)local_14) &&
       ((FScriptContainerElement *)local_14 < pFVar5 + (longlong)(this->GroupSizes).ArrayMax * 4)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (this->GroupSizes).ArrayNum;
    piVar1 = &(this->GroupSizes).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->GroupSizes).AllocatorInstance,piVar1);
    }
    pFVar5 = (this->GroupSizes).AllocatorInstance.Data;
    (this->GroupSizes).ArrayNum = iVar4 + 1;
    pFVar5 = pFVar5 + (longlong)param_1 * 4;
    memmove(pFVar5 + 4,pFVar5,(longlong)(iVar4 - param_1) << 2);
    *(undefined4 *)((this->GroupSizes).AllocatorInstance.Data + (longlong)param_1 * 4) = local_14[0]
    ;
  }
  else {
    local_18 = 1;
    if ((pFVar5 <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)(this->GroupSizes).ArrayMax * 4))
    {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (this->GroupSizes).ArrayNum;
    piVar1 = &(this->GroupSizes).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->GroupSizes).AllocatorInstance,piVar1);
    }
    (this->GroupSizes).ArrayNum = iVar4 + 1;
    *(undefined4 *)((this->GroupSizes).AllocatorInstance.Data + (longlong)iVar4 * 4) = local_18;
  }
  USoundNode::InsertChildNode((USoundNode *)this,param_1);
  return;
}

// NotifyWaveInstanceFinished @ 1486d35c0

bool __thiscall
USoundNodeGroupControl::NotifyWaveInstanceFinished
          (USoundNodeGroupControl *this,FWaveInstance *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint *puVar5;
  TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FActiveSound *pFVar11;
  uint uVar12;
  longlong lVar13;
  int *piVar14;
  FScriptContainerElement *pFVar15;
  int *piVar16;
  uint local_res10 [2];
  TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> local_res18;
  USoundNodeGroupControl *local_58;
  uint **local_50;
  uint *local_48;
  
  pFVar11 = param_1->ActiveSound;
  local_res18.Value =
       (uint *)FNotifyBufferFinishedHooks::GetHashForNode
                         (&param_1->NotifyBufferFinishedHooks,(USoundNode *)this);
  puVar5 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&pFVar11->SoundNodeOffsetMap,(ulong64)local_res18.Value);
  pTVar1 = &pFVar11->SoundNodeData;
  piVar8 = &(pFVar11->SoundNodeData).ArrayNum;
  if (puVar5 == (uint *)0x0) {
    local_res10[0] =
         UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (1,1,8,&pTVar1->AllocatorInstance,piVar8,&(pFVar11->SoundNodeData).ArrayMax);
    *(undefined8 *)((pTVar1->AllocatorInstance).Data + (int)local_res10[0]) = 0;
    local_50 = &local_res18.Value;
    local_48 = local_res10;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&pFVar11->SoundNodeOffsetMap,&local_res18,(bool *)&local_50);
    lVar13 = (longlong)(int)local_res10[0];
    uVar7 = 0;
    if ((int)local_res10[0] < *piVar8) {
      uVar7 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar15 = (pTVar1->AllocatorInstance).Data + lVar13;
    *(int *)pFVar15 = 1;
  }
  else {
    uVar7 = *puVar5;
    uVar12 = 0;
    if ((int)uVar7 < *piVar8) {
      uVar12 = ~uVar7 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res10[0] = *puVar5;
    pFVar15 = (pTVar1->AllocatorInstance).Data + (int)uVar7;
  }
  piVar14 = (int *)0x0;
  uVar12 = local_res10[0] + 4;
  uVar7 = 0;
  if ((int)uVar12 < *piVar8) {
    uVar7 = ~uVar12 >> 0x1f;
  }
  local_res10[0] = uVar12;
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar10 = (pTVar1->AllocatorInstance).Data;
  if ((*(int *)pFVar15 != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("*RequiresInitialization == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundNodeGroupControl.cpp"
                         ,0x2b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pTVar6 = TMapBase<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,0>_>
                   *)&GroupControlSlotUsageMap,this);
  if (pTVar6 != (TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
                 *)0x0) {
    uVar7 = *(uint *)(pFVar10 + (int)uVar12);
    uVar12 = 0;
    if ((int)uVar7 < pTVar6->ArrayNum) {
      uVar12 = ~uVar7 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar11 = param_1->ActiveSound;
    pFVar15 = (pTVar6->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x50;
    uVar7 = ((uint)((ulonglong)pFVar11 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar11 >> 4)) *
            -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    if (*(int *)(pFVar15 + 8) != *(int *)(pFVar15 + 0x34)) {
      pFVar10 = *(FScriptContainerElement **)(pFVar15 + 0x40);
      if (*(FScriptContainerElement **)(pFVar15 + 0x40) == (FScriptContainerElement *)0x0) {
        pFVar10 = pFVar15 + 0x38;
      }
      iVar9 = *(int *)(pFVar10 +
                      (ulonglong)(*(int *)(pFVar15 + 0x48) - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
      if (iVar9 != -1) {
        do {
          lVar13 = *(longlong *)&pFVar15->field_0x0 + (longlong)iVar9 * 0x18;
          if (*(FActiveSound **)(*(longlong *)&pFVar15->field_0x0 + (longlong)iVar9 * 0x18) ==
              pFVar11) {
            piVar8 = (int *)(lVar13 + 8);
            if (lVar13 == 0) {
              piVar8 = piVar14;
            }
            if (piVar8 == (int *)0x0) {
              return false;
            }
            if (1 < *piVar8) {
              *piVar8 = *piVar8 + -1;
              return false;
            }
            if (*(int *)(pFVar15 + 8) - *(int *)(pFVar15 + 0x34) < 2) {
              iVar9 = pTVar6->ArrayNum;
              piVar8 = piVar14;
              piVar16 = piVar14;
              if (0 < iVar9) {
                do {
                  uVar12 = (uint)piVar14;
                  uVar7 = 0;
                  if ((int)uVar12 < iVar9) {
                    uVar7 = ~uVar12 >> 0x1f;
                  }
                  if ((uVar7 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    uVar4 = (*pcVar2)();
                    return (bool)uVar4;
                  }
                  pFVar10 = (pTVar6->AllocatorInstance).Data;
                  piVar14 = (int *)(ulonglong)(uVar12 + 1);
                  iVar9 = pTVar6->ArrayNum;
                  uVar7 = (int)piVar8 +
                          (*(int *)((longlong)piVar16 + (longlong)(pFVar10 + 8)) -
                          *(int *)((longlong)piVar16 + (longlong)(pFVar10 + 0x34)));
                  piVar8 = (int *)(ulonglong)uVar7;
                  piVar16 = piVar16 + 0x14;
                } while ((int)(uVar12 + 1) < iVar9);
                if (uVar7 == 1) {
                  if (GroupControlSlotUsageMap._8_4_ == GroupControlSlotUsageMap._52_4_) {
                    return false;
                  }
                  uVar7 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4))
                          * -0x7a143595;
                  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
                  local_58 = this;
                  TSet<TTuple<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  ::RemoveImpl<USoundNodeGroupControl_const_*>
                            ((TSet<TTuple<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                              *)&GroupControlSlotUsageMap,uVar7 >> 0x10 ^ uVar7,&local_58);
                  return false;
                }
              }
              pFVar11 = param_1->ActiveSound;
            }
            TMapBase<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>
            ::Remove((TMapBase<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>
                      *)pFVar15,pFVar11);
            return false;
          }
          iVar9 = *(int *)(lVar13 + 0x10);
        } while (iVar9 != -1);
      }
    }
  }
  return false;
}

// ParseNodes @ 1486dc6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
USoundNodeGroupControl::ParseNodes
          (USoundNodeGroupControl *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
          FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  UObjectBaseUtility *this_00;
  code *pcVar2;
  TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
  *this_01;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
  *this_02;
  UClass *pUVar6;
  FString *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  longlong lVar13;
  TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
  *pTVar14;
  TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *pTVar15;
  longlong lVar16;
  TSet<TTuple<FActiveSound_*,int>,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>,FDefaultSetAllocator>
  *this_03;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar21;
  FScriptContainerElement *pFVar22;
  FActiveSound *pFVar23;
  int *piVar24;
  undefined1 auStackY_408 [32];
  uint local_3d8;
  uint local_3d4;
  int local_3d0 [2];
  FScriptContainerElement *local_3c8;
  FSoundParseParameters *local_3c0;
  FActiveSound *local_3b8;
  int local_3b0;
  int local_3ac;
  undefined1 local_3a8 [8];
  int local_3a0 [2];
  TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *local_398;
  FSoundParseParameters *local_390;
  undefined1 local_388 [8];
  TPairInitializer<FActiveSound_*_&&,int_const_&> local_380;
  longlong *local_370;
  code *local_368;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_360;
  TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
  *local_358;
  int *local_350;
  USoundNodeGroupControl *local_348;
  USoundNodeGroupControl **local_340;
  FActiveSound *local_338;
  USoundNodeGroupControl *local_330;
  USoundNodeGroupControl **local_328;
  FActiveSound *local_320;
  FActiveSound **local_318;
  FSoundParseParameters **local_310;
  uint *local_308;
  FSoundParseParameters **local_300;
  uint *local_2f8;
  FActiveSound **local_2f0;
  int *local_2e8;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FSoundParseParameters local_298;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_408;
  local_390 = param_4;
  pTVar14 = (TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
             *)0x0;
  local_398 = param_5;
  local_3b0 = param_5->ArrayNum;
  local_358 = (TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
               *)&param_3->SoundNodeOffsetMap;
  local_3c0 = (FSoundParseParameters *)param_2;
  local_3b8 = param_3;
  local_380.Value = (int *)param_1;
  puVar5 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)local_358,param_2);
  pTVar21 = &param_3->SoundNodeData;
  piVar24 = &(param_3->SoundNodeData).ArrayNum;
  uVar9 = 0;
  local_360 = pTVar21;
  local_350 = piVar24;
  if (puVar5 == (uint *)0x0) {
    local_3d8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,8,&pTVar21->AllocatorInstance,piVar24,
                           &(param_3->SoundNodeData).ArrayMax);
    *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)local_3d8) = 0;
    local_310 = &local_3c0;
    local_308 = &local_3d8;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&param_3->SoundNodeOffsetMap,
               (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)local_388,
               (bool *)&local_310);
    lVar13 = (longlong)(int)local_3d8;
    uVar8 = uVar9;
    if ((int)local_3d8 < *piVar24) {
      uVar8 = ~local_3d8 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar20 = (pTVar21->AllocatorInstance).Data + lVar13;
    *(int *)pFVar20 = 1;
  }
  else {
    uVar8 = *puVar5;
    uVar12 = uVar9;
    if ((int)uVar8 < *piVar24) {
      uVar12 = ~uVar8 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_3d8 = *puVar5;
    pFVar20 = (pTVar21->AllocatorInstance).Data + (int)uVar8;
  }
  uVar12 = local_3d8 + 4;
  uVar8 = 0;
  if ((int)uVar12 < (param_3->SoundNodeData).ArrayNum) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  local_3d8 = uVar12;
  local_3c8 = pFVar20;
  if ((uVar8 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_3ac = *(int *)pFVar20;
  pFVar22 = (pTVar21->AllocatorInstance).Data + (int)uVar12;
  uVar8 = 0;
  this_02 = pTVar14;
  if (local_3ac != 0) {
    *(uint *)pFVar22 = 0;
    this_02 = TMapBase<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,0>_>
                      *)&GroupControlSlotUsageMap,this);
    if ((this_02 !=
         (TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
          *)0x0) && (0 < (this->GroupSizes).ArrayNum)) {
      do {
        uVar10 = (uint)pTVar14;
        uVar12 = uVar9;
        if ((int)uVar10 < this_02->ArrayNum) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar12 = *(uint *)pFVar22;
        pFVar20 = (this_02->AllocatorInstance).Data;
        iVar1 = *(int *)(pFVar20 + (longlong)(int)uVar10 * 0x50 + 8);
        iVar19 = *(int *)(pFVar20 + (longlong)(int)uVar10 * 0x50 + 0x34);
        uVar10 = uVar8;
        if ((int)uVar12 < (this->GroupSizes).ArrayNum) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar20 = local_3c8;
        if (iVar1 - iVar19 <
            *(int *)((this->GroupSizes).AllocatorInstance.Data + (longlong)(int)uVar12 * 4)) break;
        *(uint *)pFVar22 = *(uint *)pFVar22 + 1;
        pTVar14 = (TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
                   *)(ulonglong)*(uint *)pFVar22;
      } while ((int)*(uint *)pFVar22 < (this->GroupSizes).ArrayNum);
    }
    *(int *)pFVar20 = 0;
  }
  uVar12 = *(uint *)pFVar22;
  lVar13 = (longlong)(int)uVar12;
  pTVar15 = local_398;
  pFVar23 = local_3b8;
  if ((int)uVar12 < (int)this->_padding_) {
    uVar10 = uVar8;
    if ((int)uVar12 < (int)this->_padding_) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar15 = local_398;
    pFVar23 = local_3b8;
    if (*(longlong *)(this->_padding_ + lVar13 * 8) != 0) {
      FSoundParseParameters::FSoundParseParameters(&local_298,local_390);
      FNotifyBufferFinishedHooks::AddNotify
                (&local_298.NotifyBufferFinishedHooks,(USoundNode *)this,(ulong64)local_3c0);
      uVar10 = *(uint *)pFVar22;
      uVar4 = uVar9;
      if ((int)uVar10 < (int)this->_padding_) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = *(uint *)pFVar22;
      local_370 = *(longlong **)(this->_padding_ + (longlong)(int)uVar10 * 8);
      local_368 = *(code **)(*local_370 + 0x2f0);
      if ((int)uVar4 < (int)this->_padding_) {
        uVar9 = ~uVar4 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_3c8 = *(FScriptContainerElement **)(this->_padding_ + (longlong)(int)uVar4 * 8);
      local_390 = local_3c0;
      if (0x1f < uVar4) {
        this_00 = *(UObjectBaseUtility **)(local_3c8 + 0x20);
        if (this_00 == (UObjectBaseUtility *)0x0) {
          pFVar7 = GetTypeName<USoundCue>(&local_2d0);
          if ((pFVar7->Data).ArrayNum == 0) {
            pwVar17 = L"";
          }
          else {
            pwVar17 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar17);
        }
        pUVar6 = USoundCue::StaticClass();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          pFVar7 = GetTypeName<USoundCue>(&local_2c0);
          pwVar17 = L"";
          if ((pFVar7->Data).ArrayNum == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          }
          pFVar7 = GetFullNameForCastLogError<UObject>(&local_2b0,(UObject *)this_00);
          if ((pFVar7->Data).ArrayNum != 0) {
            pwVar17 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar17,pwVar18);
        }
        UObjectBaseUtility::GetFullName(this_00,&local_2e0,(UObject *)0x0,None);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ChildIndex < MAX_ALLOWED_CHILD_NODES",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundNode.cpp"
                           ,0x5b,L"Too many children (%d) in SoundCue \'%s\'");
        if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pTVar15 = local_398;
      pFVar23 = local_3b8;
      uVar9 = ((uint)((ulonglong)local_3c8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_3c8 >> 4)) *
              -0x7a143595;
      uVar10 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      uVar10 = uVar10 >> 0x10 ^ uVar10;
      uVar9 = ((uint)((ulonglong)local_390 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_390 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      uVar9 = uVar9 >> 0x10 ^ uVar9;
      (*local_368)(local_370,local_380.Value,
                   (uVar10 * 0x40 + uVar4 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10) + uVar9 * 0x40 +
                   (uVar9 >> 2) + 0x9e3779b9 ^ uVar9,local_3b8);
      FSoundParseParameters::~FSoundParseParameters(&local_298);
      pTVar21 = local_360;
    }
  }
  this_01 = local_358;
  local_3d0[0] = pTVar15->ArrayNum - local_3b0;
  if (local_3ac == 0) {
    if (0 < local_3d0[0]) {
      if (this_02 ==
          (TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
           *)0x0) {
        local_328 = &local_330;
        local_330 = this;
        TSet<TTuple<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<USoundNodeGroupControl_*_&&>_>
                  ((TSet<TTuple<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)&GroupControlSlotUsageMap,
                   (TKeyInitializer<USoundNodeGroupControl_*_&&> *)(local_3a8 + 4),
                   (bool *)&local_328);
        this_02 = (TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
                   *)(GroupControlSlotUsageMap._0_8_ + 8 + (longlong)(int)local_3a8._4_4_ * 0x20);
        TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
        ::SetNum(this_02,(this->GroupSizes).ArrayNum + 1,Default);
      }
      iVar1 = local_3d0[0];
      if ((int)uVar12 < this_02->ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_03 = (TSet<TTuple<FActiveSound_*,int>,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>,FDefaultSetAllocator>
                 *)((this_02->AllocatorInstance).Data + lVar13 * 0x50);
      uVar9 = ((uint)((ulonglong)pFVar23 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar23 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      uVar9 = uVar9 >> 0x10 ^ uVar9;
      if (*(int *)&(this_03->Elements).field_0x8 != *(int *)&(this_03->Elements).field_0x34) {
        FVar11 = (this_03->Hash).SecondaryData;
        if (FVar11 == (ForElementType<FSetElementId>)0x0) {
          FVar11 = (ForElementType<FSetElementId>)&this_03->Hash;
        }
        iVar19 = *(int *)((longlong)FVar11 + (ulonglong)(this_03->HashSize - 1U & uVar9) * 4);
        if (iVar19 != -1) {
          lVar13 = *(longlong *)&this_03->Elements;
          do {
            if (*(FActiveSound **)(lVar13 + (longlong)iVar19 * 0x18) == pFVar23) {
              if ((iVar19 != -1) && (lVar13 = lVar13 + (longlong)iVar19 * 0x18, lVar13 != 0))
              goto LAB_1486dd071;
              break;
            }
            iVar19 = *(int *)(lVar13 + 0x10 + (longlong)iVar19 * 0x18);
          } while (iVar19 != -1);
        }
      }
      local_318 = &local_320;
      local_320 = pFVar23;
      TSet<TTuple<FActiveSound_*,int>,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FActiveSound_*_&&>_>
                (this_03,(uint)local_3a0,(TKeyInitializer<FActiveSound_*_&&> *)(ulonglong)uVar9,
                 (bool *)&local_318);
      lVar13 = *(longlong *)&this_03->Elements + (longlong)local_3a0[0] * 0x18;
LAB_1486dd071:
      *(int *)(lVar13 + 8) = iVar1;
    }
  }
  else {
    puVar5 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
             ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                     *)local_358,(ulong64)local_3c0);
    if (puVar5 == (uint *)0x0) {
      piVar24 = &pTVar21->ArrayNum;
      local_3d4 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,8,&pTVar21->AllocatorInstance,piVar24,&pTVar21->ArrayMax);
      *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)local_3d4) = 0;
      local_300 = &local_3c0;
      local_2f8 = &local_3d4;
      TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
                (this_01,(TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)
                         (local_388 + 4),(bool *)&local_300);
      lVar16 = (longlong)(int)local_3d4;
      uVar9 = uVar8;
      if ((int)local_3d4 < *piVar24) {
        uVar9 = ~local_3d4 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar20 = (pTVar21->AllocatorInstance).Data + lVar16;
      *(undefined4 *)pFVar20 = 1;
    }
    else {
      uVar9 = *puVar5;
      uVar10 = uVar8;
      if ((int)uVar9 < pTVar21->ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_3d4 = *puVar5;
      pFVar20 = (pTVar21->AllocatorInstance).Data + (int)uVar9;
      piVar24 = local_350;
    }
    local_3d4 = local_3d4 + 4;
    if (((int)local_3d4 < 0 || *piVar24 <= (int)local_3d4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_3d0[0] == 0) {
      *(undefined4 *)pFVar20 = 1;
    }
    else {
      if (this_02 ==
          (TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
           *)0x0) {
        local_340 = &local_348;
        local_348 = this;
        TSet<TTuple<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<USoundNodeGroupControl_*_&&>_>
                  ((TSet<TTuple<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)&GroupControlSlotUsageMap,
                   (TKeyInitializer<USoundNodeGroupControl_*_&&> *)local_3a8,(bool *)&local_340);
        this_02 = (TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
                   *)(GroupControlSlotUsageMap._0_8_ + 8 + (longlong)(int)local_3a8._0_4_ * 0x20);
        TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>
        ::SetNum(this_02,(this->GroupSizes).ArrayNum + 1,Default);
      }
      if ((int)uVar12 < this_02->ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_2f0 = &local_338;
      local_2e8 = local_3d0;
      local_338 = local_3b8;
      TSet<TTuple<FActiveSound_*,int>,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FActiveSound_*_&&,int_const_&>_>
                ((TSet<TTuple<FActiveSound_*,int>,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>,FDefaultSetAllocator>
                  *)((this_02->AllocatorInstance).Data + lVar13 * 0x50),&local_380,
                 (bool *)&local_2f0);
    }
  }
  return;
}

// RemoveChildNode @ 1486e82e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall USoundNodeGroupControl::RemoveChildNode(USoundNodeGroupControl *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  FixGroupSizesArray(this);
  if ((param_1 < 0) || ((this->GroupSizes).ArrayNum < param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index <= GroupSizes.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundNodeGroupControl.cpp"
                       ,0xc0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (this->GroupSizes).ArrayNum;
  if (0 < iVar1) {
    iVar4 = param_1 + -1;
    if (param_1 != iVar1) {
      iVar4 = param_1;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt(&this->GroupSizes,iVar4,Default);
  }
  USoundNode::RemoveChildNode((USoundNode *)this,param_1);
  return;
}

// StaticRegisterNativesUSoundNodeGroupControl @ 1486f1950

void __cdecl USoundNodeGroupControl::StaticRegisterNativesUSoundNodeGroupControl(void)

{
  return;
}


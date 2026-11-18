// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// operator() @ 1419d6580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `FMemoryImage::Flatten'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  FSHA1 local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  plVar2 = *(longlong **)this;
  iVar1 = (int)plVar2[1];
  uVar6 = 0;
  if (param_1 < iVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    local_b8 = (longlong)param_1;
    local_b0 = (longlong)iVar1;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)(*plVar2 + (longlong)param_1 * 8);
  FSHA1::FSHA1(&local_a8);
  FSHA1::Update(&local_a8,*(uchar **)(lVar3 + 0x18),(longlong)*(int *)(lVar3 + 0x20));
  FSHA1::Update(&local_a8,*(uchar **)(lVar3 + 0x28),(ulonglong)(uint)(*(int *)(lVar3 + 0x30) * 0xc))
  ;
  FSHA1::Update(&local_a8,*(uchar **)(lVar3 + 0x38),(ulonglong)(uint)(*(int *)(lVar3 + 0x40) << 4));
  UpdateHashNamePatches
            ((TArray<FMemoryImageNamePointer,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x48),&local_a8
            );
  UpdateHashNamePatches
            ((TArray<FMemoryImageNamePointer,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x58),&local_a8
            );
  FSHA1::Final(&local_a8);
  FSHA1::GetHash(&local_a8,(uchar *)(lVar3 + 0x68));
  FSHA1::~FSHA1(&local_a8);
  return;
}

// AllocateSection @ 1419e0600

FMemoryImageSection * __thiscall FMemoryImage::AllocateSection(FMemoryImage *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMemoryImageSection *pFVar6;
  FMemoryImageSection *local_18 [2];
  
  local_18[0] = ::operator_new(0x80);
  if (local_18[0] == (FMemoryImageSection *)0x0) {
    local_18[0] = (FMemoryImageSection *)0x0;
  }
  else {
    *(undefined4 *)&local_18[0]->_padding_ = 0;
    (local_18[0]->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18[0]->_padding_ = (longlong)&___7FMemoryImageSection__6B_;
    (local_18[0]->Bytes).ArrayNum = 0;
    (local_18[0]->Bytes).ArrayMax = 0;
    (local_18[0]->Pointers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_18[0]->Pointers).ArrayNum = 0;
    (local_18[0]->Pointers).ArrayMax = 0;
    (local_18[0]->VTables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_18[0]->VTables).ArrayNum = 0;
    (local_18[0]->VTables).ArrayMax = 0;
    (local_18[0]->ScriptNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_18[0]->ScriptNames).ArrayNum = 0;
    (local_18[0]->ScriptNames).ArrayMax = 0;
    (local_18[0]->MemoryImageNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_18[0]->MemoryImageNames).ArrayNum = 0;
    (local_18[0]->MemoryImageNames).ArrayMax = 0;
    local_18[0]->ParentImage = this;
    (local_18[0]->Hash).Hash[0] = '\0';
    (local_18[0]->Hash).Hash[1] = '\0';
    (local_18[0]->Hash).Hash[2] = '\0';
    (local_18[0]->Hash).Hash[3] = '\0';
    (local_18[0]->Hash).Hash[4] = '\0';
    (local_18[0]->Hash).Hash[5] = '\0';
    (local_18[0]->Hash).Hash[6] = '\0';
    (local_18[0]->Hash).Hash[7] = '\0';
    (local_18[0]->Hash).Hash[8] = '\0';
    (local_18[0]->Hash).Hash[9] = '\0';
    (local_18[0]->Hash).Hash[10] = '\0';
    (local_18[0]->Hash).Hash[0xb] = '\0';
    (local_18[0]->Hash).Hash[0xc] = '\0';
    (local_18[0]->Hash).Hash[0xd] = '\0';
    (local_18[0]->Hash).Hash[0xe] = '\0';
    (local_18[0]->Hash).Hash[0xf] = '\0';
    (local_18[0]->Hash).Hash[0x10] = '\0';
    (local_18[0]->Hash).Hash[0x11] = '\0';
    (local_18[0]->Hash).Hash[0x12] = '\0';
    (local_18[0]->Hash).Hash[0x13] = '\0';
    local_18[0]->MaxAlignment = 1;
    *(int *)&local_18[0]->_padding_ = (int)local_18[0]->_padding_ + 1;
  }
  pFVar6 = local_18[0];
  pFVar2 = (this->Sections).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Sections).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMemoryImageSection *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Sections).ArrayNum;
  piVar1 = &(this->Sections).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->Sections).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Sections).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 8) = 0;
  *(FMemoryImageSection **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
  return pFVar6;
}

// Flatten @ 1419fa0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMemoryImage::Flatten(FMemoryImage *this,FMemoryImageResult *param_1,bool param_2)

{
  code *pcVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint *puVar16;
  int *piVar17;
  int *piVar18;
  ulonglong uVar19;
  int *piVar20;
  ulonglong uVar21;
  undefined1 auStackY_1b8 [32];
  <lambda_1> local_168 [8];
  ForAnyElementType local_160;
  undefined8 local_158;
  FIdentityFunctor local_150;
  FIdentityFunctor local_14f;
  FIdentityFunctor local_14e [2];
  int local_14c;
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  undefined4 local_138 [2];
  ForAnyElementType local_130;
  int local_128 [2];
  longlong local_120;
  undefined8 local_118;
  uint local_110;
  FMemoryImageResult *local_108;
  longlong local_100;
  longlong local_f8;
  TPairInitializer<FSHAHash_const_&,int_const_&> local_f0;
  uint *local_e0;
  FMemoryImage *local_d8;
  TArrayView<std::nullptr_t,int> local_d0;
  code *local_c0;
  int **local_b8;
  longlong local_b0;
  int *local_a8;
  TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar12 = (this->Sections).ArrayNum;
  uVar13 = 0;
  local_160.Data = (FScriptContainerElement *)0x0;
  local_158 = 0;
  local_108 = param_1;
  local_d8 = this;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (0 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar12,&local_160,0,(int *)((longlong)&local_158 + 4));
    uVar13 = local_158 & 0xffffffff;
  }
  uVar12 = (this->Sections).ArrayNum;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_13c = 0;
  local_138[0] = 0xffffffff;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  local_140 = 0;
  if (uVar12 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar12,&local_148,0,&local_13c);
    if (0 < (int)uVar12) {
      uVar13 = (ulonglong)uVar12;
      do {
        if (((local_148.Data <= (FScriptContainerElement *)local_138) &&
            ((FScriptContainerElement *)local_138 < local_148.Data + (longlong)local_13c * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_140 == local_13c) {
          local_140 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_148,&local_13c);
        }
        iVar4 = local_140 + 1;
        *(undefined4 *)(local_148.Data + (longlong)local_140 * 4) = local_138[0];
        uVar13 = uVar13 - 1;
        local_140 = iVar4;
      } while (uVar13 != 0);
    }
    uVar13 = local_158 & 0xffffffff;
  }
  lVar8 = 0;
  iVar4 = (this->Sections).ArrayNum;
  if (param_2) {
    local_d0.DataPtr = (void **)0x0;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMemoryImage::Flatten'::__l5::<lambda_1>,void,int>::Call;
    local_b8 = &local_f0.Value;
    local_d0.ArrayNum = 0;
    local_f0.Value = (int *)this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar4,1,(TFunctionRef<void___cdecl(int)> *)&local_c0,local_168[0]
               ,Unbalanced,&local_d0);
    uVar12 = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    iVar4 = (this->Sections).ArrayNum;
    local_98.Elements._48_4_ = 0xffffffff;
    if (0 < iVar4) {
      piVar17 = (int *)0x0;
      piVar18 = piVar17;
      piVar20 = piVar17;
      do {
        uVar15 = 0;
        if ((int)uVar12 < iVar4) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_120 = *(longlong *)
                     ((longlong)piVar20 + (longlong)(this->Sections).AllocatorInstance.Data);
        iVar4 = TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FSHAHash>
                          (&local_98,*(uint *)(local_120 + 0x68),(FSHAHash *)(local_120 + 0x68));
        local_14c = -1;
        if (iVar4 == -1) {
LAB_1419fa3b5:
          if (((local_160.Data <= (FScriptContainerElement *)&local_120) &&
              ((FScriptContainerElement *)&local_120 <
               local_160.Data + (longlong)local_158._4_4_ * 8)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar4 = (int)local_158;
          if ((int)local_158 == local_158._4_4_) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_160,(int *)((longlong)&local_158 + 4));
          }
          local_158 = CONCAT44(local_158._4_4_,iVar4 + 1);
          *(longlong *)(local_160.Data + (longlong)iVar4 * 8) = local_120;
          local_b0 = local_120 + 0x68;
          local_a8 = &local_14c;
          local_14c = iVar4;
          TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FSHAHash_const_&,int_const_&>_>
                    (&local_98,&local_f0,(bool *)&local_b0);
        }
        else {
          lVar8 = (longlong)iVar4 * 0x20 + local_98.Elements._0_8_;
          piVar9 = (int *)(lVar8 + 0x14);
          if (lVar8 == 0) {
            piVar9 = piVar17;
          }
          if (piVar9 == (int *)0x0) goto LAB_1419fa3b5;
          local_14c = *piVar9;
        }
        iVar4 = local_14c;
        uVar15 = 0;
        if ((int)uVar12 < local_140) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar12 = uVar12 + 1;
        piVar20 = piVar20 + 2;
        *(int *)((longlong)piVar18 + local_148.Data) = iVar4;
        piVar18 = piVar18 + 1;
        iVar4 = (this->Sections).ArrayNum;
        param_1 = local_108;
      } while ((int)uVar12 < iVar4);
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FSHAHash,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FSHAHash,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  else {
    uVar12 = 0;
    lVar11 = lVar8;
    if (iVar4 < 1) goto LAB_1419fa51e;
    while( true ) {
      uVar15 = 0;
      if ((int)uVar12 < iVar4) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      iVar4 = (int)uVar13;
      if (uVar15 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = (int)local_158;
      }
      local_118 = *(undefined8 *)((this->Sections).AllocatorInstance.Data + lVar11);
      if ((local_160.Data <= (FScriptContainerElement *)&local_118) &&
         ((FScriptContainerElement *)&local_118 < local_160.Data + (longlong)local_158._4_4_ * 8)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = (int)local_158;
      }
      if (iVar4 == local_158._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_160,(int *)((longlong)&local_158 + 4));
      }
      local_158 = CONCAT44(local_158._4_4_,iVar4 + 1);
      *(undefined8 *)(local_160.Data + (longlong)iVar4 * 8) = local_118;
      uVar15 = 0;
      if ((int)uVar12 < local_140) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(uint *)(local_148.Data + lVar8) = uVar12;
      uVar12 = uVar12 + 1;
      iVar4 = (this->Sections).ArrayNum;
      lVar8 = lVar8 + 4;
      if (iVar4 <= (int)uVar12) break;
      uVar13 = local_158 & 0xffffffff;
      lVar11 = lVar11 + 8;
    }
  }
  uVar13 = local_158 & 0xffffffff;
LAB_1419fa51e:
  local_130.Data = (FScriptContainerElement *)0x0;
  local_128[0] = 0;
  local_128[1] = 0;
  iVar4 = (int)uVar13;
  if (iVar4 < 1) {
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13);
    }
  }
  else {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar4,&local_130,local_128,local_128 + 1);
    memset(local_130.Data + (longlong)iVar5 * 4,0,(longlong)iVar4 << 2);
    uVar13 = local_158 & 0xffffffff;
  }
  uVar10 = 0;
  uVar19 = uVar10;
  uVar21 = uVar10;
  if (0 < (int)uVar13) {
    do {
      uVar15 = (uint)uVar10;
      uVar12 = 0;
      if ((int)uVar15 < (int)uVar13) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = FMemoryImageSection::Flatten
                        (*(FMemoryImageSection **)(local_160.Data + uVar21),param_1);
      uVar12 = 0;
      if ((int)uVar15 < local_128[0]) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar10 = (ulonglong)(uVar15 + 1);
      *(uint *)(local_130.Data + uVar19) = uVar6;
      uVar13 = local_158 & 0xffffffff;
      uVar19 = uVar19 + 4;
      uVar21 = uVar21 + 8;
    } while ((int)(uVar15 + 1) < (int)local_158);
  }
  uVar12 = 0;
  if (0 < (int)uVar13) {
    local_f8 = 0;
    local_100 = 0;
    do {
      lVar11 = local_f8;
      lVar8 = local_100;
      uVar15 = 0;
      if ((int)uVar12 < (int)uVar13) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar8 = *(longlong *)(local_160.Data + lVar8);
      local_110 = *(uint *)(lVar8 + 0x30);
      uVar13 = (ulonglong)(int)local_110;
      puVar16 = *(uint **)(lVar8 + 0x28);
      local_e0 = puVar16 + uVar13 * 3;
      while( true ) {
        puVar2 = local_e0;
        if (*(int *)(lVar8 + 0x30) != (int)uVar13) {
          local_168[0] = (<lambda_1>)0x0;
          `TCheckedPointerIterator<FMemoryImageSection::FSectionPointer_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_168);
        }
        if (puVar16 == puVar2) break;
        uVar15 = 0;
        if ((int)uVar12 < local_128[0]) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar15 = *puVar16;
        iVar4 = *(int *)(local_130.Data + lVar11);
        uVar6 = puVar16[2];
        uVar7 = 0;
        if ((int)uVar15 < local_140) {
          uVar7 = ~uVar15 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar15 = *(uint *)(local_148.Data + (longlong)(int)uVar15 * 4);
        pFVar14 = (local_108->Bytes).AllocatorInstance.Data + (iVar4 + uVar6);
        if ((((*(ulonglong *)pFVar14 & 0xffffffffff000000) != 0) ||
            ((*(ulonglong *)pFVar14 & 1) != 0)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("FrozenPtr->GetOffsetFromThis() == 0 && !FrozenPtr->IsFrozen()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                               ,0x810,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar7 = 0;
        if ((int)uVar15 < local_128[0]) {
          uVar7 = ~uVar15 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar15 = *(uint *)(local_130.Data + (longlong)(int)uVar15 * 4);
        uVar7 = puVar16[1];
        *(ulonglong *)pFVar14 = *(ulonglong *)pFVar14 & 0xfffffe;
        lVar11 = ((ulonglong)uVar15 + (ulonglong)uVar7) - (ulonglong)(iVar4 + uVar6);
        *(ulonglong *)pFVar14 = *(ulonglong *)pFVar14 | lVar11 * 0x1000000 | 1U;
        if (((longlong)*(ulonglong *)pFVar14 >> 0x18 != lVar11) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("FrozenPtr->GetOffsetFromThis() == OffsetFromPointer",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                               ,0x814,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar13 = (ulonglong)local_110;
        puVar16 = puVar16 + 3;
        lVar11 = local_f8;
      }
      local_f8 = lVar11 + 4;
      uVar13 = local_158 & 0xffffffff;
      local_100 = local_100 + 8;
      uVar12 = uVar12 + 1;
      this = local_d8;
      param_1 = local_108;
    } while ((int)uVar12 < (int)local_158);
  }
  param_1->PointerTable = this->PointerTable;
  param_1->TargetLayoutParameters = this->TargetLayoutParameters;
  AlgoImpl::
  IntroSortInternal<FMemoryImageVTablePointer,int,FIdentityFunctor,TDereferenceWrapper<FMemoryImageVTablePointer,TLess<void>_>_>
            ((FMemoryImageVTablePointer *)(param_1->VTables).AllocatorInstance.Data,
             (param_1->VTables).ArrayNum,local_150,(TLess<void> *)&local_150);
  AlgoImpl::
  IntroSortInternal<FMemoryImageNamePointer,int,FIdentityFunctor,TDereferenceWrapper<FMemoryImageNamePointer,TLess<void>_>_>
            ((FMemoryImageNamePointer *)(param_1->ScriptNames).AllocatorInstance.Data,
             (param_1->ScriptNames).ArrayNum,local_14f,(TLess<void> *)&local_14f);
  AlgoImpl::
  IntroSortInternal<FMemoryImageNamePointer,int,FIdentityFunctor,TDereferenceWrapper<FMemoryImageNamePointer,TLess<void>_>_>
            ((FMemoryImageNamePointer *)(param_1->MemoryImageNames).AllocatorInstance.Data,
             (param_1->MemoryImageNames).ArrayNum,local_14e[0],(TLess<void> *)local_14e);
  if (local_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data);
  }
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data);
  }
  if (local_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data);
  }
  return;
}


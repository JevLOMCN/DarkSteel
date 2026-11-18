// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// operator()<int> @ 149905530

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
`FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::operator()<int>(void *this,int param_1)

{
  ushort uVar1;
  FOperationData *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 local_res8 [8];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  undefined2 local_38;
  undefined2 local_36 [3];
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_6_::<lambda_1>_&&>
  local_30;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_13_::<lambda_2>_&&>
  local_28;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_15_::<lambda_3>_&&>
  local_20;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_19_::<lambda_4>_&&>
  local_18;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_23_::<lambda_5>_&&>
  local_10;
  
  uVar1 = *(ushort *)((longlong)this + 8);
  if (uVar1 != 0x80b) {
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        if ((uVar1 >> 0xc & 1) == 0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6689479638751642015>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                             ,0x19f,"false");
          if (!bVar4) {
            return true;
          }
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId410,
                     "FPCGMetadataMathsElement::ExecuteInternal::TernaryOp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                     ,0x19a);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId410);
        }
        local_36[0] = *(undefined2 *)((longlong)this + 8);
        local_10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_23_::<lambda_5>_&&>
                    )local_36;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<int,int,int,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<int>_::__l23::<lambda_5>_&&>
                          (*(FPCGMetadataElementBase **)this,
                           *(FOperationData **)((longlong)this + 0x10),&local_10);
      }
      else {
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId405,
                     "FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                     ,0x195);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId405);
        }
        local_38 = *(undefined2 *)((longlong)this + 8);
        local_18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_19_::<lambda_4>_&&>
                    )&local_38;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<int,int,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<int>_::__l19::<lambda_4>_&&>
                          (*(FPCGMetadataElementBase **)this,
                           *(FOperationData **)((longlong)this + 0x10),&local_18);
      }
    }
    else {
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId390,"FPCGMetadataMathsElement::ExecuteInternal::UnaryOp"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                   ,0x186);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId390);
      }
      pFVar2 = *(FOperationData **)((longlong)this + 0x10);
      if (pFVar2->OutputType == 3) {
        local_28 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_13_::<lambda_2>_&&>
                    )local_res18;
        local_res18[0] = *(undefined2 *)((longlong)this + 8);
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<int,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<int>_::__l13::<lambda_2>_&&>
                          (*(FPCGMetadataElementBase **)this,pFVar2,&local_28);
      }
      else {
        local_20 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_15_::<lambda_3>_&&>
                    )local_res20;
        local_res20[0] = *(undefined2 *)((longlong)this + 8);
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<int,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<int>_::__l15::<lambda_3>_&&>
                          (*(FPCGMetadataElementBase **)this,pFVar2,&local_20);
      }
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar5;
  }
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId381,"FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
               ,0x17d);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
    local_30 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_6_::<lambda_1>_&&>
                )local_res8;
    bVar4 = FPCGMetadataElementBase::
            DoNAryOp<int,int,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<int>_::__l6::<lambda_1>_&&>
                      (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10)
                       ,&local_30);
    FCpuProfilerTrace::OutputEndEvent();
    return bVar4;
  }
  local_30 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_6_::<lambda_1>_&&>
              )local_res8;
  bVar4 = FPCGMetadataElementBase::
          DoNAryOp<int,int,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<int>_::__l6::<lambda_1>_&&>
                    (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10),
                     &local_30);
  return bVar4;
}

// operator()<float> @ 149907300

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
`FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::operator()<float>
          (void *this,float param_1)

{
  ushort uVar1;
  FOperationData *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 local_res8 [8];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  undefined2 local_38;
  undefined2 local_36 [3];
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<float>(float)const_::_6_::<lambda_1>_&&>
  local_30;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<float>(float)const_::_13_::<lambda_2>_&&>
  local_28;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<float>(float)const_::_15_::<lambda_3>_&&>
  local_20;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<float>(float)const_::_19_::<lambda_4>_&&>
  local_18;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<float>(float)const_::_23_::<lambda_5>_&&>
  local_10;
  
  uVar1 = *(ushort *)((longlong)this + 8);
  if (uVar1 != 0x80b) {
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        if ((uVar1 >> 0xc & 1) == 0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6689479638751642015>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                             ,0x19f,"false");
          if (!bVar4) {
            return true;
          }
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId410,
                     "FPCGMetadataMathsElement::ExecuteInternal::TernaryOp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                     ,0x19a);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId410);
        }
        local_36[0] = *(undefined2 *)((longlong)this + 8);
        local_10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<float>(float)const_::_23_::<lambda_5>_&&>
                    )local_36;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<float,float,float,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<float>_::__l23::<lambda_5>_&&>
                          (*(FPCGMetadataElementBase **)this,
                           *(FOperationData **)((longlong)this + 0x10),&local_10);
      }
      else {
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId405,
                     "FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                     ,0x195);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId405);
        }
        local_38 = *(undefined2 *)((longlong)this + 8);
        local_18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<float>(float)const_::_19_::<lambda_4>_&&>
                    )&local_38;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<float,float,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<float>_::__l19::<lambda_4>_&&>
                          (*(FPCGMetadataElementBase **)this,
                           *(FOperationData **)((longlong)this + 0x10),&local_18);
      }
    }
    else {
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId390,"FPCGMetadataMathsElement::ExecuteInternal::UnaryOp"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                   ,0x186);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId390);
      }
      pFVar2 = *(FOperationData **)((longlong)this + 0x10);
      if (pFVar2->OutputType == 3) {
        local_28 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<float>(float)const_::_13_::<lambda_2>_&&>
                    )local_res18;
        local_res18[0] = *(undefined2 *)((longlong)this + 8);
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<float,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<float>_::__l13::<lambda_2>_&&>
                          (*(FPCGMetadataElementBase **)this,pFVar2,&local_28);
      }
      else {
        local_20 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<float>(float)const_::_15_::<lambda_3>_&&>
                    )local_res20;
        local_res20[0] = *(undefined2 *)((longlong)this + 8);
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<float,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<float>_::__l15::<lambda_3>_&&>
                          (*(FPCGMetadataElementBase **)this,pFVar2,&local_20);
      }
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar5;
  }
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId381,"FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
               ,0x17d);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
    local_30 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<float>(float)const_::_6_::<lambda_1>_&&>
                )local_res8;
    bVar4 = FPCGMetadataElementBase::
            DoNAryOp<float,float,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<float>_::__l6::<lambda_1>_&&>
                      (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10)
                       ,&local_30);
    FCpuProfilerTrace::OutputEndEvent();
    return bVar4;
  }
  local_30 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<float>(float)const_::_6_::<lambda_1>_&&>
              )local_res8;
  bVar4 = FPCGMetadataElementBase::
          DoNAryOp<float,float,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<float>_::__l6::<lambda_1>_&&>
                    (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10),
                     &local_30);
  return bVar4;
}

// operator()<double> @ 149909080

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
`FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::operator()<double>
          (void *this,double param_1)

{
  ushort uVar1;
  FOperationData *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 local_res8 [8];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  undefined2 local_38;
  undefined2 local_36 [3];
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<double>(double)const_::_6_::<lambda_1>_&&>
  local_30;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<double>(double)const_::_13_::<lambda_2>_&&>
  local_28;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<double>(double)const_::_15_::<lambda_3>_&&>
  local_20;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<double>(double)const_::_19_::<lambda_4>_&&>
  local_18;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<double>(double)const_::_23_::<lambda_5>_&&>
  local_10;
  
  uVar1 = *(ushort *)((longlong)this + 8);
  if (uVar1 != 0x80b) {
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        if ((uVar1 >> 0xc & 1) == 0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6689479638751642015>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                             ,0x19f,"false");
          if (!bVar4) {
            return true;
          }
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId410,
                     "FPCGMetadataMathsElement::ExecuteInternal::TernaryOp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                     ,0x19a);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId410);
        }
        local_36[0] = *(undefined2 *)((longlong)this + 8);
        local_10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<double>(double)const_::_23_::<lambda_5>_&&>
                    )local_36;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<double,double,double,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<double>_::__l23::<lambda_5>_&&>
                          (*(FPCGMetadataElementBase **)this,
                           *(FOperationData **)((longlong)this + 0x10),&local_10);
      }
      else {
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId405,
                     "FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                     ,0x195);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId405);
        }
        local_38 = *(undefined2 *)((longlong)this + 8);
        local_18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<double>(double)const_::_19_::<lambda_4>_&&>
                    )&local_38;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<double,double,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<double>_::__l19::<lambda_4>_&&>
                          (*(FPCGMetadataElementBase **)this,
                           *(FOperationData **)((longlong)this + 0x10),&local_18);
      }
    }
    else {
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId390,"FPCGMetadataMathsElement::ExecuteInternal::UnaryOp"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                   ,0x186);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId390);
      }
      pFVar2 = *(FOperationData **)((longlong)this + 0x10);
      if (pFVar2->OutputType == 3) {
        local_28 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<double>(double)const_::_13_::<lambda_2>_&&>
                    )local_res18;
        local_res18[0] = *(undefined2 *)((longlong)this + 8);
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<double,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<double>_::__l13::<lambda_2>_&&>
                          (*(FPCGMetadataElementBase **)this,pFVar2,&local_28);
      }
      else {
        local_20 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<double>(double)const_::_15_::<lambda_3>_&&>
                    )local_res20;
        local_res20[0] = *(undefined2 *)((longlong)this + 8);
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<double,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<double>_::__l15::<lambda_3>_&&>
                          (*(FPCGMetadataElementBase **)this,pFVar2,&local_20);
      }
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar5;
  }
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId381,"FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
               ,0x17d);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
    local_30 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<double>(double)const_::_6_::<lambda_1>_&&>
                )local_res8;
    bVar4 = FPCGMetadataElementBase::
            DoNAryOp<double,double,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<double>_::__l6::<lambda_1>_&&>
                      (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10)
                       ,&local_30);
    FCpuProfilerTrace::OutputEndEvent();
    return bVar4;
  }
  local_30 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<double>(double)const_::_6_::<lambda_1>_&&>
              )local_res8;
  bVar4 = FPCGMetadataElementBase::
          DoNAryOp<double,double,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<double>_::__l6::<lambda_1>_&&>
                    (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10),
                     &local_30);
  return bVar4;
}

// operator()<UE::Math::TVector2<double>_> @ 14990f9c0

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
`FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>
          (void *this,TVector2<double> *param_1)

{
  ushort uVar1;
  FOperationData *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 local_res8 [8];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  undefined2 local_38;
  undefined2 local_36 [3];
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_6_::<lambda_1>_&&>
  local_30;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_13_::<lambda_2>_&&>
  local_28;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_15_::<lambda_3>_&&>
  local_20;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_19_::<lambda_4>_&&>
  local_18;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_23_::<lambda_5>_&&>
  local_10;
  
  uVar1 = *(ushort *)((longlong)this + 8);
  if (uVar1 != 0x80b) {
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        if ((uVar1 >> 0xc & 1) == 0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6689479638751642015>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                             ,0x19f,"false");
          if (!bVar4) {
            return true;
          }
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId410,
                     "FPCGMetadataMathsElement::ExecuteInternal::TernaryOp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                     ,0x19a);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId410);
        }
        local_36[0] = *(undefined2 *)((longlong)this + 8);
        local_10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_23_::<lambda_5>_&&>
                    )local_36;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector2<double>,UE::Math::TVector2<double>,UE::Math::TVector2<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l23::<lambda_5>_&&>
                          (*(FPCGMetadataElementBase **)this,
                           *(FOperationData **)((longlong)this + 0x10),&local_10);
      }
      else {
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId405,
                     "FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                     ,0x195);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId405);
        }
        local_38 = *(undefined2 *)((longlong)this + 8);
        local_18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_19_::<lambda_4>_&&>
                    )&local_38;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector2<double>,UE::Math::TVector2<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l19::<lambda_4>_&&>
                          (*(FPCGMetadataElementBase **)this,
                           *(FOperationData **)((longlong)this + 0x10),&local_18);
      }
    }
    else {
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId390,"FPCGMetadataMathsElement::ExecuteInternal::UnaryOp"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                   ,0x186);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId390);
      }
      pFVar2 = *(FOperationData **)((longlong)this + 0x10);
      if (pFVar2->OutputType == 3) {
        local_28 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_13_::<lambda_2>_&&>
                    )local_res18;
        local_res18[0] = *(undefined2 *)((longlong)this + 8);
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector2<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l13::<lambda_2>_&&>
                          (*(FPCGMetadataElementBase **)this,pFVar2,&local_28);
      }
      else {
        local_20 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_15_::<lambda_3>_&&>
                    )local_res20;
        local_res20[0] = *(undefined2 *)((longlong)this + 8);
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector2<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l15::<lambda_3>_&&>
                          (*(FPCGMetadataElementBase **)this,pFVar2,&local_20);
      }
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar5;
  }
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId381,"FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
               ,0x17d);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
    local_30 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_6_::<lambda_1>_&&>
                )local_res8;
    bVar4 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TVector2<double>,UE::Math::TVector2<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l6::<lambda_1>_&&>
                      (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10)
                       ,&local_30);
    FCpuProfilerTrace::OutputEndEvent();
    return bVar4;
  }
  local_30 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_6_::<lambda_1>_&&>
              )local_res8;
  bVar4 = FPCGMetadataElementBase::
          DoNAryOp<UE::Math::TVector2<double>,UE::Math::TVector2<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l6::<lambda_1>_&&>
                    (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10),
                     &local_30);
  return bVar4;
}

// operator()<UE::Math::TVector4<double>_> @ 149911450

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
`FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>
          (void *this,TVector4<double> *param_1)

{
  ushort uVar1;
  FOperationData *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 local_res8 [8];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  undefined2 local_38;
  undefined2 local_36 [3];
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_6_::<lambda_1>_&&>
  local_30;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_13_::<lambda_2>_&&>
  local_28;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_15_::<lambda_3>_&&>
  local_20;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_19_::<lambda_4>_&&>
  local_18;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_23_::<lambda_5>_&&>
  local_10;
  
  uVar1 = *(ushort *)((longlong)this + 8);
  if (uVar1 != 0x80b) {
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        if ((uVar1 >> 0xc & 1) == 0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6689479638751642015>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                             ,0x19f,"false");
          if (!bVar4) {
            return true;
          }
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId410,
                     "FPCGMetadataMathsElement::ExecuteInternal::TernaryOp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                     ,0x19a);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId410);
        }
        local_36[0] = *(undefined2 *)((longlong)this + 8);
        local_10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_23_::<lambda_5>_&&>
                    )local_36;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector4<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l23::<lambda_5>_&&>
                          (*(FPCGMetadataElementBase **)this,
                           *(FOperationData **)((longlong)this + 0x10),&local_10);
      }
      else {
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId405,
                     "FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                     ,0x195);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId405);
        }
        local_38 = *(undefined2 *)((longlong)this + 8);
        local_18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_19_::<lambda_4>_&&>
                    )&local_38;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector4<double>,UE::Math::TVector4<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l19::<lambda_4>_&&>
                          (*(FPCGMetadataElementBase **)this,
                           *(FOperationData **)((longlong)this + 0x10),&local_18);
      }
    }
    else {
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId390,"FPCGMetadataMathsElement::ExecuteInternal::UnaryOp"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                   ,0x186);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId390);
      }
      pFVar2 = *(FOperationData **)((longlong)this + 0x10);
      if (pFVar2->OutputType == 3) {
        local_28 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_13_::<lambda_2>_&&>
                    )local_res18;
        local_res18[0] = *(undefined2 *)((longlong)this + 8);
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector4<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l13::<lambda_2>_&&>
                          (*(FPCGMetadataElementBase **)this,pFVar2,&local_28);
      }
      else {
        local_20 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_15_::<lambda_3>_&&>
                    )local_res20;
        local_res20[0] = *(undefined2 *)((longlong)this + 8);
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector4<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l15::<lambda_3>_&&>
                          (*(FPCGMetadataElementBase **)this,pFVar2,&local_20);
      }
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar5;
  }
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId381,"FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
               ,0x17d);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
    local_30 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_6_::<lambda_1>_&&>
                )local_res8;
    bVar4 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TVector4<double>,UE::Math::TVector4<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l6::<lambda_1>_&&>
                      (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10)
                       ,&local_30);
    FCpuProfilerTrace::OutputEndEvent();
    return bVar4;
  }
  local_30 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_6_::<lambda_1>_&&>
              )local_res8;
  bVar4 = FPCGMetadataElementBase::
          DoNAryOp<UE::Math::TVector4<double>,UE::Math::TVector4<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l6::<lambda_1>_&&>
                    (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10),
                     &local_30);
  return bVar4;
}

// operator()<UE::Math::TVector<double>_> @ 149913040

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
`FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>
          (void *this,TVector<double> *param_1)

{
  ushort uVar1;
  FOperationData *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 local_res8 [8];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  undefined2 local_38;
  undefined2 local_36 [3];
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_6_::<lambda_1>_&&>
  local_30;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_13_::<lambda_2>_&&>
  local_28;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_15_::<lambda_3>_&&>
  local_20;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_19_::<lambda_4>_&&>
  local_18;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_23_::<lambda_5>_&&>
  local_10;
  
  uVar1 = *(ushort *)((longlong)this + 8);
  if (uVar1 != 0x80b) {
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        if ((uVar1 >> 0xc & 1) == 0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6689479638751642015>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                             ,0x19f,"false");
          if (!bVar4) {
            return true;
          }
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId410,
                     "FPCGMetadataMathsElement::ExecuteInternal::TernaryOp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                     ,0x19a);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId410);
        }
        local_36[0] = *(undefined2 *)((longlong)this + 8);
        local_10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_23_::<lambda_5>_&&>
                    )local_36;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l23::<lambda_5>_&&>
                          (*(FPCGMetadataElementBase **)this,
                           *(FOperationData **)((longlong)this + 0x10),&local_10);
      }
      else {
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId405,
                     "FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                     ,0x195);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId405);
        }
        local_38 = *(undefined2 *)((longlong)this + 8);
        local_18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_19_::<lambda_4>_&&>
                    )&local_38;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector<double>,UE::Math::TVector<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l19::<lambda_4>_&&>
                          (*(FPCGMetadataElementBase **)this,
                           *(FOperationData **)((longlong)this + 0x10),&local_18);
      }
    }
    else {
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId390,"FPCGMetadataMathsElement::ExecuteInternal::UnaryOp"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                   ,0x186);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId390);
      }
      pFVar2 = *(FOperationData **)((longlong)this + 0x10);
      if (pFVar2->OutputType == 3) {
        local_28 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_13_::<lambda_2>_&&>
                    )local_res18;
        local_res18[0] = *(undefined2 *)((longlong)this + 8);
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l13::<lambda_2>_&&>
                          (*(FPCGMetadataElementBase **)this,pFVar2,&local_28);
      }
      else {
        local_20 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_15_::<lambda_3>_&&>
                    )local_res20;
        local_res20[0] = *(undefined2 *)((longlong)this + 8);
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l15::<lambda_3>_&&>
                          (*(FPCGMetadataElementBase **)this,pFVar2,&local_20);
      }
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar5;
  }
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId381,"FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
               ,0x17d);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
    local_30 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_6_::<lambda_1>_&&>
                )local_res8;
    bVar4 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TVector<double>,UE::Math::TVector<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l6::<lambda_1>_&&>
                      (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10)
                       ,&local_30);
    FCpuProfilerTrace::OutputEndEvent();
    return bVar4;
  }
  local_30 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_6_::<lambda_1>_&&>
              )local_res8;
  bVar4 = FPCGMetadataElementBase::
          DoNAryOp<UE::Math::TVector<double>,UE::Math::TVector<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l6::<lambda_1>_&&>
                    (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10),
                     &local_30);
  return bVar4;
}

// operator()<FName> @ 149918700

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
`FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::operator()<FName>
          (void *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 local_res8 [16];
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FName>(FName)const_::_6_::<lambda_1>_&&>
  local_res18 [2];
  
  if (*(short *)((longlong)this + 8) != 0x80b) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6689479638751642021>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                       ,0x1a5,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return true;
  }
  if (CpuChannel->Enabled < 0) {
    local_res18[0] =
         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FName>(FName)const_::_6_::<lambda_1>_&&>
          )local_res8;
    bVar2 = FPCGMetadataElementBase::
            DoNAryOp<FName,FName,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<FName>_::__l6::<lambda_1>_&&>
                      (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10)
                       ,local_res18);
    return bVar2;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&::__CpuProfilerEventSpecId381,"FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
             ,0x17d);
  FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
  local_res18[0] =
       (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FName>(FName)const_::_6_::<lambda_1>_&&>
        )local_res8;
  bVar2 = FPCGMetadataElementBase::
          DoNAryOp<FName,FName,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<FName>_::__l6::<lambda_1>_&&>
                    (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10),
                     local_res18);
  FCpuProfilerTrace::OutputEndEvent();
  return bVar2;
}

// operator()<__int64> @ 14991c160

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
`FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::operator()<__int64>
          (void *this,long64 param_1)

{
  ushort uVar1;
  FOperationData *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 local_res8 [8];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  undefined2 local_38;
  undefined2 local_36 [3];
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<__int64>(__int64)const_::_6_::<lambda_1>_&&>
  local_30;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<__int64>(__int64)const_::_13_::<lambda_2>_&&>
  local_28;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<__int64>(__int64)const_::_15_::<lambda_3>_&&>
  local_20;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<__int64>(__int64)const_::_19_::<lambda_4>_&&>
  local_18;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<__int64>(__int64)const_::_23_::<lambda_5>_&&>
  local_10;
  
  uVar1 = *(ushort *)((longlong)this + 8);
  if (uVar1 != 0x80b) {
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        if ((uVar1 >> 0xc & 1) == 0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6689479638751642015>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                             ,0x19f,"false");
          if (!bVar4) {
            return true;
          }
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId410,
                     "FPCGMetadataMathsElement::ExecuteInternal::TernaryOp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                     ,0x19a);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId410);
        }
        local_36[0] = *(undefined2 *)((longlong)this + 8);
        local_10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<__int64>(__int64)const_::_23_::<lambda_5>_&&>
                    )local_36;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<__int64,__int64,__int64,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<__int64>_::__l23::<lambda_5>_&&>
                          (*(FPCGMetadataElementBase **)this,
                           *(FOperationData **)((longlong)this + 0x10),&local_10);
      }
      else {
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId405,
                     "FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                     ,0x195);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId405);
        }
        local_38 = *(undefined2 *)((longlong)this + 8);
        local_18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<__int64>(__int64)const_::_19_::<lambda_4>_&&>
                    )&local_38;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<__int64,__int64,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<__int64>_::__l19::<lambda_4>_&&>
                          (*(FPCGMetadataElementBase **)this,
                           *(FOperationData **)((longlong)this + 0x10),&local_18);
      }
    }
    else {
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId390,"FPCGMetadataMathsElement::ExecuteInternal::UnaryOp"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                   ,0x186);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId390);
      }
      pFVar2 = *(FOperationData **)((longlong)this + 0x10);
      if (pFVar2->OutputType == 3) {
        local_28 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<__int64>(__int64)const_::_13_::<lambda_2>_&&>
                    )local_res18;
        local_res18[0] = *(undefined2 *)((longlong)this + 8);
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<__int64,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<__int64>_::__l13::<lambda_2>_&&>
                          (*(FPCGMetadataElementBase **)this,pFVar2,&local_28);
      }
      else {
        local_20 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<__int64>(__int64)const_::_15_::<lambda_3>_&&>
                    )local_res20;
        local_res20[0] = *(undefined2 *)((longlong)this + 8);
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<__int64,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<__int64>_::__l15::<lambda_3>_&&>
                          (*(FPCGMetadataElementBase **)this,pFVar2,&local_20);
      }
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar5;
  }
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId381,"FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
               ,0x17d);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
    local_30 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<__int64>(__int64)const_::_6_::<lambda_1>_&&>
                )local_res8;
    bVar4 = FPCGMetadataElementBase::
            DoNAryOp<__int64,__int64,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<__int64>_::__l6::<lambda_1>_&&>
                      (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10)
                       ,&local_30);
    FCpuProfilerTrace::OutputEndEvent();
    return bVar4;
  }
  local_30 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<__int64>(__int64)const_::_6_::<lambda_1>_&&>
              )local_res8;
  bVar4 = FPCGMetadataElementBase::
          DoNAryOp<__int64,__int64,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<__int64>_::__l6::<lambda_1>_&&>
                    (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10),
                     &local_30);
  return bVar4;
}

// operator()<bool> @ 14991e010

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
`FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::operator()<bool>(void *this,bool param_1)

{
  ushort uVar1;
  FOperationData *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 local_res8 [8];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  undefined2 local_38;
  undefined2 local_36 [3];
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<bool>(bool)const_::_6_::<lambda_1>_&&>
  local_30;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<bool>(bool)const_::_13_::<lambda_2>_&&>
  local_28;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<bool>(bool)const_::_15_::<lambda_3>_&&>
  local_20;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<bool>(bool)const_::_19_::<lambda_4>_&&>
  local_18;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<bool>(bool)const_::_23_::<lambda_5>_&&>
  local_10;
  
  uVar1 = *(ushort *)((longlong)this + 8);
  if (uVar1 != 0x80b) {
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        if ((uVar1 >> 0xc & 1) == 0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6689479638751642015>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                             ,0x19f,"false");
          if (!bVar4) {
            return true;
          }
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId410,
                     "FPCGMetadataMathsElement::ExecuteInternal::TernaryOp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                     ,0x19a);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId410);
        }
        local_36[0] = *(undefined2 *)((longlong)this + 8);
        local_10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<bool>(bool)const_::_23_::<lambda_5>_&&>
                    )local_36;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<bool,bool,bool,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<bool>_::__l23::<lambda_5>_&&>
                          (*(FPCGMetadataElementBase **)this,
                           *(FOperationData **)((longlong)this + 0x10),&local_10);
      }
      else {
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId405,
                     "FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                     ,0x195);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId405);
        }
        local_38 = *(undefined2 *)((longlong)this + 8);
        local_18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<bool>(bool)const_::_19_::<lambda_4>_&&>
                    )&local_38;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<bool,bool,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<bool>_::__l19::<lambda_4>_&&>
                          (*(FPCGMetadataElementBase **)this,
                           *(FOperationData **)((longlong)this + 0x10),&local_18);
      }
    }
    else {
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId390,"FPCGMetadataMathsElement::ExecuteInternal::UnaryOp"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                   ,0x186);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId390);
      }
      pFVar2 = *(FOperationData **)((longlong)this + 0x10);
      if (pFVar2->OutputType == 3) {
        local_28 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<bool>(bool)const_::_13_::<lambda_2>_&&>
                    )local_res18;
        local_res18[0] = *(undefined2 *)((longlong)this + 8);
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<bool,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<bool>_::__l13::<lambda_2>_&&>
                          (*(FPCGMetadataElementBase **)this,pFVar2,&local_28);
      }
      else {
        local_20 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<bool>(bool)const_::_15_::<lambda_3>_&&>
                    )local_res20;
        local_res20[0] = *(undefined2 *)((longlong)this + 8);
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<bool,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<bool>_::__l15::<lambda_3>_&&>
                          (*(FPCGMetadataElementBase **)this,pFVar2,&local_20);
      }
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar5;
  }
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId381,"FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
               ,0x17d);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
    local_30 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<bool>(bool)const_::_6_::<lambda_1>_&&>
                )local_res8;
    bVar4 = FPCGMetadataElementBase::
            DoNAryOp<bool,bool,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<bool>_::__l6::<lambda_1>_&&>
                      (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10)
                       ,&local_30);
    FCpuProfilerTrace::OutputEndEvent();
    return bVar4;
  }
  local_30 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<bool>(bool)const_::_6_::<lambda_1>_&&>
              )local_res8;
  bVar4 = FPCGMetadataElementBase::
          DoNAryOp<bool,bool,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<bool>_::__l6::<lambda_1>_&&>
                    (*(FPCGMetadataElementBase **)this,*(FOperationData **)((longlong)this + 0x10),
                     &local_30);
  return bVar4;
}

// DoOperation @ 1499e1600

/* WARNING: Removing unreachable block (ram,0x0001499e1bb4) */
/* WARNING: Removing unreachable block (ram,0x0001499e19fd) */
/* WARNING: Removing unreachable block (ram,0x0001499e1c99) */
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

bool __thiscall
FPCGMetadataMathsElement::DoOperation(FPCGMetadataMathsElement *this,FOperationData *param_1)

{
  int iVar1;
  UPCGMetadataSettingsBase *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  bool bVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined1 local_1c6 [6];
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TQuat<double>_>(UE::Math::TQuat<double>)const_::_6_::<lambda_1>_&&>
  local_1c0;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TTransform<double>_>(UE::Math::TTransform<double>)const_::_6_::<lambda_1>_&&>
  local_1b8;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FString>(FString)const_::_6_::<lambda_1>_&&>
  local_1b0;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TRotator<double>_>(UE::Math::TRotator<double>)const_::_6_::<lambda_1>_&&>
  local_1a8;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FSoftObjectPath>(FSoftObjectPath)const_::_6_::<lambda_1>_&&>
  local_1a0;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FSoftClassPath>(FSoftClassPath)const_::_6_::<lambda_1>_&&>
  local_198 [2];
  FPCGMetadataMathsElement *local_188;
  undefined8 uStack_180;
  FOperationData *local_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  FPCGMetadataMathsElement *local_150;
  short sStack_148;
  undefined6 uStack_146;
  FOperationData *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  TVector2<double>_u_0 local_f8;
  TVector<double>_u_0 local_e8;
  TVector4<double>_u_0 local_c8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId371,"FPCGMetadataMathsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
               ,0x173);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId371);
  }
  pUVar2 = param_1->Settings;
  if (pUVar2 == (UPCGMetadataSettingsBase *)0x0) {
    pFVar7 = GetTypeName<UPCGMetadataMathsSettings>(&local_78);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar8);
  }
  pUVar6 = UPCGMetadataMathsSettings::StaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    pFVar7 = GetTypeName<UPCGMetadataMathsSettings>(&local_68);
    pwVar8 = L"";
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    pFVar7 = GetFullNameForCastLogError<UPCGMetadataSettingsBase_const_>(&local_58,pUVar2);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar8,pwVar9);
  }
  sStack_148 = (short)pUVar2[1]._padding_;
  local_150 = this;
  local_140 = param_1;
  if (param_1->OutputType == 1) {
    bVar4 = `FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::operator()<double>
                      (&local_150,0.0);
    goto LAB_1499e1ca9;
  }
  uStack_180 = CONCAT62(uStack_146,sStack_148);
  local_188 = this;
  local_178 = param_1;
  switch(param_1->MostComplexInputType) {
  case 0:
    bVar4 = `FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::operator()<float>
                      (&local_188,0.0);
    break;
  case 1:
    bVar4 = `FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::operator()<double>
                      (&local_188,0.0);
    break;
  case 2:
    bVar4 = `FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::operator()<int>(&local_188,0)
    ;
    break;
  case 3:
    bVar4 = `FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::operator()<__int64>
                      (&local_188,0);
    break;
  case 4:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    bVar4 = `FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::
            operator()<UE::Math::TVector2<double>_>(&local_188,(TVector2<double> *)&local_f8._s_0);
    break;
  case 5:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_98 = 0;
    local_e8._s_0.Z = 0.0;
    bVar4 = `FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::
            operator()<UE::Math::TVector<double>_>(&local_188,(TVector<double> *)&local_e8._s_0);
    break;
  case 6:
    local_c8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_c8._s_0.W = _UNK_15061cbc8;
    local_c8._s_0.X = 0.0;
    local_c8._s_0.Y = 0.0;
    bVar4 = `FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::
            operator()<UE::Math::TVector4<double>_>(&local_188,(TVector4<double> *)&local_c8._s_0);
    break;
  case 7:
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    if (sStack_148 == 0x80b) {
      if (CpuChannel->Enabled < 0) {
        local_1c0 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TQuat<double>_>(UE::Math::TQuat<double>)const_::_6_::<lambda_1>_&&>
                     )local_res10;
        bVar4 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TQuat<double>,UE::Math::TQuat<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TQuat<double>_>_::__l6::<lambda_1>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_1c0);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&::__CpuProfilerEventSpecId381,
                   "FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                   ,0x17d);
        FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
        local_1c0 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TQuat<double>_>(UE::Math::TQuat<double>)const_::_6_::<lambda_1>_&&>
                     )local_res10;
        bVar4 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TQuat<double>,UE::Math::TQuat<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TQuat<double>_>_::__l6::<lambda_1>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_1c0);
        FCpuProfilerTrace::OutputEndEvent();
      }
      break;
    }
    goto LAB_1499e1860;
  case 8:
    if (sStack_148 == 0x80b) {
      if (CpuChannel->Enabled < 0) {
        local_1b8 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TTransform<double>_>(UE::Math::TTransform<double>)const_::_6_::<lambda_1>_&&>
                     )local_res18;
        bVar4 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TTransform<double>,UE::Math::TTransform<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TTransform<double>_>_::__l6::<lambda_1>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_1b8);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&::__CpuProfilerEventSpecId381,
                   "FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                   ,0x17d);
        FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
        local_1b8 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TTransform<double>_>(UE::Math::TTransform<double>)const_::_6_::<lambda_1>_&&>
                     )local_res18;
        bVar4 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TTransform<double>,UE::Math::TTransform<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TTransform<double>_>_::__l6::<lambda_1>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_1b8);
        FCpuProfilerTrace::OutputEndEvent();
      }
      break;
    }
    goto LAB_1499e1860;
  case 9:
    local_160 = 0;
    local_158 = 0;
    if (sStack_148 == 0x80b) {
      if (CpuChannel->Enabled < 0) {
        local_1b0 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FString>(FString)const_::_6_::<lambda_1>_&&>
                     )local_res20;
        bVar4 = FPCGMetadataElementBase::
                DoNAryOp<FString,FString,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<FString>_::__l6::<lambda_1>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_1b0);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&::__CpuProfilerEventSpecId381,
                   "FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                   ,0x17d);
        FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
        local_1b0 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FString>(FString)const_::_6_::<lambda_1>_&&>
                     )local_res20;
        bVar4 = FPCGMetadataElementBase::
                DoNAryOp<FString,FString,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<FString>_::__l6::<lambda_1>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_1b0);
        FCpuProfilerTrace::OutputEndEvent();
      }
      break;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6689479638751642021>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                       ,0x1a5,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    goto LAB_1499e188d;
  case 10:
    bVar4 = `FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::operator()<bool>
                      (&local_188,false);
    break;
  case 0xb:
    local_80 = 0;
    local_90 = 0;
    uStack_88 = 0;
    if (sStack_148 == 0x80b) {
      if (CpuChannel->Enabled < 0) {
        local_1a8 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TRotator<double>_>(UE::Math::TRotator<double>)const_::_6_::<lambda_1>_&&>
                     )&local_1c8;
        bVar4 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TRotator<double>,UE::Math::TRotator<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TRotator<double>_>_::__l6::<lambda_1>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_1a8);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&::__CpuProfilerEventSpecId381,
                   "FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                   ,0x17d);
        FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
        local_1a8 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TRotator<double>_>(UE::Math::TRotator<double>)const_::_6_::<lambda_1>_&&>
                     )&local_1c8;
        bVar4 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TRotator<double>,UE::Math::TRotator<double>,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TRotator<double>_>_::__l6::<lambda_1>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_1a8);
        FCpuProfilerTrace::OutputEndEvent();
      }
      break;
    }
LAB_1499e1860:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6689479638751642021>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                       ,0x1a5,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    goto LAB_1499e188d;
  case 0xc:
    local_168 = 0;
    bVar4 = `FPCGMetadataMathsElement::DoOperation'::__l2::<lambda_1>::operator()<FName>
                      (&local_188,(FName)0x0);
    break;
  case 0xd:
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    local_120 = 0;
    if (sStack_148 == 0x80b) {
      if (CpuChannel->Enabled < 0) {
        local_1a0 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FSoftObjectPath>(FSoftObjectPath)const_::_6_::<lambda_1>_&&>
                     )&local_1c7;
        bVar4 = FPCGMetadataElementBase::
                DoNAryOp<FSoftObjectPath,FSoftObjectPath,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<FSoftObjectPath>_::__l6::<lambda_1>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_1a0);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&::__CpuProfilerEventSpecId381,
                   "FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                   ,0x17d);
        FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
        local_1a0 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FSoftObjectPath>(FSoftObjectPath)const_::_6_::<lambda_1>_&&>
                     )&local_1c7;
        bVar4 = FPCGMetadataElementBase::
                DoNAryOp<FSoftObjectPath,FSoftObjectPath,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<FSoftObjectPath>_::__l6::<lambda_1>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_1a0);
        FCpuProfilerTrace::OutputEndEvent();
      }
      break;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6689479638751642021>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                       ,0x1a5,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    goto LAB_1499e188d;
  case 0xe:
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    if (sStack_148 == 0x80b) {
      if (CpuChannel->Enabled < 0) {
        local_198[0] = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FSoftClassPath>(FSoftClassPath)const_::_6_::<lambda_1>_&&>
                        )local_1c6;
        bVar4 = FPCGMetadataElementBase::
                DoNAryOp<FSoftClassPath,FSoftClassPath,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<FSoftClassPath>_::__l6::<lambda_1>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,local_198);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&::__CpuProfilerEventSpecId381,
                   "FPCGMetadataMathsElement::ExecuteInternal::BinaryOp",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                   ,0x17d);
        FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
        local_198[0] = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataMathsElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FSoftClassPath>(FSoftClassPath)const_::_6_::<lambda_1>_&&>
                        )local_1c6;
        bVar4 = FPCGMetadataElementBase::
                DoNAryOp<FSoftClassPath,FSoftClassPath,__FPCGMetadataMathsElement::DoOperation_::__l2::<lambda_1>::operator()<FSoftClassPath>_::__l6::<lambda_1>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,local_198);
        FCpuProfilerTrace::OutputEndEvent();
      }
      break;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6689479638751642021>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMathsOpElement.cpp"
                       ,0x1a5,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
LAB_1499e188d:
    bVar4 = true;
    break;
  default:
    bVar4 = false;
  }
LAB_1499e1ca9:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

